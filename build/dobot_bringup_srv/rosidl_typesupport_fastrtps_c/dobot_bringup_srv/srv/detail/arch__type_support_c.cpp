// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dobot_bringup_srv:srv/Arch.idl
// generated code does not contain a copyright notice
#include "dobot_bringup_srv/srv/detail/arch__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dobot_bringup_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_bringup_srv/srv/detail/arch__struct.h"
#include "dobot_bringup_srv/srv/detail/arch__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Arch_Request__ros_msg_type = dobot_bringup_srv__srv__Arch_Request;

static bool _Arch_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Arch_Request__ros_msg_type * ros_message = static_cast<const _Arch_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: index
  {
    cdr << ros_message->index;
  }

  return true;
}

static bool _Arch_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Arch_Request__ros_msg_type * ros_message = static_cast<_Arch_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: index
  {
    cdr >> ros_message->index;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_srv
size_t get_serialized_size_dobot_bringup_srv__srv__Arch_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Arch_Request__ros_msg_type * ros_message = static_cast<const _Arch_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name index
  {
    size_t item_size = sizeof(ros_message->index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Arch_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_bringup_srv__srv__Arch_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_srv
size_t max_serialized_size_dobot_bringup_srv__srv__Arch_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Arch_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dobot_bringup_srv__srv__Arch_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Arch_Request = {
  "dobot_bringup_srv::srv",
  "Arch_Request",
  _Arch_Request__cdr_serialize,
  _Arch_Request__cdr_deserialize,
  _Arch_Request__get_serialized_size,
  _Arch_Request__max_serialized_size
};

static rosidl_message_type_support_t _Arch_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Arch_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, Arch_Request)() {
  return &_Arch_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dobot_bringup_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_bringup_srv/srv/detail/arch__struct.h"
// already included above
// #include "dobot_bringup_srv/srv/detail/arch__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Arch_Response__ros_msg_type = dobot_bringup_srv__srv__Arch_Response;

static bool _Arch_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Arch_Response__ros_msg_type * ros_message = static_cast<const _Arch_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    cdr << ros_message->res;
  }

  return true;
}

static bool _Arch_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Arch_Response__ros_msg_type * ros_message = static_cast<_Arch_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    cdr >> ros_message->res;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_srv
size_t get_serialized_size_dobot_bringup_srv__srv__Arch_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Arch_Response__ros_msg_type * ros_message = static_cast<const _Arch_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name res
  {
    size_t item_size = sizeof(ros_message->res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Arch_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_bringup_srv__srv__Arch_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_srv
size_t max_serialized_size_dobot_bringup_srv__srv__Arch_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: res
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Arch_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dobot_bringup_srv__srv__Arch_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Arch_Response = {
  "dobot_bringup_srv::srv",
  "Arch_Response",
  _Arch_Response__cdr_serialize,
  _Arch_Response__cdr_deserialize,
  _Arch_Response__get_serialized_size,
  _Arch_Response__max_serialized_size
};

static rosidl_message_type_support_t _Arch_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Arch_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, Arch_Response)() {
  return &_Arch_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dobot_bringup_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_bringup_srv/srv/arch.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Arch__callbacks = {
  "dobot_bringup_srv::srv",
  "Arch",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, Arch_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, Arch_Response)(),
};

static rosidl_service_type_support_t Arch__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Arch__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, Arch)() {
  return &Arch__handle;
}

#if defined(__cplusplus)
}
#endif
