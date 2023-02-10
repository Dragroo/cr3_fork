// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_msg:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_MSG__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define DOBOT_BRINGUP_MSG__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include "dobot_bringup_msg/msg/detail/robot_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_msg
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_is_connected
{
public:
  explicit Init_RobotStatus_is_connected(::dobot_bringup_msg::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_msg::msg::RobotStatus is_connected(::dobot_bringup_msg::msg::RobotStatus::_is_connected_type arg)
  {
    msg_.is_connected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_msg::msg::RobotStatus msg_;
};

class Init_RobotStatus_is_enable
{
public:
  Init_RobotStatus_is_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_is_connected is_enable(::dobot_bringup_msg::msg::RobotStatus::_is_enable_type arg)
  {
    msg_.is_enable = std::move(arg);
    return Init_RobotStatus_is_connected(msg_);
  }

private:
  ::dobot_bringup_msg::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_msg::msg::RobotStatus>()
{
  return dobot_bringup_msg::msg::builder::Init_RobotStatus_is_enable();
}

}  // namespace dobot_bringup_msg

#endif  // DOBOT_BRINGUP_MSG__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
