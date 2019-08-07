#include "types.h"

/// address: 0x479C24
///
/// SPATS contains shadows for 2x2 blocks of base tile IDs in the Cathedral.
///
/// ref: graphics/l1/shadow/README.md
///
/// PSX ref: 0x8013A050
/// PSX def: ShadowStruct SPATS[37]
extern Shadow SPATS[37]; // alias: l1_shadow

/// address: 0x479D28
///
/// BSTYPES maps tile IDs to their corresponding base tile ID.
///
/// ref: graphics/l1/tiles/base.md
///
/// PSX ref: 0x8013A154
/// PSX def: unsigned char BSTYPES[206]
extern l1_tile_id BSTYPES[207]; // alias: l1_base

/// address: 0x479DF8
///
/// L5BTYPES maps tile IDs to their corresponding undecorated tile ID.
///
/// ref: graphics/l1/tiles/README.md
///
/// PSX ref: 0x8013A224
/// PSX def: unsigned char L5BTYPES[206]
extern l1_tile_id L5BTYPES[207]; // alias: l1_plain

/// address: 0x479EC8
///
/// STAIRSUP is a 4x4 miniset of tile IDs representing a staircase going up.
///
/// ref: graphics/l1/minisets/README.md
///
/// Minisets specifies how to arrange tile IDs in order to form set areas of
/// dungeons (e.g. staircases). Below follows a pseudo-code description of the
/// miniset format.
///
///    // A miniset defines the set area of a dungeon in terms of before and
///    // after areas of tile IDs.
///    type miniset struct {
///       // Width of miniset area.
///       width uint8
///       // Height of miniset area.
///       height uint8
///       // Tile IDs before transformation.
///       before [width][height]uint8
///       // Tile IDs after transformation.
///       after [width][height]uint8
///    }
///
/// PSX ref: 0x8013A2F4
/// PSX def: unsigned char STAIRSUP[34]
extern uint8_t STAIRSUP[34]; // alias: l1_stair_up1

/// address: 0x479EEC
///
/// L5STAIRSUP is a 4x4 miniset of tile IDs representing a staircase going up.
///
/// ref: graphics/l1/minisets/README.md
///
/// Minisets specifies how to arrange tile IDs in order to form set areas of
/// dungeons (e.g. staircases). Below follows a pseudo-code description of the
/// miniset format.
///
///    // A miniset defines the set area of a dungeon in terms of before and
///    // after areas of tile IDs.
///    type miniset struct {
///       // Width of miniset area.
///       width uint8
///       // Height of miniset area.
///       height uint8
///       // Tile IDs before transformation.
///       before [width][height]uint8
///       // Tile IDs after transformation.
///       after [width][height]uint8
///    }
///
/// PSX ref: 0x8013A318
/// PSX def: unsigned char L5STAIRSUP[34]
extern uint8_t L5STAIRSUP[34]; // alias: l1_stair_up2

/// address: 0x479F10
///
/// STAIRSDOWN is a 4x3 miniset of tile IDs representing a staircase going
/// down.
///
/// ref: graphics/l1/minisets/README.md
///
/// Minisets specifies how to arrange tile IDs in order to form set areas of
/// dungeons (e.g. staircases). Below follows a pseudo-code description of the
/// miniset format.
///
///    // A miniset defines the set area of a dungeon in terms of before and
///    // after areas of tile IDs.
///    type miniset struct {
///       // Width of miniset area.
///       width uint8
///       // Height of miniset area.
///       height uint8
///       // Tile IDs before transformation.
///       before [width][height]uint8
///       // Tile IDs after transformation.
///       after [width][height]uint8
///    }
///
/// PSX ref: 0x8013A33C
/// PSX def: unsigned char STAIRSDOWN[26]
extern uint8_t STAIRSDOWN[26]; // alias: l1_stair_down

/// address: 0x479F2C
///
/// LAMPS is a 2x2 miniset of tile IDs representing a candlestick.
///
/// ref: graphics/l1/minisets/README.md
///
/// Minisets specifies how to arrange tile IDs in order to form set areas of
/// dungeons (e.g. staircases). Below follows a pseudo-code description of the
/// miniset format.
///
///    // A miniset defines the set area of a dungeon in terms of before and
///    // after areas of tile IDs.
///    type miniset struct {
///       // Width of miniset area.
///       width uint8
///       // Height of miniset area.
///       height uint8
///       // Tile IDs before transformation.
///       before [width][height]uint8
///       // Tile IDs after transformation.
///       after [width][height]uint8
///    }
///
/// PSX ref: 0x8013A358
/// PSX def: unsigned char LAMPS[10]
extern uint8_t LAMPS[10]; // alias: l1_candlestick

/// address: 0x479F38
///
/// PWATERIN is a 6x6 miniset of tile IDs representing a staircase
/// going down to the Poisoned Water Supply.
///
/// ref: graphics/l1/minisets/README.md
///
/// Minisets specifies how to arrange tile IDs in order to form set areas of
/// dungeons (e.g. staircases). Below follows a pseudo-code description of the
/// miniset format.
///
///    // A miniset defines the set area of a dungeon in terms of before and
///    // after areas of tile IDs.
///    type miniset struct {
///       // Width of miniset area.
///       width uint8
///       // Height of miniset area.
///       height uint8
///       // Tile IDs before transformation.
///       before [width][height]uint8
///       // Tile IDs after transformation.
///       after [width][height]uint8
///    }
///
/// PSX ref: 0x8013A364
/// PSX def: unsigned char PWATERIN[74]
extern uint8_t PWATERIN[74]; // alias: l1_stair_down_poison
