// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from interface_rb10_apple:action/RobotModeControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_Goal_type_support_ids_t;

static const _RobotModeControl_Goal_type_support_ids_t _RobotModeControl_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_Goal_type_support_symbol_names_t _RobotModeControl_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_Goal)),
  }
};

typedef struct _RobotModeControl_Goal_type_support_data_t
{
  void * data[2];
} _RobotModeControl_Goal_type_support_data_t;

static _RobotModeControl_Goal_type_support_data_t _RobotModeControl_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_Goal_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotModeControl_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_Goal_message_typesupport_map),
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
get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_Goal>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotModeControl_Goal)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_Goal>();
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
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_Result_type_support_ids_t;

static const _RobotModeControl_Result_type_support_ids_t _RobotModeControl_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_Result_type_support_symbol_names_t _RobotModeControl_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_Result)),
  }
};

typedef struct _RobotModeControl_Result_type_support_data_t
{
  void * data[2];
} _RobotModeControl_Result_type_support_data_t;

static _RobotModeControl_Result_type_support_data_t _RobotModeControl_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_Result_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotModeControl_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_Result_message_typesupport_map),
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
get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_Result>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotModeControl_Result)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_Result>();
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
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_Feedback_type_support_ids_t;

static const _RobotModeControl_Feedback_type_support_ids_t _RobotModeControl_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_Feedback_type_support_symbol_names_t _RobotModeControl_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_Feedback)),
  }
};

typedef struct _RobotModeControl_Feedback_type_support_data_t
{
  void * data[2];
} _RobotModeControl_Feedback_type_support_data_t;

static _RobotModeControl_Feedback_type_support_data_t _RobotModeControl_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_Feedback_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotModeControl_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_Feedback_message_typesupport_map),
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
get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_Feedback>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotModeControl_Feedback)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_Feedback>();
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
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_SendGoal_Request_type_support_ids_t;

static const _RobotModeControl_SendGoal_Request_type_support_ids_t _RobotModeControl_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_SendGoal_Request_type_support_symbol_names_t _RobotModeControl_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_SendGoal_Request)),
  }
};

typedef struct _RobotModeControl_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RobotModeControl_SendGoal_Request_type_support_data_t;

static _RobotModeControl_SendGoal_Request_type_support_data_t _RobotModeControl_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_SendGoal_Request_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotModeControl_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_SendGoal_Request_message_typesupport_map),
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
get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_SendGoal_Request>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotModeControl_SendGoal_Request)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_SendGoal_Request>();
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
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_SendGoal_Response_type_support_ids_t;

static const _RobotModeControl_SendGoal_Response_type_support_ids_t _RobotModeControl_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_SendGoal_Response_type_support_symbol_names_t _RobotModeControl_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_SendGoal_Response)),
  }
};

typedef struct _RobotModeControl_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RobotModeControl_SendGoal_Response_type_support_data_t;

static _RobotModeControl_SendGoal_Response_type_support_data_t _RobotModeControl_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_SendGoal_Response_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotModeControl_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_SendGoal_Response_message_typesupport_map),
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
get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_SendGoal_Response>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotModeControl_SendGoal_Response)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_SendGoal_type_support_ids_t;

static const _RobotModeControl_SendGoal_type_support_ids_t _RobotModeControl_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_SendGoal_type_support_symbol_names_t _RobotModeControl_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_SendGoal)),
  }
};

typedef struct _RobotModeControl_SendGoal_type_support_data_t
{
  void * data[2];
} _RobotModeControl_SendGoal_type_support_data_t;

static _RobotModeControl_SendGoal_type_support_data_t _RobotModeControl_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_SendGoal_service_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RobotModeControl_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_SendGoal_service_typesupport_map),
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
get_service_type_support_handle<interface_rb10_apple::action::RobotModeControl_SendGoal>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_GetResult_Request_type_support_ids_t;

