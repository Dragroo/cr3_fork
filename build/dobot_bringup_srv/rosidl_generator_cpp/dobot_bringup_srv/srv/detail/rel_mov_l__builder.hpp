// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/RelMovL.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/rel_mov_l__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_RelMovL_Request_z
{
public:
  explicit Init_RelMovL_Request_z(::dobot_bringup_srv::srv::RelMovL_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::RelMovL_Request z(::dobot_bringup_srv::srv::RelMovL_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::RelMovL_Request msg_;
};

class Init_RelMovL_Request_y
{
public:
  explicit Init_RelMovL_Request_y(::dobot_bringup_srv::srv::RelMovL_Request & msg)
  : msg_(msg)
  {}
  Init_RelMovL_Request_z y(::dobot_bringup_srv::srv::RelMovL_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RelMovL_Request_z(msg_);
  }

private:
  ::dobot_bringup_srv::srv::RelMovL_Request msg_;
};

class Init_RelMovL_Request_x
{
public:
  Init_RelMovL_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelMovL_Request_y x(::dobot_bringup_srv::srv::RelMovL_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RelMovL_Request_y(msg_);
  }

private:
  ::dobot_bringup_srv::srv::RelMovL_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::RelMovL_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_RelMovL_Request_x();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_RelMovL_Response_res
{
public:
  Init_RelMovL_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::RelMovL_Response res(::dobot_bringup_srv::srv::RelMovL_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::RelMovL_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::RelMovL_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_RelMovL_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__BUILDER_HPP_
