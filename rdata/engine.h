#include "types.h"

/// address: 0x47A474
///
/// +Infinity
extern float engine_inf;

/// address: 0x47A478
///
/// RndInc specifies the increment used in the Borland C/C++ pseudo- random
/// number generator algorithm.
///
///    seed = RndMult*seed + RndInc
///    seed = 0x15A4E35*seed + 1
extern const int32_t RndInc; // alias: rand_increment

/// address: 0x47A47C
///
/// RndMult specifies the multiplier used in the Borland C/C++ pseudo- random
/// number generator algorithm.
///
///    seed = RndMult*seed + RndInc
///    seed = 0x15A4E35*seed + 1
extern const int32_t RndMult; // alias: rand_multiplier
