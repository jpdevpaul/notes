#include "types.h"

/// address: 0x52A514
///
/// +Infinity after initialization of dx.cpp.
extern float dx_cpp_init_value;

/// address: 0x52A518
///
/// DD represents the DirectDraw interface.
extern IDirectDraw *DD;

/// address: 0x52A51C
///
/// DDP represents the DirectDraw palette of the system.
extern IDirectDrawPalette *DDP;

/// address: 0x52A524
///
/// screen_buf is the display buffer, containing the pixels of the screen.
extern Screen *screen_buf;
