#include "types.h"

// address: 0x40D357
//
// TODO: add documentation.

// address: 0x40D379
//
// drlg_l2_fix_lockout fixes any unreachable areas.
//
// PSX ref: 0x801470F4
// PSX def: void L2LockoutFix__Fv()
void drlg_l2_fix_lockout();

// address: 0x40D4CC
//
// drlg_l2_fix_doors fixes door tile IDs after dungeon generation.
//
// PSX ref: 0x80147478
// PSX def: void L2DoorFix__Fv()
void drlg_l2_fix_doors();

// address: 0x40D501
//
// TODO: add documentation.

// address: 0x40D6C1
//
// drlg_l2_init_piece_id_map initializes the dungeon piece ID map.
//
// PSX ref: 0x801465F0
// PSX def: void DRLG_L2Pass3__Fv()
void drlg_l2_init_piece_id_map();

// address: 0x40D7B3
//
// TODO: add documentation.

// address: 0x40D888
//
// drlg_l2_create_dungeon creates a random catacombs dungeon based on the given
// seed and level entry.
//
// PSX ref: 0x8014854C
// PSX def: void CreateL2Dungeon__FUii(unsigned int rseed, int entry)
void __fastcall drlg_l2_create_dungeon(uint32_t seed, int entry);

// address: 0x40D94F
//
// drlg_l2_load_single_player_quest_dun loads tile IDs from the dungeon file of
// the active single player quest level.
//
// PSX ref: 0x80143E8C
// PSX def: void DRLG_LoadL2SP__Fv()
void drlg_l2_load_single_player_quest_dun();

// address: 0x40D9A4
//
// drlg_l2_free_single_player_quest_dun frees the dungeon file of the active
// quest level.
//
// PSX ref: 0x80143F2C
// PSX def: void DRLG_FreeL2SP__Fv()
void drlg_l2_free_single_player_quest_dun();

// address: 0x40D9B6
//
// drlg_l2_generate_dungeon generates a cathedral dungeon based on the given
// level entry.
//
// PSX ref: 0x801476E0
// PSX def: void DRLG_L2__Fi(int entry)
void __fastcall drlg_l2_generate_dungeon(int entry);

// address: 0x40E074
//
// drlg_l2_place_miniset places the given miniset of tile IDs.
//
// PSX ref: 0x80143408
// PSX def: unsigned char DRLG_L2PlaceMiniSet__FPUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir)
bool32_t __fastcall drlg_l2_place_miniset(uint8_t *miniset, int tmin, int tmax, int cx, int cy, bool32_t set_view, int ldir);

// address: 0x40E2D1
//
// drlg_l2_place_rand_miniset places the given miniset of tile IDs with a
// certain probability.
//
// PSX ref: 0x80143798
// PSX def: void DRLG_L2PlaceRndSet__FPUci(unsigned char *miniset, int rndper)
void __fastcall drlg_l2_place_rand_miniset(uint8_t *miniset, int probability);

// address: 0x40E49C
//
// drlg_l2_decorate decorates the dungeon.
//
// PSX ref: 0x80143A90
// PSX def: void DRLG_L2Subs__Fv()
void drlg_l2_decorate();

// address: 0x40E59C
//
// drlg_l2_init_shadows initializes arch and bar shadows.
//
// PSX ref: 0x80143C80
// PSX def: void DRLG_L2Shadows__Fv()
void drlg_l2_init_shadows();

// address: 0x40E66B
//
// drlg_l2_init_quest_dun initializes tile IDs based on the loaded quest dungeon
// file.
//
// PSX ref: 0x80143F5C
// PSX def: void DRLG_L2SetRoom__Fii(int rx1, int ry1)
void __fastcall drlg_l2_init_quest_dun(int tx, int ty);

// address: 0x40E6F0
//
// drlg_l2_fix_tiles fixes tile IDs of wall edges.
//
// PSX ref: 0x80145494
// PSX def: void L2TileFix__Fv()
void drlg_l2_fix_tiles();

// address: 0x40E74F
//
// drlg_l2_gen_dungeon tries to generate a cathedral dungeon.
//
// PSX ref: 0x801462E4
// PSX def: unsigned char CreateDungeon__Fv()
bool32_t drlg_l2_gen_dungeon();

// address: 0x40E8A4
//
// TODO: add documentation.

// address: 0x40ECF9
//
// TODO: add documentation.

// address: 0x40EE1D
//
// TODO: add documentation.

// address: 0x40EEAC
//
// TODO: add documentation.

// address: 0x40EF09
//
// TODO: add documentation.

// address: 0x40F265
//
// TODO: add documentation.

// address: 0x40F2BD
//
// TODO: add documentation.

// address: 0x40F2D0
//
// TODO: add documentation.

// address: 0x40F459
//
// TODO: add documentation.

// address: 0x40F9B1
//
// TODO: add documentation.

// address: 0x40F9EE
//
// TODO: add documentation.

// address: 0x40FA10
//
// TODO: add documentation.

// address: 0x40FA97
//
// TODO: add documentation.

// address: 0x40FB6C
//
// drlg_l2_floor_transparency adds transparency to concealing walls.
//
// PSX ref: 0x80146C70
// PSX def: void DRLG_L2FloodTVal__Fv()
void drlg_l2_floor_transparency();

// address: 0x40FBDB
//
// TODO: add documentation.

// address: 0x40FDCB
//
// drlg_l2_fix_transparency fixes transparency close to dirt tile IDs after
// dungeon generation.
//
// PSX ref: 0x80146D68
// PSX def: void DRLG_L2TransFix__Fv()
void drlg_l2_fix_transparency();

// address: 0x40FE53
//
// drlg_l2_fix_dirt fixes dirt tile IDs after dungeon generation.
//
// PSX ref: 0x80146F94
// PSX def: void L2DirtFix__Fv()
void drlg_l2_fix_dirt();

// address: 0x40FEBF
//
// drlg_l2_init_arches initializes arches.
//
// PSX ref: 0x80148134
// PSX def: void DRLG_InitL2Vals__Fv()
void drlg_l2_init_arches();
