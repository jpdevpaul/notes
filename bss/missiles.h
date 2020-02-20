#include "types.h"

/// address: 0x646D18
///
/// missileactive keeps track of the missile_num of active missiles.
///
/// PSX ref (SLPS-01416): 0x80102A60
/// PSX def: short missileactive[125];
extern int missileactive[125]; // alias: active_missile_nums

/// address: 0x646F0C
///
/// missileavail tracks available missile numbers.
///
/// PSX ref (SLPS-01416): 0x80102B5C
/// PSX def: short missileavail[125];
extern int missileavail[125]; // alias: available_missile_nums

/* TODO: uncomment when the Missile struct has been added to structs.h.

/// address: 0x647100
///
/// missiles contains the projectiles (e.g. arrow, firebolt) of the current game.
///
/// PSX ref (SLPS-01416): 0x80102C58
/// PSX def: struct MissileStruct missile[125]
extern Missile missiles[125];

*/

/// address: 0x64C6F0
///
/// nummissiles specifies the number of in-flight missiles on the current
/// dungeon level.
///
/// PSX ref (SLPS-01416): 0x8011C288
/// PSX def: int nummissiles
extern int nummissiles; // alias: nmissiles
