// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_bringup_srv:srv/GetHoldRegs.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__GET_HOLD_REGS__STRUCT_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__GET_HOLD_REGS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__GetHoldRegs_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__GetHoldRegs_Request __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetHoldRegs_Request_
{
  using Type = GetHoldRegs_Request_<ContainerAllocator>;

  explicit GetHoldRegs_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->addr = 0l;
      this->count = 0l;
      this->type = 0l;
    }
  }

  explicit GetHoldRegs_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->addr = 0l;
      this->count = 0l;
      this->type = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _addr_type =
    int32_t;
  _addr_type addr;
  using _count_type =
    int32_t;
  _count_type count;
  using _type_type =
    int32_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__addr(
    const int32_t & _arg)
  {
    this->addr = _arg;
    return *this;
  }
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__GetHoldRegs_Request
    std::shared_ptr<dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__GetHoldRegs_Request
    std::shared_ptr<dobot_bringup_srv::srv::GetHoldRegs_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetHoldRegs_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->addr != other.addr) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetHoldRegs_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetHoldRegs_Request_

// alias to use template instance with default allocator
using GetHoldRegs_Request =
  dobot_bringup_srv::srv::GetHoldRegs_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__GetHoldRegs_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__GetHoldRegs_Response __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetHoldRegs_Response_
{
  using Type = GetHoldRegs_Response_<ContainerAllocator>;

  explicit GetHoldRegs_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetHoldRegs_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _regs_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _regs_type regs;

  // setters for named parameter idiom
  Type & set__regs(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->regs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__GetHoldRegs_Response
    std::shared_ptr<dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__GetHoldRegs_Response
    std::shared_ptr<dobot_bringup_srv::srv::GetHoldRegs_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetHoldRegs_Response_ & other) const
  {
    if (this->regs != other.regs) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetHoldRegs_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetHoldRegs_Response_

// alias to use template instance with default allocator
using GetHoldRegs_Response =
  dobot_bringup_srv::srv::GetHoldRegs_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv

namespace dobot_bringup_srv
{

namespace srv
{

struct GetHoldRegs
{
  using Request = dobot_bringup_srv::srv::GetHoldRegs_Request;
  using Response = dobot_bringup_srv::srv::GetHoldRegs_Response;
};

}  // namespace srv

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__GET_HOLD_REGS__STRUCT_HPP_
