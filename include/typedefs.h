#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#ifdef _MSC_VER
// stdint.h not included in VC5.
typedef signed __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef signed __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef signed __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef signed __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
#include <stdint.h>
#endif // _MSC_VER

#include <stdarg.h>

typedef int8_t bool8_t;
typedef int32_t bool32_t;

typedef uint32_t uintptr32_t;

#endif // TYPEDEFS_H
