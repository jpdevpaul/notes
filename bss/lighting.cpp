#include "types.h"

/* TODO: uncomment when the Lighting struct has been added to structs.h.

// address: 0x641B88
//
// lightings contains the light sources of the current game.
Lighting lightings[32];

*/

// lighting_disabled specifies whether light effects are disabled.
//
// address: 0x646A28
bool32_t lighting_disabled;

// lighting_max specifies the maximum number of light effects.
//
// PSX ref: 0x8011B918
// PSX def: char lightmax
//
// address: 0x642A14
int8_t lighting_max;
