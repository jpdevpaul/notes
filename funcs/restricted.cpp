#include "types.h"

// address: 0x452831
//
// restricted_is_os_supported reports whether the OS is Windows 2000 or newer.
bool32_t restricted_is_os_supported();

// address: 0x452885
//
// restricted_has_game_win_write_access reports whether the process has write
// access to the windows directory.
bool32_t restricted_has_game_win_write_access();

// address: 0x4528F7
//
// restricted_has_game_dir_write_access reports whether the process has write
// access to the game directory.
bool32_t restricted_has_game_dir_write_access();
