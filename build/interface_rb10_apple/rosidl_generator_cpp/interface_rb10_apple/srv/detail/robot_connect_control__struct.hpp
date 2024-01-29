// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_rb10_apple:srv/RobotConnectControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__STRUCT_HPP_
#define INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_rb10_apple__srv__RobotConnectControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_rb10_apple__srv__RobotConnectControl_Request __declspec(deprecated)
#endif

namespace interface_rb10_apple
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotConnectControl_Request_
{
  using Type = RobotConnectControl_Request_<ContainerAllocator>;

  explicit RobotConnectControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connect = false;
    }
  }

  explicit RobotConnectControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connect = false;
    }
  }

  // field types and members
  using _connect_type =
    bool;
  _connect_type connect;

  // setters for named parameter idiom
  Type & set__connect(
    const bool & _arg)
  {
    this->connect = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_rb10_apple__srv__RobotConnectControl_Request
    std::shared_ptr<interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_rb10_apple__srv__RobotConnectControl_Request
    std::shared_ptr<interface_rb10_apple::srv::RobotConnectControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotConnectControl_Request_ & other) const
  {
    if (this->connect != other.connect) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotConnectControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotConnectControl_Request_

// alias to use template instance with default allocator
using RobotConnectControl_Request =
  interface_rb10_apple::srv::RobotConnectControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_rb10_apple


#ifndef _WIN32
# define DEPRECATED__interface_rb10_apple__srv__RobotConnectControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_rb10_apple__srv__RobotConnectControl_Response __declspec(deprecated)
#endif

namespace interface_rb10_apple
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotConnectControl_Response_
{
  using Type = RobotConnectControl_Response_<ContainerAllocator>;

  explicit RobotConnectControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_power_on = false;
    }
  }

  explicit RobotConnectControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_power_on = false;
    }
  }

  // field types and members
  using _is_power_on_type =
    bool;
  _is_power_on_type is_power_on;

  // setters for named parameter idiom
  Type & set__is_power_on(
    const bool & _arg)
  {
    this->is_power_on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_rb10_apple__srv__RobotConnectControl_Response
    std::shared_ptr<interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_rb10_apple__srv__RobotConnectControl_Response
    std::shared_ptr<interface_rb10_apple::srv::RobotConnectControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotConnectControl_Response_ & other) const
  {
    if (this->is_power_on != other.is_power_on) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotConnectControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotConnectControl_Response_

// alias to use template instance with default allocator
using RobotConnectControl_Response =
  interface_rb10_apple::srv::RobotConnectControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_rb10_apple

namespace interface_rb10_apple
{

namespace srv
{

struct RobotConnectControl
{
  using Request = interface_rb10_apple::srv::RobotConnectControl_Request;
  using Response = interface_rb10_apple::srv::RobotConnectControl_Response;
};

}  // namespace srv

}  // namespace interface_rb10_apple

#endif  // INTERFACE_RB10_APPLE__SRV__DETAIL__ROBOT_CONNECT_CONTROL__STRUCT_HPP_
