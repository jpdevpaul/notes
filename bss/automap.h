#include "types.h"

/// address 0x4B7A40
///
/// automap_type_from_tile_id maps from tile_id to automap type.
///
/// PSX ref: 0x8010D7AC
/// PSX def: unsigned short automaptype[512]
extern uint16_t automap_type_from_tile_id[512]; // TODO: define automap_type enum.

/// address: 0x4B7E48
///
/// automap_enabled specifies whether the automap is enabled.
extern bool32_t automap_enabled;

/// address: 0x4B7E6C
///
/// automap_discovered tracks the explored areas of the map.
///
/// PSX ref: 0x8010D6E4
/// PSX def: unsigned char automapview[5][40]
extern bool8_t automap_discovered[40][40];

/// address: 0x4B84AC
///
/// automap_zoom_level specifies the scale of the automap.
///
/// PSX ref: 0x8011C368
/// PSX def: int AutoMapScale
extern int automap_zoom_level;
