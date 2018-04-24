#include "types.h"

/// address: 0x415362
///
/// j_dx_cpp_init_1 initializes the C++ runtime of dx.cpp.
void j_dx_cpp_init_1();

/// address: 0x415367
///
/// dx_cpp_init_1 initializes the C++ runtime of dx.cpp.
void dx_cpp_init_1();

/// address: 0x415372
///
/// dx_cpp_init_2 initializes the C++ runtime of dx.cpp.
void dx_cpp_init_2();

/// address: 0x41537C
///
/// dx_init_mutex initializes the DirectX rendering system mutex.
void dx_init_mutex();

/// address: 0x415388
///
/// dx_cleanup_mutex_atexit terminates the DirectX rendering system mutex at
/// exit.
void dx_cleanup_mutex_atexit();

/// address: 0x415394
///
/// dx_cleanup_mutex terminates the DirectX rendering system mutex.
void dx_cleanup_mutex();

/// address: 0x4153A0
///
/// dx_init initializes the DirectX rendering system.
void __fastcall dx_init(HWND hWnd);

/// address: 0x4154B5
///
/// dx_create_back_buffer creates the DirectDraw back buffer.
void dx_create_back_buffer();

/// address: 0x4155C2
///
/// dx_create_primary_surface creates the primary DirectDraw surface.
void dx_create_primary_surface();

/// address: 0x41561A
///
/// dx_DirectDrawCreate creates a DirectDraw object.
HRESULT __fastcall dx_DirectDrawCreate(GUID *guid, IDirectDraw **DD, void *unknown);

/// address: 0x415695
///
/// j_dx_lock_mutex locks the DirectX rendering system mutex.
void j_dx_lock_mutex();

/// address: 0x41569A
///
/// dx_lock_mutex locks the DirectX rendering system mutex.
void dx_lock_mutex();

/// address: 0x415720
///
/// j_dx_unlock_mutex unlocks the DirectX rendering system mutex.
void j_dx_unlock_mutex();

/// address: 0x415725
///
/// dx_unlock_mutex unlocks the DirectX rendering system mutex.
void dx_unlock_mutex();

/// address: 0x4157A0
///
/// dx_cleanup terminates the DirectX rendering system.
void dx_cleanup();

/// address: 0x415848
///
/// dx_reinit reinitializes the DirectX rendering system.
void dx_reinit();

/// address: 0x4158A4
///
/// j_dx_reinit reinitializes the DirectX rendering system.
void j_dx_reinit();
