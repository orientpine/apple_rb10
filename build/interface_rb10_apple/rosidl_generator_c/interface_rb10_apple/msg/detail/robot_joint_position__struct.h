// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_rb10_apple:msg/RobotJointPosition.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__STRUCT_H_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotJointPosition in the package interface_rb10_apple.
typedef struct interface_rb10_apple__msg__RobotJointPosition
{
  double j0;
  double j1;
  double j2;
  double j3;
  double j4;
  double j5;
} interface_rb10_apple__msg__RobotJointPosition;

// Struct for a sequence of interface_rb10_apple__msg__RobotJointPosition.
typedef struct interface_rb10_apple__msg__RobotJointPosition__Sequence
{
  interface_rb10_apple__msg__RobotJointPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__msg__RobotJointPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__STRUCT_H_
