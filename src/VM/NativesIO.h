#pragma once

#include "Fiber.h"
#include "Macros.h"
#include "Memory.h"

#define NATIVE(name) gc<Object> name##Native(VM& vm, Fiber& fiber, ArrayView<gc<Object> >& args, NativeResult& result)

namespace magpie
{
  NATIVE(bindIO);
  NATIVE(fileClose);
  NATIVE(fileIsOpen);
  NATIVE(fileOpen);
  NATIVE(fileRead);
  NATIVE(bufferNewSize);
  NATIVE(bufferCount);
}

