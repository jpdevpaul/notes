#include "types.h"

/// address 0x525514
///
/// +Infinity after initialization of diablo.cpp.
float diablo_cpp_init_value;

/// address: 0x525518
///
/// hWndParent is the window handle of the game.
HWND hWndParent;

/// address: 0x525600
///
/// mouse_y specifies the current Y-coordinate of the mouse cursor.
int mouse_y;

/// address: 0x525604
///
/// mouse_x specifies the current X-coordinate of the mouse cursor.
int mouse_x;

/// address: 0x5256EC
///
/// hInstance is the instance of the main process.
HINSTANCE hInstance;

/// address: 0x525720
///
/// visible_tile_squares specifies whether tile squares are visible. In the
/// debug release of Diablo 1, this setting was configurable through the command
/// line flag "-v".
///
/// References:
///    * http://diablo1.se/notes/debug.html
bool32_t visible_tile_squares;

/// address: 0x525728
///
/// lighting_flag4 specifies flags used for light effects.
///
/// PSX ref: 0x8011B797
/// PSX def: unsigned char light4flag
uint32_t lighting_flag4;

/// address: 0x525738
///
/// flag_r_seed specifies the seed used for dungeon generation through the -r
/// command line flag.
int32_t flag_r_seed;
