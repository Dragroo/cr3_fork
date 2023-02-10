// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot_bringup_srv:srv/ToolDO.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot_bringup_srv/srv/detail/tool_do__rosidl_typesupport_introspection_c.h"
#include "dobot_bringup_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot_bringup_srv/srv/detail/tool_do__functions.h"
#include "dobot_bringup_srv/srv/detail/tool_do__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_bringup_srv__srv__ToolDO_Request__init(message_memory);
}

void ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_fini_function(void * message_memory)
{
  dobot_bringup_srv__srv__ToolDO_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_message_member_array[2] = {
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_srv__srv__ToolDO_Request, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_srv__srv__ToolDO_Request, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_message_members = {
  "dobot_bringup_srv__srv",  // message namespace
  "ToolDO_Request",  // message name
  2,  // number of fields
  sizeof(dobot_bringup_srv__srv__ToolDO_Request),
  ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_message_member_array,  // message members
  ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_message_type_support_handle = {
  0,
  &ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_bringup_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_bringup_srv, srv, ToolDO_Request)() {
  if (!ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_message_type_support_handle.typesupport_identifier) {
    ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ToolDO_Request__rosidl_typesupport_introspection_c__ToolDO_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dobot_bringup_srv/srv/detail/tool_do__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dobot_bringup_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dobot_bringup_srv/srv/detail/tool_do__functions.h"
// already included above
// #include "dobot_bringup_srv/srv/detail/tool_do__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_bringup_srv__srv__ToolDO_Response__init(message_memory);
}

void ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_fini_function(void * message_memory)
{
  dobot_bringup_srv__srv__ToolDO_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_message_member_array[1] = {
  {
    "res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_bringup_srv__srv__ToolDO_Response, res),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_message_members = {
  "dobot_bringup_srv__srv",  // message namespace
  "ToolDO_Response",  // message name
  1,  // number of fields
  sizeof(dobot_bringup_srv__srv__ToolDO_Response),
  ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_message_member_array,  // message members
  ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_message_type_support_handle = {
  0,
  &ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_bringup_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_bringup_srv, srv, ToolDO_Response)() {
  if (!ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_message_type_support_handle.typesupport_identifier) {
    ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ToolDO_Response__rosidl_typesupport_introspection_c__ToolDO_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dobot_bringup_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dobot_bringup_srv/srv/detail/tool_do__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dobot_bringup_srv__srv__detail__tool_do__rosidl_typesupport_introspection_c__ToolDO_service_members = {
  "dobot_bringup_srv__srv",  // service namespace
  "ToolDO",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dobot_bringup_srv__srv__detail__tool_do__rosidl_typesupport_introspection_c__ToolDO_Request_message_type_support_handle,
  NULL  // response message
  // dobot_bringup_srv__srv__detail__tool_do__rosidl_typesupport_introspection_c__ToolDO_Response_message_type_support_handle
};

static rosidl_service_type_support_t dobot_bringup_srv__srv__detail__tool_do__rosidl_typesupport_introspection_c__ToolDO_service_type_support_handle = {
  0,
  &dobot_bringup_srv__srv__detail__tool_do__rosidl_typesupport_introspection_c__ToolDO_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_bringup_srv, srv, ToolDO_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_bringup_srv, srv, ToolDO_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_bringup_srv
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_bringup_srv, srv, ToolDO)() {
  if (!dobot_bringup_srv__srv__detail__tool_do__rosidl_typesupport_introspection_c__ToolDO_service_type_support_handle.typesupport_identifier) {
    dobot_bringup_srv__srv__detail__tool_do__rosidl_typesupport_introspection_c__ToolDO_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dobot_bringup_srv__srv__detail__tool_do__rosidl_typesupport_introspection_c__ToolDO_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_bringup_srv, srv, ToolDO_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_bringup_srv, srv, ToolDO_Response)()->data;
  }

  return &dobot_bringup_srv__srv__detail__tool_do__rosidl_typesupport_introspection_c__ToolDO_service_type_support_handle;
}
