// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/SetArmOrientation.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_ARM_ORIENTATION__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_ARM_ORIENTATION__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/set_arm_orientation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_SetArmOrientation_Request_config6
{
public:
  explicit Init_SetArmOrientation_Request_config6(::dobot_bringup_srv::srv::SetArmOrientation_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::SetArmOrientation_Request config6(::dobot_bringup_srv::srv::SetArmOrientation_Request::_config6_type arg)
  {
    msg_.config6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetArmOrientation_Request msg_;
};

class Init_SetArmOrientation_Request_forn
{
public:
  explicit Init_SetArmOrientation_Request_forn(::dobot_bringup_srv::srv::SetArmOrientation_Request & msg)
  : msg_(msg)
  {}
  Init_SetArmOrientation_Request_config6 forn(::dobot_bringup_srv::srv::SetArmOrientation_Request::_forn_type arg)
  {
    msg_.forn = std::move(arg);
    return Init_SetArmOrientation_Request_config6(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetArmOrientation_Request msg_;
};

class Init_SetArmOrientation_Request_uord
{
public:
  explicit Init_SetArmOrientation_Request_uord(::dobot_bringup_srv::srv::SetArmOrientation_Request & msg)
  : msg_(msg)
  {}
  Init_SetArmOrientation_Request_forn uord(::dobot_bringup_srv::srv::SetArmOrientation_Request::_uord_type arg)
  {
    msg_.uord = std::move(arg);
    return Init_SetArmOrientation_Request_forn(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetArmOrientation_Request msg_;
};

class Init_SetArmOrientation_Request_lorr
{
public:
  Init_SetArmOrientation_Request_lorr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetArmOrientation_Request_uord lorr(::dobot_bringup_srv::srv::SetArmOrientation_Request::_lorr_type arg)
  {
    msg_.lorr = std::move(arg);
    return Init_SetArmOrientation_Request_uord(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetArmOrientation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::SetArmOrientation_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_SetArmOrientation_Request_lorr();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_SetArmOrientation_Response_res
{
public:
  Init_SetArmOrientation_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::SetArmOrientation_Response res(::dobot_bringup_srv::srv::SetArmOrientation_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetArmOrientation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::SetArmOrientation_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_SetArmOrientation_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_ARM_ORIENTATION__BUILDER_HPP_
