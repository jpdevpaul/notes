#include "types.h"

// address: 0x479C24
//
// l1_shadow contains shadows for 2x2 blocks of base tile IDs on layout 1.
//
// TODO: Figure out how to fix broken link. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/shadow/README.md
Shadow l1_shadow[37];

// address: 0x479D28
//
// l1_base maps tile IDs to their corresponding base tile ID.
//
// TODO: Figure out how to fix broken links. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/README.md
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/base.md
l1_tile_id l1_base[207];

// address: 0x479DF8
//
// l1_plain maps tile IDs to their corresponding undecorated tile ID.
//
// TODO: Figure out how to fix broken link. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/README.md
l1_tile_id l1_plain[207];

// address: 0x479EC8
//
// l1_stair1 is a 4x4 miniset of tile IDs representing a staircase.
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_stair1[34];

// address: 0x479EEC
//
// l1_stair2 is a 4x4 miniset of tile IDs representing a staircase.
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_stair2[34];

// address: 0x479F10
//
// l1_stair3 is a 4x3 miniset of tile IDs representing a staircase.
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_stair3[26];

// address: 0x479F2C
//
// l1_candlestick is a 2x2 miniset of tile IDs representing a candlestick.
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_candlestick[10];

// address: 0x479F38
//
// l1_stair_poison is a 6x6 miniset of tile IDs representing a staircase down to
// the Poisoned Water Supply.
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_stair_poison[74];
