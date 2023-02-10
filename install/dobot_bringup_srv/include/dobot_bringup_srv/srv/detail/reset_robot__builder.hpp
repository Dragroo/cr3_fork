// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/ResetRobot.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__RESET_ROBOT__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__RESET_ROBOT__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/reset_robot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::ResetRobot_Request>()
{
  return ::dobot_bringup_srv::srv::ResetRobot_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_ResetRobot_Response_res
{
public:
  Init_ResetRobot_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::ResetRobot_Response res(::dobot_bringup_srv::srv::ResetRobot_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::ResetRobot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::ResetRobot_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_ResetRobot_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__RESET_ROBOT__BUILDER_HPP_
