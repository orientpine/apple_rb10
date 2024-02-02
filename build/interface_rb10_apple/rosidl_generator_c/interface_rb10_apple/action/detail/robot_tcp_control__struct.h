// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_rb10_apple:action/RobotTcpControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TCP_CONTROL__STRUCT_H_
#define INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TCP_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RobotTcpControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTcpControl_Goal
{
  double x;
  double y;
  double z;
  double rx;
  double ry;
  double rz;
} interface_rb10_apple__action__RobotTcpControl_Goal;

// Struct for a sequence of interface_rb10_apple__action__RobotTcpControl_Goal.
typedef struct interface_rb10_apple__action__RobotTcpControl_Goal__Sequence
{
  interface_rb10_apple__action__RobotTcpControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTcpControl_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RobotTcpControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTcpControl_Result
{
  bool success;
  rosidl_runtime_c__String message;
} interface_rb10_apple__action__RobotTcpControl_Result;

// Struct for a sequence of interface_rb10_apple__action__RobotTcpControl_Result.
typedef struct interface_rb10_apple__action__RobotTcpControl_Result__Sequence
{
  interface_rb10_apple__action__RobotTcpControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTcpControl_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/RobotTcpControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTcpControl_Feedback
{
  rosidl_runtime_c__String feedback;
} interface_rb10_apple__action__RobotTcpControl_Feedback;

// Struct for a sequence of interface_rb10_apple__action__RobotTcpControl_Feedback.
typedef struct interface_rb10_apple__action__RobotTcpControl_Feedback__Sequence
{
  interface_rb10_apple__action__RobotTcpControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTcpControl_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interface_rb10_apple/action/detail/robot_tcp_control__struct.h"

/// Struct defined in action/RobotTcpControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTcpControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interface_rb10_apple__action__RobotTcpControl_Goal goal;
} interface_rb10_apple__action__RobotTcpControl_SendGoal_Request;

// Struct for a sequence of interface_rb10_apple__action__RobotTcpControl_SendGoal_Request.
typedef struct interface_rb10_apple__action__RobotTcpControl_SendGoal_Request__Sequence
{
  interface_rb10_apple__action__RobotTcpControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTcpControl_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RobotTcpControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTcpControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interface_rb10_apple__action__RobotTcpControl_SendGoal_Response;

// Struct for a sequence of interface_rb10_apple__action__RobotTcpControl_SendGoal_Response.
typedef struct interface_rb10_apple__action__RobotTcpControl_SendGoal_Response__Sequence
{
  interface_rb10_apple__action__RobotTcpControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTcpControl_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RobotTcpControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTcpControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interface_rb10_apple__action__RobotTcpControl_GetResult_Request;

// Struct for a sequence of interface_rb10_apple__action__RobotTcpControl_GetResult_Request.
typedef struct interface_rb10_apple__action__RobotTcpControl_GetResult_Request__Sequence
{
  interface_rb10_apple__action__RobotTcpControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTcpControl_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.h"

/// Struct defined in action/RobotTcpControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTcpControl_GetResult_Response
{
  int8_t status;
  interface_rb10_apple__action__RobotTcpControl_Result result;
} interface_rb10_apple__action__RobotTcpControl_GetResult_Response;

// Struct for a sequence of interface_rb10_apple__action__RobotTcpControl_GetResult_Response.
typedef struct interface_rb10_apple__action__RobotTcpControl_GetResult_Response__Sequence
{
  interface_rb10_apple__action__RobotTcpControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTcpControl_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.h"

/// Struct defined in action/RobotTcpControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTcpControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interface_rb10_apple__action__RobotTcpControl_Feedback feedback;
} interface_rb10_apple__action__RobotTcpControl_FeedbackMessage;

// Struct for a sequence of interface_rb10_apple__action__RobotTcpControl_FeedbackMessage.
typedef struct interface_rb10_apple__action__RobotTcpControl_FeedbackMessage__Sequence
{
  interface_rb10_apple__action__RobotTcpControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTcpControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TCP_CONTROL__STRUCT_H_
