#include "types.h"

/* TODO: uncomment when the l1_piece_id enum has been added to enums.h.

// address: 0x4B2F78
//
// town_stairway_down_to_dungeon_piece_ids specifies the dungeon piece IDs
// which constitute stairways leading down to the cathedral from town.
//
// PSX ref: 0x800E31F8
// PSX def: short TownDownList[11]
l1_piece_id town_stairway_down_to_dungeon_piece_ids[11];

// address: 0x4B2FA4
//
// town_stairway_down_to_catacombs_piece_ids specifies the dungeon piece IDs
// which constitute stairways leading down to the catacombs from town.
//
// PSX ref: 0x800E3210
// PSX def: short TownWarp1List[13]
l1_piece_id town_stairway_down_to_catacombs_piece_ids[13];

// address: 0x4B2FD8
//
// cathedral_stairway_up_piece_ids specifies the dungeon piece IDs
// which constitute stairways leading up from the cathedral.
//
// PSX ref: 0x800E3280
// PSX def: short L1UpList[12]
l1_piece_id cathedral_stairway_up_piece_ids[12];

// address: 0x4B3008
//
// cathedral_stairway_down_piece_ids specifies the dungeon piece IDs
// which constitute stairways leading down from the cathedral.
//
// PSX ref: 0x800E3298
// PSX def: short L1DownList[10]
l1_piece_id cathedral_stairway_down_piece_ids[10];

// address: 0x4B3030
//
// catacombs_stairway_up_piece_ids specifies the dungeon piece IDs
// which constitute stairways leading up from the catacombs.
//
// PSX ref: 0x8011BB1C
// PSX def: short L2UpList[3]
l1_piece_id catacombs_stairway_up_piece_ids[3];

// address: 0x4B303C
//
// catacombs_stairway_down_piece_ids specifies the dungeon piece IDs
// which constitute stairways leading down from the catacombs.
//
// PSX ref: 0x800E32AC
// PSX def: short L2DownList[5]
l1_piece_id catacombs_stairway_down_piece_ids[5];

// address: 0x4B3050
//
// catacombs_stairway_up_to_town_piece_ids specifies the dungeon piece IDs
// which constitute stairways leading up to town from the catacombs.
//
// PSX ref: 0x8011BB24
// PSX def: short L2TWarpUpList[3]
l1_piece_id catacombs_stairway_up_to_town_piece_ids[3];

// address: 0x4B305C
//
// caves_stairway_up_piece_ids specifies the dungeon piece IDs which
// constitute stairways leading up from the caves.
//
// PSX ref: 0x800E32B8
// PSX def: short L3UpList[15]
l1_piece_id caves_stairway_up_piece_ids[15];

// address: 0x4B3098
//
// caves_stairway_down_piece_ids specifies the dungeon piece IDs which
// constitute stairways leading down from the caves.
//
// PSX ref: 0x800E32D8
// PSX def: short L3DownList[9]
l1_piece_id caves_stairway_down_piece_ids[9];

// address: 0x4B30BC
//
// caves_stairway_up_to_town_piece_ids specifies the dungeon piece IDs which
// constitute stairways leading up to town from the caves.
//
// PSX ref: 0x800E32EC
// PSX def: short L3TWarpUpList[14]
l1_piece_id caves_stairway_up_to_town_piece_ids[14];

// address: 0x4B30F4
//
// hell_stairway_up_piece_ids specifies the dungeon piece IDs which
// constitute stairways leading up from hell.
//
// PSX ref: 0x8011BB2C
// PSX def: short L4UpList[4]
l1_piece_id hell_stairway_up_piece_ids[4];

// address: 0x4B3104
//
// hell_stairway_down_piece_ids specifies the dungeon piece IDs which
// constitute stairways leading down from hell.
//
// PSX ref: 0x800E3308
// PSX def: short L4DownList[6]
l1_piece_id hell_stairway_down_piece_ids[6];

// address: 0x4B311C
//
// hell_stairway_up_to_town_piece_ids specifies the dungeon piece IDs which
// constitute stairways leading up to town from hell.
//
// PSX ref: 0x8011BB34
// PSX def: short L4TWarpUpList[4]
l1_piece_id hell_stairway_up_to_town_piece_ids[4];

// address: 0x4B312C
//
// hell_stairway_down_to_diablo_piece_ids specifies the dungeon piece IDs which
// constitute stairways leading down to Diablo from hell.
//
// PSX ref: 0x800E3314
// PSX def: short L4PentaList[33]
l1_piece_id hell_stairway_down_to_diablo_piece_ids[33];

*/

// address: 0x4B31B0
//
// "Down to hell"
const char str_4B31B0[13] = {};

// address: 0x4B31C0
//
// "Down to caves"
const char str_4B31C0[14] = {};

// address: 0x4B31D0
//
// "Down to catacombs"
const char str_4B31D0[18] = {};

// address: 0x4B31E4
//
// "Down to dungeon"
const char str_4B31E4[16] = {};

// address: 0x4B31F4
//
// "Down to level %i"
const char str_4B31F4[17] = {};

// address: 0x4B3208
//
// "Up to town"
const char str_4B3208[11] = {};

// address: 0x4B3214
//
// "Up to level %i"
const char str_4B3214[15] = {};

// address: 0x4B3224
//
// "Down to Diablo"
const char str_4B3224[15] = {};

// address: 0x4B3234
//
// "Back to Level %i"
const char str_4B3234[17] = {};

// address: 0x4B3248
//
// "Unknown trigger msg"
const char str_4B3248[20] = {};
