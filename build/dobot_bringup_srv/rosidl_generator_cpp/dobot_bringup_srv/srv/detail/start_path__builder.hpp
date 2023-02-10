// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/StartPath.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__START_PATH__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__START_PATH__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/start_path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_StartPath_Request_cart
{
public:
  explicit Init_StartPath_Request_cart(::dobot_bringup_srv::srv::StartPath_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::StartPath_Request cart(::dobot_bringup_srv::srv::StartPath_Request::_cart_type arg)
  {
    msg_.cart = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::StartPath_Request msg_;
};

class Init_StartPath_Request_const_val
{
public:
  explicit Init_StartPath_Request_const_val(::dobot_bringup_srv::srv::StartPath_Request & msg)
  : msg_(msg)
  {}
  Init_StartPath_Request_cart const_val(::dobot_bringup_srv::srv::StartPath_Request::_const_val_type arg)
  {
    msg_.const_val = std::move(arg);
    return Init_StartPath_Request_cart(msg_);
  }

private:
  ::dobot_bringup_srv::srv::StartPath_Request msg_;
};

class Init_StartPath_Request_trace_name
{
public:
  Init_StartPath_Request_trace_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartPath_Request_const_val trace_name(::dobot_bringup_srv::srv::StartPath_Request::_trace_name_type arg)
  {
    msg_.trace_name = std::move(arg);
    return Init_StartPath_Request_const_val(msg_);
  }

private:
  ::dobot_bringup_srv::srv::StartPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::StartPath_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_StartPath_Request_trace_name();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_StartPath_Response_res
{
public:
  Init_StartPath_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::StartPath_Response res(::dobot_bringup_srv::srv::StartPath_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::StartPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::StartPath_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_StartPath_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__START_PATH__BUILDER_HPP_
