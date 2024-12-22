# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_rb10_apple:action/RobotJointControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotJointControl_Goal(type):
    """Metaclass of message 'RobotJointControl_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_joint_control__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_joint_control__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_joint_control__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_joint_control__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_joint_control__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotJointControl_Goal(metaclass=Metaclass_RobotJointControl_Goal):
    """Message class 'RobotJointControl_Goal'."""

    __slots__ = [
        '_j0',
        '_j1',
        '_j2',
        '_j3',
        '_j4',
        '_j5',
    ]

    _fields_and_field_types = {
        'j0': 'double',
        'j1': 'double',
        'j2': 'double',
        'j3': 'double',
        'j4': 'double',
        'j5': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.j0 = kwargs.get('j0', float())
        self.j1 = kwargs.get('j1', float())
        self.j2 = kwargs.get('j2', float())
        self.j3 = kwargs.get('j3', float())
        self.j4 = kwargs.get('j4', float())
        self.j5 = kwargs.get('j5', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.j0 != other.j0:
            return False
        if self.j1 != other.j1:
            return False
        if self.j2 != other.j2:
            return False
        if self.j3 != other.j3:
            return False
        if self.j4 != other.j4:
            return False
        if self.j5 != other.j5:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def j0(self):
        """Message field 'j0'."""
        return self._j0

    @j0.setter
    def j0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j0 = value

    @builtins.property
    def j1(self):
        """Message field 'j1'."""
        return self._j1

    @j1.setter
    def j1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j1 = value

    @builtins.property
    def j2(self):
        """Message field 'j2'."""
        return self._j2

    @j2.setter
    def j2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j2 = value

    @builtins.property
    def j3(self):
        """Message field 'j3'."""
        return self._j3

    @j3.setter
    def j3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j3 = value

    @builtins.property
    def j4(self):
        """Message field 'j4'."""
        return self._j4

    @j4.setter
    def j4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j4 = value

    @builtins.property
    def j5(self):
        """Message field 'j5'."""
        return self._j5

    @j5.setter
    def j5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'j5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._j5 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotJointControl_Result(type):
    """Metaclass of message 'RobotJointControl_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_joint_control__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_joint_control__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_joint_control__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_joint_control__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_joint_control__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotJointControl_Result(metaclass=Metaclass_RobotJointControl_Result):
    """Message class 'RobotJointControl_Result'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotJointControl_Feedback(type):
    """Metaclass of message 'RobotJointControl_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_joint_control__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_joint_control__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_joint_control__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_joint_control__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_joint_control__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotJointControl_Feedback(metaclass=Metaclass_RobotJointControl_Feedback):
    """Message class 'RobotJointControl_Feedback'."""

    __slots__ = [
        '_feedback',
    ]

    _fields_and_field_types = {
        'feedback': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.feedback = kwargs.get('feedback', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'feedback' field must be of type 'str'"
        self._feedback = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotJointControl_SendGoal_Request(type):
    """Metaclass of message 'RobotJointControl_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_joint_control__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_joint_control__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_joint_control__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_joint_control__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_joint_control__send_goal__request

            from interface_rb10_apple.action import RobotJointControl
            if RobotJointControl.Goal.__class__._TYPE_SUPPORT is None:
                RobotJointControl.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotJointControl_SendGoal_Request(metaclass=Metaclass_RobotJointControl_SendGoal_Request):
    """Message class 'RobotJointControl_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'interface_rb10_apple/RobotJointControl_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_rb10_apple', 'action'], 'RobotJointControl_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from interface_rb10_apple.action._robot_joint_control import RobotJointControl_Goal
        self.goal = kwargs.get('goal', RobotJointControl_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from interface_rb10_apple.action._robot_joint_control import RobotJointControl_Goal
            assert \
                isinstance(value, RobotJointControl_Goal), \
                "The 'goal' field must be a sub message of type 'RobotJointControl_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotJointControl_SendGoal_Response(type):
    """Metaclass of message 'RobotJointControl_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_joint_control__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_joint_control__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_joint_control__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_joint_control__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_joint_control__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotJointControl_SendGoal_Response(metaclass=Metaclass_RobotJointControl_SendGoal_Response):
    """Message class 'RobotJointControl_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_RobotJointControl_SendGoal(type):
    """Metaclass of service 'RobotJointControl_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__robot_joint_control__send_goal

            from interface_rb10_apple.action import _robot_joint_control
            if _robot_joint_control.Metaclass_RobotJointControl_SendGoal_Request._TYPE_SUPPORT is None:
                _robot_joint_control.Metaclass_RobotJointControl_SendGoal_Request.__import_type_support__()
            if _robot_joint_control.Metaclass_RobotJointControl_SendGoal_Response._TYPE_SUPPORT is None:
                _robot_joint_control.Metaclass_RobotJointControl_SendGoal_Response.__import_type_support__()


class RobotJointControl_SendGoal(metaclass=Metaclass_RobotJointControl_SendGoal):
    from interface_rb10_apple.action._robot_joint_control import RobotJointControl_SendGoal_Request as Request
    from interface_rb10_apple.action._robot_joint_control import RobotJointControl_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotJointControl_GetResult_Request(type):
    """Metaclass of message 'RobotJointControl_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_joint_control__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_joint_control__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_joint_control__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_joint_control__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_joint_control__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotJointControl_GetResult_Request(metaclass=Metaclass_RobotJointControl_GetResult_Request):
    """Message class 'RobotJointControl_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotJointControl_GetResult_Response(type):
    """Metaclass of message 'RobotJointControl_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_joint_control__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_joint_control__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_joint_control__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_joint_control__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_joint_control__get_result__response

            from interface_rb10_apple.action import RobotJointControl
            if RobotJointControl.Result.__class__._TYPE_SUPPORT is None:
                RobotJointControl.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotJointControl_GetResult_Response(metaclass=Metaclass_RobotJointControl_GetResult_Response):
    """Message class 'RobotJointControl_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'interface_rb10_apple/RobotJointControl_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_rb10_apple', 'action'], 'RobotJointControl_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from interface_rb10_apple.action._robot_joint_control import RobotJointControl_Result
        self.result = kwargs.get('result', RobotJointControl_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from interface_rb10_apple.action._robot_joint_control import RobotJointControl_Result
            assert \
                isinstance(value, RobotJointControl_Result), \
                "The 'result' field must be a sub message of type 'RobotJointControl_Result'"
        self._result = value


class Metaclass_RobotJointControl_GetResult(type):
    """Metaclass of service 'RobotJointControl_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__robot_joint_control__get_result

            from interface_rb10_apple.action import _robot_joint_control
            if _robot_joint_control.Metaclass_RobotJointControl_GetResult_Request._TYPE_SUPPORT is None:
                _robot_joint_control.Metaclass_RobotJointControl_GetResult_Request.__import_type_support__()
            if _robot_joint_control.Metaclass_RobotJointControl_GetResult_Response._TYPE_SUPPORT is None:
                _robot_joint_control.Metaclass_RobotJointControl_GetResult_Response.__import_type_support__()


class RobotJointControl_GetResult(metaclass=Metaclass_RobotJointControl_GetResult):
    from interface_rb10_apple.action._robot_joint_control import RobotJointControl_GetResult_Request as Request
    from interface_rb10_apple.action._robot_joint_control import RobotJointControl_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotJointControl_FeedbackMessage(type):
    """Metaclass of message 'RobotJointControl_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_joint_control__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_joint_control__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_joint_control__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_joint_control__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_joint_control__feedback_message

            from interface_rb10_apple.action import RobotJointControl
            if RobotJointControl.Feedback.__class__._TYPE_SUPPORT is None:
                RobotJointControl.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotJointControl_FeedbackMessage(metaclass=Metaclass_RobotJointControl_FeedbackMessage):
    """Message class 'RobotJointControl_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'interface_rb10_apple/RobotJointControl_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_rb10_apple', 'action'], 'RobotJointControl_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from interface_rb10_apple.action._robot_joint_control import RobotJointControl_Feedback
        self.feedback = kwargs.get('feedback', RobotJointControl_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from interface_rb10_apple.action._robot_joint_control import RobotJointControl_Feedback
            assert \
                isinstance(value, RobotJointControl_Feedback), \
                "The 'feedback' field must be a sub message of type 'RobotJointControl_Feedback'"
        self._feedback = value


class Metaclass_RobotJointControl(type):
    """Metaclass of action 'RobotJointControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_rb10_apple')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_rb10_apple.action.RobotJointControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__robot_joint_control

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from interface_rb10_apple.action import _robot_joint_control
            if _robot_joint_control.Metaclass_RobotJointControl_SendGoal._TYPE_SUPPORT is None:
                _robot_joint_control.Metaclass_RobotJointControl_SendGoal.__import_type_support__()
            if _robot_joint_control.Metaclass_RobotJointControl_GetResult._TYPE_SUPPORT is None:
                _robot_joint_control.Metaclass_RobotJointControl_GetResult.__import_type_support__()
            if _robot_joint_control.Metaclass_RobotJointControl_FeedbackMessage._TYPE_SUPPORT is None:
                _robot_joint_control.Metaclass_RobotJointControl_FeedbackMessage.__import_type_support__()


class RobotJointControl(metaclass=Metaclass_RobotJointControl):

    # The goal message defined in the action definition.
    from interface_rb10_apple.action._robot_joint_control import RobotJointControl_Goal as Goal
    # The result message defined in the action definition.
    from interface_rb10_apple.action._robot_joint_control import RobotJointControl_Result as Result
    # The feedback message defined in the action definition.
    from interface_rb10_apple.action._robot_joint_control import RobotJointControl_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from interface_rb10_apple.action._robot_joint_control import RobotJointControl_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from interface_rb10_apple.action._robot_joint_control import RobotJointControl_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from interface_rb10_apple.action._robot_joint_control import RobotJointControl_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
