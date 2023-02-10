// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/Myuv.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__MYUV__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__MYUV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/Myuv in the package my_interfaces.
typedef struct my_interfaces__msg__Myuv
{
  builtin_interfaces__msg__Time stamp;
  double u;
  double v;
} my_interfaces__msg__Myuv;

// Struct for a sequence of my_interfaces__msg__Myuv.
typedef struct my_interfaces__msg__Myuv__Sequence
{
  my_interfaces__msg__Myuv * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__Myuv__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__MYUV__STRUCT_H_
