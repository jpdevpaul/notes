#include "types.h"

/// address: 0x452831
///
/// SystemSupported reports whether the OS is Windows 2000 or newer.
///
/// Return value:
///    * ret: the OS is Windows 2000 or newer
bool32_t SystemSupported(); // alias: restrict_is_os_supported

/// address: 0x452885
///
/// RestrictedTest reports whether the process is restricted from writing to the
/// Windows directory.
///
/// Return value:
///    * ret: the process is restricted from writing to the Windows directory.
bool32_t RestrictedTest(); // alias: restrict_check_win_dir_write_access

/// address: 0x4528F7
///
/// ReadOnlyTest reports whether the process has only read access to the game
/// directory.
///
/// Return value:
///    * ret: the process has only read access to the game directory.
bool32_t ReadOnlyTest(); // alias: restrict_check_game_dir_write_access
