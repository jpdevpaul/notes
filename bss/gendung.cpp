#include "types.h"

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

// address: 0x5A5BD8
//
// piece_id_map contains the piece IDs of each tile on the map.
int32_t piece_id_map[112][112];

// address: 0x5B70DC
//
// tiles specifies the tile definitions of the current dungeon type; (e.g.
// levels/l1data/l1.til).
//
Tile *tiles;

// address: 0x5BB1ED
//
// dtype specifies the active dungeon type of the current game.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#dungeon_type
dungeon_type dtype;

// address: 0x5BB1EE
//
// dlvl specifies the active dungeon level of the current game.
//
// PSX ref: 0x8011C10C
// PSX def: unsigned char currlevel
int8_t dlvl;

// address: 0x5BDB0C
//
// level_cel points to the contents of the active tileset, which is one of
// "levels/towndata/town.cel", "levels/l1data/l1.cel", "levels/l2data/l2.cel",
// "levels/l3data/l3.cel" or "levels/l4data/l4.cel".
void *level_cel;

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

// address: 0x5CF350
//
// missile_num_map contains the missile numbers (missiles array indices) of the
// map.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/bss/missiles.cpp#missiles
int8_t missile_num_map[112][112];

