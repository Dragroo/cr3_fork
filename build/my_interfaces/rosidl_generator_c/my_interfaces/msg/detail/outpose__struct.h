// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/Outpose.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__OUTPOSE__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__OUTPOSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Outpose in the package my_interfaces.
typedef struct my_interfaces__msg__Outpose
{
  double x;
  double y;
  double z;
  double rx;
  double ry;
  double rz;
} my_interfaces__msg__Outpose;

// Struct for a sequence of my_interfaces__msg__Outpose.
typedef struct my_interfaces__msg__Outpose__Sequence
{
  my_interfaces__msg__Outpose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__Outpose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__OUTPOSE__STRUCT_H_
