#include "types.h"

/// address: 0x4BD2FC
///
/// square_cel points to the contents of "data/quest.cel".
extern void *square_cel;

/// address: 0x4BD300
///
/// debug_active_monster_map tracks the active monsters on each dlvl of the map.
extern int8_t debug_active_monster_map[17][112][112];

/// address: 0x4F1400
///
/// debug_dflag_map tracks the dungeon flag DFLAG_08 on each dlvl of the map.
extern int8_t debug_dflag_map[17][112][112];
