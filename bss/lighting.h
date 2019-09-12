#include "types.h"

/// address: 0x6414E8
///
/// visions contains the visions of the current game.
///
/// PSX ref: 0x800D65D0
/// PSX def: LightListStruct VisionList[32]
extern Lighting visions[32];

/// address: 0x641B88
///
/// lightings contains the light sources of the current game.
///
/// PSX ref: 0x800D6300
/// PSX def: LightListStruct2 LightList[80]
extern Lighting lightings[32];

/// address: 0x646A28
///
/// lighting_disabled specifies whether light effects are disabled.
extern bool32_t lighting_disabled;

/// address: 0x642A14
///
/// lighting_max specifies the maximum number of light effects.
///
/// PSX ref: 0x8011B918
/// PSX def: char lightmax
extern int8_t lighting_max;
