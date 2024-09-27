# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs_srvs:msg/DrivePower.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DrivePower(type):
    """Metaclass of message 'DrivePower'."""

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
            module = import_type_support('custom_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs_srvs.msg.DrivePower')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__drive_power
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__drive_power
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__drive_power
            cls._TYPE_SUPPORT = module.type_support_msg__msg__drive_power
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__drive_power

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DrivePower(metaclass=Metaclass_DrivePower):
    """Message class 'DrivePower'."""

    __slots__ = [
        '_left_power',
        '_right_power',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'left_power': 'double',
        'right_power': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_power = kwargs.get('left_power', float())
        self.right_power = kwargs.get('right_power', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.left_power != other.left_power:
            return False
        if self.right_power != other.right_power:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_power(self):
        """Message field 'left_power'."""
        return self._left_power

    @left_power.setter
    def left_power(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'left_power' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_power' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_power = value

    @builtins.property
    def right_power(self):
        """Message field 'right_power'."""
        return self._right_power

    @right_power.setter
    def right_power(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'right_power' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_power' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_power = value