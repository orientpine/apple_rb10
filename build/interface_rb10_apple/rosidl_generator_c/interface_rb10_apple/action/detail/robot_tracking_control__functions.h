// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interface_rb10_apple:action/RobotTrackingControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TRACKING_CONTROL__FUNCTIONS_H_
#define INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TRACKING_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interface_rb10_apple/msg/rosidl_generator_c__visibility_control.h"

#include "interface_rb10_apple/action/detail/robot_tracking_control__struct.h"

/// Initialize action/RobotTrackingControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_rb10_apple__action__RobotTrackingControl_Goal
 * )) before or use
 * interface_rb10_apple__action__RobotTrackingControl_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Goal__init(interface_rb10_apple__action__RobotTrackingControl_Goal * msg);

/// Finalize action/RobotTrackingControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Goal__fini(interface_rb10_apple__action__RobotTrackingControl_Goal * msg);

/// Create action/RobotTrackingControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_rb10_apple__action__RobotTrackingControl_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_Goal *
interface_rb10_apple__action__RobotTrackingControl_Goal__create();

/// Destroy action/RobotTrackingControl message.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Goal__destroy(interface_rb10_apple__action__RobotTrackingControl_Goal * msg);

/// Check for action/RobotTrackingControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Goal__are_equal(const interface_rb10_apple__action__RobotTrackingControl_Goal * lhs, const interface_rb10_apple__action__RobotTrackingControl_Goal * rhs);

/// Copy a action/RobotTrackingControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Goal__copy(
  const interface_rb10_apple__action__RobotTrackingControl_Goal * input,
  interface_rb10_apple__action__RobotTrackingControl_Goal * output);

/// Initialize array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_rb10_apple__action__RobotTrackingControl_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence__init(interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence * array, size_t size);

/// Finalize array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence__fini(interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence * array);

/// Create array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the array and calls
 * interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence *
interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence__create(size_t size);

/// Destroy array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence__destroy(interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence * array);

/// Check for action/RobotTrackingControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence__are_equal(const interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence * lhs, const interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence * rhs);

/// Copy an array of action/RobotTrackingControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence__copy(
  const interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence * input,
  interface_rb10_apple__action__RobotTrackingControl_Goal__Sequence * output);

/// Initialize action/RobotTrackingControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_rb10_apple__action__RobotTrackingControl_Result
 * )) before or use
 * interface_rb10_apple__action__RobotTrackingControl_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Result__init(interface_rb10_apple__action__RobotTrackingControl_Result * msg);

/// Finalize action/RobotTrackingControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Result__fini(interface_rb10_apple__action__RobotTrackingControl_Result * msg);

/// Create action/RobotTrackingControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_rb10_apple__action__RobotTrackingControl_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_Result *
interface_rb10_apple__action__RobotTrackingControl_Result__create();

/// Destroy action/RobotTrackingControl message.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Result__destroy(interface_rb10_apple__action__RobotTrackingControl_Result * msg);

/// Check for action/RobotTrackingControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Result__are_equal(const interface_rb10_apple__action__RobotTrackingControl_Result * lhs, const interface_rb10_apple__action__RobotTrackingControl_Result * rhs);

/// Copy a action/RobotTrackingControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Result__copy(
  const interface_rb10_apple__action__RobotTrackingControl_Result * input,
  interface_rb10_apple__action__RobotTrackingControl_Result * output);

/// Initialize array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_rb10_apple__action__RobotTrackingControl_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Result__Sequence__init(interface_rb10_apple__action__RobotTrackingControl_Result__Sequence * array, size_t size);

/// Finalize array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Result__Sequence__fini(interface_rb10_apple__action__RobotTrackingControl_Result__Sequence * array);

/// Create array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the array and calls
 * interface_rb10_apple__action__RobotTrackingControl_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_Result__Sequence *
interface_rb10_apple__action__RobotTrackingControl_Result__Sequence__create(size_t size);

/// Destroy array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Result__Sequence__destroy(interface_rb10_apple__action__RobotTrackingControl_Result__Sequence * array);

