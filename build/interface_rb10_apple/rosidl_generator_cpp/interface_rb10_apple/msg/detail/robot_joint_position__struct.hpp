// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_rb10_apple:msg/RobotJointPosition.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__STRUCT_HPP_
#define INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_rb10_apple__msg__RobotJointPosition __attribute__((deprecated))
#else
# define DEPRECATED__interface_rb10_apple__msg__RobotJointPosition __declspec(deprecated)
#endif

namespace interface_rb10_apple
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotJointPosition_
{
  using Type = RobotJointPosition_<ContainerAllocator>;

  explicit RobotJointPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->j0 = 0.0;
      this->j1 = 0.0;
      this->j2 = 0.0;
      this->j3 = 0.0;
      this->j4 = 0.0;
      this->j5 = 0.0;
    }
  }

  explicit RobotJointPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->j0 = 0.0;
      this->j1 = 0.0;
      this->j2 = 0.0;
      this->j3 = 0.0;
      this->j4 = 0.0;
      this->j5 = 0.0;
    }
  }

  // field types and members
  using _j0_type =
    double;
  _j0_type j0;
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

  // setters for named parameter idiom
  Type & set__j0(
    const double & _arg)
  {
    this->j0 = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_rb10_apple__msg__RobotJointPosition
    std::shared_ptr<interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_rb10_apple__msg__RobotJointPosition
    std::shared_ptr<interface_rb10_apple::msg::RobotJointPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotJointPosition_ & other) const
  {
    if (this->j0 != other.j0) {
      return false;
    }
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
    return true;
  }
  bool operator!=(const RobotJointPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotJointPosition_

// alias to use template instance with default allocator
using RobotJointPosition =
  interface_rb10_apple::msg::RobotJointPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_rb10_apple

#endif  // INTERFACE_RB10_APPLE__MSG__DETAIL__ROBOT_JOINT_POSITION__STRUCT_HPP_
