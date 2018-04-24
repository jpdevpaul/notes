#include "types.h"

/// address: 0x4A0D70
///
/// step_from_movement_delta maps from X-Y delta movement to step.
///
///      5
///     2 1
///    8 0 6
///     4 3
///      7
step step_from_movement_delta[3][3];
