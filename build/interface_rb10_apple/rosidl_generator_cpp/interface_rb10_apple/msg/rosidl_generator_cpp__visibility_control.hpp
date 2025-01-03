// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define INTERFACE_RB10_APPLE__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_interface_rb10_apple __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_interface_rb10_apple __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_interface_rb10_apple __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_interface_rb10_apple __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_interface_rb10_apple
    #define ROSIDL_GENERATOR_CPP_PUBLIC_interface_rb10_apple ROSIDL_GENERATOR_CPP_EXPORT_interface_rb10_apple
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_interface_rb10_apple ROSIDL_GENERATOR_CPP_IMPORT_interface_rb10_apple
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_interface_rb10_apple __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_interface_rb10_apple
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_interface_rb10_apple __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_interface_rb10_apple
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_RB10_APPLE__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