/// Check for action/RobotTrackingControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Result__Sequence__are_equal(const interface_rb10_apple__action__RobotTrackingControl_Result__Sequence * lhs, const interface_rb10_apple__action__RobotTrackingControl_Result__Sequence * rhs);

/// Copy an array of action/RobotTrackingControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Result__Sequence__copy(
  const interface_rb10_apple__action__RobotTrackingControl_Result__Sequence * input,
  interface_rb10_apple__action__RobotTrackingControl_Result__Sequence * output);

/// Initialize action/RobotTrackingControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_rb10_apple__action__RobotTrackingControl_Feedback
 * )) before or use
 * interface_rb10_apple__action__RobotTrackingControl_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Feedback__init(interface_rb10_apple__action__RobotTrackingControl_Feedback * msg);

/// Finalize action/RobotTrackingControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Feedback__fini(interface_rb10_apple__action__RobotTrackingControl_Feedback * msg);

/// Create action/RobotTrackingControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_rb10_apple__action__RobotTrackingControl_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_Feedback *
interface_rb10_apple__action__RobotTrackingControl_Feedback__create();

/// Destroy action/RobotTrackingControl message.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Feedback__destroy(interface_rb10_apple__action__RobotTrackingControl_Feedback * msg);

/// Check for action/RobotTrackingControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Feedback__are_equal(const interface_rb10_apple__action__RobotTrackingControl_Feedback * lhs, const interface_rb10_apple__action__RobotTrackingControl_Feedback * rhs);

/// Copy a action/RobotTrackingControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Feedback__copy(
  const interface_rb10_apple__action__RobotTrackingControl_Feedback * input,
  interface_rb10_apple__action__RobotTrackingControl_Feedback * output);

/// Initialize array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_rb10_apple__action__RobotTrackingControl_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence__init(interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence__fini(interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence * array);

/// Create array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the array and calls
 * interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence *
interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence__destroy(interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence * array);

/// Check for action/RobotTrackingControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence__are_equal(const interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence * lhs, const interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence * rhs);

/// Copy an array of action/RobotTrackingControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence__copy(
  const interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence * input,
  interface_rb10_apple__action__RobotTrackingControl_Feedback__Sequence * output);

/// Initialize action/RobotTrackingControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request
 * )) before or use
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__init(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request * msg);

/// Finalize action/RobotTrackingControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__fini(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request * msg);

/// Create action/RobotTrackingControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request *
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__create();

/// Destroy action/RobotTrackingControl message.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__destroy(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request * msg);

/// Check for action/RobotTrackingControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__are_equal(const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request * lhs, const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request * rhs);

/// Copy a action/RobotTrackingControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__copy(
  const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request * input,
  interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request * output);

/// Initialize array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence__init(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence__fini(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence * array);

/// Create array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the array and calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence *
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence__destroy(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence * array);

/// Check for action/RobotTrackingControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence__are_equal(const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence * lhs, const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RobotTrackingControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence__copy(
  const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence * input,
  interface_rb10_apple__action__RobotTrackingControl_SendGoal_Request__Sequence * output);

/// Initialize action/RobotTrackingControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response
 * )) before or use
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__init(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response * msg);

/// Finalize action/RobotTrackingControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__fini(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response * msg);

/// Create action/RobotTrackingControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response *
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__create();

/// Destroy action/RobotTrackingControl message.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__destroy(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response * msg);

/// Check for action/RobotTrackingControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__are_equal(const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response * lhs, const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response * rhs);

/// Copy a action/RobotTrackingControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__copy(
  const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response * input,
  interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response * output);

/// Initialize array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence__init(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence__fini(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence * array);

/// Create array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the array and calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence *
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence__destroy(interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence * array);

/// Check for action/RobotTrackingControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence__are_equal(const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence * lhs, const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RobotTrackingControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence__copy(
  const interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence * input,
  interface_rb10_apple__action__RobotTrackingControl_SendGoal_Response__Sequence * output);

