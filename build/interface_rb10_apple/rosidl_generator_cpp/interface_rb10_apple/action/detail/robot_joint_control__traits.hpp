// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_rb10_apple:action/RobotJointControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_JOINT_CONTROL__TRAITS_HPP_
#define INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_JOINT_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_rb10_apple/action/detail/robot_joint_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_rb10_apple
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotJointControl_Goal & msg,
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
  const RobotJointControl_Goal & msg,
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

inline std::string to_yaml(const RobotJointControl_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::action::RobotJointControl_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::action::RobotJointControl_Goal & msg)
{
  return interface_rb10_apple::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_Goal>()
{
  return "interface_rb10_apple::action::RobotJointControl_Goal";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_Goal>()
{
  return "interface_rb10_apple/action/RobotJointControl_Goal";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_rb10_apple::action::RobotJointControl_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_rb10_apple
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotJointControl_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotJointControl_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotJointControl_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::action::RobotJointControl_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::action::RobotJointControl_Result & msg)
{
  return interface_rb10_apple::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_Result>()
{
  return "interface_rb10_apple::action::RobotJointControl_Result";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_Result>()
{
  return "interface_rb10_apple/action/RobotJointControl_Result";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_rb10_apple::action::RobotJointControl_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_rb10_apple
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotJointControl_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotJointControl_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotJointControl_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::action::RobotJointControl_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::action::RobotJointControl_Feedback & msg)
{
  return interface_rb10_apple::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_Feedback>()
{
  return "interface_rb10_apple::action::RobotJointControl_Feedback";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_Feedback>()
{
  return "interface_rb10_apple/action/RobotJointControl_Feedback";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_rb10_apple::action::RobotJointControl_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "interface_rb10_apple/action/detail/robot_joint_control__traits.hpp"

namespace interface_rb10_apple
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotJointControl_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotJointControl_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotJointControl_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::action::RobotJointControl_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::action::RobotJointControl_SendGoal_Request & msg)
{
  return interface_rb10_apple::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_SendGoal_Request>()
{
  return "interface_rb10_apple::action::RobotJointControl_SendGoal_Request";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_SendGoal_Request>()
{
  return "interface_rb10_apple/action/RobotJointControl_SendGoal_Request";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<interface_rb10_apple::action::RobotJointControl_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<interface_rb10_apple::action::RobotJointControl_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interface_rb10_apple::action::RobotJointControl_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interface_rb10_apple
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotJointControl_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotJointControl_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotJointControl_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::action::RobotJointControl_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::action::RobotJointControl_SendGoal_Response & msg)
{
  return interface_rb10_apple::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_SendGoal_Response>()
{
  return "interface_rb10_apple::action::RobotJointControl_SendGoal_Response";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_SendGoal_Response>()
{
  return "interface_rb10_apple/action/RobotJointControl_SendGoal_Response";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interface_rb10_apple::action::RobotJointControl_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_SendGoal>()
{
  return "interface_rb10_apple::action::RobotJointControl_SendGoal";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_SendGoal>()
{
  return "interface_rb10_apple/action/RobotJointControl_SendGoal";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_rb10_apple::action::RobotJointControl_SendGoal_Request>::value &&
    has_fixed_size<interface_rb10_apple::action::RobotJointControl_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_rb10_apple::action::RobotJointControl_SendGoal_Request>::value &&
    has_bounded_size<interface_rb10_apple::action::RobotJointControl_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<interface_rb10_apple::action::RobotJointControl_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<interface_rb10_apple::action::RobotJointControl_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_rb10_apple::action::RobotJointControl_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace interface_rb10_apple
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotJointControl_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotJointControl_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotJointControl_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::action::RobotJointControl_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::action::RobotJointControl_GetResult_Request & msg)
{
  return interface_rb10_apple::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_GetResult_Request>()
{
  return "interface_rb10_apple::action::RobotJointControl_GetResult_Request";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_GetResult_Request>()
{
  return "interface_rb10_apple/action/RobotJointControl_GetResult_Request";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interface_rb10_apple::action::RobotJointControl_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "interface_rb10_apple/action/detail/robot_joint_control__traits.hpp"

namespace interface_rb10_apple
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotJointControl_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotJointControl_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotJointControl_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::action::RobotJointControl_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::action::RobotJointControl_GetResult_Response & msg)
{
  return interface_rb10_apple::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_GetResult_Response>()
{
  return "interface_rb10_apple::action::RobotJointControl_GetResult_Response";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_GetResult_Response>()
{
  return "interface_rb10_apple/action/RobotJointControl_GetResult_Response";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<interface_rb10_apple::action::RobotJointControl_Result>::value> {};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<interface_rb10_apple::action::RobotJointControl_Result>::value> {};

template<>
struct is_message<interface_rb10_apple::action::RobotJointControl_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_GetResult>()
{
  return "interface_rb10_apple::action::RobotJointControl_GetResult";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_GetResult>()
{
  return "interface_rb10_apple/action/RobotJointControl_GetResult";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_rb10_apple::action::RobotJointControl_GetResult_Request>::value &&
    has_fixed_size<interface_rb10_apple::action::RobotJointControl_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_rb10_apple::action::RobotJointControl_GetResult_Request>::value &&
    has_bounded_size<interface_rb10_apple::action::RobotJointControl_GetResult_Response>::value
  >
{
};

template<>
struct is_service<interface_rb10_apple::action::RobotJointControl_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<interface_rb10_apple::action::RobotJointControl_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_rb10_apple::action::RobotJointControl_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "interface_rb10_apple/action/detail/robot_joint_control__traits.hpp"

namespace interface_rb10_apple
{

namespace action
{

inline void to_flow_style_yaml(
  const RobotJointControl_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotJointControl_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotJointControl_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_generator_traits
{

[[deprecated("use interface_rb10_apple::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_rb10_apple::action::RobotJointControl_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_rb10_apple::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_rb10_apple::action::to_yaml() instead")]]
inline std::string to_yaml(const interface_rb10_apple::action::RobotJointControl_FeedbackMessage & msg)
{
  return interface_rb10_apple::action::to_yaml(msg);
}

template<>
inline const char * data_type<interface_rb10_apple::action::RobotJointControl_FeedbackMessage>()
{
  return "interface_rb10_apple::action::RobotJointControl_FeedbackMessage";
}

template<>
inline const char * name<interface_rb10_apple::action::RobotJointControl_FeedbackMessage>()
{
  return "interface_rb10_apple/action/RobotJointControl_FeedbackMessage";
}

template<>
struct has_fixed_size<interface_rb10_apple::action::RobotJointControl_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<interface_rb10_apple::action::RobotJointControl_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interface_rb10_apple::action::RobotJointControl_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<interface_rb10_apple::action::RobotJointControl_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interface_rb10_apple::action::RobotJointControl_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<interface_rb10_apple::action::RobotJointControl>
  : std::true_type
{
};

template<>
struct is_action_goal<interface_rb10_apple::action::RobotJointControl_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<interface_rb10_apple::action::RobotJointControl_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<interface_rb10_apple::action::RobotJointControl_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_JOINT_CONTROL__TRAITS_HPP_
