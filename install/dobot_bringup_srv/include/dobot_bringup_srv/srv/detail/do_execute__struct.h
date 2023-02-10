// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_bringup_srv:srv/DOExecute.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__DO_EXECUTE__STRUCT_H_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__DO_EXECUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/DOExecute in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__DOExecute_Request
{
  int32_t index;
  int32_t status;
} dobot_bringup_srv__srv__DOExecute_Request;

// Struct for a sequence of dobot_bringup_srv__srv__DOExecute_Request.
typedef struct dobot_bringup_srv__srv__DOExecute_Request__Sequence
{
  dobot_bringup_srv__srv__DOExecute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__DOExecute_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DOExecute in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__DOExecute_Response
{
  int32_t res;
} dobot_bringup_srv__srv__DOExecute_Response;

// Struct for a sequence of dobot_bringup_srv__srv__DOExecute_Response.
typedef struct dobot_bringup_srv__srv__DOExecute_Response__Sequence
{
  dobot_bringup_srv__srv__DOExecute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__DOExecute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__DO_EXECUTE__STRUCT_H_
