// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_bringup_srv:srv/RelMovL.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__STRUCT_H_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/RelMovL in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__RelMovL_Request
{
  double x;
  double y;
  double z;
} dobot_bringup_srv__srv__RelMovL_Request;

// Struct for a sequence of dobot_bringup_srv__srv__RelMovL_Request.
typedef struct dobot_bringup_srv__srv__RelMovL_Request__Sequence
{
  dobot_bringup_srv__srv__RelMovL_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__RelMovL_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RelMovL in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__RelMovL_Response
{
  int32_t res;
} dobot_bringup_srv__srv__RelMovL_Response;

// Struct for a sequence of dobot_bringup_srv__srv__RelMovL_Response.
typedef struct dobot_bringup_srv__srv__RelMovL_Response__Sequence
{
  dobot_bringup_srv__srv__RelMovL_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__RelMovL_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__STRUCT_H_
