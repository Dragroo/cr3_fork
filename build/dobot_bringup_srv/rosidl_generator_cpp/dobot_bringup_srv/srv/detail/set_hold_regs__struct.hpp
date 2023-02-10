// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_bringup_srv:srv/SetHoldRegs.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_HOLD_REGS__STRUCT_HPP_
#define DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_HOLD_REGS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__SetHoldRegs_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__SetHoldRegs_Request __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetHoldRegs_Request_
{
  using Type = SetHoldRegs_Request_<ContainerAllocator>;

  explicit SetHoldRegs_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->addr = 0l;
      this->type = 0l;
    }
  }

  explicit SetHoldRegs_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->addr = 0l;
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
  using _type_type =
    int32_t;
  _type_type type;
  using _regs_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _regs_type regs;

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
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__regs(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->regs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__SetHoldRegs_Request
    std::shared_ptr<dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__SetHoldRegs_Request
    std::shared_ptr<dobot_bringup_srv::srv::SetHoldRegs_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetHoldRegs_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->addr != other.addr) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->regs != other.regs) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetHoldRegs_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetHoldRegs_Request_

// alias to use template instance with default allocator
using SetHoldRegs_Request =
  dobot_bringup_srv::srv::SetHoldRegs_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv


#ifndef _WIN32
# define DEPRECATED__dobot_bringup_srv__srv__SetHoldRegs_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_bringup_srv__srv__SetHoldRegs_Response __declspec(deprecated)
#endif

namespace dobot_bringup_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetHoldRegs_Response_
{
  using Type = SetHoldRegs_Response_<ContainerAllocator>;

  explicit SetHoldRegs_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  explicit SetHoldRegs_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_bringup_srv__srv__SetHoldRegs_Response
    std::shared_ptr<dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_bringup_srv__srv__SetHoldRegs_Response
    std::shared_ptr<dobot_bringup_srv::srv::SetHoldRegs_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetHoldRegs_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetHoldRegs_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetHoldRegs_Response_

// alias to use template instance with default allocator
using SetHoldRegs_Response =
  dobot_bringup_srv::srv::SetHoldRegs_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_bringup_srv

namespace dobot_bringup_srv
{

namespace srv
{

struct SetHoldRegs
{
  using Request = dobot_bringup_srv::srv::SetHoldRegs_Request;
  using Response = dobot_bringup_srv::srv::SetHoldRegs_Response;
};

}  // namespace srv

}  // namespace dobot_bringup_srv

#endif  // DOBOT_BRINGUP_SRV__SRV__DETAIL__SET_HOLD_REGS__STRUCT_HPP_
