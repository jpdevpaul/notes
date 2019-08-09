#include "types.h"

/// address: 0x484778
///
/// L5ConvTbl is a lookup table for the 16 possible patterns of a 2x2 area,
/// where each cell either contains a SW wall or it doesn't.
///
/// PSX ref (SLPS-01416): 0x80139C58
/// PSX def: unsigned char L5ConvTbl[16]
extern l1_tile_id L5ConvTbl[16]; // alias: l1_tile_id_pattern_lookup

/// address: 0x484788
///
/// `Levels\L1Data\Banner2.DUN`
extern char str_484788[26];

/// address: 0x4847A4
///
/// `Levels\L1Data\SKngDO.DUN`
extern char str_4847A4[25];

/// address: 0x4847C0
///
/// `Levels\L1Data\rnd6.DUN`
extern char str_4847C0[23];
