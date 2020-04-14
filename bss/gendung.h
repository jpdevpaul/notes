#include "types.h"

/// address: 0x52BA00
///
/// level_frame_types specifies the CEL frame decoder type for each frame of the
/// level CEL (e.g. "levels/l1data/l1.cel"), Indexed by frame numbers starting
/// at 1.
///
/// The decoder type may be one of the following.
///     0x0000 // cel.decodeType0
///     0x1000 // cel.decodeType1
///     0x2000 // cel.decodeType2
///     0x3000 // cel.decodeType3
///     0x4000 // cel.decodeType4
///     0x5000 // cel.decodeType5
///     0x6000 // cel.decodeType6
extern int16_t level_frame_types[2048];

/// address: 0x52CA00
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x8011C14C
/// PSX def: int themeCount
extern int32_t themeCount; // alias: nthemes

/// address: 0x52CA04
///
/// TODO: add docs.
///
/// PSX ref (easy-as-pie): 0x800EBA30
/// PSX def: unsigned char nTransTable[2049]
extern uint8_t nTransTable[2049];

/// address: 0x52D208
///
/// dMonster contains the NPC numbers of the map. The NPC number represents a
/// towner number (towners array index) in Tristram and a monster number
/// (monsters array index) in the dungeon.
///
/// PSX ref (SLPS-01416): 0x800E7A28
/// PSX def: struct map_info dung_map[112][112] // dMonster struct field
extern int32_t dMonster[112][112]; // alias: npc_num_map

/// address: 0x539608
///
/// dungeon contains the tile IDs of the map.
///
/// ref: graphics/l1/tiles/README.md#tileset-of-dungeon-layout-1
///
/// PSX ref (SLPS-01416): 0x800E40C4
/// PSX def: unsigned short dungeon[48][48]
extern uint8_t dungeon[40][40]; // alias: tile_id_map

/// address: 0x539C48
///
/// dObject contains the object numbers (objects array indices) of the map.
///
/// PSX ref (SLPS-01416): 0x800E7A28
/// PSX def: struct map_info dung_map[112][112] // dObject struct field
extern int8_t dObject[112][112]; // alias: object_num_map

/// address: 0x53CD48
///
/// TODO: add docs.
extern void *pSpeedCels;

/// address: 0x53CD4C
///
/// nlevel_frames specifies the number of frames in the level cel (e.g.
/// "levels/l1data/l1.cel").
extern int32_t nlevel_frames;

/// address: 0x53CD50
///
/// pdungeon contains a backup of the tile IDs of the map.
///
/// PSX ref (SLPS-01416): 0x800E52C4
/// PSX def: unsigned char pdungeon[40][40]
extern uint8_t pdungeon[40][40]; // alias: tile_id_map_backup

/// address: 0x53D390
///
/// dDead contains the dead numbers (deads array indices) and dead direction of
/// the map, encoded as specified by the pseudo-code below.
///
///    dead_num  = dDead[x][y]&0x1F
///    direction = dDead[x][y]>>5
///
/// PSX ref (SLPS-01416): 0x800E7A28
/// PSX def: struct map_info dung_map[112][112] // dDead struct field
extern int8_t dDead[112][112]; // alias: dead_map

/// address: 0x540490
///
/// dpiece_defs_map_1 specifies the dungeon piece information for a given
/// coordinate and block number.
extern int16_t dpiece_defs_map_1[16][112][112];

/// address: 0x5A2490
///
/// TODO: add docs.
extern int8_t dPreLight[112][112];

/// address: 0x5A5590
///
/// TransVal specifies the current transparency category.
///
/// PSX ref (SLPS-01416): 0x8011C148
/// PSX def: char TransVal
extern int8_t TransVal; // alias: transparency_category

/// address: 0x5A5594
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x8011C144
/// PSX def: int MicroTileLen
extern int32_t MicroTileLen;

/// address: 0x5A5598
///
/// TODO: add docs.
///
/// PSX ref (easy-as-pie): 0x800EA3E8
/// PSX def: unsigned char dflags[40][40]
extern uint8_t dflags[40][40];

/// address: 0x5A5BD8
///
/// dPiece contains the piece IDs of each tile on the map.
///
/// PSX ref (SLPS-01416): 0x800E7A28
/// PSX def: struct map_info dung_map[112][112] // dPiece struct field
extern int32_t dPiece[112][112]; // alias: piece_id_map

/// address: 0x5B1FD8
///
/// TODO: add docs.
extern int8_t dLight[112][112];

/// address: 0x5B50D8
///
/// setloadflag_2 specifies whether a single player quest DUN has been loaded.
extern bool32_t setloadflag_2; // alias: l2_l4_single_player_quest_dun_loaded

/// address: 0x5B50DC
///
/// TODO: add docs.
extern int tile_defs[2048];

