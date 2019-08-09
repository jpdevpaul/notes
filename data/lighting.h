#include "types.h"

/// address: 0x49387C
///
/// CrawlTable specifies X- and Y-coordinate deltas from a missile target
/// coordinate.
///
/// PSX ref (SLPS-01416): 0x800D5554
/// PSX def: char CrawlTable[2749]
extern CircleCoords CrawlTable; // alias: missile_coord_delta

/// address: 0x49433C
///
/// pCrawlTable maps from circle radius to the X- and Y-coordinate deltas from
/// the center of a circle.
extern CircleCoords *pCrawlTable[19]; // alias: delta_from_circle_radius

/// address: 0x494388
///
/// vCrawlTable specifies the X- Y-coordinate offsets of lighting visions.
///
/// PSX ref (SLPS-01416): 0x800D6014
/// PSX def: unsigned char vCrawlTable[30][23]
extern Coord vCrawlTable[23][15];

// Note: unused data of char[18][18] at 0x49463C.

/// address: 0x494780
///
/// RadiusAdj maps from vCrawlTable index to lighting vision radius adjustment.
///
/// PSX ref (SLPS-01416): 0x800D62C8
/// PSX def: unsigned char RadiusAdj[23]
extern uint8_t RadiusAdj[23];

/// address: 0x494798
///
/// `PlrGFX\Stone.TRN`
extern char str_494798[17];

/// address: 0x4947AC
///
/// `PlrGFX\Infra.TRN`
extern char str_4947AC[17];
