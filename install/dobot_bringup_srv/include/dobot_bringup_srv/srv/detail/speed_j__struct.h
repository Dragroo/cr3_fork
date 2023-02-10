// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_bringup_srv:srv/SpeedJ.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__SPEED_J__STRUCT_H_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__SPEED_J__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SpeedJ in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__SpeedJ_Request
{
  int32_t r;
} dobot_bringup_srv__srv__SpeedJ_Request;

// Struct for a sequence of dobot_bringup_srv__srv__SpeedJ_Request.
typedef struct dobot_bringup_srv__srv__SpeedJ_Request__Sequence
{
  dobot_bringup_srv__srv__SpeedJ_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__SpeedJ_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SpeedJ in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__SpeedJ_Response
{
  int32_t res;
} dobot_bringup_srv__srv__SpeedJ_Response;

// Struct for a sequence of dobot_bringup_srv__srv__SpeedJ_Response.
typedef struct dobot_bringup_srv__srv__SpeedJ_Response__Sequence
{
  dobot_bringup_srv__srv__SpeedJ_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__SpeedJ_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__SPEED_J__STRUCT_H_