static const _RobotModeControl_GetResult_Request_type_support_ids_t _RobotModeControl_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_GetResult_Request_type_support_symbol_names_t _RobotModeControl_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_GetResult_Request)),
  }
};

typedef struct _RobotModeControl_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RobotModeControl_GetResult_Request_type_support_data_t;

static _RobotModeControl_GetResult_Request_type_support_data_t _RobotModeControl_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_GetResult_Request_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotModeControl_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_GetResult_Request_message_typesupport_map),
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
get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_GetResult_Request>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotModeControl_GetResult_Request)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_GetResult_Request>();
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
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_GetResult_Response_type_support_ids_t;

static const _RobotModeControl_GetResult_Response_type_support_ids_t _RobotModeControl_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_GetResult_Response_type_support_symbol_names_t _RobotModeControl_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_GetResult_Response)),
  }
};

typedef struct _RobotModeControl_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RobotModeControl_GetResult_Response_type_support_data_t;

static _RobotModeControl_GetResult_Response_type_support_data_t _RobotModeControl_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_GetResult_Response_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotModeControl_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_GetResult_Response_message_typesupport_map),
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
get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_GetResult_Response>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotModeControl_GetResult_Response)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_GetResult_Response>();
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
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_GetResult_type_support_ids_t;

static const _RobotModeControl_GetResult_type_support_ids_t _RobotModeControl_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_GetResult_type_support_symbol_names_t _RobotModeControl_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_GetResult)),
  }
};

typedef struct _RobotModeControl_GetResult_type_support_data_t
{
  void * data[2];
} _RobotModeControl_GetResult_type_support_data_t;

static _RobotModeControl_GetResult_type_support_data_t _RobotModeControl_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_GetResult_service_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RobotModeControl_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_GetResult_service_typesupport_map),
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
get_service_type_support_handle<interface_rb10_apple::action::RobotModeControl_GetResult>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

typedef struct _RobotModeControl_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotModeControl_FeedbackMessage_type_support_ids_t;

static const _RobotModeControl_FeedbackMessage_type_support_ids_t _RobotModeControl_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotModeControl_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotModeControl_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotModeControl_FeedbackMessage_type_support_symbol_names_t _RobotModeControl_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_rb10_apple, action, RobotModeControl_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_rb10_apple, action, RobotModeControl_FeedbackMessage)),
  }
};

typedef struct _RobotModeControl_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RobotModeControl_FeedbackMessage_type_support_data_t;

static _RobotModeControl_FeedbackMessage_type_support_data_t _RobotModeControl_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotModeControl_FeedbackMessage_message_typesupport_map = {
  2,
  "interface_rb10_apple",
  &_RobotModeControl_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RobotModeControl_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RobotModeControl_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotModeControl_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotModeControl_FeedbackMessage_message_typesupport_map),
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
get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_FeedbackMessage>()
{
  return &::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_rb10_apple, action, RobotModeControl_FeedbackMessage)() {
  return get_message_type_support_handle<interface_rb10_apple::action::RobotModeControl_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "interface_rb10_apple/action/detail/robot_mode_control__struct.hpp"
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

static rosidl_action_type_support_t RobotModeControl_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_rb10_apple

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<interface_rb10_apple::action::RobotModeControl>()
{
  using ::interface_rb10_apple::action::rosidl_typesupport_cpp::RobotModeControl_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RobotModeControl_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::interface_rb10_apple::action::RobotModeControl::Impl::SendGoalService>();
  RobotModeControl_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::interface_rb10_apple::action::RobotModeControl::Impl::GetResultService>();
  RobotModeControl_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::interface_rb10_apple::action::RobotModeControl::Impl::CancelGoalService>();
  RobotModeControl_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::interface_rb10_apple::action::RobotModeControl::Impl::FeedbackMessage>();
  RobotModeControl_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::interface_rb10_apple::action::RobotModeControl::Impl::GoalStatusMessage>();
  return &RobotModeControl_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
