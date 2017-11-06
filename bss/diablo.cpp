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

// address: 0x525728
//
// lighting_flag4 specifies flags used for light effects.
//
// PSX ref: 0x8011B797
// PSX def: unsigned char light4flag
uint32_t lighting_flag4;

// address: 0x525738
//
// flag_r_seed specifies the seed used for dungeon generation through the -r
// command line flag.
int32_t flag_r_seed;
