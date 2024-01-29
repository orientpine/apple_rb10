// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_rb10_apple:msg/RobotTcpPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_TCP_POSE__BUILDER_HPP_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_TCP_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_rb10_apple/msg/detail/robot_tcp_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_rb10_apple
{

namespace msg
{

namespace builder
{

class Init_RobotTcpPose_rz
{
public:
  explicit Init_RobotTcpPose_rz(::interface_rb10_apple::msg::RobotTcpPose & msg)
  : msg_(msg)
  {}
  ::interface_rb10_apple::msg::RobotTcpPose rz(::interface_rb10_apple::msg::RobotTcpPose::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotTcpPose msg_;
};

class Init_RobotTcpPose_ry
{
public:
  explicit Init_RobotTcpPose_ry(::interface_rb10_apple::msg::RobotTcpPose & msg)
  : msg_(msg)
  {}
  Init_RobotTcpPose_rz ry(::interface_rb10_apple::msg::RobotTcpPose::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_RobotTcpPose_rz(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotTcpPose msg_;
};

class Init_RobotTcpPose_rx
{
public:
  explicit Init_RobotTcpPose_rx(::interface_rb10_apple::msg::RobotTcpPose & msg)
  : msg_(msg)
  {}
  Init_RobotTcpPose_ry rx(::interface_rb10_apple::msg::RobotTcpPose::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_RobotTcpPose_ry(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotTcpPose msg_;
};

class Init_RobotTcpPose_z
{
public:
  explicit Init_RobotTcpPose_z(::interface_rb10_apple::msg::RobotTcpPose & msg)
  : msg_(msg)
  {}
  Init_RobotTcpPose_rx z(::interface_rb10_apple::msg::RobotTcpPose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_RobotTcpPose_rx(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotTcpPose msg_;
};

class Init_RobotTcpPose_y
{
public:
  explicit Init_RobotTcpPose_y(::interface_rb10_apple::msg::RobotTcpPose & msg)
  : msg_(msg)
  {}
  Init_RobotTcpPose_z y(::interface_rb10_apple::msg::RobotTcpPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RobotTcpPose_z(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotTcpPose msg_;
};

class Init_RobotTcpPose_x
{
public:
  Init_RobotTcpPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTcpPose_y x(::interface_rb10_apple::msg::RobotTcpPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotTcpPose_y(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotTcpPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::msg::RobotTcpPose>()
{
  return interface_rb10_apple::msg::builder::Init_RobotTcpPose_x();
}

}  // namespace interface_rb10_apple

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_TCP_POSE__BUILDER_HPP_
