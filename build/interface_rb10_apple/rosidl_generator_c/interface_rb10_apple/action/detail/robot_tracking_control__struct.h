// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_rb10_apple:action/RobotTrackingControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TRACKING_CONTROL__STRUCT_H_
#define INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TRACKING_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RobotTrackingControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTrackingControl_Goal
{
  /// "start_tracking" 명령어
  rosidl_runtime_c__String command;
} interface_rb10_apple__action__RobotTrackingControl_Goal;

// Struct for a sequence of interface_rb10_apple__action__RobotTrackingControl_Goal.
typedef struct interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence
{
  interface_rb10_apple__action__RobotTrackingControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/RobotTrackingControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTrackingControl_Result
{
  bool success;
  rosidl_runtime_c__String message;
} interface_rb10_apple__action__RobotTrackingControl_Result;

// Struct for a sequence of interface_rb10_apple__action__RobotTrackingControl_Result.
typedef struct interface_rb10_apple__action__RobotTrackingControl_Result__Sequence
{
  interface_rb10_apple__action__RobotTrackingControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTrackingControl_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/RobotTrackingControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTrackingControl_Feedback
{
  rosidl_runtime_c__String feedback;
} interface_rb10_apple__action__RobotTrackingControl_Feedback;

// Struct for a sequence of interface_rb10_apple__action__RobotTrackingControl_Feedback.
typedef struct interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence
{
  interface_rb10_apple__action__RobotTrackingControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interface_rb10_apple/action/detail/robot_tracking_control__struct.h"

/// Struct defined in action/RobotTrackingControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interface_rb10_apple__action__RobotTrackingControl_Goal goal;
} interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request;

// Struct for a sequence of interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request.
typedef struct interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence
{
  interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RobotTrackingControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response;

// Struct for a sequence of interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response.
typedef struct interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence
{
  interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RobotTrackingControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTrackingControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interface_rb10_apple__action__RobotTrackingControl_GetResult_Request;

// Struct for a sequence of interface_rb10_apple__action__RobotTrackingControl_GetResult_Request.
typedef struct interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence
{
  interface_rb10_apple__action__RobotTrackingControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interface_rb10_apple/action/detail/robot_tracking_control__struct.h"

/// Struct defined in action/RobotTrackingControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTrackingControl_GetResult_Response
{
  int8_t status;
  interface_rb10_apple__action__RobotTrackingControl_Result result;
} interface_rb10_apple__action__RobotTrackingControl_GetResult_Response;

// Struct for a sequence of interface_rb10_apple__action__RobotTrackingControl_GetResult_Response.
typedef struct interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence
{
  interface_rb10_apple__action__RobotTrackingControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interface_rb10_apple/action/detail/robot_tracking_control__struct.h"

/// Struct defined in action/RobotTrackingControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interface_rb10_apple__action__RobotTrackingControl_Feedback feedback;
} interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage;

// Struct for a sequence of interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage.
typedef struct interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence
{
  interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TRACKING_CONTROL__STRUCT_H_
