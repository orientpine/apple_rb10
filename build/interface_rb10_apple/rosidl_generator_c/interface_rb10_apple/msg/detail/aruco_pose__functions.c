// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_rb10_apple:msg/ArucoPose.idl
// generated code does not contain a copyright notice
#include "interface_rb10_apple/msg/detail/aruco_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interface_rb10_apple__msg__ArucoPose__init(interface_rb10_apple__msg__ArucoPose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // rx
  // ry
  // rz
  return true;
}

void
interface_rb10_apple__msg__ArucoPose__fini(interface_rb10_apple__msg__ArucoPose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // rx
  // ry
  // rz
}

bool
interface_rb10_apple__msg__ArucoPose__are_equal(const interface_rb10_apple__msg__ArucoPose * lhs, const interface_rb10_apple__msg__ArucoPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // rx
  if (lhs->rx != rhs->rx) {
    return false;
  }
  // ry
  if (lhs->ry != rhs->ry) {
    return false;
  }
  // rz
  if (lhs->rz != rhs->rz) {
    return false;
  }
  return true;
}

bool
interface_rb10_apple__msg__ArucoPose__copy(
  const interface_rb10_apple__msg__ArucoPose * input,
  interface_rb10_apple__msg__ArucoPose * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // rx
  output->rx = input->rx;
  // ry
  output->ry = input->ry;
  // rz
  output->rz = input->rz;
  return true;
}

interface_rb10_apple__msg__ArucoPose *
interface_rb10_apple__msg__ArucoPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_rb10_apple__msg__ArucoPose * msg = (interface_rb10_apple__msg__ArucoPose *)allocator.allocate(sizeof(interface_rb10_apple__msg__ArucoPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_rb10_apple__msg__ArucoPose));
  bool success = interface_rb10_apple__msg__ArucoPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_rb10_apple__msg__ArucoPose__destroy(interface_rb10_apple__msg__ArucoPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_rb10_apple__msg__ArucoPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_rb10_apple__msg__ArucoPose__Sequence__init(interface_rb10_apple__msg__ArucoPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_rb10_apple__msg__ArucoPose * data = NULL;

  if (size) {
    data = (interface_rb10_apple__msg__ArucoPose *)allocator.zero_allocate(size, sizeof(interface_rb10_apple__msg__ArucoPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_rb10_apple__msg__ArucoPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_rb10_apple__msg__ArucoPose__fini(&data[i - 1]);
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
interface_rb10_apple__msg__ArucoPose__Sequence__fini(interface_rb10_apple__msg__ArucoPose__Sequence * array)
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
      interface_rb10_apple__msg__ArucoPose__fini(&array->data[i]);
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

interface_rb10_apple__msg__ArucoPose__Sequence *
interface_rb10_apple__msg__ArucoPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_rb10_apple__msg__ArucoPose__Sequence * array = (interface_rb10_apple__msg__ArucoPose__Sequence *)allocator.allocate(sizeof(interface_rb10_apple__msg__ArucoPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_rb10_apple__msg__ArucoPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_rb10_apple__msg__ArucoPose__Sequence__destroy(interface_rb10_apple__msg__ArucoPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_rb10_apple__msg__ArucoPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_rb10_apple__msg__ArucoPose__Sequence__are_equal(const interface_rb10_apple__msg__ArucoPose__Sequence * lhs, const interface_rb10_apple__msg__ArucoPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_rb10_apple__msg__ArucoPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_rb10_apple__msg__ArucoPose__Sequence__copy(
  const interface_rb10_apple__msg__ArucoPose__Sequence * input,
  interface_rb10_apple__msg__ArucoPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_rb10_apple__msg__ArucoPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_rb10_apple__msg__ArucoPose * data =
      (interface_rb10_apple__msg__ArucoPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_rb10_apple__msg__ArucoPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_rb10_apple__msg__ArucoPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_rb10_apple__msg__ArucoPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
