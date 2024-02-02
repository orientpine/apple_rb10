import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from interface_rb10_apple.action import RobotTcpControl
from interface_rb10_apple.msg import RobotTcpPose
from .cobot import *


class RobotTcpControlServer(Node):
    def __init__(self):
        super().__init__("robot_tcp_control_server")
        self._action_server = ActionServer(
            self, RobotTcpControl, "robot_tcp_control", self.execute_callback
        )
        self.subscription = self.create_subscription(
            RobotTcpPose, "robot_tcp_pose", self.pose_callback, 10
        )
        self.current_pose = RobotTcpPose()
        self.cobot_initialization()

    def cobot_initialization(self):
        ip = "10.0.2.7"  # 로봇 IP
        ToCB(ip)
        CobotInit()
        SendCOMMAND("pgmode real", CMD_TYPE.NONMOVE)  # 로봇을 real mode로 만듦

    def pose_callback(self, msg):
        self.current_pose.x = msg.x
        self.current_pose.y = msg.y
        self.current_pose.z = msg.z
        self.current_pose.rx = msg.rx
        self.current_pose.ry = msg.ry
        self.current_pose.rz = msg.rz

    def execute_callback(self, goal_handle):
        feedback_msg = RobotTcpControl.Feedback()
        feedback_msg.feedback = "Processing"
        goal_handle.publish_feedback(feedback_msg)

        # 목표 위치 계산
        new_x = self.current_pose.x + goal_handle.request.x
        new_y = self.current_pose.y + goal_handle.request.y
        new_z = self.current_pose.z + goal_handle.request.z
        new_rx = self.current_pose.rx + goal_handle.request.rx
        new_ry = self.current_pose.ry + goal_handle.request.ry
        new_rz = self.current_pose.rz + goal_handle.request.rz

        spd = 0.5  # 속도, 0~1 사이 실수형 상수, -1일경우 시스템에 설정된 기본 속도
        acc = 0.1  # 가속도, 0~1 사이 실수형 상수, -1일경우 시스템에 설정된 기본 가속도
        # 여기에 로봇 제어 코드 추가 (예: 새 위치로 이동하는 로직)
        script_tcp = f"movetcp {spd}, {acc}, {new_x}, {new_y}, {new_z}, {new_rx}, {new_ry}, {new_rz}"
        ManualScript(script_tcp)
        # 액션 결과 반환
        result = RobotTcpControl.Result()
        result.success = True
        result.message = "Action completed successfully"
        goal_handle.succeed()
        return result


def main(args=None):
    rclpy.init(args=args)
    robot_tcp_control_server = RobotTcpControlServer()
    rclpy.spin(robot_tcp_control_server)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
