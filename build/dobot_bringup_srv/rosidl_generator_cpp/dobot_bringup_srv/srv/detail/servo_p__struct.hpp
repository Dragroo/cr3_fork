// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_bringup_srv:srv/ServoP.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__SERVO_P__STRUCT_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__SERVO_P__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__ServoP_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__ServoP_Request __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoP_Request_
{
  using Type = ServoP_Request_<ContainerAllocator>;

  explicit ServoP_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
    }
  }

  explicit ServoP_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;
  using _c_type =
    double;
  _c_type c;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const double & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__ServoP_Request
    std::shared_ptr<dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__ServoP_Request
    std::shared_ptr<dobot_bringup_srv::srv::ServoP_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoP_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoP_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoP_Request_

// alias to use template instance with default allocator
using ServoP_Request =
  dobot_bringup_srv::srv::ServoP_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__ServoP_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__ServoP_Response __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoP_Response_
{
  using Type = ServoP_Response_<ContainerAllocator>;

  explicit ServoP_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  explicit ServoP_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__ServoP_Response
    std::shared_ptr<dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__ServoP_Response
    std::shared_ptr<dobot_bringup_srv::srv::ServoP_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoP_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoP_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoP_Response_

// alias to use template instance with default allocator
using ServoP_Response =
  dobot_bringup_srv::srv::ServoP_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv

namespace dobot_bringup_srv
{

namespace srv
{

struct ServoP
{
  using Request = dobot_bringup_srv::srv::ServoP_Request;
  using Response = dobot_bringup_srv::srv::ServoP_Response;
};

}  // namespace srv

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__SERVO_P__STRUCT_HPP_
