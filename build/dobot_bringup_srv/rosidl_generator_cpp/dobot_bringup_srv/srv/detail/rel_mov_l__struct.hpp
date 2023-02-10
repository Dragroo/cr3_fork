// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_bringup_srv:srv/RelMovL.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__STRUCT_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__RelMovL_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__RelMovL_Request __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RelMovL_Request_
{
  using Type = RelMovL_Request_<ContainerAllocator>;

  explicit RelMovL_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit RelMovL_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
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

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__RelMovL_Request
    std::shared_ptr<dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__RelMovL_Request
    std::shared_ptr<dobot_bringup_srv::srv::RelMovL_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelMovL_Request_ & other) const
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
    return true;
  }
  bool operator!=(const RelMovL_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelMovL_Request_

// alias to use template instance with default allocator
using RelMovL_Request =
  dobot_bringup_srv::srv::RelMovL_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__RelMovL_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__RelMovL_Response __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RelMovL_Response_
{
  using Type = RelMovL_Response_<ContainerAllocator>;

  explicit RelMovL_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  explicit RelMovL_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__RelMovL_Response
    std::shared_ptr<dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__RelMovL_Response
    std::shared_ptr<dobot_bringup_srv::srv::RelMovL_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelMovL_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelMovL_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelMovL_Response_

// alias to use template instance with default allocator
using RelMovL_Response =
  dobot_bringup_srv::srv::RelMovL_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv

namespace dobot_bringup_srv
{

namespace srv
{

struct RelMovL
{
  using Request = dobot_bringup_srv::srv::RelMovL_Request;
  using Response = dobot_bringup_srv::srv::RelMovL_Response;
};

}  // namespace srv

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__REL_MOV_L__STRUCT_HPP_
