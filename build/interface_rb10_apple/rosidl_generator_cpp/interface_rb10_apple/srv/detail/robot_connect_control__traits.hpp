// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_rb10_apple:srv/RobotConnectControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__TRAITS_HPP_
#define INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_rb10_apple/srv/detail/robot_connect_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_rb10_apple
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotConnectControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: connect
  {
    out << "connect: ";
    rosidl_generator_traits::value_to_yaml(msg.connect, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotConnectControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connect: ";
    rosidl_generator_traits::value_to_yaml(msg.connect, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotConnectControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::srv::RobotConnectControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::srv::RobotConnectControl_Request & msg)
{
  return interface_rb10_apple::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::srv::RobotConnectControl_Request>()
{
  return "interface_rb10_apple::srv::RobotConnectControl_Request";
}

template<>
inline const char * name<interface_rb10_apple::srv::RobotConnectControl_Request>()
{
  return "interface_rb10_apple/srv/RobotConnectControl_Request";
}

template<>
struct has_fixed_size<interface_rb10_apple::srv::RobotConnectControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_rb10_apple::srv::RobotConnectControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_rb10_apple::srv::RobotConnectControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_rb10_apple
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotConnectControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_power_on
  {
    out << "is_power_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_power_on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotConnectControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_power_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_power_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_power_on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotConnectControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::srv::RobotConnectControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::srv::RobotConnectControl_Response & msg)
{
  return interface_rb10_apple::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::srv::RobotConnectControl_Response>()
{
  return "interface_rb10_apple::srv::RobotConnectControl_Response";
}

template<>
inline const char * name<interface_rb10_apple::srv::RobotConnectControl_Response>()
{
  return "interface_rb10_apple/srv/RobotConnectControl_Response";
}

template<>
struct has_fixed_size<interface_rb10_apple::srv::RobotConnectControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_rb10_apple::srv::RobotConnectControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_rb10_apple::srv::RobotConnectControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_rb10_apple::srv::RobotConnectControl>()
{
  return "interface_rb10_apple::srv::RobotConnectControl";
}

template<>
inline const char * name<interface_rb10_apple::srv::RobotConnectControl>()
{
  return "interface_rb10_apple/srv/RobotConnectControl";
}

template<>
struct has_fixed_size<interface_rb10_apple::srv::RobotConnectControl>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_rb10_apple::srv::RobotConnectControl_Request>::value &&
    has_fixed_size<interface_rb10_apple::srv::RobotConnectControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_rb10_apple::srv::RobotConnectControl>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_rb10_apple::srv::RobotConnectControl_Request>::value &&
    has_bounded_size<interface_rb10_apple::srv::RobotConnectControl_Response>::value
  >
{
};

template<>
struct is_service<interface_rb10_apple::srv::RobotConnectControl>
  : std::true_type
{
};

template<>
struct is_service_request<interface_rb10_apple::srv::RobotConnectControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_rb10_apple::srv::RobotConnectControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__TRAITS_HPP_
