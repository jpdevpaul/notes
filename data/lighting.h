#include "types.h"

/// address: 0x49387C
///
/// missile_coord_delta specifies X- and Y-coordinate deltas from a missile
/// target coordinate.
///
/// PSX ref: 0x800D5554
/// PSX def: char CrawlTable[2749]
CircleCoords missile_coord_delta;

/// address: 0x49433C
///
/// delta_from_circle_radius maps from circle radius to the X- and Y-coordinate
/// deltas from the center of a circle.
CircleCoords *delta_from_circle_radius[19];

/// address: 0x494798
///
/// `PlrGFX\Stone.TRN`
char str_494798[17];

/// address: 0x4947AC
///
/// `PlrGFX\Infra.TRN`
char str_4947AC[17];
