# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_rb10_apple:srv/RobotConnectControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotConnectControl_Request(type):
    """Metaclass of message 'RobotConnectControl_Request'."""

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
                'interface_rb10_apple.srv.RobotConnectControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_connect_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_connect_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_connect_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_connect_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_connect_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotConnectControl_Request(metaclass=Metaclass_RobotConnectControl_Request):
    """Message class 'RobotConnectControl_Request'."""

    __slots__ = [
        '_connect',
    ]

    _fields_and_field_types = {
        'connect': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.connect = kwargs.get('connect', bool())

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
        if self.connect != other.connect:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def connect(self):
        """Message field 'connect'."""
        return self._connect

    @connect.setter
    def connect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connect' field must be of type 'bool'"
        self._connect = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotConnectControl_Response(type):
    """Metaclass of message 'RobotConnectControl_Response'."""

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
                'interface_rb10_apple.srv.RobotConnectControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_connect_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_connect_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_connect_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_connect_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_connect_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotConnectControl_Response(metaclass=Metaclass_RobotConnectControl_Response):
    """Message class 'RobotConnectControl_Response'."""

    __slots__ = [
        '_is_power_on',
    ]

    _fields_and_field_types = {
        'is_power_on': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_power_on = kwargs.get('is_power_on', bool())

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
        if self.is_power_on != other.is_power_on:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_power_on(self):
        """Message field 'is_power_on'."""
        return self._is_power_on

    @is_power_on.setter
    def is_power_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_power_on' field must be of type 'bool'"
        self._is_power_on = value


class Metaclass_RobotConnectControl(type):
    """Metaclass of service 'RobotConnectControl'."""

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
                'interface_rb10_apple.srv.RobotConnectControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_connect_control

            from interface_rb10_apple.srv import _robot_connect_control
            if _robot_connect_control.Metaclass_RobotConnectControl_Request._TYPE_SUPPORT is None:
                _robot_connect_control.Metaclass_RobotConnectControl_Request.__import_type_support__()
            if _robot_connect_control.Metaclass_RobotConnectControl_Response._TYPE_SUPPORT is None:
                _robot_connect_control.Metaclass_RobotConnectControl_Response.__import_type_support__()


class RobotConnectControl(metaclass=Metaclass_RobotConnectControl):
    from interface_rb10_apple.srv._robot_connect_control import RobotConnectControl_Request as Request
    from interface_rb10_apple.srv._robot_connect_control import RobotConnectControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
