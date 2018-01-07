#include "types.h"

// address: 0x634968
//
// file_info contains information about the game executable and asset archives.
FileInfo file_info;

// address 0x63497C
//
// +Infinity after initialization of init.cpp.
float init_cpp_init_value;

// address: 0x634980
//
// window_activated indicates whether the window is being activated.
bool32_t window_activated;

// address: 0x634984
//
// diablo_exe_path specifies the path to diablo.exe.
char diablo_exe_path[260];

// address: 0x634A88
//
// unused_mpq is a handle to an unused MPQ archive.
void *unused_mpq;

// address: 0x634A8C
//
// patch_rt_mpq_path specifies the path to patch_rt.mpq.
char patch_rt_mpq_path[260];

// address: 0x634B90
//
// fnWindow_proc points to a user-defined function which processes messages sent
// to the window.
LRESULT (__stdcall *fnWindow_proc)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

// address: 0x634B94
//
// diabdat_mpq is a handle to the diabdat.mpq archive.
void *diabdat_mpq;

// address: 0x634B98
//
// diabdat_mpq_path specifies the path to diabdat.mpq.
char diabdat_mpq_path[260];

// address: 0x634C9C
//
// patch_rt_mpq is a handle to the patch_rt.mpq archive.
void *patch_rt_mpq;

// address: 0x634CA0
//
// killed_mom_parent specifies whether a process with the "MOM Parent" class has
// been identified and killed.
bool32_t killed_mom_parent;

// address: 0x634CA4
//
// screensaver_enabled_prev stores the previous state of the screensaver.
bool8_t screensaver_enabled_prev;
