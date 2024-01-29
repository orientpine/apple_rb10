// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_rb10_apple:msg/RobotJointPosition.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__BUILDER_HPP_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_rb10_apple/msg/detail/robot_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_rb10_apple
{

namespace msg
{

namespace builder
{

class Init_RobotJointPosition_j5
{
public:
  explicit Init_RobotJointPosition_j5(::interface_rb10_apple::msg::RobotJointPosition & msg)
  : msg_(msg)
  {}
  ::interface_rb10_apple::msg::RobotJointPosition j5(::interface_rb10_apple::msg::RobotJointPosition::_j5_type arg)
  {
    msg_.j5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotJointPosition msg_;
};

class Init_RobotJointPosition_j4
{
public:
  explicit Init_RobotJointPosition_j4(::interface_rb10_apple::msg::RobotJointPosition & msg)
  : msg_(msg)
  {}
  Init_RobotJointPosition_j5 j4(::interface_rb10_apple::msg::RobotJointPosition::_j4_type arg)
  {
    msg_.j4 = std::move(arg);
    return Init_RobotJointPosition_j5(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotJointPosition msg_;
};

class Init_RobotJointPosition_j3
{
public:
  explicit Init_RobotJointPosition_j3(::interface_rb10_apple::msg::RobotJointPosition & msg)
  : msg_(msg)
  {}
  Init_RobotJointPosition_j4 j3(::interface_rb10_apple::msg::RobotJointPosition::_j3_type arg)
  {
    msg_.j3 = std::move(arg);
    return Init_RobotJointPosition_j4(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotJointPosition msg_;
};

class Init_RobotJointPosition_j2
{
public:
  explicit Init_RobotJointPosition_j2(::interface_rb10_apple::msg::RobotJointPosition & msg)
  : msg_(msg)
  {}
  Init_RobotJointPosition_j3 j2(::interface_rb10_apple::msg::RobotJointPosition::_j2_type arg)
  {
    msg_.j2 = std::move(arg);
    return Init_RobotJointPosition_j3(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotJointPosition msg_;
};

class Init_RobotJointPosition_j1
{
public:
  explicit Init_RobotJointPosition_j1(::interface_rb10_apple::msg::RobotJointPosition & msg)
  : msg_(msg)
  {}
  Init_RobotJointPosition_j2 j1(::interface_rb10_apple::msg::RobotJointPosition::_j1_type arg)
  {
    msg_.j1 = std::move(arg);
    return Init_RobotJointPosition_j2(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotJointPosition msg_;
};

class Init_RobotJointPosition_j0
{
public:
  Init_RobotJointPosition_j0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotJointPosition_j1 j0(::interface_rb10_apple::msg::RobotJointPosition::_j0_type arg)
  {
    msg_.j0 = std::move(arg);
    return Init_RobotJointPosition_j1(msg_);
  }

private:
  ::interface_rb10_apple::msg::RobotJointPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::msg::RobotJointPosition>()
{
  return interface_rb10_apple::msg::builder::Init_RobotJointPosition_j0();
}

}  // namespace interface_rb10_apple

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__BUILDER_HPP_
