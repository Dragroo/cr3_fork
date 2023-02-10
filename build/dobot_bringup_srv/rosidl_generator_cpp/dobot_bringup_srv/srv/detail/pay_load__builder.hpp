// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/PayLoad.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__PAY_LOAD__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__PAY_LOAD__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/pay_load__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_PayLoad_Request_inertia
{
public:
  explicit Init_PayLoad_Request_inertia(::dobot_bringup_srv::srv::PayLoad_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::PayLoad_Request inertia(::dobot_bringup_srv::srv::PayLoad_Request::_inertia_type arg)
  {
    msg_.inertia = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::PayLoad_Request msg_;
};

class Init_PayLoad_Request_weight
{
public:
  Init_PayLoad_Request_weight()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayLoad_Request_inertia weight(::dobot_bringup_srv::srv::PayLoad_Request::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_PayLoad_Request_inertia(msg_);
  }

private:
  ::dobot_bringup_srv::srv::PayLoad_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::PayLoad_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_PayLoad_Request_weight();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_PayLoad_Response_res
{
public:
  Init_PayLoad_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::PayLoad_Response res(::dobot_bringup_srv::srv::PayLoad_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::PayLoad_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::PayLoad_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_PayLoad_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__PAY_LOAD__BUILDER_HPP_
