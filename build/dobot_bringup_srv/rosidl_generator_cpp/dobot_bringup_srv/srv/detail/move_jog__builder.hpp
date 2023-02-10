// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/MoveJog.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__MOVE_JOG__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__MOVE_JOG__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/move_jog__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_MoveJog_Request_axisid
{
public:
  Init_MoveJog_Request_axisid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::MoveJog_Request axisid(::dobot_bringup_srv::srv::MoveJog_Request::_axisid_type arg)
  {
    msg_.axisid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::MoveJog_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::MoveJog_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_MoveJog_Request_axisid();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_MoveJog_Response_res
{
public:
  Init_MoveJog_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::MoveJog_Response res(::dobot_bringup_srv::srv::MoveJog_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::MoveJog_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::MoveJog_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_MoveJog_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__MOVE_JOG__BUILDER_HPP_
