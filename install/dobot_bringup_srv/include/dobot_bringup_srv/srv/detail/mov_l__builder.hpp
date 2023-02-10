// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/MovL.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__MOV_L__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__MOV_L__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/mov_l__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_MovL_Request_c
{
public:
  explicit Init_MovL_Request_c(::dobot_bringup_srv::srv::MovL_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::MovL_Request c(::dobot_bringup_srv::srv::MovL_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::MovL_Request msg_;
};

class Init_MovL_Request_b
{
public:
  explicit Init_MovL_Request_b(::dobot_bringup_srv::srv::MovL_Request & msg)
  : msg_(msg)
  {}
  Init_MovL_Request_c b(::dobot_bringup_srv::srv::MovL_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_MovL_Request_c(msg_);
  }

private:
  ::dobot_bringup_srv::srv::MovL_Request msg_;
};

class Init_MovL_Request_a
{
public:
  explicit Init_MovL_Request_a(::dobot_bringup_srv::srv::MovL_Request & msg)
  : msg_(msg)
  {}
  Init_MovL_Request_b a(::dobot_bringup_srv::srv::MovL_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_MovL_Request_b(msg_);
  }

private:
  ::dobot_bringup_srv::srv::MovL_Request msg_;
};

class Init_MovL_Request_z
{
public:
  explicit Init_MovL_Request_z(::dobot_bringup_srv::srv::MovL_Request & msg)
  : msg_(msg)
  {}
  Init_MovL_Request_a z(::dobot_bringup_srv::srv::MovL_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MovL_Request_a(msg_);
  }

private:
  ::dobot_bringup_srv::srv::MovL_Request msg_;
};

class Init_MovL_Request_y
{
public:
  explicit Init_MovL_Request_y(::dobot_bringup_srv::srv::MovL_Request & msg)
  : msg_(msg)
  {}
  Init_MovL_Request_z y(::dobot_bringup_srv::srv::MovL_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MovL_Request_z(msg_);
  }

private:
  ::dobot_bringup_srv::srv::MovL_Request msg_;
};

class Init_MovL_Request_x
{
public:
  Init_MovL_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovL_Request_y x(::dobot_bringup_srv::srv::MovL_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MovL_Request_y(msg_);
  }

private:
  ::dobot_bringup_srv::srv::MovL_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::MovL_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_MovL_Request_x();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_MovL_Response_res
{
public:
  Init_MovL_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::MovL_Response res(::dobot_bringup_srv::srv::MovL_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::MovL_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::MovL_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_MovL_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__MOV_L__BUILDER_HPP_
