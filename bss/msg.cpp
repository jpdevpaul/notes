#include "types.h"

// address 0x65AB1C
//
// +Infinity after initialization of msg.cpp.
float msg_cpp_init_value;

// address: 0x65AB28
//
// delta_levels contains delta information about items, objects and monsters for
// each dungeon level to be synchronized with connected peers.
DeltaLevel delta_levels[17];

// address: 0x676168
//
// portals contains the town portals of the current game.
//
// PSX ref: 0x8012EDD8
// PSX def: DJunk sgJunk
Portal portals[4];
