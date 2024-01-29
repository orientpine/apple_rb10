// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interface_rb10_apple:msg/RobotJointPosition.idl
// generated code does not contain a copyright notice
#include "interface_rb10_apple/msg/detail/robot_joint_position__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interface_rb10_apple/msg/detail/robot_joint_position__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interface_rb10_apple
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_rb10_apple
cdr_serialize(
  const interface_rb10_apple::msg::RobotJointPosition & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: j0
  cdr << ros_message.j0;
  // Member: j1
  cdr << ros_message.j1;
  // Member: j2
  cdr << ros_message.j2;
  // Member: j3
  cdr << ros_message.j3;
  // Member: j4
  cdr << ros_message.j4;
  // Member: j5
  cdr << ros_message.j5;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_rb10_apple
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interface_rb10_apple::msg::RobotJointPosition & ros_message)
{
  // Member: j0
  cdr >> ros_message.j0;

  // Member: j1
  cdr >> ros_message.j1;

  // Member: j2
  cdr >> ros_message.j2;

  // Member: j3
  cdr >> ros_message.j3;

  // Member: j4
  cdr >> ros_message.j4;

  // Member: j5
  cdr >> ros_message.j5;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_rb10_apple
get_serialized_size(
  const interface_rb10_apple::msg::RobotJointPosition & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: j0
  {
    size_t item_size = sizeof(ros_message.j0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j1
  {
    size_t item_size = sizeof(ros_message.j1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j2
  {
    size_t item_size = sizeof(ros_message.j2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j3
  {
    size_t item_size = sizeof(ros_message.j3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j4
  {
    size_t item_size = sizeof(ros_message.j4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j5
  {
    size_t item_size = sizeof(ros_message.j5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_rb10_apple
max_serialized_size_RobotJointPosition(
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


  // Member: j0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interface_rb10_apple::msg::RobotJointPosition;
    is_plain =
      (
      offsetof(DataType, j5) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobotJointPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interface_rb10_apple::msg::RobotJointPosition *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotJointPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interface_rb10_apple::msg::RobotJointPosition *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotJointPosition__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interface_rb10_apple::msg::RobotJointPosition *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotJointPosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotJointPosition(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotJointPosition__callbacks = {
  "interface_rb10_apple::msg",
  "RobotJointPosition",
  _RobotJointPosition__cdr_serialize,
  _RobotJointPosition__cdr_deserialize,
  _RobotJointPosition__get_serialized_size,
  _RobotJointPosition__max_serialized_size
};

static rosidl_message_type_support_t _RobotJointPosition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotJointPosition__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interface_rb10_apple
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_rb10_apple::msg::RobotJointPosition>()
{
  return &interface_rb10_apple::msg::typesupport_fastrtps_cpp::_RobotJointPosition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, msg, RobotJointPosition)() {
  return &interface_rb10_apple::msg::typesupport_fastrtps_cpp::_RobotJointPosition__handle;
}

#ifdef __cplusplus
}
#endif
