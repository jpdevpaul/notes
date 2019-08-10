#include "types.h"

/// address: 0x4B325C
///
/// TODO: add docs.
extern bool32_t WorldBoolFlag;

/// address: 0x4B3260
///
/// TODO: add docs.
extern uint32_t gdwCurrentMask;

/// address: 0x4B3265
///
/// TODO: add docs.
uint8_t *gpCelFrame;

/// address: 0x4B3269
///
/// TODO: add docs.
uint32_t gpDrawMask;

// Note: unused data at 0x4B326D.

/// address: 0x4B327D
///
/// RightMask specifies the draw masks used to render transparency of the right
/// side of tiles.
extern uint32_t RightMask[32];

/// address: 0x4B32FD
///
/// LeftMask specifies the draw masks used to render transparency of the left
/// side of tiles.
extern uint32_t LeftMask[32];

/// address: 0x4B337D
///
/// WallMask specifies the draw masks used to render transparency of wall tiles.
extern uint32_t WallMask[32];

/// address: 0x4B33FD
///
/// TODO: add docs.
extern int32_t WorldTbl3x16[48];

/// address: 0x4B34BD
///
/// WorldTbl17_1 holds left slope/angle information.
extern int32_t WorldTbl17_1[17];

/// address: 0x4B3501
///
/// WorldTbl17_1 holds right slope/angle information.
extern int32_t WorldTbl17_2[17];

// Note: unused data at 0x4B3548.
