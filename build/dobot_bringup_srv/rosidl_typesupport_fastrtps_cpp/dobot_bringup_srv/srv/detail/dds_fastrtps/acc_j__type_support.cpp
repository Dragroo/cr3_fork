// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dobot_bringup_srv:srv/AccJ.idl
// generated code does not contain a copyright notice
#include "dobot_bringup_srv/srv/detail/acc_j__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dobot_bringup_srv/srv/detail/acc_j__struct.hpp"

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
  const dobot_bringup_srv::srv::AccJ_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: r
  cdr << ros_message.r;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dobot_bringup_srv::srv::AccJ_Request & ros_message)
{
  // Member: r
  cdr >> ros_message.r;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
get_serialized_size(
  const dobot_bringup_srv::srv::AccJ_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: r
  {
    size_t item_size = sizeof(ros_message.r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
max_serialized_size_AccJ_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _AccJ_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dobot_bringup_srv::srv::AccJ_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AccJ_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dobot_bringup_srv::srv::AccJ_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AccJ_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dobot_bringup_srv::srv::AccJ_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AccJ_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AccJ_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AccJ_Request__callbacks = {
  "dobot_bringup_srv::srv",
  "AccJ_Request",
  _AccJ_Request__cdr_serialize,
  _AccJ_Request__cdr_deserialize,
  _AccJ_Request__get_serialized_size,
  _AccJ_Request__max_serialized_size
};

static rosidl_message_type_support_t _AccJ_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AccJ_Request__callbacks,
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
get_message_type_support_handle<dobot_bringup_srv::srv::AccJ_Request>()
{
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_AccJ_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, AccJ_Request)() {
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_AccJ_Request__handle;
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
  const dobot_bringup_srv::srv::AccJ_Response & ros_message,
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
  dobot_bringup_srv::srv::AccJ_Response & ros_message)
{
  // Member: res
  cdr >> ros_message.res;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_bringup_srv
get_serialized_size(
  const dobot_bringup_srv::srv::AccJ_Response & ros_message,
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
max_serialized_size_AccJ_Response(
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

static bool _AccJ_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dobot_bringup_srv::srv::AccJ_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AccJ_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dobot_bringup_srv::srv::AccJ_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AccJ_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dobot_bringup_srv::srv::AccJ_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AccJ_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AccJ_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AccJ_Response__callbacks = {
  "dobot_bringup_srv::srv",
  "AccJ_Response",
  _AccJ_Response__cdr_serialize,
  _AccJ_Response__cdr_deserialize,
  _AccJ_Response__get_serialized_size,
  _AccJ_Response__max_serialized_size
};

static rosidl_message_type_support_t _AccJ_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AccJ_Response__callbacks,
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
get_message_type_support_handle<dobot_bringup_srv::srv::AccJ_Response>()
{
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_AccJ_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, AccJ_Response)() {
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_AccJ_Response__handle;
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

static service_type_support_callbacks_t _AccJ__callbacks = {
  "dobot_bringup_srv::srv",
  "AccJ",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, AccJ_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, AccJ_Response)(),
};

static rosidl_service_type_support_t _AccJ__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AccJ__callbacks,
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
get_service_type_support_handle<dobot_bringup_srv::srv::AccJ>()
{
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_AccJ__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_bringup_srv, srv, AccJ)() {
  return &dobot_bringup_srv::srv::typesupport_fastrtps_cpp::_AccJ__handle;
}

#ifdef __cplusplus
}
#endif
