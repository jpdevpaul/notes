#include "types.h"

// address: 0x52BA00
//
// level_frame_types specifies the CEL frame decoder type for each frame of the
// level CEL (e.g. "levels/l1data/l1.cel").
//
// The decoder type may be one of the following.
//     0x0000 // cel.decodeType0
//     0x1000 // cel.decodeType1
//     0x2000 // cel.decodeType2
//     0x3000 // cel.decodeType3
//     0x4000 // cel.decodeType4
//     0x5000 // cel.decodeType5
//     0x6000 // cel.decodeType6
//
// References:
//    * https://github.com/sanctuary/formats/tree/master/image/cel
int16_t level_frame_types[2048];

// address: 0x52D208
//
// npc_num_map contains the NPC numbers of the map. The NPC number represents a
// towner number (towners array index) in Tristram and a monster number
// (monsters array index) in the dungeon.
//
// TODO: Figure out how to fix broken links. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/bss/towners.cpp#towners
//    * https://github.com/sanctuary/notes/blob/master/bss/monsters.cpp#monsters
int32_t npc_num_map[112][112];

// address: 0x539608
//
// tile_id_map contains the tile IDs of the map.
//
// PSX ref: 0x800E40C4
// PSX def: unsigned short dungeon[48][48]
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/README.md#tileset-of-dungeon-layout-1
uint8_t tile_id_map[40][40];

// address: 0x539C48
//
// object_num_map contains the object numbers (objects array indices) of the
// map.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/bss/objects.cpp#objects
int8_t object_num_map[112][112];

// address: 0x53CD4C
//
// nlevel_frames specifies the number of frames in the level cel (e.g.
// "levels/l1data/l1.cel").
int32_t nlevel_frames;

// address: 0x53CD50
//
// tile_id_map_backup contains a backup of the tile IDs of the map.
//
// PSX ref: 0x800E52C4
// PSX def: unsigned char pdungeon[40][40]
uint8_t tile_id_map_backup[40][40];

// address: 0x53D390
//
// dead_map contains the dead numbers (deads array indices) and dead direction
// of the map, encoded as specified by the pseudo-code below.
//
//    dead_num  = dead_map[col][row]&0x1F
//    direction = dead_map[col][row]>>5
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/bss/dead.cpp#deads
//    * https://github.com/sanctuary/notes/blob/master/enums.h#direction
int8_t dead_map[112][112];

// address: 0x540490
//
// dpiece_defs_map_1 specifies the dungeon piece information for a given
// coordinate and block number.
int16_t dpiece_defs_map_1[16][112][112];

// address: 0x5A5590
//
// transparency_index specifies the current transparency category.
//
// PSX ref: 0x8011C148
// PSX def: char TransVal
int8_t transparency_index;

// address: 0x5A5BD8
//
// piece_id_map contains the piece IDs of each tile on the map.
int32_t piece_id_map[112][112];

// address: 0x5B70DC
//
// tile_defs specifies the tile definitions of the active dungeon type; (e.g.
// levels/l1data/l1.til).
Tile *tile_defs;

// address: 0x5B70E0
//
// dpiece_defs specifies the dungeon piece definitions (a.k.a. miniture tiles)
// of the active dungeon type; (e.g. levels/l1data/l1.min).
DPiece *dpiece_defs;

// address: 0x5B78EC
//
// transparency_map specifies the transparency at each coordinate of the map.
//
// PSX ref: 0x800E7A28
// PSX def: map_info dung_map[112][112] // dTransVal struct member
int8_t transparency_map[112][112];

// address: 0x5BB1ED
//
// dtype specifies the active dungeon type of the current game.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#dungeon_type
//
// PSX ref: 0x8011C10D
// PSX def: unsigned char leveltype
dungeon_type dtype;

// address: 0x5BB1EE
//
// dlvl specifies the active dungeon level of the current game.
//
// PSX ref: 0x8011C10C
// PSX def: unsigned char currlevel
int8_t dlvl;

// address: 0x5BB1F0
//
// transparency_active specifies the active transparency indices.
//
// PSX ref: 0x800E7928
// PSX def: unsigned char TransList[256]
bool8_t transparency_active[256];

