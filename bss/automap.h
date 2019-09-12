#include "types.h"

/// address: 0x4B7A40
///
/// automaptype maps from tile_id to automap type.
///
/// PSX ref (SLPS-01416): 0x8010D7AC
/// PSX def: unsigned short automaptype[512]
// TODO: define automap_type enum.
extern uint16_t automaptype[512]; // alias: automap_type_from_tile_id

/// address: 0x4B7E40
///
/// TODO: add docs.
extern int32_t MapX;

/// address: 0x4B7E44
///
/// TODO: add docs.
extern int32_t MapY;

/// address: 0x4B7E48
///
/// automapflag specifies whether the automap is enabled.
///
/// PSX ref (SLPS-01416): 0x8011C37B
/// PSX def: unsigned __int8 automapflag
extern bool32_t automapflag; // alias: automap_enabled

/// address: 0x4B7E4C
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x80120F68
/// PSX def: unsigned char AmShiftTab[8]
extern uint8_t AmShiftTab[32];

/// address: 0x4B7E6C
///
/// automapview tracks the explored areas of the map.
///
/// PSX ref (SLPS-01416): 0x8010D6E4
/// PSX def: unsigned char automapview[5][40]
extern bool8_t automapview[40][40]; // alias: automap_discovered

/// address: 0x4B84AC
///
/// AutoMapScale specifies the scale of the automap.
///
/// PSX ref (SLPS-01416): 0x8011C368
/// PSX def: int AutoMapScale
extern int32_t AutoMapScale; // alias: automap_zoom_level

/// address: 0x4B84B0
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x8011C388
/// PSX def: int AutoMapXOfs
extern int32_t AutoMapXOfs;

/// address: 0x4B84B4
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x8011C384
/// PSX def: int AutoMapYOfs
extern int32_t AutoMapYOfs;

/// address: 0x4B84B8
///
/// TODO: add docs.
extern int32_t AutoMapPosBits;

/// address: 0x4B84BC
///
/// TODO: add docs.
extern int32_t AutoMapXPos;

/// address: 0x4B84C0
///
/// TODO: add docs.
extern int32_t AutoMapYPos;

/// address: 0x4B84C4
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x8011C38C
/// PSX def: int AMPlayerX
extern int32_t AMPlayerX;

/// address: 0x4B84C8
///
/// TODO: add docs.
///
/// PSX ref (SLPS-01416): 0x8011C390
/// PSX def: int AMPlayerY
extern int32_t AMPlayerY;
