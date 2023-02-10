// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dobot_bringup_srv:srv/Circle.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "dobot_bringup_srv/srv/detail/circle__struct.h"
#include "dobot_bringup_srv/srv/detail/circle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dobot_bringup_srv__srv__circle__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("dobot_bringup_srv.srv._circle.Circle_Request", full_classname_dest, 44) == 0);
  }
  dobot_bringup_srv__srv__Circle_Request * ros_message = _ros_message;
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "x1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "y1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z1
    PyObject * field = PyObject_GetAttrString(_pymsg, "z1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rx1
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ry1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ry1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ry1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rz1
    PyObject * field = PyObject_GetAttrString(_pymsg, "rz1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rz1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x2
    PyObject * field = PyObject_GetAttrString(_pymsg, "x2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y2
    PyObject * field = PyObject_GetAttrString(_pymsg, "y2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z2
    PyObject * field = PyObject_GetAttrString(_pymsg, "z2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rx2
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ry2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ry2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ry2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rz2
    PyObject * field = PyObject_GetAttrString(_pymsg, "rz2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rz2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dobot_bringup_srv__srv__circle__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Circle_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dobot_bringup_srv.srv._circle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Circle_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dobot_bringup_srv__srv__Circle_Request * ros_message = (dobot_bringup_srv__srv__Circle_Request *)raw_ros_message;
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ry1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ry1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ry1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rz1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rz1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rz1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ry2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ry2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ry2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rz2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rz2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rz2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "dobot_bringup_srv/srv/detail/circle__struct.h"
// already included above
// #include "dobot_bringup_srv/srv/detail/circle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dobot_bringup_srv__srv__circle__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("dobot_bringup_srv.srv._circle.Circle_Response", full_classname_dest, 45) == 0);
  }
  dobot_bringup_srv__srv__Circle_Response * ros_message = _ros_message;
  {  // res
    PyObject * field = PyObject_GetAttrString(_pymsg, "res");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->res = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dobot_bringup_srv__srv__circle__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Circle_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dobot_bringup_srv.srv._circle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Circle_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dobot_bringup_srv__srv__Circle_Response * ros_message = (dobot_bringup_srv__srv__Circle_Response *)raw_ros_message;
  {  // res
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->res);
    {
      int rc = PyObject_SetAttrString(_pymessage, "res", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
