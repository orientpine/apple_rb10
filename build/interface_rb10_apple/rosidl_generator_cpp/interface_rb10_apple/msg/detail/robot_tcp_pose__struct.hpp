// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_rb10_apple:msg/RobotTcpPose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_TCP_POSE__STRUCT_HPP_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_TCP_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_rb10_apple__msg__RobotTcpPose __attribute__((deprecated))
#else
# define DEPRECATED__interface_rb10_apple__msg__RobotTcpPose __declspec(deprecated)
#endif

namespace interface_rb10_apple
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotTcpPose_
{
  using Type = RobotTcpPose_<ContainerAllocator>;

  explicit RobotTcpPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rx = 0.0;
      this->ry = 0.0;
      this->rz = 0.0;
    }
  }

  explicit RobotTcpPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rx = 0.0;
      this->ry = 0.0;
      this->rz = 0.0;
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
  using _rx_type =
    double;
  _rx_type rx;
  using _ry_type =
    double;
  _ry_type ry;
  using _rz_type =
    double;
  _rz_type rz;

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
  Type & set__rx(
    const double & _arg)
  {
    this->rx = _arg;
    return *this;
  }
  Type & set__ry(
    const double & _arg)
  {
    this->ry = _arg;
    return *this;
  }
  Type & set__rz(
    const double & _arg)
  {
    this->rz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_rb10_apple__msg__RobotTcpPose
    std::shared_ptr<interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_rb10_apple__msg__RobotTcpPose
    std::shared_ptr<interface_rb10_apple::msg::RobotTcpPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTcpPose_ & other) const
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
    if (this->rx != other.rx) {
      return false;
    }
    if (this->ry != other.ry) {
      return false;
    }
    if (this->rz != other.rz) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTcpPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTcpPose_

// alias to use template instance with default allocator
using RobotTcpPose =
  interface_rb10_apple::msg::RobotTcpPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_rb10_apple

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_TCP_POSE__STRUCT_HPP_
