// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_rb10_apple:srv/RobotConnectControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__STRUCT_H_
#define INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RobotConnectControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__srv__RobotConnectControl_Request
{
  bool connect;
} interface_rb10_apple__srv__RobotConnectControl_Request;

// Struct for a sequence of interface_rb10_apple__srv__RobotConnectControl_Request.
typedef struct interface_rb10_apple__srv__RobotConnectControl_Request__Sequence
{
  interface_rb10_apple__srv__RobotConnectControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__srv__RobotConnectControl_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RobotConnectControl in the package interface_rb10_apple.
typedef struct interface_rb10_apple__srv__RobotConnectControl_Response
{
  bool is_power_on;
} interface_rb10_apple__srv__RobotConnectControl_Response;

// Struct for a sequence of interface_rb10_apple__srv__RobotConnectControl_Response.
typedef struct interface_rb10_apple__srv__RobotConnectControl_Response__Sequence
{
  interface_rb10_apple__srv__RobotConnectControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__srv__RobotConnectControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__STRUCT_H_
