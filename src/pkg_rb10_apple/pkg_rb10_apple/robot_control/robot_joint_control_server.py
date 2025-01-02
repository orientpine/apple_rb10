import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from interface_rb10_apple.action import RobotJointControl
from .cobot import *


class RobotJointControlServer(Node):
    def __init__(self):
        super().__init__("robot_joint_control_server")
        self.action_server = ActionServer(
            self, RobotJointControl, "robot_joint_control", self.execute_callback
        )
        self.cobot_initialization()

        # # Add timer to observe COBOT_STATUS
        # self.timer = self.create_timer(0.1, self.observe_cobot_status)

    def cobot_initialization(self):
        ip = "10.0.2.7"  # 로봇 IP
        ToCB(ip)
        CobotInit()
        SendCOMMAND("pgmode real", CMD_TYPE.NONMOVE)  # 로봇을 real mode로 설정

    def execute_callback(self, goal_handle):
        spd = 30.0
        acc = 20.0
        self.get_logger().info("Executing goal...")
        feedback = RobotJointControl.Feedback()

        # 요청받은 joint 값 가져오기
        joint_values = [
            goal_handle.request.j0,
            goal_handle.request.j1,
            goal_handle.request.j2,
            goal_handle.request.j3,
            goal_handle.request.j4,
            goal_handle.request.j5,
        ]

        # move_j 명령 생성 및 실행
        try:
            feedback.feedback = "Generating move_j command."
            goal_handle.publish_feedback(feedback)

            joint_str = ", ".join(f"{val:.2f}" for val in joint_values)
            script_pose = f"move_j(jnt[{joint_str}], {spd}, {acc})"
            self.get_logger().info(f"Executing script: {script_pose}")
            ManualScript(script_pose)  # 명령 실행

            feedback.feedback = "Command executed successfully."
            goal_handle.publish_feedback(feedback)

            result = RobotJointControl.Result()
            result.success = True
            result.message = f"Moved to joint pose: {joint_str}"
            goal_handle.succeed()
            return result

        except Exception as e:
            self.get_logger().error(f"Error executing script: {e}")
            feedback.feedback = "Failed to execute command."
            goal_handle.publish_feedback(feedback)

            result = RobotJointControl.Result()
            result.success = False
            result.message = "Failed to execute script."
            goal_handle.abort()
            return result

    def observe_cobot_status(self):
        status = GetCurrentCobotStatus()
        self.get_logger().info(f"Current COBOT_STATUS: {status}")
        return status


def main(args=None):
    rclpy.init(args=args)
    robot_joint_control_server = RobotJointControlServer()
    rclpy.spin(robot_joint_control_server)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
