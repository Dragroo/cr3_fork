// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dobot_bringup_srv:srv/MoveJog.idl
// generated code does not contain a copyright notice
#include "dobot_bringup_srv/srv/detail/move_jog__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dobot_bringup_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_bringup_srv/srv/detail/move_jog__struct.h"
#include "dobot_bringup_srv/srv/detail/move_jog__functions.h"
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

#include "rosidl_runtime_c/string.h"  // axisid
#include "rosidl_runtime_c/string_functions.h"  // axisid

// forward declare type support functions


using _MoveJog_Request__ros_msg_type = dobot_bringup_srv__srv__MoveJog_Request;

static bool _MoveJog_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoveJog_Request__ros_msg_type * ros_message = static_cast<const _MoveJog_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: axisid
  {
    const rosidl_runtime_c__String * str = &ros_message->axisid;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MoveJog_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoveJog_Request__ros_msg_type * ros_message = static_cast<_MoveJog_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: axisid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->axisid.data) {
      rosidl_runtime_c__String__init(&ros_message->axisid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->axisid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'axisid'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_srv
size_t get_serialized_size_dobot_bringup_srv__srv__MoveJog_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveJog_Request__ros_msg_type * ros_message = static_cast<const _MoveJog_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name axisid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->axisid.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MoveJog_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_bringup_srv__srv__MoveJog_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_srv
size_t max_serialized_size_dobot_bringup_srv__srv__MoveJog_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: axisid
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MoveJog_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dobot_bringup_srv__srv__MoveJog_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MoveJog_Request = {
  "dobot_bringup_srv::srv",
  "MoveJog_Request",
  _MoveJog_Request__cdr_serialize,
  _MoveJog_Request__cdr_deserialize,
  _MoveJog_Request__get_serialized_size,
  _MoveJog_Request__max_serialized_size
};

static rosidl_message_type_support_t _MoveJog_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveJog_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, MoveJog_Request)() {
  return &_MoveJog_Request__type_support;
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
// #include "dobot_bringup_srv/srv/detail/move_jog__struct.h"
// already included above
// #include "dobot_bringup_srv/srv/detail/move_jog__functions.h"
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


using _MoveJog_Response__ros_msg_type = dobot_bringup_srv__srv__MoveJog_Response;

static bool _MoveJog_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoveJog_Response__ros_msg_type * ros_message = static_cast<const _MoveJog_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    cdr << ros_message->res;
  }

  return true;
}

static bool _MoveJog_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoveJog_Response__ros_msg_type * ros_message = static_cast<_MoveJog_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    cdr >> ros_message->res;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_srv
size_t get_serialized_size_dobot_bringup_srv__srv__MoveJog_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveJog_Response__ros_msg_type * ros_message = static_cast<const _MoveJog_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _MoveJog_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_bringup_srv__srv__MoveJog_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_srv
size_t max_serialized_size_dobot_bringup_srv__srv__MoveJog_Response(
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

static size_t _MoveJog_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dobot_bringup_srv__srv__MoveJog_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MoveJog_Response = {
  "dobot_bringup_srv::srv",
  "MoveJog_Response",
  _MoveJog_Response__cdr_serialize,
  _MoveJog_Response__cdr_deserialize,
  _MoveJog_Response__get_serialized_size,
  _MoveJog_Response__max_serialized_size
};

static rosidl_message_type_support_t _MoveJog_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveJog_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, MoveJog_Response)() {
  return &_MoveJog_Response__type_support;
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
#include "dobot_bringup_srv/srv/move_jog.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MoveJog__callbacks = {
  "dobot_bringup_srv::srv",
  "MoveJog",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, MoveJog_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, MoveJog_Response)(),
};

static rosidl_service_type_support_t MoveJog__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MoveJog__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_bringup_srv, srv, MoveJog)() {
  return &MoveJog__handle;
}

#if defined(__cplusplus)
}
#endif
