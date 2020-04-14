#include "types.h"

/// address: 0x4802AC
///
/// snSFX maps from active cow sound effect index and player class to sound
/// effect ID for interacting with cows in Tristram.
///
/// ref: enum cow_active_sfx_id
/// ref: enum player_class
///
/// PSX ref (SLPS-01416): 0x801112CC
/// PSX def: int snSFX[3][3]
extern sfx_id snSFX[3][3]; // alias: cow_sfx_ids_from_class
