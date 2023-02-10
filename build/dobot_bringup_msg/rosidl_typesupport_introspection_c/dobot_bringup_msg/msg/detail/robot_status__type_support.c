// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot_bringup_msg:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot_bringup_msg/msg/detail/robot_status__rosidl_typesupport_introspection_c.h"
#include "dobot_bringup_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot_bringup_msg/msg/detail/robot_status__functions.h"
#include "dobot_bringup_msg/msg/detail/robot_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_bringup_msg__msg__RobotStatus__init(message_memory);
}

void RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_fini_function(void * message_memory)
{
  dobot_bringup_msg__msg__RobotStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_message_member_array[2] = {
  {
    "is_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_msg__msg__RobotStatus, is_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_connected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_msg__msg__RobotStatus, is_connected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_message_members = {
  "dobot_bringup_msg__msg",  // message namespace
  "RobotStatus",  // message name
  2,  // number of fields
  sizeof(dobot_bringup_msg__msg__RobotStatus),
  RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_message_member_array,  // message members
  RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_message_type_support_handle = {
  0,
  &RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_bringup_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_bringup_msg, msg, RobotStatus)() {
  if (!RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_message_type_support_handle.typesupport_identifier) {
    RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotStatus__rosidl_typesupport_introspection_c__RobotStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
