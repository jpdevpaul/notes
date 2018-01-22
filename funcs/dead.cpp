#include "types.h"

// address: 0x4084A6
//
// dead_init initializes tracking of dead creatures.
//
// PSX ref: 0x80037D88
// PSX def: void InitDead__Fv()
void dead_init();

// address: 0x40865C
//
// dead_set tracks the dead creature at the given coordinate.
//
// PSX ref: 0x80037F8C
// PSX def: void AddDead__Fiici(int dx, int dy, char dv, int ddir)
void __fastcall dead_set(int x, int y, int8_t dead_num, direction direction);

// address: 0x40867D
//
// dead_add_lighting_to_dead_champions adds light sources to dead champion
// creatures.
void dead_add_lighting_to_dead_champions();
