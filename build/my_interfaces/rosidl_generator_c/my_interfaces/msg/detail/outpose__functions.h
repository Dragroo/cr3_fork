// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_interfaces:msg/Outpose.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__OUTPOSE__FUNCTIONS_H_
#define MY_INTERFACES__MSG__DETAIL__OUTPOSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_interfaces/msg/detail/outpose__struct.h"

/// Initialize msg/Outpose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces__msg__Outpose
 * )) before or use
 * my_interfaces__msg__Outpose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__Outpose__init(my_interfaces__msg__Outpose * msg);

/// Finalize msg/Outpose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__Outpose__fini(my_interfaces__msg__Outpose * msg);

/// Create msg/Outpose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces__msg__Outpose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
my_interfaces__msg__Outpose *
my_interfaces__msg__Outpose__create();

/// Destroy msg/Outpose message.
/**
 * It calls
 * my_interfaces__msg__Outpose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__Outpose__destroy(my_interfaces__msg__Outpose * msg);

/// Check for msg/Outpose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__Outpose__are_equal(const my_interfaces__msg__Outpose * lhs, const my_interfaces__msg__Outpose * rhs);

/// Copy a msg/Outpose message.
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
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__Outpose__copy(
  const my_interfaces__msg__Outpose * input,
  my_interfaces__msg__Outpose * output);

/// Initialize array of msg/Outpose messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces__msg__Outpose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__Outpose__Sequence__init(my_interfaces__msg__Outpose__Sequence * array, size_t size);

/// Finalize array of msg/Outpose messages.
/**
 * It calls
 * my_interfaces__msg__Outpose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__Outpose__Sequence__fini(my_interfaces__msg__Outpose__Sequence * array);

/// Create array of msg/Outpose messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces__msg__Outpose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
my_interfaces__msg__Outpose__Sequence *
my_interfaces__msg__Outpose__Sequence__create(size_t size);

/// Destroy array of msg/Outpose messages.
/**
 * It calls
 * my_interfaces__msg__Outpose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__Outpose__Sequence__destroy(my_interfaces__msg__Outpose__Sequence * array);

/// Check for msg/Outpose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__Outpose__Sequence__are_equal(const my_interfaces__msg__Outpose__Sequence * lhs, const my_interfaces__msg__Outpose__Sequence * rhs);

/// Copy an array of msg/Outpose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__Outpose__Sequence__copy(
  const my_interfaces__msg__Outpose__Sequence * input,
  my_interfaces__msg__Outpose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__OUTPOSE__FUNCTIONS_H_
