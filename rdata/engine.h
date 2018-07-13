#include "types.h"

/// address: 0x47A474
///
/// +Infinity
extern float engine_inf;

/// address: 0x47A478
///
/// rand_increment specifies the increment used in the Borland C/C++ pseudo-
/// random number generator algorithm.
///
///    seed = 0x15A4E35*seed + 1
///
/// Note, this global variable is unused.
extern int32_t rand_increment;

/// address: 0x47A47C
///
/// rand_multiplier specifies the multiplier used in the Borland C/C++ pseudo-
/// random number generator algorithm.
///
///   seed = 0x15A4E35*seed + 1
///
/// Note, this global variable is unused.
extern int32_t rand_multiplier;
