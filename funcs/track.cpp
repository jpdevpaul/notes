#include "types.h"

/// address: 0x4618A5
///
/// j_track_cpp_init initializes the C++ runtime of track.cpp.
void j_track_cpp_init();

/// address: 0x4618AA
///
/// track_cpp_init initializes the C++ runtime of track.cpp.
void track_cpp_init();

/// address: 0x4618B5
///
/// track_process processes mouse input to perform walk actions when the left
/// mouse button is held down.
void track_process();

/// address: 0x461953
///
/// track_set_walk_tracking sets the tracking of continued walk actions (when
/// the left mouse button is held down).
void __fastcall track_set_walk_tracking(bool32_t active);

/// address: 0x46199F
///
/// track_is_walk_tracking_active reports whether walk tracking is active (i.e.
/// the mouse button is held down to walk).
bool32_t track_is_walk_tracking_active();
