#include "types.h"

/// address: 0x4B2F78
///
/// TownDownList specifies the dungeon piece IDs which constitute stairways
/// leading down to the cathedral from town.
///
/// PSX ref (SLPS-01416): 0x800E31F8
/// PSX def: short TownDownList[11]
extern l1_piece_id TownDownList[11]; // alias: town_stairway_down_to_dungeon_piece_ids

/// address: 0x4B2FA4
///
/// TownWarp1List specifies the dungeon piece IDs which constitute stairways
/// leading down to the catacombs from town.
///
/// PSX ref (SLPS-01416): 0x800E3210
/// PSX def: short TownWarp1List[13]
extern l1_piece_id TownWarp1List[13]; // alias: town_stairway_down_to_catacombs_piece_ids

/// address: 0x4B2FD8
///
/// L1UpList specifies the dungeon piece IDs which constitute stairways leading
/// up from the cathedral.
///
/// PSX ref (SLPS-01416): 0x800E3280
/// PSX def: short L1UpList[12]
extern l1_piece_id L1UpList[12]; // alias: cathedral_stairway_up_piece_ids

/// address: 0x4B3008
///
/// L1DownList specifies the dungeon piece IDs which constitute stairways
/// leading down from the cathedral.
///
/// PSX ref (SLPS-01416): 0x800E3298
/// PSX def: short L1DownList[10]
extern l1_piece_id L1DownList[10]; // alias: cathedral_stairway_down_piece_ids

/// address: 0x4B3030
///
/// L2UpList specifies the dungeon piece IDs which constitute stairways leading
/// up from the catacombs.
///
/// PSX ref (SLPS-01416): 0x8011BB1C
/// PSX def: short L2UpList[3]
extern l1_piece_id L2UpList[3]; // alias: catacombs_stairway_up_piece_ids

/// address: 0x4B303C
///
/// L2DownList specifies the dungeon piece IDs which constitute stairways
/// leading down from the catacombs.
///
/// PSX ref (SLPS-01416): 0x800E32AC
/// PSX def: short L2DownList[5]
extern l1_piece_id L2DownList[5]; // alias: catacombs_stairway_down_piece_ids

/// address: 0x4B3050
///
/// L2TWarpUpList specifies the dungeon piece IDs which constitute stairways
/// leading up to town from the catacombs.
///
/// PSX ref (SLPS-01416): 0x8011BB24
/// PSX def: short L2TWarpUpList[3]
extern l1_piece_id L2TWarpUpList[3]; // alias: catacombs_stairway_up_to_town_piece_ids

/// address: 0x4B305C
///
/// L3UpList specifies the dungeon piece IDs which constitute stairways leading
/// up from the caves.
///
/// PSX ref (SLPS-01416): 0x800E32B8
/// PSX def: short L3UpList[15]
extern l1_piece_id L3UpList[15]; // alias: caves_stairway_up_piece_ids

/// address: 0x4B3098
///
/// L3DownList specifies the dungeon piece IDs which constitute stairways
/// leading down from the caves.
///
/// PSX ref (SLPS-01416): 0x800E32D8
/// PSX def: short L3DownList[9]
extern l1_piece_id L3DownList[9]; // alias: caves_stairway_down_piece_ids

/// address: 0x4B30BC
///
/// L3TWarpUpList specifies the dungeon piece IDs which constitute stairways
/// leading up to town from the caves.
///
/// PSX ref (SLPS-01416): 0x800E32EC
/// PSX def: short L3TWarpUpList[14]
extern l1_piece_id L3TWarpUpList[14]; // alias: caves_stairway_up_to_town_piece_ids

/// address: 0x4B30F4
///
/// L4UpList specifies the dungeon piece IDs which constitute stairways leading
/// up from hell.
///
/// PSX ref (SLPS-01416): 0x8011BB2C
/// PSX def: short L4UpList[4]
extern l1_piece_id L4UpList[4]; // alias: hell_stairway_up_piece_ids

/// address: 0x4B3104
///
/// L4DownList specifies the dungeon piece IDs which constitute stairways
/// leading down from hell.
///
/// PSX ref (SLPS-01416): 0x800E3308
/// PSX def: short L4DownList[6]
extern l1_piece_id L4DownList[6]; // alias: hell_stairway_down_piece_ids

/// address: 0x4B311C
///
/// L4TWarpUpList specifies the dungeon piece IDs which constitute stairways
/// leading up to town from hell.
///
/// PSX ref (SLPS-01416): 0x8011BB34
/// PSX def: short L4TWarpUpList[4]
extern l1_piece_id L4TWarpUpList[4]; // alias: hell_stairway_up_to_town_piece_ids

/// address: 0x4B312C
///
/// L4PentaList specifies the dungeon piece IDs which constitute stairways
/// leading down to Diablo from hell.
///
/// PSX ref (SLPS-01416): 0x800E3314
/// PSX def: short L4PentaList[33]
extern l1_piece_id L4PentaList[33]; // alias: hell_stairway_down_to_diablo_piece_ids

/// address: 0x4B31B0
///
/// "Down to hell"
extern char str_4B31B0[13];

/// address: 0x4B31C0
///
/// "Down to caves"
extern char str_4B31C0[14];

/// address: 0x4B31D0
///
/// "Down to catacombs"
extern char str_4B31D0[18];

/// address: 0x4B31E4
///
/// "Down to dungeon"
extern char str_4B31E4[16];

/// address: 0x4B31F4
///
/// "Down to level %i"
extern char str_4B31F4[17];

/// address: 0x4B3208
///
/// "Up to town"
extern char str_4B3208[11];

/// address: 0x4B3214
///
/// "Up to level %i"
extern char str_4B3214[15];

/// address: 0x4B3224
///
/// "Down to Diablo"
extern char str_4B3224[15];

/// address: 0x4B3234
///
/// "Back to Level %i"
extern char str_4B3234[17];

/// address: 0x4B3248
///
/// "Unknown trigger msg"
extern char str_4B3248[20];