/// address: 0x5B70DC
///
/// tile_defs specifies the tile definitions of the active dungeon type; (e.g.
/// levels/l1data/l1.til).
///
/// PSX ref (SLPS-01416): 0x800CECAC
/// PSX def: unsigned char pMegaTiles[2736]
extern Tile *pMegaTiles;

/// address: 0x5B70E0
///
/// dpiece_defs specifies the dungeon piece definitions (a.k.a. miniture tiles)
/// of the active dungeon type; (e.g. levels/l1data/l1.min).
extern DPiece *dpiece_defs;

/// address: 0x5B70E4
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x8011C108
/// PSX def: int gnDifficulty
extern int32_t gnDifficulty;

/// address: 0x5B70E8
///
/// TODO: add docs.
extern uint8_t nArchTable[2049];

/// address: 0x5B78EC
///
/// dTransVal specifies the transparency at each coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x800E7A28
/// PSX def: struct map_info dung_map[112][112] // dTransVal struct field
extern int8_t dTransVal[112][112]; // alias: transparency_map

/// address: 0x5BA9EC
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x800E7110
/// PSX def: unsigned char nTrapTable[2049]
extern uint8_t nTrapTable[2049];

/// address: 0x5BB1ED
///
/// leveltype specifies the active dungeon type of the current game.
///
/// PSX ref (SLPS-01416): 0x8011C10D
/// PSX def: unsigned char leveltype
extern dungeon_type leveltype; // alias: dtype

/// address: 0x5BB1EE
///
/// currlevel specifies the active dungeon level of the current game.
///
/// PSX ref (SLPS-01416): 0x8011C10C
/// PSX def: unsigned char currlevel
extern int8_t currlevel; // alias: dlvl

/// address: 0x5BB1F0
///
/// TransList specifies the active transparency indices.
///
/// PSX ref (SLPS-01416): 0x800E7928
/// PSX def: unsigned char TransList[256]
extern bool8_t TransList[256]; // alias: transparency_active

/// address: 0x5BB2F0
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x800E6108
/// PSX def: unsigned char nSolidTable[2049]
extern uint8_t nSolidTable[2049];

/// address: 0x5BBAF4
///
/// level_frame_count specifies the CEL frame occurrence for each frame of the
/// level CEL (e.g. "levels/l1data/l1.cel").
extern int32_t level_frame_count[2049];

/*

TODO: uncomment when ScrollStruct is defined. Consider naming ScrollStruct Scroll.

/// address: 0x5BDAF8
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x800E7914
/// PSX def: struct ScrollStruct ScrollInfo
extern ScrollStruct ScrollInfo;

*/

/// address: 0x5BDB0C
///
/// level_cel points to the contents of the active tileset, which is one of
/// "levels/towndata/town.cel", "levels/l1data/l1.cel", "levels/l2data/l2.cel",
/// "levels/l3data/l3.cel" or "levels/l4data/l4.cel".
extern void *level_cel;

/// address: 0x5BDB10
///
/// SpeedFrameTbl returns the frame number of the speed CEL, an in memory
/// decoding of level CEL frames, based on original frame number and light
/// index.
///
/// Note, given light index 0, the original frame number is returned.
extern int SpeedFrameTbl[16][128]; // alias: speed_cel_frame_num_from_light_index_frame_num

/*

TODO: uncomment when THEME_LOC is defined. Consider naming THEME_LOC ThemeLoc.

/// address: 0x5BFB10
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x80139C68
/// PSX def: struct THEME_LOC themeLoc[50]
extern THEME_LOC themeLoc[50];

*/

/// address: 0x5BFEF8
///
/// dPlayer contains the player numbers (players array indices) of the map.
///
/// PSX ref (SLPS-01416): 0x800E7A28
/// PSX def: struct map_info dung_map[112][112] // dPlayer struct field
extern int8_t dPlayer[112][112]; // alias: player_num_map

/// address: 0x5C2FF8
///
/// TODO: add docs.
extern int32_t game_world_width;

/// address: 0x5C2FFC
///
/// TODO: add docs.
extern int32_t game_world_height;

/// address: 0x5C3000
///
/// TODO: add docs.
extern int32_t game_world_pixel_width;

/// address: 0x5C3004
///
/// TODO: add docs.
extern int32_t game_world_pixel_height;

/// address: 0x5C3008
///
/// dArch contains the arch frame numbers of the map from the special tileset
/// (e.g. "levels/l1data/l1s.cel"). Note, the special tileset of Tristram (i.e.
/// "levels/towndata/towns.cel") contains trees rather than arches.
extern int8_t dArch[112][112]; // alias: arch_num_map

/// address: 0x5C6108
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x800E5904
/// PSX def: unsigned char nBlockTable[2049]
extern uint8_t nBlockTable[2049];

