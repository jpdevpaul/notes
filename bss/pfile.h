#include "types.h"

/// address 0x6862E0
///
/// +Infinity after initialization of pfile.cpp.
extern float pfile_cpp_init_value;

/// address: 0x6862E4
///
/// hero_names contains a list of character names for the character selection
/// screen.
extern char hero_names[10][32];

/// address: 0x686424
///
/// valid_save specifies whether the save file is valid.
extern bool32_t valid_save;

/// address: 0x686428
///
/// save_prev_tc stores the tick count of the previous hero save.
extern uint32_t save_prev_tc;
