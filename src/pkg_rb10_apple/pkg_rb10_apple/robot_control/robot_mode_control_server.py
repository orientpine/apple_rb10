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
            0: "move_j(jnt[180.0, -70.0, 160.0, -90.0, 180.0, 0.0], 30.0, 20.0)",  # 이동자세 좌
            1: "move_j(jnt[180.0, -70.0, 160.0, -90.0,  90.0, 0.0], 30.0, 20.0)",  # 이동자세 정면
            2: "move_j(jnt[180.0, -70.0, 160.0, -90.0,   0.0, 0.0], 30.0, 20.0)",  # 이동자세 우
            3: "move_j(jnt[47.0, 13.0, -143.0, -230.0, -47.0, 0.0], 30.0, 20.0)",  # 판지자세 좌
            4: "move_j(jnt[89.98, 12.02, 121.01, -133.02, 90.09, 0.0],30.0,20.0)",  # 판지자세 우
        }
        self.cobot_initialization()

        # # Add timer to observe COBOT_STATUS
        # self.timer = self.create_timer(0.1, self.observe_cobot_status)

    def cobot_initialization(self):
        ip = "10.0.2.7"  # 로밋 IP
        ToCB(ip)
        CobotInit()
        SendCOMMAND("pgmode real", CMD_TYPE.NONMOVE)  # 로밋을 real mode로 만들무

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
            result = RobotModeControl.Result()
            result.success = False
            result.message = "Invalid mode"
            goal_handle.abort()
            return result

    def observe_cobot_status(self):
        status = GetCurrentCobotStatus()
        self.get_logger().info(f"Current COBOT_STATUS: {status}")


def main(args=None):
    rclpy.init(args=args)
    robot_mode_control_server = RobotModeControlServer()
    rclpy.spin(robot_mode_control_server)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
