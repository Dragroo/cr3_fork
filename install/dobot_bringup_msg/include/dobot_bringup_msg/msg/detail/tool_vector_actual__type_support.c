// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot_bringup_msg:msg/ToolVectorActual.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot_bringup_msg/msg/detail/tool_vector_actual__rosidl_typesupport_introspection_c.h"
#include "dobot_bringup_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot_bringup_msg/msg/detail/tool_vector_actual__functions.h"
#include "dobot_bringup_msg/msg/detail/tool_vector_actual__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_bringup_msg__msg__ToolVectorActual__init(message_memory);
}

void ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_fini_function(void * message_memory)
{
  dobot_bringup_msg__msg__ToolVectorActual__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_msg__msg__ToolVectorActual, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_msg__msg__ToolVectorActual, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_msg__msg__ToolVectorActual, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_msg__msg__ToolVectorActual, rx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_msg__msg__ToolVectorActual, ry),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_msg__msg__ToolVectorActual, rz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_message_members = {
  "dobot_bringup_msg__msg",  // message namespace
  "ToolVectorActual",  // message name
  6,  // number of fields
  sizeof(dobot_bringup_msg__msg__ToolVectorActual),
  ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_message_member_array,  // message members
  ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_init_function,  // function to initialize message memory (memory has to be allocated)
  ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_message_type_support_handle = {
  0,
  &ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_bringup_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_bringup_msg, msg, ToolVectorActual)() {
  if (!ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_message_type_support_handle.typesupport_identifier) {
    ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ToolVectorActual__rosidl_typesupport_introspection_c__ToolVectorActual_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
