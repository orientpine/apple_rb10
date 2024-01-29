// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_rb10_apple:msg/RobotJointPosition.idl
// generated code does not contain a copyright notice
#include "interface_rb10_apple/msg/detail/robot_joint_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interface_rb10_apple__msg__RobotJointPosition__init(interface_rb10_apple__msg__RobotJointPosition * msg)
{
  if (!msg) {
    return false;
  }
  // j0
  // j1
  // j2
  // j3
  // j4
  // j5
  return true;
}

void
interface_rb10_apple__msg__RobotJointPosition__fini(interface_rb10_apple__msg__RobotJointPosition * msg)
{
  if (!msg) {
    return;
  }
  // j0
  // j1
  // j2
  // j3
  // j4
  // j5
}

bool
interface_rb10_apple__msg__RobotJointPosition__are_equal(const interface_rb10_apple__msg__RobotJointPosition * lhs, const interface_rb10_apple__msg__RobotJointPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // j0
  if (lhs->j0 != rhs->j0) {
    return false;
  }
  // j1
  if (lhs->j1 != rhs->j1) {
    return false;
  }
  // j2
  if (lhs->j2 != rhs->j2) {
    return false;
  }
  // j3
  if (lhs->j3 != rhs->j3) {
    return false;
  }
  // j4
  if (lhs->j4 != rhs->j4) {
    return false;
  }
  // j5
  if (lhs->j5 != rhs->j5) {
    return false;
  }
  return true;
}

bool
interface_rb10_apple__msg__RobotJointPosition__copy(
  const interface_rb10_apple__msg__RobotJointPosition * input,
  interface_rb10_apple__msg__RobotJointPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // j0
  output->j0 = input->j0;
  // j1
  output->j1 = input->j1;
  // j2
  output->j2 = input->j2;
  // j3
  output->j3 = input->j3;
  // j4
  output->j4 = input->j4;
  // j5
  output->j5 = input->j5;
  return true;
}

interface_rb10_apple__msg__RobotJointPosition *
interface_rb10_apple__msg__RobotJointPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_rb10_apple__msg__RobotJointPosition * msg = (interface_rb10_apple__msg__RobotJointPosition *)allocator.allocate(sizeof(interface_rb10_apple__msg__RobotJointPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_rb10_apple__msg__RobotJointPosition));
  bool success = interface_rb10_apple__msg__RobotJointPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_rb10_apple__msg__RobotJointPosition__destroy(interface_rb10_apple__msg__RobotJointPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_rb10_apple__msg__RobotJointPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_rb10_apple__msg__RobotJointPosition__Sequence__init(interface_rb10_apple__msg__RobotJointPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_rb10_apple__msg__RobotJointPosition * data = NULL;

  if (size) {
    data = (interface_rb10_apple__msg__RobotJointPosition *)allocator.zero_allocate(size, sizeof(interface_rb10_apple__msg__RobotJointPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_rb10_apple__msg__RobotJointPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_rb10_apple__msg__RobotJointPosition__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_rb10_apple__msg__RobotJointPosition__Sequence__fini(interface_rb10_apple__msg__RobotJointPosition__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_rb10_apple__msg__RobotJointPosition__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_rb10_apple__msg__RobotJointPosition__Sequence *
interface_rb10_apple__msg__RobotJointPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_rb10_apple__msg__RobotJointPosition__Sequence * array = (interface_rb10_apple__msg__RobotJointPosition__Sequence *)allocator.allocate(sizeof(interface_rb10_apple__msg__RobotJointPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_rb10_apple__msg__RobotJointPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_rb10_apple__msg__RobotJointPosition__Sequence__destroy(interface_rb10_apple__msg__RobotJointPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_rb10_apple__msg__RobotJointPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_rb10_apple__msg__RobotJointPosition__Sequence__are_equal(const interface_rb10_apple__msg__RobotJointPosition__Sequence * lhs, const interface_rb10_apple__msg__RobotJointPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_rb10_apple__msg__RobotJointPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_rb10_apple__msg__RobotJointPosition__Sequence__copy(
  const interface_rb10_apple__msg__RobotJointPosition__Sequence * input,
  interface_rb10_apple__msg__RobotJointPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_rb10_apple__msg__RobotJointPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_rb10_apple__msg__RobotJointPosition * data =
      (interface_rb10_apple__msg__RobotJointPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_rb10_apple__msg__RobotJointPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_rb10_apple__msg__RobotJointPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_rb10_apple__msg__RobotJointPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
