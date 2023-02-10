// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_bringup_srv:srv/RelMovL.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__TRAITS_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__TRAITS_HPP_

#include "dobot_bringup_srv/srv/detail/rel_mov_l__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_srv::srv::RelMovL_Request>()
{
  return "dobot_bringup_srv::srv::RelMovL_Request";
}

template<>
inline const char * name<dobot_bringup_srv::srv::RelMovL_Request>()
{
  return "dobot_bringup_srv/srv/RelMovL_Request";
}

template<>
struct has_fixed_size<dobot_bringup_srv::srv::RelMovL_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_bringup_srv::srv::RelMovL_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_bringup_srv::srv::RelMovL_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_srv::srv::RelMovL_Response>()
{
  return "dobot_bringup_srv::srv::RelMovL_Response";
}

template<>
inline const char * name<dobot_bringup_srv::srv::RelMovL_Response>()
{
  return "dobot_bringup_srv/srv/RelMovL_Response";
}

template<>
struct has_fixed_size<dobot_bringup_srv::srv::RelMovL_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_bringup_srv::srv::RelMovL_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_bringup_srv::srv::RelMovL_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_srv::srv::RelMovL>()
{
  return "dobot_bringup_srv::srv::RelMovL";
}

template<>
inline const char * name<dobot_bringup_srv::srv::RelMovL>()
{
  return "dobot_bringup_srv/srv/RelMovL";
}

template<>
struct has_fixed_size<dobot_bringup_srv::srv::RelMovL>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_bringup_srv::srv::RelMovL_Request>::value &&
    has_fixed_size<dobot_bringup_srv::srv::RelMovL_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_bringup_srv::srv::RelMovL>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_bringup_srv::srv::RelMovL_Request>::value &&
    has_bounded_size<dobot_bringup_srv::srv::RelMovL_Response>::value
  >
{
};

template<>
struct is_service<dobot_bringup_srv::srv::RelMovL>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_bringup_srv::srv::RelMovL_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_bringup_srv::srv::RelMovL_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__TRAITS_HPP_
