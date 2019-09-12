#include "types.h"

/// address: 0x6ABAB8
///
/// walk_tracking_active specifies whether continued walk actions are tracked
/// (i.e. when the left mouse button is held down).
extern bool8_t walk_tracking_active;

/// address: 0x6ABABC
///
/// +Infinity after initialization of track.cpp.
extern float track_cpp_init_value;

/// address: 0x6ABAC0
///
/// track_tc specifies the tick count when walk tracking was activated.
extern uint32_t track_tc;

/// address: 0x6ABAC4
///
/// prev_active specifies whether walk tracking was active in the previous game
/// step.
extern bool32_t prev_active;
