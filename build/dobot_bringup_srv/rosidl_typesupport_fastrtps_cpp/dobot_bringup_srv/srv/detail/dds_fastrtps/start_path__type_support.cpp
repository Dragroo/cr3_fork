// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dobot_bringup_srv:srv/StartPath.idl
// generated code does not contain a copyright notice
#include "dobot_bringup_srv/srv/detail/start_path__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dobot_bringup_srv/srv/detail/start_path__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dobot_bringup_srv
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
cdr_serialize(
  const dobot_bringup_srv::srv::StartPath_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trace_name
  cdr << ros_message.trace_name;
  // Member: const_val
  cdr << ros_message.const_val;
  // Member: cart
  cdr << ros_message.cart;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dobot_bringup_srv::srv::StartPath_Request & ros_message)
{
  // Member: trace_name
  cdr >> ros_message.trace_name;

  // Member: const_val
  cdr >> ros_message.const_val;

  // Member: cart
  cdr >> ros_message.cart;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
get_serialized_size(
  const dobot_bringup_srv::srv::StartPath_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trace_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.trace_name.size() + 1);
  // Member: const_val
  {
    size_t item_size = sizeof(ros_message.const_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart
  {
    size_t item_size = sizeof(ros_message.cart);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
max_serialized_size_StartPath_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: trace_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: const_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cart
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _StartPath_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dobot_bringup_srv::srv::StartPath_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StartPath_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dobot_bringup_srv::srv::StartPath_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StartPath_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dobot_bringup_srv::srv::StartPath_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StartPath_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_StartPath_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _StartPath_Request__callbacks = {
  "dobot_bringup_srv::srv",
  "StartPath_Request",
  _StartPath_Request__cdr_serialize,
  _StartPath_Request__cdr_deserialize,
  _StartPath_Request__get_serialized_size,
  _StartPath_Request__max_serialized_size
};

static rosidl_message_type_support_t _StartPath_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartPath_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dobot_bringup_srv

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dobot_bringup_srv
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_bringup_srv::srv::StartPath_Request>()
{
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_StartPath_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, StartPath_Request)() {
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_StartPath_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dobot_bringup_srv
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
cdr_serialize(
  const dobot_bringup_srv::srv::StartPath_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: res
  cdr << ros_message.res;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dobot_bringup_srv::srv::StartPath_Response & ros_message)
{
  // Member: res
  cdr >> ros_message.res;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
get_serialized_size(
  const dobot_bringup_srv::srv::StartPath_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: res
  {
    size_t item_size = sizeof(ros_message.res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
max_serialized_size_StartPath_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: res
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _StartPath_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dobot_bringup_srv::srv::StartPath_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StartPath_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dobot_bringup_srv::srv::StartPath_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StartPath_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dobot_bringup_srv::srv::StartPath_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StartPath_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_StartPath_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _StartPath_Response__callbacks = {
  "dobot_bringup_srv::srv",
  "StartPath_Response",
  _StartPath_Response__cdr_serialize,
  _StartPath_Response__cdr_deserialize,
  _StartPath_Response__get_serialized_size,
  _StartPath_Response__max_serialized_size
};

static rosidl_message_type_support_t _StartPath_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartPath_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dobot_bringup_srv

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dobot_bringup_srv
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_bringup_srv::srv::StartPath_Response>()
{
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_StartPath_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, StartPath_Response)() {
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_StartPath_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace dobot_bringup_srv
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _StartPath__callbacks = {
  "dobot_bringup_srv::srv",
  "StartPath",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, StartPath_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, StartPath_Response)(),
};

static rosidl_service_type_support_t _StartPath__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartPath__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dobot_bringup_srv

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dobot_bringup_srv
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_bringup_srv::srv::StartPath>()
{
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_StartPath__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, StartPath)() {
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_StartPath__handle;
}

#ifdef __cplusplus
}
#endif
