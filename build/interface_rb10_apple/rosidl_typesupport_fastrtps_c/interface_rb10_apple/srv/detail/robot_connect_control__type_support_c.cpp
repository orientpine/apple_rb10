// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interface_rb10_apple:srv/RobotConnectControl.idl
// generated code does not contain a copyright notice
#include "interface_rb10_apple/srv/detail/robot_connect_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interface_rb10_apple/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface_rb10_apple/srv/detail/robot_connect_control__struct.h"
#include "interface_rb10_apple/srv/detail/robot_connect_control__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotConnectControl_Request__ros_msg_type = interface_rb10_apple__srv__RobotConnectControl_Request;

static bool _RobotConnectControl_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotConnectControl_Request__ros_msg_type * ros_message = static_cast<const _RobotConnectControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: connect
  {
    cdr << (ros_message->connect ? true : false);
  }

  return true;
}

static bool _RobotConnectControl_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotConnectControl_Request__ros_msg_type * ros_message = static_cast<_RobotConnectControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: connect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connect = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_rb10_apple
size_t get_serialized_size_interface_rb10_apple__srv__RobotConnectControl_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotConnectControl_Request__ros_msg_type * ros_message = static_cast<const _RobotConnectControl_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name connect
  {
    size_t item_size = sizeof(ros_message->connect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotConnectControl_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface_rb10_apple__srv__RobotConnectControl_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_rb10_apple
size_t max_serialized_size_interface_rb10_apple__srv__RobotConnectControl_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: connect
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interface_rb10_apple__srv__RobotConnectControl_Request;
    is_plain =
      (
      offsetof(DataType, connect) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobotConnectControl_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface_rb10_apple__srv__RobotConnectControl_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotConnectControl_Request = {
  "interface_rb10_apple::srv",
  "RobotConnectControl_Request",
  _RobotConnectControl_Request__cdr_serialize,
  _RobotConnectControl_Request__cdr_deserialize,
  _RobotConnectControl_Request__get_serialized_size,
  _RobotConnectControl_Request__max_serialized_size
};

static rosidl_message_type_support_t _RobotConnectControl_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotConnectControl_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_rb10_apple, srv, RobotConnectControl_Request)() {
  return &_RobotConnectControl_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interface_rb10_apple/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interface_rb10_apple/srv/detail/robot_connect_control__struct.h"
// already included above
// #include "interface_rb10_apple/srv/detail/robot_connect_control__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotConnectControl_Response__ros_msg_type = interface_rb10_apple__srv__RobotConnectControl_Response;

static bool _RobotConnectControl_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotConnectControl_Response__ros_msg_type * ros_message = static_cast<const _RobotConnectControl_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_power_on
  {
    cdr << (ros_message->is_power_on ? true : false);
  }

  return true;
}

static bool _RobotConnectControl_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotConnectControl_Response__ros_msg_type * ros_message = static_cast<_RobotConnectControl_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_power_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_power_on = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_rb10_apple
size_t get_serialized_size_interface_rb10_apple__srv__RobotConnectControl_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotConnectControl_Response__ros_msg_type * ros_message = static_cast<const _RobotConnectControl_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_power_on
  {
    size_t item_size = sizeof(ros_message->is_power_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotConnectControl_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface_rb10_apple__srv__RobotConnectControl_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_rb10_apple
size_t max_serialized_size_interface_rb10_apple__srv__RobotConnectControl_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: is_power_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interface_rb10_apple__srv__RobotConnectControl_Response;
    is_plain =
      (
      offsetof(DataType, is_power_on) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobotConnectControl_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface_rb10_apple__srv__RobotConnectControl_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotConnectControl_Response = {
  "interface_rb10_apple::srv",
  "RobotConnectControl_Response",
  _RobotConnectControl_Response__cdr_serialize,
  _RobotConnectControl_Response__cdr_deserialize,
  _RobotConnectControl_Response__get_serialized_size,
  _RobotConnectControl_Response__max_serialized_size
};

static rosidl_message_type_support_t _RobotConnectControl_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotConnectControl_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_rb10_apple, srv, RobotConnectControl_Response)() {
  return &_RobotConnectControl_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interface_rb10_apple/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface_rb10_apple/srv/robot_connect_control.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RobotConnectControl__callbacks = {
  "interface_rb10_apple::srv",
  "RobotConnectControl",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_rb10_apple, srv, RobotConnectControl_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_rb10_apple, srv, RobotConnectControl_Response)(),
};

static rosidl_service_type_support_t RobotConnectControl__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RobotConnectControl__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_rb10_apple, srv, RobotConnectControl)() {
  return &RobotConnectControl__handle;
}

#if defined(__cplusplus)
}
#endif
