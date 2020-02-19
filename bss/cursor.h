#include "types.h"

/// address: 0x4B8CB0
///
/// objcurs_cel points to the contents of "data/inv/objcurs.cel".
extern void *objcurs_cel;

/// address: 0x4B8CC4
///
/// cursmx specifies the current X-coordinate of the mouse cursor.
///
/// PSX ref: 0x8011B750
/// PSX def: int cursmx
extern int32_t cursmx; // alias: cursor_x

/// address: 0x4B8CC8
///
/// cursmy specifies the current Y-coordinate of the mouse cursor.
///
/// PSX ref: 0x8011B754
/// PSX def: int cursmy
extern int32_t cursmy; // alias: cursor_y
