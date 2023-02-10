// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/RunScript.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__RUN_SCRIPT__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__RUN_SCRIPT__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/run_script__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_RunScript_Request_projectname
{
public:
  Init_RunScript_Request_projectname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::RunScript_Request projectname(::dobot_bringup_srv::srv::RunScript_Request::_projectname_type arg)
  {
    msg_.projectname = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::RunScript_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::RunScript_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_RunScript_Request_projectname();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_RunScript_Response_res
{
public:
  Init_RunScript_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::RunScript_Response res(::dobot_bringup_srv::srv::RunScript_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::RunScript_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::RunScript_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_RunScript_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__RUN_SCRIPT__BUILDER_HPP_
