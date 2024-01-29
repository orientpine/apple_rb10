import rclpy
from rclpy.node import Node
from interface_rb10_apple.msg import RobotJointPosition, RobotTcpPose
from .cobot import *


class RobotInfoPublisher(Node):
    def __init__(self):
        super().__init__("robot_info_publisher")
        self.joint_publisher = self.create_publisher(
            RobotJointPosition, "robot_joint_position", 10
        )
        self.pose_publisher = self.create_publisher(RobotTcpPose, "robot_tcp_pose", 10)
        self.timer = self.create_timer(1.0, self.publish_robot_info)
        self.cobot_initialization()

    def cobot_initialization(self):
        ip = "10.0.2.7"  # 로봇 IP
        ToCB(ip)
        CobotInit()
        SendCOMMAND("pgmode real", CMD_TYPE.NONMOVE)  # 로봇을 real mode로 만듦

    def publish_robot_info(self):
        robot_info = GetCurreJP()
        joint_data, pose_data = robot_info

        # robot_joint_position 메시지 생성 및 충전
        joint_position_msg = RobotJointPosition()
        joint_position_msg.j0 = joint_data.j0
        joint_position_msg.j1 = joint_data.j1
        joint_position_msg.j2 = joint_data.j2
        joint_position_msg.j3 = joint_data.j3
        joint_position_msg.j4 = joint_data.j4
        joint_position_msg.j5 = joint_data.j5

        # robot_tcp_pose 메시지 생성 및 충전
        tcp_pose_msg = RobotTcpPose()
        tcp_pose_msg.x = pose_data.x
        tcp_pose_msg.y = pose_data.y
        tcp_pose_msg.z = pose_data.z
        tcp_pose_msg.rx = pose_data.rx
        tcp_pose_msg.ry = pose_data.ry
        tcp_pose_msg.rz = pose_data.rz

        # 토픽 송신
        self.joint_publisher.publish(joint_position_msg)
        self.pose_publisher.publish(tcp_pose_msg)


def main(args=None):
    rclpy.init(args=args)
    robot_info_publisher = RobotInfoPublisher()
    rclpy.spin(robot_info_publisher)
    robot_info_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
