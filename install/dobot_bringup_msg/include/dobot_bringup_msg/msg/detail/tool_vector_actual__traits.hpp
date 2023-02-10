// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_bringup_msg:msg/ToolVectorActual.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_MSG__MSG__DETAIL__TOOL_VECTOR_ACTUAL__TRAITS_HPP_
#define DOBOT_BRINGUP_MSG__MSG__DETAIL__TOOL_VECTOR_ACTUAL__TRAITS_HPP_

#include "dobot_bringup_msg/msg/detail/tool_vector_actual__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_bringup_msg::msg::ToolVectorActual>()
{
  return "dobot_bringup_msg::msg::ToolVectorActual";
}

template<>
inline const char * name<dobot_bringup_msg::msg::ToolVectorActual>()
{
  return "dobot_bringup_msg/msg/ToolVectorActual";
}

template<>
struct has_fixed_size<dobot_bringup_msg::msg::ToolVectorActual>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_bringup_msg::msg::ToolVectorActual>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_bringup_msg::msg::ToolVectorActual>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_BRINGUP_MSG__MSG__DETAIL__TOOL_VECTOR_ACTUAL__TRAITS_HPP_
