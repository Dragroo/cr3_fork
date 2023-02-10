// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_bringup_srv:srv/ServoJ.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__SERVO_J__BUILDER_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__SERVO_J__BUILDER_HPP_

#include "dobot_bringup_srv/srv/detail/servo_j__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_ServoJ_Request_j6
{
public:
  explicit Init_ServoJ_Request_j6(::dobot_bringup_srv::srv::ServoJ_Request & msg)
  : msg_(msg)
  {}
  ::dobot_bringup_srv::srv::ServoJ_Request j6(::dobot_bringup_srv::srv::ServoJ_Request::_j6_type arg)
  {
    msg_.j6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::ServoJ_Request msg_;
};

class Init_ServoJ_Request_j5
{
public:
  explicit Init_ServoJ_Request_j5(::dobot_bringup_srv::srv::ServoJ_Request & msg)
  : msg_(msg)
  {}
  Init_ServoJ_Request_j6 j5(::dobot_bringup_srv::srv::ServoJ_Request::_j5_type arg)
  {
    msg_.j5 = std::move(arg);
    return Init_ServoJ_Request_j6(msg_);
  }

private:
  ::dobot_bringup_srv::srv::ServoJ_Request msg_;
};

class Init_ServoJ_Request_j4
{
public:
  explicit Init_ServoJ_Request_j4(::dobot_bringup_srv::srv::ServoJ_Request & msg)
  : msg_(msg)
  {}
  Init_ServoJ_Request_j5 j4(::dobot_bringup_srv::srv::ServoJ_Request::_j4_type arg)
  {
    msg_.j4 = std::move(arg);
    return Init_ServoJ_Request_j5(msg_);
  }

private:
  ::dobot_bringup_srv::srv::ServoJ_Request msg_;
};

class Init_ServoJ_Request_j3
{
public:
  explicit Init_ServoJ_Request_j3(::dobot_bringup_srv::srv::ServoJ_Request & msg)
  : msg_(msg)
  {}
  Init_ServoJ_Request_j4 j3(::dobot_bringup_srv::srv::ServoJ_Request::_j3_type arg)
  {
    msg_.j3 = std::move(arg);
    return Init_ServoJ_Request_j4(msg_);
  }

private:
  ::dobot_bringup_srv::srv::ServoJ_Request msg_;
};

class Init_ServoJ_Request_j2
{
public:
  explicit Init_ServoJ_Request_j2(::dobot_bringup_srv::srv::ServoJ_Request & msg)
  : msg_(msg)
  {}
  Init_ServoJ_Request_j3 j2(::dobot_bringup_srv::srv::ServoJ_Request::_j2_type arg)
  {
    msg_.j2 = std::move(arg);
    return Init_ServoJ_Request_j3(msg_);
  }

private:
  ::dobot_bringup_srv::srv::ServoJ_Request msg_;
};

class Init_ServoJ_Request_j1
{
public:
  Init_ServoJ_Request_j1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoJ_Request_j2 j1(::dobot_bringup_srv::srv::ServoJ_Request::_j1_type arg)
  {
    msg_.j1 = std::move(arg);
    return Init_ServoJ_Request_j2(msg_);
  }

private:
  ::dobot_bringup_srv::srv::ServoJ_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::ServoJ_Request>()
{
  return dobot_bringup_srv::srv::builder::Init_ServoJ_Request_j1();
}

}  // namespace dobot_bringup_srv


namespace dobot_bringup_srv
{

namespace srv
{

namespace builder
{

class Init_ServoJ_Response_res
{
public:
  Init_ServoJ_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_bringup_srv::srv::ServoJ_Response res(::dobot_bringup_srv::srv::ServoJ_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_bringup_srv::srv::ServoJ_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_bringup_srv::srv::ServoJ_Response>()
{
  return dobot_bringup_srv::srv::builder::Init_ServoJ_Response_res();
}

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__SERVO_J__BUILDER_HPP_
