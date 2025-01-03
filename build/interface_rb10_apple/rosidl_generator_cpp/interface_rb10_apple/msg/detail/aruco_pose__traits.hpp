// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_rb10_apple:msg/ArucoPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__TRAITS_HPP_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_rb10_apple/msg/detail/aruco_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_rb10_apple
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArucoPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: rx
  {
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << ", ";
  }

  // member: ry
  {
    out << "ry: ";
    rosidl_generator_traits::value_to_yaml(msg.ry, out);
    out << ", ";
  }

  // member: rz
  {
    out << "rz: ";
    rosidl_generator_traits::value_to_yaml(msg.rz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArucoPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << "\n";
  }

  // member: ry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ry: ";
    rosidl_generator_traits::value_to_yaml(msg.ry, out);
    out << "\n";
  }

  // member: rz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rz: ";
    rosidl_generator_traits::value_to_yaml(msg.rz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArucoPose & msg, bool use_flow_style = false)
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
  const interface_rb10_apple::msg::ArucoPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::msg::ArucoPose & msg)
{
  return interface_rb10_apple::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::msg::ArucoPose>()
{
  return "interface_rb10_apple::msg::ArucoPose";
}

template<>
inline const char * name<interface_rb10_apple::msg::ArucoPose>()
{
  return "interface_rb10_apple/msg/ArucoPose";
}

template<>
struct has_fixed_size<interface_rb10_apple::msg::ArucoPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_rb10_apple::msg::ArucoPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_rb10_apple::msg::ArucoPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__TRAITS_HPP_
