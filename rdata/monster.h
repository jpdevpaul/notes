#include "types.h"

/// address: 0x47F130
///
/// +Infinity
extern float monster_inf;

/// address: 0x47F134
///
/// plr2monst maps from walking path step to facing direction.
///
/// PSX def (easy-as-pie): char plr2monst[9] // function parameter in PSX
extern direction plr2monst[9]; // alias: dir_from_step

/// address: 0x47F140
///
/// counsmiss maps from monster intelligence factor to missile type.
///
/// PSX def (SLPS-01416): unsigned char counsmiss[4]
extern missile_type counsmiss[4]; // alias: missile_type_from_monster_intelligence_factor