/// Initialize action/RobotTrackingControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Request
 * )) before or use
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__init(interface_rb10_apple__action__RobotTrackingControl_GetResult_Request * msg);

/// Finalize action/RobotTrackingControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__fini(interface_rb10_apple__action__RobotTrackingControl_GetResult_Request * msg);

/// Create action/RobotTrackingControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request *
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__create();

/// Destroy action/RobotTrackingControl message.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__destroy(interface_rb10_apple__action__RobotTrackingControl_GetResult_Request * msg);

/// Check for action/RobotTrackingControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__are_equal(const interface_rb10_apple__action__RobotTrackingControl_GetResult_Request * lhs, const interface_rb10_apple__action__RobotTrackingControl_GetResult_Request * rhs);

/// Copy a action/RobotTrackingControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__copy(
  const interface_rb10_apple__action__RobotTrackingControl_GetResult_Request * input,
  interface_rb10_apple__action__RobotTrackingControl_GetResult_Request * output);

/// Initialize array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence__init(interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence__fini(interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence * array);

/// Create array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the array and calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence *
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence__destroy(interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence * array);

/// Check for action/RobotTrackingControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence__are_equal(const interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence * lhs, const interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RobotTrackingControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence__copy(
  const interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence * input,
  interface_rb10_apple__action__RobotTrackingControl_GetResult_Request__Sequence * output);

/// Initialize action/RobotTrackingControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Response
 * )) before or use
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__init(interface_rb10_apple__action__RobotTrackingControl_GetResult_Response * msg);

/// Finalize action/RobotTrackingControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__fini(interface_rb10_apple__action__RobotTrackingControl_GetResult_Response * msg);

/// Create action/RobotTrackingControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response *
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__create();

/// Destroy action/RobotTrackingControl message.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__destroy(interface_rb10_apple__action__RobotTrackingControl_GetResult_Response * msg);

/// Check for action/RobotTrackingControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__are_equal(const interface_rb10_apple__action__RobotTrackingControl_GetResult_Response * lhs, const interface_rb10_apple__action__RobotTrackingControl_GetResult_Response * rhs);

/// Copy a action/RobotTrackingControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__copy(
  const interface_rb10_apple__action__RobotTrackingControl_GetResult_Response * input,
  interface_rb10_apple__action__RobotTrackingControl_GetResult_Response * output);

/// Initialize array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence__init(interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence__fini(interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence * array);

/// Create array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the array and calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence *
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence__destroy(interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence * array);

/// Check for action/RobotTrackingControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence__are_equal(const interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence * lhs, const interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RobotTrackingControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence__copy(
  const interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence * input,
  interface_rb10_apple__action__RobotTrackingControl_GetResult_Response__Sequence * output);

/// Initialize action/RobotTrackingControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage
 * )) before or use
 * interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__init(interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage * msg);

/// Finalize action/RobotTrackingControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__fini(interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage * msg);

/// Create action/RobotTrackingControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage *
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__create();

/// Destroy action/RobotTrackingControl message.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__destroy(interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage * msg);

/// Check for action/RobotTrackingControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__are_equal(const interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage * lhs, const interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage * rhs);

/// Copy a action/RobotTrackingControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__copy(
  const interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage * input,
  interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage * output);

/// Initialize array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence__init(interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence__fini(interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence * array);

/// Create array of action/RobotTrackingControl messages.
/**
 * It allocates the memory for the array and calls
 * interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence *
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RobotTrackingControl messages.
/**
 * It calls
 * interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
void
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence__destroy(interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence * array);

/// Check for action/RobotTrackingControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence__are_equal(const interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence * lhs, const interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RobotTrackingControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_rb10_apple
bool
interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence__copy(
  const interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence * input,
  interface_rb10_apple__action__RobotTrackingControl_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TRACKING_CONTROL__FUNCTIONS_H_
