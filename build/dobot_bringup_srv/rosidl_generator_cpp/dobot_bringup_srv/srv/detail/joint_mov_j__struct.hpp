// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_bringup_srv:srv/JointMovJ.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__JOINT_MOV_J__STRUCT_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__JOINT_MOV_J__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__JointMovJ_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__JointMovJ_Request __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointMovJ_Request_
{
  using Type = JointMovJ_Request_<ContainerAllocator>;

  explicit JointMovJ_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->j1 = 0.0;
      this->j2 = 0.0;
      this->j3 = 0.0;
      this->j4 = 0.0;
      this->j5 = 0.0;
      this->j6 = 0.0;
    }
  }

  explicit JointMovJ_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->j1 = 0.0;
      this->j2 = 0.0;
      this->j3 = 0.0;
      this->j4 = 0.0;
      this->j5 = 0.0;
      this->j6 = 0.0;
    }
  }

  // field types and members
  using _j1_type =
    double;
  _j1_type j1;
  using _j2_type =
    double;
  _j2_type j2;
  using _j3_type =
    double;
  _j3_type j3;
  using _j4_type =
    double;
  _j4_type j4;
  using _j5_type =
    double;
  _j5_type j5;
  using _j6_type =
    double;
  _j6_type j6;

  // setters for named parameter idiom
  Type & set__j1(
    const double & _arg)
  {
    this->j1 = _arg;
    return *this;
  }
  Type & set__j2(
    const double & _arg)
  {
    this->j2 = _arg;
    return *this;
  }
  Type & set__j3(
    const double & _arg)
  {
    this->j3 = _arg;
    return *this;
  }
  Type & set__j4(
    const double & _arg)
  {
    this->j4 = _arg;
    return *this;
  }
  Type & set__j5(
    const double & _arg)
  {
    this->j5 = _arg;
    return *this;
  }
  Type & set__j6(
    const double & _arg)
  {
    this->j6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__JointMovJ_Request
    std::shared_ptr<dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__JointMovJ_Request
    std::shared_ptr<dobot_bringup_srv::srv::JointMovJ_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointMovJ_Request_ & other) const
  {
    if (this->j1 != other.j1) {
      return false;
    }
    if (this->j2 != other.j2) {
      return false;
    }
    if (this->j3 != other.j3) {
      return false;
    }
    if (this->j4 != other.j4) {
      return false;
    }
    if (this->j5 != other.j5) {
      return false;
    }
    if (this->j6 != other.j6) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointMovJ_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointMovJ_Request_

// alias to use template instance with default allocator
using JointMovJ_Request =
  dobot_bringup_srv::srv::JointMovJ_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__JointMovJ_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__JointMovJ_Response __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointMovJ_Response_
{
  using Type = JointMovJ_Response_<ContainerAllocator>;

  explicit JointMovJ_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  explicit JointMovJ_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  // field types and members
  using _res_type =
    int32_t;
  _res_type res;

  // setters for named parameter idiom
  Type & set__res(
    const int32_t & _arg)
  {
    this->res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__JointMovJ_Response
    std::shared_ptr<dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__JointMovJ_Response
    std::shared_ptr<dobot_bringup_srv::srv::JointMovJ_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointMovJ_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointMovJ_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointMovJ_Response_

// alias to use template instance with default allocator
using JointMovJ_Response =
  dobot_bringup_srv::srv::JointMovJ_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv

namespace dobot_bringup_srv
{

namespace srv
{

struct JointMovJ
{
  using Request = dobot_bringup_srv::srv::JointMovJ_Request;
  using Response = dobot_bringup_srv::srv::JointMovJ_Response;
};

}  // namespace srv

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__JOINT_MOV_J__STRUCT_HPP_
