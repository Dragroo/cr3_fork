// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/SpeedJ.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__SPEED_J__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__SPEED_J__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/speed_j__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_SpeedJ_Request_r
{
public:
  Init_SpeedJ_Request_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::SpeedJ_Request r(::dobot_bringup_srv::srv::SpeedJ_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SpeedJ_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::SpeedJ_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_SpeedJ_Request_r();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_SpeedJ_Response_res
{
public:
  Init_SpeedJ_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::SpeedJ_Response res(::dobot_bringup_srv::srv::SpeedJ_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SpeedJ_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::SpeedJ_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_SpeedJ_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__SPEED_J__BUILDER_HPP_
