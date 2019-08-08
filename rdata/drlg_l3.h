#include "types.h"

/// address: 0x479F84
///
/// L3ConvTbl is a lookup table for the 16 possible patterns of a 2x2 area,
/// where each cell either contains a SW wall or it doesn't.
///
/// PSX ref (SLPS-01416): 0x801486E4
/// PSX def: unsigned char L3ConvTbl[16]
extern l3_tile_id L3ConvTbl[16]; // alias: l3_tile_id_pattern_lookup

/// address: 0x479F94
///
/// L3UP is a 3x3 miniset of tile IDs representing a staircase going up.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x801486F4
/// PSX def: unsigned char L3UP[20]
extern uint8_t L3UP[20]; // alias: l3_stair_up1

/// address: 0x479FA8
///
/// L3DOWN is a 3x3 miniset of tile IDs representing a staircase going down.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148708
/// PSX def: unsigned char L3DOWN[20]
extern uint8_t L3DOWN[20]; // alias: l3_stair_down

/// address: 0x479FBC
///
/// L3HOLDWARP is a 3x3 miniset of tile IDs representing a staircase going up to
/// town.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8014871C
/// PSX def: unsigned char L3HOLDWARP[20]
extern uint8_t L3HOLDWARP[20]; // alias: l3_stair_up2

/// address: 0x479FD0
///
/// L3TITE1 is a 4x4 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148730
/// PSX def: unsigned char L3TITE1[34]
extern uint8_t L3TITE1[34];

/// address: 0x479FF4
///
/// L3TITE2 is a 4x4 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148754
/// PSX def: unsigned char L3TITE2[34]
extern uint8_t L3TITE2[34];

/// address: 0x47A018
///
/// L3TITE3 is a 4x4 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148778
/// PSX def: unsigned char L3TITE3[34]
extern uint8_t L3TITE3[34];

/// address: 0x47A03C
///
/// L3TITE6 is a 5x4 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (easy-as-pie): 0x80146008
/// PSX def: unsigned char L3TITE6[42]
extern uint8_t L3TITE6[42];

/// address: 0x47A068
///
/// L3TITE7 is a 4x5 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8014879C
/// PSX def: unsigned char L3TITE7[42]
extern uint8_t L3TITE7[42];

/// address: 0x47A094
///
/// L3TITE8 is a 3x3 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x801487C8
/// PSX def: unsigned char L3TITE8[20]
extern uint8_t L3TITE8[20];

/// address: 0x47A0A8
///
/// L3TITE9 is a 3x3 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x801487DC
/// PSX def: unsigned char L3TITE9[20]
extern uint8_t L3TITE9[20];

/// address: 0x47A0BC
///
/// L3TITE10 is a 3x3 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x801487F0
/// PSX def: unsigned char L3TITE10[20]
extern uint8_t L3TITE10[20];

/// address: 0x47A0D0
///
/// L3TITE11 is a 3x3 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148804
/// PSX def: unsigned char L3TITE11[20]
extern uint8_t L3TITE11[20];

/// address: 0x47A0E4
///
/// L3TITE12 is a 2x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BEEC
/// PSX def: unsigned char L3TITE12[6]
extern uint8_t L3TITE12[6];

/// address: 0x47A0EC
///
/// L3TITE13 is a 1x2 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BEF4
/// PSX def: unsigned char L3TITE13[6]
extern uint8_t L3TITE13[6];

/// address: 0x47A0F4
///
/// L3CREV1 is a 2x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BEFC
/// PSX def: unsigned char L3CREV1[6]
extern uint8_t L3CREV1[6];

/// address: 0x47A0FC
///
/// L3CREV2 is a 2x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF04
/// PSX def: unsigned char L3CREV2[6]
extern uint8_t L3CREV2[6];

/// address: 0x47A104
///
/// L3CREV3 is a 1x2 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF0C
/// PSX def: unsigned char L3CREV3[6]
extern uint8_t L3CREV3[6];

/// address: 0x47A10C
///
/// L3CREV4 is a 2x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF14
/// PSX def: unsigned char L3CREV4[6]
extern uint8_t L3CREV4[6];

/// address: 0x47A114
///
/// L3CREV5 is a 1x2 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF1C
/// PSX def: unsigned char L3CREV5[6]
extern uint8_t L3CREV5[6];

