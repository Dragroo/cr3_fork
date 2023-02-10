// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_bringup_srv:srv/GetHoldRegs.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__GET_HOLD_REGS__STRUCT_H_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__GET_HOLD_REGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetHoldRegs in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__GetHoldRegs_Request
{
  int32_t id;
  int32_t addr;
  int32_t count;
  int32_t type;
} dobot_bringup_srv__srv__GetHoldRegs_Request;

// Struct for a sequence of dobot_bringup_srv__srv__GetHoldRegs_Request.
typedef struct dobot_bringup_srv__srv__GetHoldRegs_Request__Sequence
{
  dobot_bringup_srv__srv__GetHoldRegs_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__GetHoldRegs_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'regs'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/GetHoldRegs in the package dobot_bringup_srv.
typedef struct dobot_bringup_srv__srv__GetHoldRegs_Response
{
  rosidl_runtime_c__int32__Sequence regs;
} dobot_bringup_srv__srv__GetHoldRegs_Response;

// Struct for a sequence of dobot_bringup_srv__srv__GetHoldRegs_Response.
typedef struct dobot_bringup_srv__srv__GetHoldRegs_Response__Sequence
{
  dobot_bringup_srv__srv__GetHoldRegs_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_srv__srv__GetHoldRegs_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__GET_HOLD_REGS__STRUCT_H_
