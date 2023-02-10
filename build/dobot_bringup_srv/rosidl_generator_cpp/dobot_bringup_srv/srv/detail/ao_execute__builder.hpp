// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/AOExecute.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__AO_EXECUTE__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__AO_EXECUTE__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/ao_execute__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_AOExecute_Request_value
{
public:
  explicit Init_AOExecute_Request_value(::dobot_bringup_srv::srv::AOExecute_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::AOExecute_Request value(::dobot_bringup_srv::srv::AOExecute_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::AOExecute_Request msg_;
};

class Init_AOExecute_Request_index
{
public:
  Init_AOExecute_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AOExecute_Request_value index(::dobot_bringup_srv::srv::AOExecute_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_AOExecute_Request_value(msg_);
  }

private:
  ::dobot_bringup_srv::srv::AOExecute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::AOExecute_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_AOExecute_Request_index();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_AOExecute_Response_res
{
public:
  Init_AOExecute_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::AOExecute_Response res(::dobot_bringup_srv::srv::AOExecute_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::AOExecute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::AOExecute_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_AOExecute_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__AO_EXECUTE__BUILDER_HPP_
