#include "types.h"

// address: 0x452831
//
// restricted_is_os_supported reports whether the OS is Windows 2000 or newer.
bool32_t restricted_is_os_supported();

// address: 0x452885
//
// restricted_check_game_win_write_access checks whether the process has write
// access to the windows directory. A return value of false states that the
// process has write access.
bool32_t restricted_check_game_win_write_access();

// address: 0x4528F7
//
// restricted_check_game_dir_write_access checks whether the process has write
// access to the game directory. A return value of false states that the process
// has write access.
bool32_t restricted_check_game_dir_write_access();
