// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from interface_rb10_apple:action/RobotTcpControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_Goal_type_support_ids_t;

static const _RobotTcpControl_Goal_type_support_ids_t _RobotTcpControl_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_Goal_type_support_symbol_names_t _RobotTcpControl_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_Goal)),
  }
};

typedef struct _RobotTcpControl_Goal_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_Goal_type_support_data_t;

static _RobotTcpControl_Goal_type_support_data_t _RobotTcpControl_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_Goal_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotTcpControl_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_Goal>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_Goal)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_Result_type_support_ids_t;

static const _RobotTcpControl_Result_type_support_ids_t _RobotTcpControl_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_Result_type_support_symbol_names_t _RobotTcpControl_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_Result)),
  }
};

typedef struct _RobotTcpControl_Result_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_Result_type_support_data_t;

static _RobotTcpControl_Result_type_support_data_t _RobotTcpControl_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_Result_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotTcpControl_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_Result>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_Result)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_Feedback_type_support_ids_t;

static const _RobotTcpControl_Feedback_type_support_ids_t _RobotTcpControl_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_Feedback_type_support_symbol_names_t _RobotTcpControl_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_Feedback)),
  }
};

typedef struct _RobotTcpControl_Feedback_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_Feedback_type_support_data_t;

static _RobotTcpControl_Feedback_type_support_data_t _RobotTcpControl_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_Feedback_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotTcpControl_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_Feedback>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_Feedback)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_SendGoal_Request_type_support_ids_t;

static const _RobotTcpControl_SendGoal_Request_type_support_ids_t _RobotTcpControl_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_SendGoal_Request_type_support_symbol_names_t _RobotTcpControl_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_SendGoal_Request)),
  }
};

typedef struct _RobotTcpControl_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_SendGoal_Request_type_support_data_t;

static _RobotTcpControl_SendGoal_Request_type_support_data_t _RobotTcpControl_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_SendGoal_Request_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotTcpControl_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_SendGoal_Request>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_SendGoal_Request)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_SendGoal_Response_type_support_ids_t;

static const _RobotTcpControl_SendGoal_Response_type_support_ids_t _RobotTcpControl_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_SendGoal_Response_type_support_symbol_names_t _RobotTcpControl_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_SendGoal_Response)),
  }
};

typedef struct _RobotTcpControl_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_SendGoal_Response_type_support_data_t;

static _RobotTcpControl_SendGoal_Response_type_support_data_t _RobotTcpControl_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_SendGoal_Response_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotTcpControl_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_SendGoal_Response>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_SendGoal_Response)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_SendGoal_type_support_ids_t;

static const _RobotTcpControl_SendGoal_type_support_ids_t _RobotTcpControl_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_SendGoal_type_support_symbol_names_t _RobotTcpControl_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_SendGoal)),
  }
};

typedef struct _RobotTcpControl_SendGoal_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_SendGoal_type_support_data_t;

static _RobotTcpControl_SendGoal_type_support_data_t _RobotTcpControl_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_SendGoal_service_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RobotTcpControl_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interface_rb10_apple::action::RobotTcpControl_SendGoal>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<interface_rb10_apple::action::RobotTcpControl_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_GetResult_Request_type_support_ids_t;

static const _RobotTcpControl_GetResult_Request_type_support_ids_t _RobotTcpControl_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_GetResult_Request_type_support_symbol_names_t _RobotTcpControl_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_GetResult_Request)),
  }
};

typedef struct _RobotTcpControl_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_GetResult_Request_type_support_data_t;

static _RobotTcpControl_GetResult_Request_type_support_data_t _RobotTcpControl_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_GetResult_Request_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotTcpControl_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_GetResult_Request>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_GetResult_Request)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_GetResult_Response_type_support_ids_t;

static const _RobotTcpControl_GetResult_Response_type_support_ids_t _RobotTcpControl_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_GetResult_Response_type_support_symbol_names_t _RobotTcpControl_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_GetResult_Response)),
  }
};

typedef struct _RobotTcpControl_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_GetResult_Response_type_support_data_t;

static _RobotTcpControl_GetResult_Response_type_support_data_t _RobotTcpControl_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_GetResult_Response_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotTcpControl_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_GetResult_Response>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_GetResult_Response)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_GetResult_type_support_ids_t;

static const _RobotTcpControl_GetResult_type_support_ids_t _RobotTcpControl_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_GetResult_type_support_symbol_names_t _RobotTcpControl_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_GetResult)),
  }
};

typedef struct _RobotTcpControl_GetResult_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_GetResult_type_support_data_t;

static _RobotTcpControl_GetResult_type_support_data_t _RobotTcpControl_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_GetResult_service_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RobotTcpControl_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interface_rb10_apple::action::RobotTcpControl_GetResult>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<interface_rb10_apple::action::RobotTcpControl_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotTcpControl_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotTcpControl_FeedbackMessage_type_support_ids_t;

static const _RobotTcpControl_FeedbackMessage_type_support_ids_t _RobotTcpControl_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotTcpControl_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotTcpControl_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotTcpControl_FeedbackMessage_type_support_symbol_names_t _RobotTcpControl_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotTcpControl_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotTcpControl_FeedbackMessage)),
  }
};

typedef struct _RobotTcpControl_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RobotTcpControl_FeedbackMessage_type_support_data_t;

static _RobotTcpControl_FeedbackMessage_type_support_data_t _RobotTcpControl_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotTcpControl_FeedbackMessage_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotTcpControl_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RobotTcpControl_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RobotTcpControl_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotTcpControl_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotTcpControl_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_FeedbackMessage>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl_FeedbackMessage)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotTcpControl_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "interface_rb10_apple/action/detail/robot_tcp_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace interface_rb10_apple
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t RobotTcpControl_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<interface_rb10_apple::action::RobotTcpControl>()
{
  using ::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotTcpControl_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RobotTcpControl_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::interface_rb10_apple::action::RobotTcpControl::Impl::SendGoalService>();
  RobotTcpControl_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::interface_rb10_apple::action::RobotTcpControl::Impl::GetResultService>();
  RobotTcpControl_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::interface_rb10_apple::action::RobotTcpControl::Impl::CancelGoalService>();
  RobotTcpControl_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::interface_rb10_apple::action::RobotTcpControl::Impl::FeedbackMessage>();
  RobotTcpControl_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::interface_rb10_apple::action::RobotTcpControl::Impl::GoalStatusMessage>();
  return &RobotTcpControl_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotTcpControl)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<interface_rb10_apple::action::RobotTcpControl>();
}

#ifdef __cplusplus
}
#endif
