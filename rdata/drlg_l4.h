#include "types.h"

/// address: 0x47A2D0
///
/// L4ConvTbl is a lookup table for the 16 possible patterns of a 2x2 area,
/// where each cell either contains a SW wall or it doesn't.
///
/// PSX ref (SLPS-01416): 0x8014F318
/// PSX def: unsigned char L4ConvTbl[16]
extern l4_tile_id L4ConvTbl[16]; // alias: l4_tile_id_pattern_lookup

/// address: 0x47A2E0
///
/// L4USTAIRS is a 4x5 miniset of tile IDs representing a staircase going up.
///
/// ref: graphics/l4/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8014F328
/// PSX def: unsigned char L4USTAIRS[42]
extern uint8_t L4USTAIRS[42];

/// address: 0x47A30C
///
/// L4TWARP is a 4x5 miniset of tile IDs representing a staircase going up to
/// town.
///
/// ref: graphics/l4/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8014F354
/// PSX def: unsigned char L4TWARP[42]
extern uint8_t L4TWARP[42];

/// address: 0x47A338
///
/// L4DSTAIRS is a 5x5 miniset of tile IDs representing a staircase going down.
///
/// ref: graphics/l4/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8014F380
/// PSX def: unsigned char L4DSTAIRS[52]
extern uint8_t L4DSTAIRS[52];

/// address: 0x47A36C
///
/// L4PENTA is a 5x5 miniset of tile IDs representing a pentagram.
///
/// ref: graphics/l4/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8014F3B4
/// PSX def: unsigned char L4PENTA[52]
extern uint8_t L4PENTA[52];

/// address: 0x47A3A0
///
/// L4PENTA2 is a 5x5 miniset of tile IDs representing a pentagram.
///
/// ref: graphics/l4/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8014F3E8
/// PSX def: unsigned char L4PENTA2[52]
extern uint8_t L4PENTA2[52];

/// address: 0x47A3D4
///
/// L4BTYPES maps tile IDs to their corresponding undecorated tile ID.
///
/// ref: graphics/l4/tiles/README.md
///
/// PSX ref (SLPS-01416): 0x8014F41C
/// PSX def: unsigned char L4BTYPES[140]
extern l4_tile_id L4BTYPES[140]; // alias: l4_plain
