// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_bringup_srv:srv/Arc.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__ARC__STRUCT_H_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__ARC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Arc in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__Arc_Request
{
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
} dobot_bringup_srv__srv__Arc_Request;

// Struct for a sequence of dobot_bringup_srv__srv__Arc_Request.
typedef struct dobot_bringup_srv__srv__Arc_Request__Sequence
{
  dobot_bringup_srv__srv__Arc_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__Arc_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Arc in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__Arc_Response
{
  int32_t res;
} dobot_bringup_srv__srv__Arc_Response;

// Struct for a sequence of dobot_bringup_srv__srv__Arc_Response.
typedef struct dobot_bringup_srv__srv__Arc_Response__Sequence
{
  dobot_bringup_srv__srv__Arc_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__Arc_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__ARC__STRUCT_H_
