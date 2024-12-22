// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_rb10_apple:msg/ArucoPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__BUILDER_HPP_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_rb10_apple/msg/detail/aruco_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_rb10_apple
{

namespace msg
{

namespace builder
{

class Init_ArucoPose_rz
{
public:
  explicit Init_ArucoPose_rz(::interface_rb10_apple::msg::ArucoPose & msg)
  : msg_(msg)
  {}
  ::interface_rb10_apple::msg::ArucoPose rz(::interface_rb10_apple::msg::ArucoPose::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::msg::ArucoPose msg_;
};

class Init_ArucoPose_ry
{
public:
  explicit Init_ArucoPose_ry(::interface_rb10_apple::msg::ArucoPose & msg)
  : msg_(msg)
  {}
  Init_ArucoPose_rz ry(::interface_rb10_apple::msg::ArucoPose::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_ArucoPose_rz(msg_);
  }

private:
  ::interface_rb10_apple::msg::ArucoPose msg_;
};

class Init_ArucoPose_rx
{
public:
  explicit Init_ArucoPose_rx(::interface_rb10_apple::msg::ArucoPose & msg)
  : msg_(msg)
  {}
  Init_ArucoPose_ry rx(::interface_rb10_apple::msg::ArucoPose::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_ArucoPose_ry(msg_);
  }

private:
  ::interface_rb10_apple::msg::ArucoPose msg_;
};

class Init_ArucoPose_z
{
public:
  explicit Init_ArucoPose_z(::interface_rb10_apple::msg::ArucoPose & msg)
  : msg_(msg)
  {}
  Init_ArucoPose_rx z(::interface_rb10_apple::msg::ArucoPose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ArucoPose_rx(msg_);
  }

private:
  ::interface_rb10_apple::msg::ArucoPose msg_;
};

class Init_ArucoPose_y
{
public:
  explicit Init_ArucoPose_y(::interface_rb10_apple::msg::ArucoPose & msg)
  : msg_(msg)
  {}
  Init_ArucoPose_z y(::interface_rb10_apple::msg::ArucoPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ArucoPose_z(msg_);
  }

private:
  ::interface_rb10_apple::msg::ArucoPose msg_;
};

class Init_ArucoPose_x
{
public:
  Init_ArucoPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoPose_y x(::interface_rb10_apple::msg::ArucoPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ArucoPose_y(msg_);
  }

private:
  ::interface_rb10_apple::msg::ArucoPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::msg::ArucoPose>()
{
  return interface_rb10_apple::msg::builder::Init_ArucoPose_x();
}

}  // namespace interface_rb10_apple

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__BUILDER_HPP_
