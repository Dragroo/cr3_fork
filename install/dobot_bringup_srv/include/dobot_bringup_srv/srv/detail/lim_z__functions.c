// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot_bringup_srv:srv/LimZ.idl
// generated code does not contain a copyright notice
#include "dobot_bringup_srv/srv/detail/lim_z__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dobot_bringup_srv__srv__LimZ_Request__init(dobot_bringup_srv__srv__LimZ_Request * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
dobot_bringup_srv__srv__LimZ_Request__fini(dobot_bringup_srv__srv__LimZ_Request * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
dobot_bringup_srv__srv__LimZ_Request__are_equal(const dobot_bringup_srv__srv__LimZ_Request * lhs, const dobot_bringup_srv__srv__LimZ_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
dobot_bringup_srv__srv__LimZ_Request__copy(
  const dobot_bringup_srv__srv__LimZ_Request * input,
  dobot_bringup_srv__srv__LimZ_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

dobot_bringup_srv__srv__LimZ_Request *
dobot_bringup_srv__srv__LimZ_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_bringup_srv__srv__LimZ_Request * msg = (dobot_bringup_srv__srv__LimZ_Request *)allocator.allocate(sizeof(dobot_bringup_srv__srv__LimZ_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_bringup_srv__srv__LimZ_Request));
  bool success = dobot_bringup_srv__srv__LimZ_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_bringup_srv__srv__LimZ_Request__destroy(dobot_bringup_srv__srv__LimZ_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_bringup_srv__srv__LimZ_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_bringup_srv__srv__LimZ_Request__Sequence__init(dobot_bringup_srv__srv__LimZ_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_bringup_srv__srv__LimZ_Request * data = NULL;

  if (size) {
    data = (dobot_bringup_srv__srv__LimZ_Request *)allocator.zero_allocate(size, sizeof(dobot_bringup_srv__srv__LimZ_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_bringup_srv__srv__LimZ_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_bringup_srv__srv__LimZ_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot_bringup_srv__srv__LimZ_Request__Sequence__fini(dobot_bringup_srv__srv__LimZ_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot_bringup_srv__srv__LimZ_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot_bringup_srv__srv__LimZ_Request__Sequence *
dobot_bringup_srv__srv__LimZ_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_bringup_srv__srv__LimZ_Request__Sequence * array = (dobot_bringup_srv__srv__LimZ_Request__Sequence *)allocator.allocate(sizeof(dobot_bringup_srv__srv__LimZ_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_bringup_srv__srv__LimZ_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_bringup_srv__srv__LimZ_Request__Sequence__destroy(dobot_bringup_srv__srv__LimZ_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_bringup_srv__srv__LimZ_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_bringup_srv__srv__LimZ_Request__Sequence__are_equal(const dobot_bringup_srv__srv__LimZ_Request__Sequence * lhs, const dobot_bringup_srv__srv__LimZ_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_bringup_srv__srv__LimZ_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_bringup_srv__srv__LimZ_Request__Sequence__copy(
  const dobot_bringup_srv__srv__LimZ_Request__Sequence * input,
  dobot_bringup_srv__srv__LimZ_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_bringup_srv__srv__LimZ_Request);
    dobot_bringup_srv__srv__LimZ_Request * data =
      (dobot_bringup_srv__srv__LimZ_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_bringup_srv__srv__LimZ_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dobot_bringup_srv__srv__LimZ_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_bringup_srv__srv__LimZ_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dobot_bringup_srv__srv__LimZ_Response__init(dobot_bringup_srv__srv__LimZ_Response * msg)
{
  if (!msg) {
    return false;
  }
  // res
  return true;
}

void
dobot_bringup_srv__srv__LimZ_Response__fini(dobot_bringup_srv__srv__LimZ_Response * msg)
{
  if (!msg) {
    return;
  }
  // res
}

bool
dobot_bringup_srv__srv__LimZ_Response__are_equal(const dobot_bringup_srv__srv__LimZ_Response * lhs, const dobot_bringup_srv__srv__LimZ_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  return true;
}

bool
dobot_bringup_srv__srv__LimZ_Response__copy(
  const dobot_bringup_srv__srv__LimZ_Response * input,
  dobot_bringup_srv__srv__LimZ_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  return true;
}

dobot_bringup_srv__srv__LimZ_Response *
dobot_bringup_srv__srv__LimZ_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_bringup_srv__srv__LimZ_Response * msg = (dobot_bringup_srv__srv__LimZ_Response *)allocator.allocate(sizeof(dobot_bringup_srv__srv__LimZ_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_bringup_srv__srv__LimZ_Response));
  bool success = dobot_bringup_srv__srv__LimZ_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_bringup_srv__srv__LimZ_Response__destroy(dobot_bringup_srv__srv__LimZ_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_bringup_srv__srv__LimZ_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_bringup_srv__srv__LimZ_Response__Sequence__init(dobot_bringup_srv__srv__LimZ_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_bringup_srv__srv__LimZ_Response * data = NULL;

  if (size) {
    data = (dobot_bringup_srv__srv__LimZ_Response *)allocator.zero_allocate(size, sizeof(dobot_bringup_srv__srv__LimZ_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_bringup_srv__srv__LimZ_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_bringup_srv__srv__LimZ_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot_bringup_srv__srv__LimZ_Response__Sequence__fini(dobot_bringup_srv__srv__LimZ_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot_bringup_srv__srv__LimZ_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot_bringup_srv__srv__LimZ_Response__Sequence *
dobot_bringup_srv__srv__LimZ_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_bringup_srv__srv__LimZ_Response__Sequence * array = (dobot_bringup_srv__srv__LimZ_Response__Sequence *)allocator.allocate(sizeof(dobot_bringup_srv__srv__LimZ_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_bringup_srv__srv__LimZ_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_bringup_srv__srv__LimZ_Response__Sequence__destroy(dobot_bringup_srv__srv__LimZ_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_bringup_srv__srv__LimZ_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_bringup_srv__srv__LimZ_Response__Sequence__are_equal(const dobot_bringup_srv__srv__LimZ_Response__Sequence * lhs, const dobot_bringup_srv__srv__LimZ_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_bringup_srv__srv__LimZ_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_bringup_srv__srv__LimZ_Response__Sequence__copy(
  const dobot_bringup_srv__srv__LimZ_Response__Sequence * input,
  dobot_bringup_srv__srv__LimZ_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_bringup_srv__srv__LimZ_Response);
    dobot_bringup_srv__srv__LimZ_Response * data =
      (dobot_bringup_srv__srv__LimZ_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_bringup_srv__srv__LimZ_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dobot_bringup_srv__srv__LimZ_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_bringup_srv__srv__LimZ_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
