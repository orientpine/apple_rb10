import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from interface_rb10_apple.action import RobotTrackingControl
from interface_rb10_apple.msg import RobotTcpPose, ArucoPose
from .cobot import *
import math


class ArucoTrackingServer(Node):
    def __init__(self):
        super().__init__("aruco_tracking_server")

        self._action_server = ActionServer(
            self, RobotTrackingControl, "aruco_tracking", self.execute_callback
        )

        self.robot_tcp_pose_subscription = self.create_subscription(
            RobotTcpPose, "robot_tcp_pose", self.robot_tcp_pose_callback, 10
        )

        self.aruco_pose_subscription = self.create_subscription(
            ArucoPose, "aruco_pose", self.aruco_pose_callback, 10
        )

        self.current_tcp_pose = RobotTcpPose()
        self.current_aruco_pose = ArucoPose()
        self.threshold_position = 0.01  # 위치 오차 허용값 (m)
        self.threshold_orientation = 1.0  # 회전 오차 허용값 (deg)
        self.desired_offset = {
            "x": 0.0,
            "y": 0.0,
            "z": 0.1,
            "rx": 0.0,
            "ry": 0.0,
            "rz": 90.0,
        }  # 목표 상대 위치 및 회전값

    def robot_tcp_pose_callback(self, msg):
        self.current_tcp_pose = msg

    def aruco_pose_callback(self, msg):
        self.current_aruco_pose = msg

    def observe_cobot_status(self):
        status = GetCurrentCobotStatus()
        self.get_logger().info(f"Current COBOT_STATUS: {status}")
        return status

    def execute_callback(self, goal_handle):
        while True:
            self.robot_status = self.observe_cobot_status()

            if self.robot_status == COBOT_STATUS.IDLE:
                break

            self.get_logger().info("Waiting for robot to become IDLE...")
            rclpy.spin_once(self, timeout_sec=1.0)  # 1초 대기 후 다시 상태 확인

        feedback_msg = RobotTrackingControl.Feedback()
        feedback_msg.feedback = "Visual servoing in progress."
        goal_handle.publish_feedback(feedback_msg)

        success = self.perform_visual_servoing()

        result = RobotTrackingControl.Result()
        if success:
            result.success = True
            result.message = "Aruco marker successfully tracked."
            goal_handle.succeed()
        else:
            result.success = False
            result.message = "Failed to track Aruco marker."
            goal_handle.abort()

        return result

    def perform_visual_servoing(self):
        move_attempts = 0  # move_robot_to_correction 호출 횟수 추적
        max_attempts = 10  # 최대 호출 횟수 제한

        while True:
            position_error, orientation_error = self.calculate_errors()

            if self.is_within_threshold(position_error, orientation_error):
                return True

            if move_attempts >= max_attempts:
                self.get_logger().warn("Exceeded maximum move attempts.")
                return False

            self.move_robot_to_correction(position_error, orientation_error)
            move_attempts += 1

    def calculate_errors(self):
        dx = self.current_aruco_pose.x - self.desired_offset["x"]
        dy = self.current_aruco_pose.y - self.desired_offset["y"]
        dz = self.current_aruco_pose.z - self.desired_offset["z"]

        drx = self.current_aruco_pose.rx - self.desired_offset["rx"]
        dry = self.current_aruco_pose.ry - self.desired_offset["ry"]
        drz = self.current_aruco_pose.rz - self.desired_offset["rz"]

        position_error = math.sqrt(dx**2 + dy**2 + dz**2)
        orientation_error = math.sqrt(drx**2 + dry**2 + drz**2)

        return position_error, orientation_error

    def is_within_threshold(self, position_error, orientation_error):
        return (
            position_error < self.threshold_position
            and orientation_error < self.threshold_orientation
        )

    def move_robot_to_correction(self, position_error, orientation_error):
        spd = 0.5  # 속도
        acc = 0.1  # 가속도

        correction_x = self.current_tcp_pose.x - position_error
        correction_y = self.current_tcp_pose.y - position_error
        correction_z = self.current_tcp_pose.z - position_error

        correction_rx = self.current_tcp_pose.rx - orientation_error
        correction_ry = self.current_tcp_pose.ry - orientation_error
        correction_rz = self.current_tcp_pose.rz - orientation_error

        script_tcp = (
            f"movetcp {spd}, {acc}, {correction_x}, {correction_y}, "
            f"{correction_z}, {correction_rx}, {correction_ry}, {correction_rz}"
        )
        ManualScript(script_tcp)


def main(args=None):
    rclpy.init(args=args)
    aruco_tracking_server = ArucoTrackingServer()
    rclpy.spin(aruco_tracking_server)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
