#include "types.h"

/// address: 0x634968
///
/// file_info contains information about the game executable and asset archives.
extern FileInfo file_info;

/// address: 0x63497C
///
/// +Infinity after initialization of init.cpp.
extern float init_cpp_init_value;

/// address: 0x634980
///
/// window_activated indicates whether the window is being activated.
extern bool32_t window_activated;

/// address: 0x634984
///
/// diablo_exe_path specifies the path to diablo.exe.
extern char diablo_exe_path[260];

/// address: 0x634A88
///
/// unused_mpq is a handle to an unused MPQ archive.
extern void *unused_mpq;

/// address: 0x634A8C
///
/// patch_rt_mpq_path specifies the path to patch_rt.mpq.
extern char patch_rt_mpq_path[260];

/// address: 0x634B90
///
/// fnWindow_proc points to a user-defined function which processes messages sent
/// to the window.
extern LRESULT (__stdcall *fnWindow_proc)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

/// address: 0x634B94
///
/// diabdat_mpq is a handle to the diabdat.mpq archive.
extern void *diabdat_mpq;

/// address: 0x634B98
///
/// diabdat_mpq_path specifies the path to diabdat.mpq.
extern char diabdat_mpq_path[260];

/// address: 0x634C9C
///
/// patch_rt_mpq is a handle to the patch_rt.mpq archive.
extern void *patch_rt_mpq;

/// address: 0x634CA0
///
/// killed_mom_parent specifies whether a process with the "MOM Parent" class has
/// been identified and killed.
extern bool32_t killed_mom_parent;

/// address: 0x634CA4
///
/// screensaver_enabled_prev stores the previous state of the screensaver.
extern bool8_t screensaver_enabled_prev;