// address: 0x5BBAF4
//
// level_frame_count specifies the CEL frame occurrence for each frame of the
// level CEL (e.g. "levels/l1data/l1.cel").
int32_t level_frame_count[2048];

// address: 0x5BDB0C
//
// level_cel points to the contents of the active tileset, which is one of
// "levels/towndata/town.cel", "levels/l1data/l1.cel", "levels/l2data/l2.cel",
// "levels/l3data/l3.cel" or "levels/l4data/l4.cel".
void *level_cel;

// address: 0x5BDB10
//
// speed_cel_frame_num_from_light_index_frame_num returns the frame number of
// the speed CEL, an in memory decoding of level CEL frames, based on original
// frame number and light index.
//
// Note, given light index 0, the original frame number is returned.
int speed_cel_frame_num_from_light_index_frame_num[16][128];

// address: 0x5BFEF8
//
// player_num_map contains the player numbers (players array indices) of the
// map.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/bss/player.cpp#players
int8_t player_num_map[112][112];

// address: 0x5C3008
//
// arch_num_map contains the arch frame numbers of the map from the special
// tileset (e.g. "levels/l1data/l1s.cel"). Note, the special tileset of
// Tristram (i.e. "levels/towndata/towns.cel") contains trees rather than
// arches.
int8_t arch_num_map[112][112];

// address: 0x5C690C
//
// level_special_cel points to the contents of the active special tileset, which
// is one of "levels/towndata/towns.cel", "levels/l1data/l1s.cel" or
// "levels/l2data/l2s.cel".
void *level_special_cel;

/* TODO: Remove comment when dflag enum is defined.

// address: 0x5C6910
//
// dflag_map contains the dungeon flags of the map.
dflag dflag_map[112][112];

*/

// address: 0x5C9A10
//
// item_num_map contains the item numbers (items array indices) of the map.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/bss/items.cpp#items
int8_t item_num_map[112][112];

// address: 0x5CCB10
//
// quest_lvl specifies the active quest level of the current game.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#quest_level
quest_level quest_lvl;

// address: 0x5CCB14
//
// level_frame_sizes specifies the size of each frame of the level cel (e.g.
// "levels/l1data/l1.cel"). Indexed by frame numbers starting at 1.
int32_t level_frame_sizes[2048];

// address: 0x5CF330
//
// set_height specifies the height of the active miniset of the map.
//
// PSX ref: 0x8011C0F0
// PSX def: int setpc_h
int32_t set_height;

// address: 0x5CF334
//
// set_width specifies the width of the active miniset of the map.
//
// PSX ref: 0x8011C0EC
// PSX def: int setpc_w
int32_t set_width;

// address: 0x5CF338
//
// set_xx specifies the active miniset x-coordinate of the map.
//
// PSX ref: 0x8011C0E4
// PSX def: int setpc_x
int32_t set_xx;

// address: 0x5CF320
//
// lvl_view_y specifies the level viewpoint y-coordinate of the map.
//
// PSX ref: 0x8011C130
// PSX def: int LvlViewY
int32_t lvl_view_y;

// address: 0x5CF324
//
// lvl_view_x specifies the level viewpoint x-coordinate of the map.
//
// PSX ref: 0x8011C12C
// PSX def: int LvlViewX
int32_t lvl_view_x;

// address: 0x5CF33C
//
// view_x specifies the player viewpoint x-coordinate of the map.
//
// PSX ref: 0x8011C114
// PSX def: int ViewX
int32_t view_x;

// address: 0x5CF340
//
// view_y specifies the player viewpoint y-coordinate of the map.
//
// PSX ref: 0x8011C118
// PSX def: int ViewY
int32_t view_y;

// address: 0x5CF344
//
// set_yy specifies the active miniset y-coordinate of the map.
//
// PSX ref: 0x8011C0E8
// PSX def: int setpc_y
int32_t set_yy;

// address: 0x5CF350
//
// missile_num_map contains the missile numbers (missiles array indices) of the
// map.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/bss/missiles.cpp#missiles
int8_t missile_num_map[112][112];

// address: 0x5D2460
//
// dpiece_defs_map_2 specifies the dungeon piece information for a given
// coordinate and block number.
int16_t dpiece_defs_map_2[16][112][112];
