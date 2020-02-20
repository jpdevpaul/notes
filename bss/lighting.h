#include "types.h"

/// address: 0x6414E8
///
/// VisionList contains the visions of the current game.
///
/// PSX ref (SLPS-01416): 0x800D65D0
/// PSX def: struct LightListStruct VisionList[32]
extern Lighting VisionList[32]; // alias: visions

/// address: 0x641B68
///
/// lightactive keeps track of the light_num of active light sources.
///
/// PSX ref (SLPS-01416): 0x800D6580
/// PSX def: unsigned char lightactive[80]
extern int8_t lightactive[32]; // alias: active_lighting_nums

/// address: 0x641B88
///
/// LightList contains the light sources of the current game.
///
/// PSX ref (SLPS-01416): 0x800D6300
/// PSX def: struct LightListStruct2 LightList[80]
extern Lighting LightList[32]; // alias: lights

/// address: 0x642208
///
/// numlights specifies the number of active light sources.
//
/// PSX ref (SLPS-01416): 0x8011B914
/// PSX def: int numlights
extern int numlights; // alias: nlightings

/// address: 0x642A10
///
/// numvision specifies the number of active visions.
//
/// PSX ref (SLPS-01416): 0x8011B91C
/// PSX def: int numvision
extern int numvision; // alias: nvisions

/// address: 0x646A1C
///
/// visionid specifies the vision ID of the player.
// TODO: validate that the description of visionid is accurate.
///
/// PSX ref (SLPS-01416): 0x8011B924
/// PSX def: int visionid
extern int visionid;

/// address: 0x646A28
///
/// lighting_disabled specifies whether light effects are disabled.
extern bool32_t lighting_disabled;

/// address: 0x642A14
///
/// lightmax specifies the maximum number of light effects.
///
/// PSX ref (SLPS-01416): 0x8011B918
/// PSX def: char lightmax
extern int8_t lightmax;
