#include "types.h"

/// address: 0x64CCE4
///
/// +Infinity after initialization of monster.cpp.
extern float monster_cpp_init_value;

/// address: 0x64CCE8
///
/// monstkills tracks the total number of monsters killed per monster_id.
///
/// PSX ref: 0x8010A240
/// PSX def: short monstkills[190]
extern int monstkills[200]; // alias: monster_total_kills_from_monster_id

/// address: 0x64D008
///
/// active_monster_nums keeps track of the monster_num of active monsters.
///
/// PSX ref: 0x8010A0C4
/// PSX def: short monstactive[190]
extern int active_monster_nums[200];

/* TODO: uncomment when the Monster struct has been added to structs.h.

/// address: 0x64D330
///
/// monsters holds the in-game state of each monster.
///
/// PSX ref: 0x80105394
/// PSX def: MonsterStruct monster[190]
extern Monster monsters[200];

*/

/* TODO: uncomment when the MonsterType struct has been added to structs.h.

/// address: 0x658558
///
/// monster_types contains the monster types of the current game.
///
/// PSX ref: 0x8010A3BC
/// PSX def: CMonster Monsters[16]
extern MonsterType monster_types[16];

*/

/// address: 0x659AF0
///
/// nmonster_types specifies the number of active monster types.
///
/// PSX ref: 0x8011C29C
/// PSX def: int nummtypes
extern int nmonster_types;
