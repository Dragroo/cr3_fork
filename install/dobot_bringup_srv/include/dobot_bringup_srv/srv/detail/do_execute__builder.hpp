// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/DOExecute.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__DO_EXECUTE__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__DO_EXECUTE__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/do_execute__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_DOExecute_Request_status
{
public:
  explicit Init_DOExecute_Request_status(::dobot_bringup_srv::srv::DOExecute_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::DOExecute_Request status(::dobot_bringup_srv::srv::DOExecute_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::DOExecute_Request msg_;
};

class Init_DOExecute_Request_index
{
public:
  Init_DOExecute_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DOExecute_Request_status index(::dobot_bringup_srv::srv::DOExecute_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_DOExecute_Request_status(msg_);
  }

private:
  ::dobot_bringup_srv::srv::DOExecute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::DOExecute_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_DOExecute_Request_index();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_DOExecute_Response_res
{
public:
  Init_DOExecute_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::DOExecute_Response res(::dobot_bringup_srv::srv::DOExecute_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::DOExecute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::DOExecute_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_DOExecute_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__DO_EXECUTE__BUILDER_HPP_
