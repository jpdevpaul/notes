#include "types.h"

/// address: 0x64CCE4
///
/// +Infinity after initialization of monster.cpp.
float monster_cpp_init_value;

/// address: 0x64CCE8
///
/// monster_total_kills_from_monster_id tracks the total number of monsters
/// killed per monster_id.
///
/// PSX ref: 0x8010A240
/// PSX def: short monstkills[190]
int monster_total_kills_from_monster_id[200];

/// address: 0x64D008
///
/// active_monster_nums keeps track of the monster_num of active monsters.
///
/// PSX ref: 0x8010A0C4
/// PSX def: short monstactive[190]
int active_monster_nums[200];

/* TODO: uncomment when the Monster struct has been added to structs.h.

/// address: 0x64D330
///
/// monsters contains the monsters of the current game.
///
/// PSX ref: 0x80105394
/// PSX def: MonsterStruct monster[190]
Monster monsters[200];

*/

/* TODO: uncomment when the MonsterType struct has been added to structs.h.

/// address: 0x658558
///
/// monster_types contains the monster types of the current game.
///
/// PSX ref: 0x8010A3BC
/// PSX def: CMonster Monsters[16]
MonsterType monster_types[16];

*/

/// address: 0x659AF0
///
/// nmonster_types specifies the number of active monster types.
///
/// PSX ref: 0x8011C29C
/// PSX def: int nummtypes
int nmonster_types;
