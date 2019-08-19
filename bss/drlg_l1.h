#include "types.h"

/// address: 0x525764
///
/// L5dungeon represents a tile ID map of twice the size, repeating each tile of
/// the original map in blocks of 4.
///
/// PSX ref: 0x8013A3B0
/// PSX def: unsigned char L5dungeon[80][80]
extern l1_tile_id L5dungeon[80][80]; // alias: l1_tile_bit_map

/// TODO: Define l1_flag enum.

/// address: 0x527064
///
/// mydflags contains flags used for dungeon generation of the Cathedral.
///
/// PSX ref: 0x8011C0D8
/// PSX def: unsigned char* mydflags
extern uint8_t mydflags[40][40]; // alias: l1_flag_map

/// address: 0x5276A4
///
/// setloadflag specifies whether a single player quest DUN has been loaded.
///
/// PSX ref: 0x8011C0F4
/// PSX def: unsigned char setloadflag
extern bool32_t setloadflag; // alias: l1_single_player_quest_dun_loaded

/// address: 0x5276A8
///
/// HR1 specifies whether to generate a horizontal room at position 1 in the
/// Cathedral.
///
/// PSX ref: 0x8011C8D8
/// PSX def: unsigned char HR1
extern bool32_t HR1; // alias: l1_horiz_room1

/// address: 0x5276AC
///
/// HR2 specifies whether to generate a horizontal room at position 2 in the
/// Cathedral.
///
/// PSX ref: 0x8011C8D9
/// PSX def: unsigned char HR2
extern bool32_t HR2; // alias: l1_horiz_room2

/// address: 0x5276B0
///
/// HR3 specifies whether to generate a horizontal room at position 3 in the
/// Cathedral.
///
/// PSX ref: 0x8011C8DA
/// PSX def: unsigned char HR3
extern bool32_t HR3; // alias: l1_horiz_room3

/// address: 0x5276B4
///
/// VR1 specifies whether to generate a vertical room at position 1 in the
/// Cathedral.
///
/// PSX ref: 0x8011C8DB
/// PSX def: unsigned char VR1
extern bool32_t VR1; // alias: l1_vert_room1

/// address: 0x5276B8
///
/// VR2 specifies whether to generate a vertical room at position 2 in the
/// Cathedral.
///
/// PSX ref: 0x8011C8DC
/// PSX def: unsigned char VR2
extern bool32_t VR2; // alias: l1_vert_room2

/// address: 0x5276BC
///
/// VR3 specifies whether to generate a vertical room at position 3 in the
/// Cathedral.
///
/// PSX ref: 0x8011C8DD
/// PSX def: unsigned char VR3
extern bool32_t VR3; // alias: l1_vert_room3

/// address: 0x5276C0
///
/// pSetPiece contains the contents of the single player quest DUN file.
///
/// PSX ref: 0x8011C0DC
/// PSX def: unsigned char* pSetPiece
extern void *pSetPiece; // alias: l1_single_player_quest_dun
