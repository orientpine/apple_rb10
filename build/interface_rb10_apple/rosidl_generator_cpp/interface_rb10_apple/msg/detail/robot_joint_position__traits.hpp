// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_rb10_apple:msg/RobotJointPosition.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__TRAITS_HPP_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_rb10_apple/msg/detail/robot_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_rb10_apple
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotJointPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: j0
  {
    out << "j0: ";
    rosidl_generator_traits::value_to_yaml(msg.j0, out);
    out << ", ";
  }

  // member: j1
  {
    out << "j1: ";
    rosidl_generator_traits::value_to_yaml(msg.j1, out);
    out << ", ";
  }

  // member: j2
  {
    out << "j2: ";
    rosidl_generator_traits::value_to_yaml(msg.j2, out);
    out << ", ";
  }

  // member: j3
  {
    out << "j3: ";
    rosidl_generator_traits::value_to_yaml(msg.j3, out);
    out << ", ";
  }

  // member: j4
  {
    out << "j4: ";
    rosidl_generator_traits::value_to_yaml(msg.j4, out);
    out << ", ";
  }

  // member: j5
  {
    out << "j5: ";
    rosidl_generator_traits::value_to_yaml(msg.j5, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotJointPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: j0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j0: ";
    rosidl_generator_traits::value_to_yaml(msg.j0, out);
    out << "\n";
  }

  // member: j1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1: ";
    rosidl_generator_traits::value_to_yaml(msg.j1, out);
    out << "\n";
  }

  // member: j2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j2: ";
    rosidl_generator_traits::value_to_yaml(msg.j2, out);
    out << "\n";
  }

  // member: j3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j3: ";
    rosidl_generator_traits::value_to_yaml(msg.j3, out);
    out << "\n";
  }

  // member: j4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j4: ";
    rosidl_generator_traits::value_to_yaml(msg.j4, out);
    out << "\n";
  }

  // member: j5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j5: ";
    rosidl_generator_traits::value_to_yaml(msg.j5, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotJointPosition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::msg::RobotJointPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::msg::RobotJointPosition & msg)
{
  return interface_rb10_apple::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::msg::RobotJointPosition>()
{
  return "interface_rb10_apple::msg::RobotJointPosition";
}

template<>
inline const char * name<interface_rb10_apple::msg::RobotJointPosition>()
{
  return "interface_rb10_apple/msg/RobotJointPosition";
}

template<>
struct has_fixed_size<interface_rb10_apple::msg::RobotJointPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_rb10_apple::msg::RobotJointPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_rb10_apple::msg::RobotJointPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__TRAITS_HPP_
