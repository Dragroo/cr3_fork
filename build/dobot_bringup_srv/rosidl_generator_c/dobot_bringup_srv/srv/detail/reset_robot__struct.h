// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_bringup_srv:srv/ResetRobot.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__RESET_ROBOT__STRUCT_H_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__RESET_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ResetRobot in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__ResetRobot_Request
{
  uint8_t structure_needs_at_least_one_member;
} dobot_bringup_srv__srv__ResetRobot_Request;

// Struct for a sequence of dobot_bringup_srv__srv__ResetRobot_Request.
typedef struct dobot_bringup_srv__srv__ResetRobot_Request__Sequence
{
  dobot_bringup_srv__srv__ResetRobot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__ResetRobot_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ResetRobot in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__ResetRobot_Response
{
  int32_t res;
} dobot_bringup_srv__srv__ResetRobot_Response;

// Struct for a sequence of dobot_bringup_srv__srv__ResetRobot_Response.
typedef struct dobot_bringup_srv__srv__ResetRobot_Response__Sequence
{
  dobot_bringup_srv__srv__ResetRobot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__ResetRobot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__RESET_ROBOT__STRUCT_H_
