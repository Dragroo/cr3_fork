// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/DO.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__DO__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__DO__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/do__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_DO_Request_status
{
public:
  explicit Init_DO_Request_status(::dobot_bringup_srv::srv::DO_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::DO_Request status(::dobot_bringup_srv::srv::DO_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::DO_Request msg_;
};

class Init_DO_Request_index
{
public:
  Init_DO_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DO_Request_status index(::dobot_bringup_srv::srv::DO_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_DO_Request_status(msg_);
  }

private:
  ::dobot_bringup_srv::srv::DO_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::DO_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_DO_Request_index();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_DO_Response_res
{
public:
  Init_DO_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::DO_Response res(::dobot_bringup_srv::srv::DO_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::DO_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::DO_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_DO_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__DO__BUILDER_HPP_
