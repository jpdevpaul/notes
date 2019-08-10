#include "types.h"

/// address: 0x4A1ABC
///
/// WarpDropX maps from player number to Y-coordinate of the town portal
/// position in Tristram.
///
/// PSX ref (SLPS-01416): 0x800E3BCC
/// PSX def: int WarpDropX[4]
extern int32_t WarpDropX[4]; // alias: portal_town_x_from_player_num

/// address: 0x4A1ACC
///
/// WarpDropY maps from player number to X-coordinate of the town portal
/// position in Tristram.
///
/// PSX ref (SLPS-01416): 0x800E3BDC
/// PSX def: int WarpDropY[4]
extern int32_t WarpDropY[4]; // alias: portal_town_y_from_player_num
