// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_bringup_srv:srv/Circle.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__CIRCLE__STRUCT_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__CIRCLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__Circle_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__Circle_Request __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Circle_Request_
{
  using Type = Circle_Request_<ContainerAllocator>;

  explicit Circle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->z1 = 0.0;
      this->rx1 = 0.0;
      this->ry1 = 0.0;
      this->rz1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
      this->z2 = 0.0;
      this->rx2 = 0.0;
      this->ry2 = 0.0;
      this->rz2 = 0.0;
    }
  }

  explicit Circle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->z1 = 0.0;
      this->rx1 = 0.0;
      this->ry1 = 0.0;
      this->rz1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
      this->z2 = 0.0;
      this->rx2 = 0.0;
      this->ry2 = 0.0;
      this->rz2 = 0.0;
    }
  }

  // field types and members
  using _count_type =
    int32_t;
  _count_type count;
  using _x1_type =
    double;
  _x1_type x1;
  using _y1_type =
    double;
  _y1_type y1;
  using _z1_type =
    double;
  _z1_type z1;
  using _rx1_type =
    double;
  _rx1_type rx1;
  using _ry1_type =
    double;
  _ry1_type ry1;
  using _rz1_type =
    double;
  _rz1_type rz1;
  using _x2_type =
    double;
  _x2_type x2;
  using _y2_type =
    double;
  _y2_type y2;
  using _z2_type =
    double;
  _z2_type z2;
  using _rx2_type =
    double;
  _rx2_type rx2;
  using _ry2_type =
    double;
  _ry2_type ry2;
  using _rz2_type =
    double;
  _rz2_type rz2;

  // setters for named parameter idiom
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__x1(
    const double & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const double & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__z1(
    const double & _arg)
  {
    this->z1 = _arg;
    return *this;
  }
  Type & set__rx1(
    const double & _arg)
  {
    this->rx1 = _arg;
    return *this;
  }
  Type & set__ry1(
    const double & _arg)
  {
    this->ry1 = _arg;
    return *this;
  }
  Type & set__rz1(
    const double & _arg)
  {
    this->rz1 = _arg;
    return *this;
  }
  Type & set__x2(
    const double & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const double & _arg)
  {
    this->y2 = _arg;
    return *this;
  }
  Type & set__z2(
    const double & _arg)
  {
    this->z2 = _arg;
    return *this;
  }
  Type & set__rx2(
    const double & _arg)
  {
    this->rx2 = _arg;
    return *this;
  }
  Type & set__ry2(
    const double & _arg)
  {
    this->ry2 = _arg;
    return *this;
  }
  Type & set__rz2(
    const double & _arg)
  {
    this->rz2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__Circle_Request
    std::shared_ptr<dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__Circle_Request
    std::shared_ptr<dobot_bringup_srv::srv::Circle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Circle_Request_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->z1 != other.z1) {
      return false;
    }
    if (this->rx1 != other.rx1) {
      return false;
    }
    if (this->ry1 != other.ry1) {
      return false;
    }
    if (this->rz1 != other.rz1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->z2 != other.z2) {
      return false;
    }
    if (this->rx2 != other.rx2) {
      return false;
    }
    if (this->ry2 != other.ry2) {
      return false;
    }
    if (this->rz2 != other.rz2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Circle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Circle_Request_

// alias to use template instance with default allocator
using Circle_Request =
  dobot_bringup_srv::srv::Circle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__Circle_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__Circle_Response __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Circle_Response_
{
  using Type = Circle_Response_<ContainerAllocator>;

  explicit Circle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  explicit Circle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__Circle_Response
    std::shared_ptr<dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__Circle_Response
    std::shared_ptr<dobot_bringup_srv::srv::Circle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Circle_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const Circle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Circle_Response_

// alias to use template instance with default allocator
using Circle_Response =
  dobot_bringup_srv::srv::Circle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv

namespace dobot_bringup_srv
{

namespace srv
{

struct Circle
{
  using Request = dobot_bringup_srv::srv::Circle_Request;
  using Response = dobot_bringup_srv::srv::Circle_Response;
};

}  // namespace srv

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__CIRCLE__STRUCT_HPP_
