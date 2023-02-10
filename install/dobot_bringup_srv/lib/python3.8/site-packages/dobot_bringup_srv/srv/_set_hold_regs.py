# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dobot_bringup_srv:srv/SetHoldRegs.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'regs'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetHoldRegs_Request(type):
    """Metaclass of message 'SetHoldRegs_Request'."""

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
            module = import_type_support('dobot_bringup_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dobot_bringup_srv.srv.SetHoldRegs_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_hold_regs__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_hold_regs__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_hold_regs__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_hold_regs__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_hold_regs__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetHoldRegs_Request(metaclass=Metaclass_SetHoldRegs_Request):
    """Message class 'SetHoldRegs_Request'."""

    __slots__ = [
        '_id',
        '_addr',
        '_type',
        '_regs',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'addr': 'int32',
        'type': 'int32',
        'regs': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.addr = kwargs.get('addr', int())
        self.type = kwargs.get('type', int())
        self.regs = array.array('i', kwargs.get('regs', []))

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
        if self.id != other.id:
            return False
        if self.addr != other.addr:
            return False
        if self.type != other.type:
            return False
        if self.regs != other.regs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @property
    def addr(self):
        """Message field 'addr'."""
        return self._addr

    @addr.setter
    def addr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'addr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'addr' field must be an integer in [-2147483648, 2147483647]"
        self._addr = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @property
    def regs(self):
        """Message field 'regs'."""
        return self._regs

    @regs.setter
    def regs(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'regs' array.array() must have the type code of 'i'"
            self._regs = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'regs' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._regs = array.array('i', value)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetHoldRegs_Response(type):
    """Metaclass of message 'SetHoldRegs_Response'."""

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
            module = import_type_support('dobot_bringup_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dobot_bringup_srv.srv.SetHoldRegs_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_hold_regs__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_hold_regs__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_hold_regs__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_hold_regs__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_hold_regs__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetHoldRegs_Response(metaclass=Metaclass_SetHoldRegs_Response):
    """Message class 'SetHoldRegs_Response'."""

    __slots__ = [
        '_res',
    ]

    _fields_and_field_types = {
        'res': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.res = kwargs.get('res', int())

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
        if self.res != other.res:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def res(self):
        """Message field 'res'."""
        return self._res

    @res.setter
    def res(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'res' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'res' field must be an integer in [-2147483648, 2147483647]"
        self._res = value


class Metaclass_SetHoldRegs(type):
    """Metaclass of service 'SetHoldRegs'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dobot_bringup_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dobot_bringup_srv.srv.SetHoldRegs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_hold_regs

            from dobot_bringup_srv.srv import _set_hold_regs
            if _set_hold_regs.Metaclass_SetHoldRegs_Request._TYPE_SUPPORT is None:
                _set_hold_regs.Metaclass_SetHoldRegs_Request.__import_type_support__()
            if _set_hold_regs.Metaclass_SetHoldRegs_Response._TYPE_SUPPORT is None:
                _set_hold_regs.Metaclass_SetHoldRegs_Response.__import_type_support__()


class SetHoldRegs(metaclass=Metaclass_SetHoldRegs):
    from dobot_bringup_srv.srv._set_hold_regs import SetHoldRegs_Request as Request
    from dobot_bringup_srv.srv._set_hold_regs import SetHoldRegs_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
