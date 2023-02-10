// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/Jump.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__JUMP__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__JUMP__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/jump__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_Jump_Request_offset6
{
public:
  explicit Init_Jump_Request_offset6(::dobot_bringup_srv::srv::Jump_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::Jump_Request offset6(::dobot_bringup_srv::srv::Jump_Request::_offset6_type arg)
  {
    msg_.offset6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::Jump_Request msg_;
};

class Init_Jump_Request_offset5
{
public:
  explicit Init_Jump_Request_offset5(::dobot_bringup_srv::srv::Jump_Request & msg)
  : msg_(msg)
  {}
  Init_Jump_Request_offset6 offset5(::dobot_bringup_srv::srv::Jump_Request::_offset5_type arg)
  {
    msg_.offset5 = std::move(arg);
    return Init_Jump_Request_offset6(msg_);
  }

private:
  ::dobot_bringup_srv::srv::Jump_Request msg_;
};

class Init_Jump_Request_offset4
{
public:
  explicit Init_Jump_Request_offset4(::dobot_bringup_srv::srv::Jump_Request & msg)
  : msg_(msg)
  {}
  Init_Jump_Request_offset5 offset4(::dobot_bringup_srv::srv::Jump_Request::_offset4_type arg)
  {
    msg_.offset4 = std::move(arg);
    return Init_Jump_Request_offset5(msg_);
  }

private:
  ::dobot_bringup_srv::srv::Jump_Request msg_;
};

class Init_Jump_Request_offset3
{
public:
  explicit Init_Jump_Request_offset3(::dobot_bringup_srv::srv::Jump_Request & msg)
  : msg_(msg)
  {}
  Init_Jump_Request_offset4 offset3(::dobot_bringup_srv::srv::Jump_Request::_offset3_type arg)
  {
    msg_.offset3 = std::move(arg);
    return Init_Jump_Request_offset4(msg_);
  }

private:
  ::dobot_bringup_srv::srv::Jump_Request msg_;
};

class Init_Jump_Request_offset2
{
public:
  explicit Init_Jump_Request_offset2(::dobot_bringup_srv::srv::Jump_Request & msg)
  : msg_(msg)
  {}
  Init_Jump_Request_offset3 offset2(::dobot_bringup_srv::srv::Jump_Request::_offset2_type arg)
  {
    msg_.offset2 = std::move(arg);
    return Init_Jump_Request_offset3(msg_);
  }

private:
  ::dobot_bringup_srv::srv::Jump_Request msg_;
};

class Init_Jump_Request_offset1
{
public:
  Init_Jump_Request_offset1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Jump_Request_offset2 offset1(::dobot_bringup_srv::srv::Jump_Request::_offset1_type arg)
  {
    msg_.offset1 = std::move(arg);
    return Init_Jump_Request_offset2(msg_);
  }

private:
  ::dobot_bringup_srv::srv::Jump_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::Jump_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_Jump_Request_offset1();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_Jump_Response_res
{
public:
  Init_Jump_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::Jump_Response res(::dobot_bringup_srv::srv::Jump_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::Jump_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::Jump_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_Jump_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__JUMP__BUILDER_HPP_
