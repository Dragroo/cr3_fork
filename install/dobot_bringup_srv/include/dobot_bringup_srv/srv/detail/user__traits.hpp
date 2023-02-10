// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_bringup_srv:srv/User.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__USER__TRAITS_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__USER__TRAITS_HPP_

#include "dobot_bringup_srv/srv/detail/user__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_srv::srv::User_Request>()
{
  return "dobot_bringup_srv::srv::User_Request";
}

template<>
inline const char * name<dobot_bringup_srv::srv::User_Request>()
{
  return "dobot_bringup_srv/srv/User_Request";
}

template<>
struct has_fixed_size<dobot_bringup_srv::srv::User_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_bringup_srv::srv::User_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_bringup_srv::srv::User_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_srv::srv::User_Response>()
{
  return "dobot_bringup_srv::srv::User_Response";
}

template<>
inline const char * name<dobot_bringup_srv::srv::User_Response>()
{
  return "dobot_bringup_srv/srv/User_Response";
}

template<>
struct has_fixed_size<dobot_bringup_srv::srv::User_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_bringup_srv::srv::User_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_bringup_srv::srv::User_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_srv::srv::User>()
{
  return "dobot_bringup_srv::srv::User";
}

template<>
inline const char * name<dobot_bringup_srv::srv::User>()
{
  return "dobot_bringup_srv/srv/User";
}

template<>
struct has_fixed_size<dobot_bringup_srv::srv::User>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_bringup_srv::srv::User_Request>::value &&
    has_fixed_size<dobot_bringup_srv::srv::User_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_bringup_srv::srv::User>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_bringup_srv::srv::User_Request>::value &&
    has_bounded_size<dobot_bringup_srv::srv::User_Response>::value
  >
{
};

template<>
struct is_service<dobot_bringup_srv::srv::User>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_bringup_srv::srv::User_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_bringup_srv::srv::User_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__USER__TRAITS_HPP_
