#include "types.h"

// address: 0x525720
//
// visible_tile_squares specifies whether tile squares are visible. In the
// debug release of Diablo 1, this setting was configurable through the command
// line flag "-v".
//
// References:
//    * http://diablo1.se/notes/debug.html
bool32_t visible_tile_squares;

// lighting_flag4 specifies flags used for light effects.
//
// address: 0x525728
//
// PSX ref: 0x8011B797
// PSX def: unsigned char light4flag
uint32_t lighting_flag4;
