// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/User.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__USER__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__USER__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/user__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_User_Request_index
{
public:
  Init_User_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::User_Request index(::dobot_bringup_srv::srv::User_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::User_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::User_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_User_Request_index();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_User_Response_res
{
public:
  Init_User_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::User_Response res(::dobot_bringup_srv::srv::User_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::User_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::User_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_User_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__USER__BUILDER_HPP_
