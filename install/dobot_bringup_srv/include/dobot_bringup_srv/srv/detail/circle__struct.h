// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_bringup_srv:srv/Circle.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__CIRCLE__STRUCT_H_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__CIRCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Circle in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__Circle_Request
{
  int32_t count;
  double x1;
  double y1;
  double z1;
  double rx1;
  double ry1;
  double rz1;
  double x2;
  double y2;
  double z2;
  double rx2;
  double ry2;
  double rz2;
} dobot_bringup_srv__srv__Circle_Request;

// Struct for a sequence of dobot_bringup_srv__srv__Circle_Request.
typedef struct dobot_bringup_srv__srv__Circle_Request__Sequence
{
  dobot_bringup_srv__srv__Circle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__Circle_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Circle in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__Circle_Response
{
  int32_t res;
} dobot_bringup_srv__srv__Circle_Response;

// Struct for a sequence of dobot_bringup_srv__srv__Circle_Response.
typedef struct dobot_bringup_srv__srv__Circle_Response__Sequence
{
  dobot_bringup_srv__srv__Circle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__Circle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__CIRCLE__STRUCT_H_
