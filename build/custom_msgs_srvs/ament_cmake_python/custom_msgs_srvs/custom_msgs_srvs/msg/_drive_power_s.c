// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs_srvs:msg/DrivePower.idl
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
#include "custom_msgs_srvs/msg/detail/drive_power__struct.h"
#include "custom_msgs_srvs/msg/detail/drive_power__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs_srvs__msg__drive_power__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs_srvs.msg._drive_power.DrivePower", full_classname_dest, 44) == 0);
  }
  custom_msgs_srvs__msg__DrivePower * ros_message = _ros_message;
  {  // left_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_power = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_power = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs_srvs__msg__drive_power__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DrivePower */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs_srvs.msg._drive_power");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DrivePower");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs_srvs__msg__DrivePower * ros_message = (custom_msgs_srvs__msg__DrivePower *)raw_ros_message;
  {  // left_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
