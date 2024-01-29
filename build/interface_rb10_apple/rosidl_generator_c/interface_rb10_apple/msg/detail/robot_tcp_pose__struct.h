// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_rb10_apple:msg/RobotTcpPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_TCP_POSE__STRUCT_H_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_TCP_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotTcpPose in the package interface_rb10_apple.
typedef struct interface_rb10_apple__msg__RobotTcpPose
{
  double x;
  double y;
  double z;
  double rx;
  double ry;
  double rz;
} interface_rb10_apple__msg__RobotTcpPose;

// Struct for a sequence of interface_rb10_apple__msg__RobotTcpPose.
typedef struct interface_rb10_apple__msg__RobotTcpPose__Sequence
{
  interface_rb10_apple__msg__RobotTcpPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__msg__RobotTcpPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_TCP_POSE__STRUCT_H_
