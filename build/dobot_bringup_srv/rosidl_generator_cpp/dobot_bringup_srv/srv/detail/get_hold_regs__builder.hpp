// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/GetHoldRegs.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__GET_HOLD_REGS__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__GET_HOLD_REGS__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/get_hold_regs__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_GetHoldRegs_Request_type
{
public:
  explicit Init_GetHoldRegs_Request_type(::dobot_bringup_srv::srv::GetHoldRegs_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::GetHoldRegs_Request type(::dobot_bringup_srv::srv::GetHoldRegs_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::GetHoldRegs_Request msg_;
};

class Init_GetHoldRegs_Request_count
{
public:
  explicit Init_GetHoldRegs_Request_count(::dobot_bringup_srv::srv::GetHoldRegs_Request & msg)
  : msg_(msg)
  {}
  Init_GetHoldRegs_Request_type count(::dobot_bringup_srv::srv::GetHoldRegs_Request::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_GetHoldRegs_Request_type(msg_);
  }

private:
  ::dobot_bringup_srv::srv::GetHoldRegs_Request msg_;
};

class Init_GetHoldRegs_Request_addr
{
public:
  explicit Init_GetHoldRegs_Request_addr(::dobot_bringup_srv::srv::GetHoldRegs_Request & msg)
  : msg_(msg)
  {}
  Init_GetHoldRegs_Request_count addr(::dobot_bringup_srv::srv::GetHoldRegs_Request::_addr_type arg)
  {
    msg_.addr = std::move(arg);
    return Init_GetHoldRegs_Request_count(msg_);
  }

private:
  ::dobot_bringup_srv::srv::GetHoldRegs_Request msg_;
};

class Init_GetHoldRegs_Request_id
{
public:
  Init_GetHoldRegs_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetHoldRegs_Request_addr id(::dobot_bringup_srv::srv::GetHoldRegs_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GetHoldRegs_Request_addr(msg_);
  }

private:
  ::dobot_bringup_srv::srv::GetHoldRegs_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::GetHoldRegs_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_GetHoldRegs_Request_id();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_GetHoldRegs_Response_regs
{
public:
  Init_GetHoldRegs_Response_regs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::GetHoldRegs_Response regs(::dobot_bringup_srv::srv::GetHoldRegs_Response::_regs_type arg)
  {
    msg_.regs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::GetHoldRegs_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::GetHoldRegs_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_GetHoldRegs_Response_regs();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__GET_HOLD_REGS__BUILDER_HPP_
