// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_bringup_srv:srv/RelMovJ.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_J__STRUCT_H_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_J__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/RelMovJ in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__RelMovJ_Request
{
  double offset1;
  double offset2;
  double offset3;
  double offset4;
  double offset5;
  double offset6;
} dobot_bringup_srv__srv__RelMovJ_Request;

// Struct for a sequence of dobot_bringup_srv__srv__RelMovJ_Request.
typedef struct dobot_bringup_srv__srv__RelMovJ_Request__Sequence
{
  dobot_bringup_srv__srv__RelMovJ_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__RelMovJ_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RelMovJ in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__RelMovJ_Response
{
  int32_t res;
} dobot_bringup_srv__srv__RelMovJ_Response;

// Struct for a sequence of dobot_bringup_srv__srv__RelMovJ_Response.
typedef struct dobot_bringup_srv__srv__RelMovJ_Response__Sequence
{
  dobot_bringup_srv__srv__RelMovJ_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__RelMovJ_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_J__STRUCT_H_
