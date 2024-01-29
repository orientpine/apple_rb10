// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_rb10_apple:srv/RobotConnectControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__BUILDER_HPP_
#define INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_rb10_apple/srv/detail/robot_connect_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_rb10_apple
{

namespace srv
{

namespace builder
{

class Init_RobotConnectControl_Request_connect
{
public:
  Init_RobotConnectControl_Request_connect()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_rb10_apple::srv::RobotConnectControl_Request connect(::interface_rb10_apple::srv::RobotConnectControl_Request::_connect_type arg)
  {
    msg_.connect = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::srv::RobotConnectControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::srv::RobotConnectControl_Request>()
{
  return interface_rb10_apple::srv::builder::Init_RobotConnectControl_Request_connect();
}

}  // namespace interface_rb10_apple


namespace interface_rb10_apple
{

namespace srv
{

namespace builder
{

class Init_RobotConnectControl_Response_is_power_on
{
public:
  Init_RobotConnectControl_Response_is_power_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_rb10_apple::srv::RobotConnectControl_Response is_power_on(::interface_rb10_apple::srv::RobotConnectControl_Response::_is_power_on_type arg)
  {
    msg_.is_power_on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::srv::RobotConnectControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::srv::RobotConnectControl_Response>()
{
  return interface_rb10_apple::srv::builder::Init_RobotConnectControl_Response_is_power_on();
}

}  // namespace interface_rb10_apple

#endif  // INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__BUILDER_HPP_
