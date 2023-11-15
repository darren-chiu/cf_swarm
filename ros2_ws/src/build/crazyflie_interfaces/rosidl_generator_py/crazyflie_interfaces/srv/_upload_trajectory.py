# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crazyflie_interfaces:srv/UploadTrajectory.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UploadTrajectory_Request(type):
    """Metaclass of message 'UploadTrajectory_Request'."""

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
            module = import_type_support('crazyflie_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_interfaces.srv.UploadTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__upload_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__upload_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__upload_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__upload_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__upload_trajectory__request

            from crazyflie_interfaces.msg import TrajectoryPolynomialPiece
            if TrajectoryPolynomialPiece.__class__._TYPE_SUPPORT is None:
                TrajectoryPolynomialPiece.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UploadTrajectory_Request(metaclass=Metaclass_UploadTrajectory_Request):
    """Message class 'UploadTrajectory_Request'."""

    __slots__ = [
        '_trajectory_id',
        '_piece_offset',
        '_pieces',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'trajectory_id': 'uint8',
        'piece_offset': 'uint32',
        'pieces': 'sequence<crazyflie_interfaces/TrajectoryPolynomialPiece>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['crazyflie_interfaces', 'msg'], 'TrajectoryPolynomialPiece')),  # noqa: E501
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
        self.trajectory_id = kwargs.get('trajectory_id', int())
        self.piece_offset = kwargs.get('piece_offset', int())
        self.pieces = kwargs.get('pieces', [])

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
        if self.trajectory_id != other.trajectory_id:
            return False
        if self.piece_offset != other.piece_offset:
            return False
        if self.pieces != other.pieces:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def trajectory_id(self):
        """Message field 'trajectory_id'."""
        return self._trajectory_id

    @trajectory_id.setter
    def trajectory_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'trajectory_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trajectory_id' field must be an unsigned integer in [0, 255]"
        self._trajectory_id = value

    @builtins.property
    def piece_offset(self):
        """Message field 'piece_offset'."""
        return self._piece_offset

    @piece_offset.setter
    def piece_offset(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'piece_offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'piece_offset' field must be an unsigned integer in [0, 4294967295]"
        self._piece_offset = value

    @builtins.property
    def pieces(self):
        """Message field 'pieces'."""
        return self._pieces

    @pieces.setter
    def pieces(self, value):
        if self._check_fields:
            from crazyflie_interfaces.msg import TrajectoryPolynomialPiece
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
                 all(isinstance(v, TrajectoryPolynomialPiece) for v in value) and
                 True), \
                "The 'pieces' field must be a set or sequence and each value of type 'TrajectoryPolynomialPiece'"
        self._pieces = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_UploadTrajectory_Response(type):
    """Metaclass of message 'UploadTrajectory_Response'."""

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
            module = import_type_support('crazyflie_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_interfaces.srv.UploadTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__upload_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__upload_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__upload_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__upload_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__upload_trajectory__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UploadTrajectory_Response(metaclass=Metaclass_UploadTrajectory_Response):
    """Message class 'UploadTrajectory_Response'."""

    __slots__ = [
        '_check_fields',
    ]

    _fields_and_field_types = {
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UploadTrajectory_Event(type):
    """Metaclass of message 'UploadTrajectory_Event'."""

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
            module = import_type_support('crazyflie_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_interfaces.srv.UploadTrajectory_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__upload_trajectory__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__upload_trajectory__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__upload_trajectory__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__upload_trajectory__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__upload_trajectory__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UploadTrajectory_Event(metaclass=Metaclass_UploadTrajectory_Event):
    """Message class 'UploadTrajectory_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<crazyflie_interfaces/UploadTrajectory_Request, 1>',
        'response': 'sequence<crazyflie_interfaces/UploadTrajectory_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['crazyflie_interfaces', 'srv'], 'UploadTrajectory_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['crazyflie_interfaces', 'srv'], 'UploadTrajectory_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from crazyflie_interfaces.srv import UploadTrajectory_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, UploadTrajectory_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'UploadTrajectory_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from crazyflie_interfaces.srv import UploadTrajectory_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, UploadTrajectory_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'UploadTrajectory_Response'"
        self._response = value


class Metaclass_UploadTrajectory(type):
    """Metaclass of service 'UploadTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crazyflie_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_interfaces.srv.UploadTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__upload_trajectory

            from crazyflie_interfaces.srv import _upload_trajectory
            if _upload_trajectory.Metaclass_UploadTrajectory_Request._TYPE_SUPPORT is None:
                _upload_trajectory.Metaclass_UploadTrajectory_Request.__import_type_support__()
            if _upload_trajectory.Metaclass_UploadTrajectory_Response._TYPE_SUPPORT is None:
                _upload_trajectory.Metaclass_UploadTrajectory_Response.__import_type_support__()
            if _upload_trajectory.Metaclass_UploadTrajectory_Event._TYPE_SUPPORT is None:
                _upload_trajectory.Metaclass_UploadTrajectory_Event.__import_type_support__()


class UploadTrajectory(metaclass=Metaclass_UploadTrajectory):
    from crazyflie_interfaces.srv._upload_trajectory import UploadTrajectory_Request as Request
    from crazyflie_interfaces.srv._upload_trajectory import UploadTrajectory_Response as Response
    from crazyflie_interfaces.srv._upload_trajectory import UploadTrajectory_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
