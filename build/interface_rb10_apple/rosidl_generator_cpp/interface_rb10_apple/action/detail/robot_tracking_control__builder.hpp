// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_rb10_apple:action/RobotTrackingControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TRACKING_CONTROL__BUILDER_HPP_
#define INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TRACKING_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_rb10_apple/action/detail/robot_tracking_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_rb10_apple
{

namespace action
{

namespace builder
{

class Init_RobotTrackingControl_Goal_command
{
public:
  Init_RobotTrackingControl_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_rb10_apple::action::RobotTrackingControl_Goal command(::interface_rb10_apple::action::RobotTrackingControl_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::action::RobotTrackingControl_Goal>()
{
  return interface_rb10_apple::action::builder::Init_RobotTrackingControl_Goal_command();
}

}  // namespace interface_rb10_apple


namespace interface_rb10_apple
{

namespace action
{

namespace builder
{

class Init_RobotTrackingControl_Result_message
{
public:
  explicit Init_RobotTrackingControl_Result_message(::interface_rb10_apple::action::RobotTrackingControl_Result & msg)
  : msg_(msg)
  {}
  ::interface_rb10_apple::action::RobotTrackingControl_Result message(::interface_rb10_apple::action::RobotTrackingControl_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_Result msg_;
};

class Init_RobotTrackingControl_Result_success
{
public:
  Init_RobotTrackingControl_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTrackingControl_Result_message success(::interface_rb10_apple::action::RobotTrackingControl_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RobotTrackingControl_Result_message(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::action::RobotTrackingControl_Result>()
{
  return interface_rb10_apple::action::builder::Init_RobotTrackingControl_Result_success();
}

}  // namespace interface_rb10_apple


namespace interface_rb10_apple
{

namespace action
{

namespace builder
{

class Init_RobotTrackingControl_Feedback_feedback
{
public:
  Init_RobotTrackingControl_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_rb10_apple::action::RobotTrackingControl_Feedback feedback(::interface_rb10_apple::action::RobotTrackingControl_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::action::RobotTrackingControl_Feedback>()
{
  return interface_rb10_apple::action::builder::Init_RobotTrackingControl_Feedback_feedback();
}

}  // namespace interface_rb10_apple


namespace interface_rb10_apple
{

namespace action
{

namespace builder
{

class Init_RobotTrackingControl_SendGoal_Request_goal
{
public:
  explicit Init_RobotTrackingControl_SendGoal_Request_goal(::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Request goal(::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Request msg_;
};

class Init_RobotTrackingControl_SendGoal_Request_goal_id
{
public:
  Init_RobotTrackingControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTrackingControl_SendGoal_Request_goal goal_id(::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotTrackingControl_SendGoal_Request_goal(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Request>()
{
  return interface_rb10_apple::action::builder::Init_RobotTrackingControl_SendGoal_Request_goal_id();
}

}  // namespace interface_rb10_apple


namespace interface_rb10_apple
{

namespace action
{

namespace builder
{

class Init_RobotTrackingControl_SendGoal_Response_stamp
{
public:
  explicit Init_RobotTrackingControl_SendGoal_Response_stamp(::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Response stamp(::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Response msg_;
};

class Init_RobotTrackingControl_SendGoal_Response_accepted
{
public:
  Init_RobotTrackingControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTrackingControl_SendGoal_Response_stamp accepted(::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RobotTrackingControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::action::RobotTrackingControl_SendGoal_Response>()
{
  return interface_rb10_apple::action::builder::Init_RobotTrackingControl_SendGoal_Response_accepted();
}

}  // namespace interface_rb10_apple


namespace interface_rb10_apple
{

namespace action
{

namespace builder
{

class Init_RobotTrackingControl_GetResult_Request_goal_id
{
public:
  Init_RobotTrackingControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_rb10_apple::action::RobotTrackingControl_GetResult_Request goal_id(::interface_rb10_apple::action::RobotTrackingControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::action::RobotTrackingControl_GetResult_Request>()
{
  return interface_rb10_apple::action::builder::Init_RobotTrackingControl_GetResult_Request_goal_id();
}

}  // namespace interface_rb10_apple


namespace interface_rb10_apple
{

namespace action
{

namespace builder
{

class Init_RobotTrackingControl_GetResult_Response_result
{
public:
  explicit Init_RobotTrackingControl_GetResult_Response_result(::interface_rb10_apple::action::RobotTrackingControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interface_rb10_apple::action::RobotTrackingControl_GetResult_Response result(::interface_rb10_apple::action::RobotTrackingControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_GetResult_Response msg_;
};

class Init_RobotTrackingControl_GetResult_Response_status
{
public:
  Init_RobotTrackingControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTrackingControl_GetResult_Response_result status(::interface_rb10_apple::action::RobotTrackingControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotTrackingControl_GetResult_Response_result(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::action::RobotTrackingControl_GetResult_Response>()
{
  return interface_rb10_apple::action::builder::Init_RobotTrackingControl_GetResult_Response_status();
}

}  // namespace interface_rb10_apple


namespace interface_rb10_apple
{

namespace action
{

namespace builder
{

class Init_RobotTrackingControl_FeedbackMessage_feedback
{
public:
  explicit Init_RobotTrackingControl_FeedbackMessage_feedback(::interface_rb10_apple::action::RobotTrackingControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interface_rb10_apple::action::RobotTrackingControl_FeedbackMessage feedback(::interface_rb10_apple::action::RobotTrackingControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_FeedbackMessage msg_;
};

class Init_RobotTrackingControl_FeedbackMessage_goal_id
{
public:
  Init_RobotTrackingControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTrackingControl_FeedbackMessage_feedback goal_id(::interface_rb10_apple::action::RobotTrackingControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotTrackingControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::interface_rb10_apple::action::RobotTrackingControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_rb10_apple::action::RobotTrackingControl_FeedbackMessage>()
{
  return interface_rb10_apple::action::builder::Init_RobotTrackingControl_FeedbackMessage_goal_id();
}

}  // namespace interface_rb10_apple

#endif  // INTERFACE_RB10_APPLE__ACTION__DETAIL__ROBOT_TRACKING_CONTROL__BUILDER_HPP_
