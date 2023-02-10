// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/SetSafeSkin.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_SAFE_SKIN__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_SAFE_SKIN__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/set_safe_skin__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_SetSafeSkin_Request_status
{
public:
  Init_SetSafeSkin_Request_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::SetSafeSkin_Request status(::dobot_bringup_srv::srv::SetSafeSkin_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetSafeSkin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::SetSafeSkin_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_SetSafeSkin_Request_status();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_SetSafeSkin_Response_res
{
public:
  Init_SetSafeSkin_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::SetSafeSkin_Response res(::dobot_bringup_srv::srv::SetSafeSkin_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetSafeSkin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::SetSafeSkin_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_SetSafeSkin_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_SAFE_SKIN__BUILDER_HPP_
