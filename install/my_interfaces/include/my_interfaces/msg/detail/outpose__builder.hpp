// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/Outpose.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__OUTPOSE__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__OUTPOSE__BUILDER_HPP_

#include "my_interfaces/msg/detail/outpose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_Outpose_rz
{
public:
  explicit Init_Outpose_rz(::my_interfaces::msg::Outpose & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::Outpose rz(::my_interfaces::msg::Outpose::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::Outpose msg_;
};

class Init_Outpose_ry
{
public:
  explicit Init_Outpose_ry(::my_interfaces::msg::Outpose & msg)
  : msg_(msg)
  {}
  Init_Outpose_rz ry(::my_interfaces::msg::Outpose::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_Outpose_rz(msg_);
  }

private:
  ::my_interfaces::msg::Outpose msg_;
};

class Init_Outpose_rx
{
public:
  explicit Init_Outpose_rx(::my_interfaces::msg::Outpose & msg)
  : msg_(msg)
  {}
  Init_Outpose_ry rx(::my_interfaces::msg::Outpose::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_Outpose_ry(msg_);
  }

private:
  ::my_interfaces::msg::Outpose msg_;
};

class Init_Outpose_z
{
public:
  explicit Init_Outpose_z(::my_interfaces::msg::Outpose & msg)
  : msg_(msg)
  {}
  Init_Outpose_rx z(::my_interfaces::msg::Outpose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Outpose_rx(msg_);
  }

private:
  ::my_interfaces::msg::Outpose msg_;
};

class Init_Outpose_y
{
public:
  explicit Init_Outpose_y(::my_interfaces::msg::Outpose & msg)
  : msg_(msg)
  {}
  Init_Outpose_z y(::my_interfaces::msg::Outpose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Outpose_z(msg_);
  }

private:
  ::my_interfaces::msg::Outpose msg_;
};

class Init_Outpose_x
{
public:
  Init_Outpose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Outpose_y x(::my_interfaces::msg::Outpose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Outpose_y(msg_);
  }

private:
  ::my_interfaces::msg::Outpose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::Outpose>()
{
  return my_interfaces::msg::builder::Init_Outpose_x();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__OUTPOSE__BUILDER_HPP_
