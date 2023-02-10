// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_bringup_srv:srv/SetArmOrientation.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_ARM_ORIENTATION__TRAITS_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_ARM_ORIENTATION__TRAITS_HPP_

#include "dobot_bringup_srv/srv/detail/set_arm_orientation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_srv::srv::SetArmOrientation_Request>()
{
  return "dobot_bringup_srv::srv::SetArmOrientation_Request";
}

template<>
inline const char * name<dobot_bringup_srv::srv::SetArmOrientation_Request>()
{
  return "dobot_bringup_srv/srv/SetArmOrientation_Request";
}

template<>
struct has_fixed_size<dobot_bringup_srv::srv::SetArmOrientation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_bringup_srv::srv::SetArmOrientation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_bringup_srv::srv::SetArmOrientation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_srv::srv::SetArmOrientation_Response>()
{
  return "dobot_bringup_srv::srv::SetArmOrientation_Response";
}

template<>
inline const char * name<dobot_bringup_srv::srv::SetArmOrientation_Response>()
{
  return "dobot_bringup_srv/srv/SetArmOrientation_Response";
}

template<>
struct has_fixed_size<dobot_bringup_srv::srv::SetArmOrientation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_bringup_srv::srv::SetArmOrientation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_bringup_srv::srv::SetArmOrientation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_srv::srv::SetArmOrientation>()
{
  return "dobot_bringup_srv::srv::SetArmOrientation";
}

template<>
inline const char * name<dobot_bringup_srv::srv::SetArmOrientation>()
{
  return "dobot_bringup_srv/srv/SetArmOrientation";
}

template<>
struct has_fixed_size<dobot_bringup_srv::srv::SetArmOrientation>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_bringup_srv::srv::SetArmOrientation_Request>::value &&
    has_fixed_size<dobot_bringup_srv::srv::SetArmOrientation_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_bringup_srv::srv::SetArmOrientation>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_bringup_srv::srv::SetArmOrientation_Request>::value &&
    has_bounded_size<dobot_bringup_srv::srv::SetArmOrientation_Response>::value
  >
{
};

template<>
struct is_service<dobot_bringup_srv::srv::SetArmOrientation>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_bringup_srv::srv::SetArmOrientation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_bringup_srv::srv::SetArmOrientation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_ARM_ORIENTATION__TRAITS_HPP_