/// address: 0x5C690C
///
/// level_special_cel points to the contents of the active special tileset, which
/// is one of "levels/towndata/towns.cel", "levels/l1data/l1s.cel" or
/// "levels/l2data/l2s.cel".
extern void *level_special_cel;

/* TODO: Remove comment when dflag enum is defined.

/// address: 0x5C6910
///
/// dFlags contains the dungeon flags of the map.
///
/// PSX ref (SLPS-01416): 0x800E7A28
/// PSX def: struct map_info dung_map[112][112] // dFlags struct field
extern dflag dFlags[112][112]; // alias: dflag_map

*/

/// address: 0x5C9A10
///
/// dItem contains the item numbers (items array indices) of the map.
///
/// PSX ref (SLPS-01416): 0x800E7A28
/// PSX def: struct map_info dung_map[112][112] // dItem struct field
extern int8_t dItem[112][112]; // alias: item_num_map

/// address: 0x5CCB10
///
/// setlvlnum specifies the active quest level of the current game.
///
/// PSX ref (SLPS-01416): 0x8011C10F
/// PSX def: unsigned char setlvlnum
extern quest_level setlvlnum; // alias: quest_lvl

/// address: 0x5CCB14
///
/// level_frame_sizes specifies the size of each frame of the level cel (e.g.
/// "levels/l1data/l1.cel"). Indexed by frame numbers starting at 1.
extern int32_t level_frame_sizes[2048];

/// address: 0x5CEB14
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x800E690C
/// PSX def: unsigned char nMissileTable[2049]
extern uint8_t nMissileTable[2049];

/// address: 0x5CF318
///
/// pSetPiece_2 contains the contents of the single player quest DUN file.
extern void *pSetPiece_2; // alias: l2_l4_single_player_quest_dun

/// address: 0x5CF31C
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x8011C110
/// PSX def: unsigned char setlvltype
extern uint8_t setlvltype;

/// address: 0x5CF31D
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x8011C10E
/// PSX def: unsigned char setlevel
extern uint8_t setlevel; // alias: is_set_level

/// address: 0x5CF320
///
/// LvlViewY specifies the level viewpoint Y-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C130
/// PSX def: int LvlViewY
extern int32_t LvlViewY; // alias: lvl_view_y

/// address: 0x5CF324
///
/// LvlViewX specifies the level viewpoint X-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C12C
/// PSX def: int LvlViewX
extern int32_t LvlViewX; // alias: lvl_view_x

/// address: 0x5CF328
///
/// dmaxx specifies the maximum X-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C100
/// PSX def: int dmaxx
extern int32_t dmaxx;

/// address: 0x5CF32C
///
/// dmaxy specifies the maximum Y-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C104
/// PSX def: int dmaxy
extern int32_t dmaxy;

/// address: 0x5CF330
///
/// setpc_h specifies the height of the active set level of the map.
///
/// PSX ref (SLPS-01416): 0x8011C0F0
/// PSX def: int setpc_h
extern int32_t setpc_h; // alias: set_level_height

/// address: 0x5CF334
///
/// setpc_w specifies the width of the active set level of the map.
///
/// PSX ref (SLPS-01416): 0x8011C0EC
/// PSX def: int setpc_w
extern int32_t setpc_w; // alias: set_level_width

/// address: 0x5CF338
///
/// setpc_x specifies the active set level X-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C0E4
/// PSX def: int setpc_x
extern int32_t setpc_x; // alias: set_xx

/// address: 0x5CF33C
///
/// ViewX specifies the player viewpoint X-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C114
/// PSX def: int ViewX
extern int32_t ViewX; // alias: view_x

/// address: 0x5CF340
///
/// ViewY specifies the player viewpoint Y-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C118
/// PSX def: int ViewY
extern int32_t ViewY; // alias: view_y

/// address: 0x5CF344
///
/// setpc_y specifies the active set level Y-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C0E8
/// PSX def: int setpc_y
extern int32_t setpc_y; // alias: set_yy

/// address: 0x5CF350
///
/// dMissile contains the missile numbers (missiles array indices) of the map.
///
/// PSX ref (SLPS-01416): 0x800E7A28
/// PSX def: struct map_info dung_map[112][112] // dMissile struct field
extern int8_t dMissile[112][112]; // alias: missile_num_map

/// address: 0x5D2458
///
/// dminx specifies the minimum X-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C0F8
/// PSX def: int dminx
extern int32_t dminx;

/// address: 0x5D245C
///
/// dminy specifies the minimum Y-coordinate of the map.
///
/// PSX ref (SLPS-01416): 0x8011C0FC
/// PSX def: int dminy
extern int32_t dminy;

/// address: 0x5D2460
///
/// dpiece_defs_map_2 specifies the dungeon piece information for a given
/// coordinate and block number.
extern int16_t dpiece_defs_map_2[16][112][112];
