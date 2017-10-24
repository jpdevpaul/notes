#include "types.h"

// address: 0x525764
//
// l1_tile_bit_map represents a tile ID map of twice the size, repeating each
// tile of the original map in blocks of 4.
//
// PSX ref: 0x8013A3B0
// PSX def: unsigned char L5dungeon[80][80]
l1_tile_id l1_tile_bit_map[80][80];

// TODO: Define l1_flag enum.

// address: 0x527064
//
// l1_flag_map contains flags used for dungeon generation of the Cathedral.
//
// PSX ref: 0x8011C0D8
// PSX def: unsigned char* mydflags
uint8_t l1_flag_map[40][40];
