// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from interface_rb10_apple:msg/ArucoPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "interface_rb10_apple/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "interface_rb10_apple/msg/detail/aruco_pose__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace interface_rb10_apple
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_rb10_apple
cdr_serialize(
  const interface_rb10_apple::msg::ArucoPose & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_rb10_apple
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interface_rb10_apple::msg::ArucoPose & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_rb10_apple
get_serialized_size(
  const interface_rb10_apple::msg::ArucoPose & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_rb10_apple
max_serialized_size_ArucoPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interface_rb10_apple

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_rb10_apple
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, msg, ArucoPose)();

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
