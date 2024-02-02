import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from interface_rb10_apple.action import RobotModeControl
from .cobot import *


class RobotModeControlServer(Node):
    def __init__(self):
        super().__init__("robot_mode_control_server")
        self.action_server = ActionServer(
            self, RobotModeControl, "robot_mode_control", self.execute_callback
        )
        self.script_poses = {
            0: "move_j(jnt[180.0, -80.0,160.0,-160.0,0.0,0.0],30.0,20.0)",  # 이동자세
            1: "move_j(jnt[277.45,-34.12,133.45,-99.29,82.45,-0.32],30.0,20.0)",  # 탐지자세
            2: "move_j(jnt[271.98, 28.95,73.34,-102.28,87.90,-0.28],30.0,20.0)",  # 정밀자세
        }
        self.cobot_initialization()

    def cobot_initialization(self):
        ip = "10.0.2.7"  # 로봇 IP
        ToCB(ip)
        CobotInit()
        SendCOMMAND("pgmode real", CMD_TYPE.NONMOVE)  # 로봇을 real mode로 만듦

    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing goal...")
        mode = goal_handle.request.mode
        script_pose = self.script_poses.get(mode, None)
        if script_pose:
            ManualScript(script_pose)
            result = RobotModeControl.Result()
            result.success = True
            result.message = f"Moved to script_pose_{mode}"
            goal_handle.succeed()
            return result
        else:
            return result


def main(args=None):
    rclpy.init(args=args)
    robot_mode_control_server = RobotModeControlServer()
    rclpy.spin(robot_mode_control_server)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
