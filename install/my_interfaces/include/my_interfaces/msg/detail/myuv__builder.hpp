// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/Myuv.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__MYUV__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__MYUV__BUILDER_HPP_

#include "my_interfaces/msg/detail/myuv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_Myuv_v
{
public:
  explicit Init_Myuv_v(::my_interfaces::msg::Myuv & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::Myuv v(::my_interfaces::msg::Myuv::_v_type arg)
  {
    msg_.v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::Myuv msg_;
};

class Init_Myuv_u
{
public:
  explicit Init_Myuv_u(::my_interfaces::msg::Myuv & msg)
  : msg_(msg)
  {}
  Init_Myuv_v u(::my_interfaces::msg::Myuv::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_Myuv_v(msg_);
  }

private:
  ::my_interfaces::msg::Myuv msg_;
};

class Init_Myuv_stamp
{
public:
  Init_Myuv_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Myuv_u stamp(::my_interfaces::msg::Myuv::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Myuv_u(msg_);
  }

private:
  ::my_interfaces::msg::Myuv msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::Myuv>()
{
  return my_interfaces::msg::builder::Init_Myuv_stamp();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__MYUV__BUILDER_HPP_
