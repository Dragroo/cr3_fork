// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/SetHoldRegs.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_HOLD_REGS__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_HOLD_REGS__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/set_hold_regs__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_SetHoldRegs_Request_regs
{
public:
  explicit Init_SetHoldRegs_Request_regs(::dobot_bringup_srv::srv::SetHoldRegs_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::SetHoldRegs_Request regs(::dobot_bringup_srv::srv::SetHoldRegs_Request::_regs_type arg)
  {
    msg_.regs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetHoldRegs_Request msg_;
};

class Init_SetHoldRegs_Request_type
{
public:
  explicit Init_SetHoldRegs_Request_type(::dobot_bringup_srv::srv::SetHoldRegs_Request & msg)
  : msg_(msg)
  {}
  Init_SetHoldRegs_Request_regs type(::dobot_bringup_srv::srv::SetHoldRegs_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SetHoldRegs_Request_regs(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetHoldRegs_Request msg_;
};

class Init_SetHoldRegs_Request_addr
{
public:
  explicit Init_SetHoldRegs_Request_addr(::dobot_bringup_srv::srv::SetHoldRegs_Request & msg)
  : msg_(msg)
  {}
  Init_SetHoldRegs_Request_type addr(::dobot_bringup_srv::srv::SetHoldRegs_Request::_addr_type arg)
  {
    msg_.addr = std::move(arg);
    return Init_SetHoldRegs_Request_type(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetHoldRegs_Request msg_;
};

class Init_SetHoldRegs_Request_id
{
public:
  Init_SetHoldRegs_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetHoldRegs_Request_addr id(::dobot_bringup_srv::srv::SetHoldRegs_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SetHoldRegs_Request_addr(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetHoldRegs_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::SetHoldRegs_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_SetHoldRegs_Request_id();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_SetHoldRegs_Response_res
{
public:
  Init_SetHoldRegs_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::SetHoldRegs_Response res(::dobot_bringup_srv::srv::SetHoldRegs_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::SetHoldRegs_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::SetHoldRegs_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_SetHoldRegs_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_HOLD_REGS__BUILDER_HPP_