/// address: 0x47A11C
///
/// L3CREV6 is a 1x2 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF24
/// PSX def: unsigned char L3CREV6[6]
extern uint8_t L3CREV6[6];

/// address: 0x47A124
///
/// L3CREV7 is a 2x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF2C
/// PSX def: unsigned char L3CREV7[6]
extern uint8_t L3CREV7[6];

/// address: 0x47A12C
///
/// L3CREV8 is a 1x2 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF34
/// PSX def: unsigned char L3CREV8[6]
extern uint8_t L3CREV8[6];

/// address: 0x47A134
///
/// L3CREV9 is a 2x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF3C
/// PSX def: unsigned char L3CREV9[6]
extern uint8_t L3CREV9[6];

/// address: 0x47A13C
///
/// L3CREV10 is a 2x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF44
/// PSX def: unsigned char L3CREV10[6]
extern uint8_t L3CREV10[6];

/// address: 0x47A144
///
/// L3CREV11 is a 1x2 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF4C
/// PSX def: unsigned char L3CREV11[6]
extern uint8_t L3CREV11[6];

/// address: 0x47A14C
///
/// L3ISLE1 is a 2x3 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148818
/// PSX def: unsigned char L3ISLE1[14]
extern uint8_t L3ISLE1[14];

/// address: 0x47A15C
///
/// L3ISLE2 is a 3x2 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148828
/// PSX def: unsigned char L3ISLE2[14]
extern uint8_t L3ISLE2[14];

/// address: 0x47A16C
///
/// L3ISLE3 is a 2x3 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148838
/// PSX def: unsigned char L3ISLE3[14]
extern uint8_t L3ISLE3[14];

/// address: 0x47A17C
///
/// L3ISLE4 is a 3x2 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148848
/// PSX def: unsigned char L3ISLE4[14]
extern uint8_t L3ISLE4[14];

/// address: 0x47A18C
///
/// L3ISLE5 is a 2x2 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148858
/// PSX def: unsigned char L3ISLE5[10]
extern uint8_t L3ISLE5[10];

/// address: 0x47A198
///
/// L3XTRA1 is a 1x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF54
/// PSX def: unsigned char L3XTRA1[4]
extern uint8_t L3XTRA1[4];

/// address: 0x47A19C
///
/// L3XTRA2 is a 1x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF58
/// PSX def: unsigned char L3XTRA2[4]
extern uint8_t L3XTRA2[4];

/// address: 0x47A1A0
///
/// L3XTRA3 is a 1x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF5C
/// PSX def: unsigned char L3XTRA3[4]
extern uint8_t L3XTRA3[4];

/// address: 0x47A1A4
///
/// L3XTRA4 is a 1x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF60
/// PSX def: unsigned char L3XTRA4[4]
extern uint8_t L3XTRA4[4];

/// address: 0x47A1A8
///
/// L3XTRA5 is a 1x1 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x8011BF64
/// PSX def: unsigned char L3XTRA5[4]
extern uint8_t L3XTRA5[4];

/// address: 0x47A1AC
///
/// L3ANVIL is a 11x11 miniset of tile IDs representing a TODO.
///
/// ref: graphics/l3/minisets/README.md
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
/// PSX ref (SLPS-01416): 0x80148864
/// PSX def: unsigned char L3ANVIL[244]
extern uint8_t L3ANVIL[244];

/// address: 0x47A2A0
///
/// L3SpawnTbl1 maps from tile ID to a bitfield indicating the X-Y offset by
/// which DRLG_L3Spawn is recursively invoked.
///
/// PSX def: unsigned char spawntable[15] // static local variable in PSX
extern uint8_t L3SpawnTbl1[15];

/// address: 0x47A2B0
///
/// L3SpawnTbl2 maps from tile ID to a bitfield indicating the X-Y offset by
/// which DRLG_L3SpawnEdge is recursively invoked.
///
/// PSX def: unsigned char spawntable[15] // static local variable in PSX
extern uint8_t L3SpawnTbl2[15];

/// address: 0x47A2C0
///
/// L3PoolSub maps from tile ID the substitution tile ID used to place a lava
/// pool on the map.
///
/// PSX def: unsigned char poolsub[15] // static local variable in PSX
extern uint8_t L3PoolSub[15];
