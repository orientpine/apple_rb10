// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_rb10_apple:msg/ArucoPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__STRUCT_H_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ArucoPose in the package interface_rb10_apple.
/**
  * ArUco marker의 위치 및 회전 데이터를 정의
 */
typedef struct interface_rb10_apple__msg__ArucoPose
{
  /// 3D 위치 (meters)
  /// 카메라와 마커 간의 x 좌표 (카메라 프레임 기준)
  double x;
  /// 카메라와 마커 간의 y 좌표
  double y;
  /// 카메라와 마커 간의 z 좌표
  double z;
  /// 3D 회전 (degrees)
  /// 롤 (x축 회전)
  double rx;
  /// 피치 (y축 회전)
  double ry;
  /// 요 (z축 회전)
  double rz;
} interface_rb10_apple__msg__ArucoPose;

// Struct for a sequence of interface_rb10_apple__msg__ArucoPose.
typedef struct interface_rb10_apple__msg__ArucoPose__Sequence
{
  interface_rb10_apple__msg__ArucoPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_rb10_apple__msg__ArucoPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ARUCO_POSE__STRUCT_H_
