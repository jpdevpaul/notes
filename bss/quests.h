#include "types.h"

/// address: 0x69BD08
///
/// quest_cel points to the contents of "data/quest.cel".
extern void *quest_cel;

/// address: 0x69BD10
///
/// quests contains the quests of the current game.
///
/// PSX ref (SLPS-01416): 0x800DDA40
/// PSX def: QuestStruct quests[16];
extern Quest quests[16];

/// address: 0x69BEE0
///
/// quest_return_dlvl tracks the Y-coordinate of the return dungeon level
/// entrance to the quest set level.
///
/// PSX ref (SLPS-01416): 0x8011BA58
/// PSX def: int ReturnLvlY
extern int ReturnLvlY; // alias: quest_return_y

/// address: 0x69BEE4
///
/// quest_return_dlvl tracks the X-coordinate of the return dungeon level
/// entrance to the quest set level.
///
/// PSX ref (SLPS-01416): 0x8011BA54
/// PSX def: int ReturnLvlX
extern int ReturnLvlX; // alias: quest_return_x

/// address: 0x69BEE8
///
/// quest_return_dtype tracks the dungeon type of the return dungeon level of
/// the quest set level.
///
/// PSX ref (SLPS-01416): 0x8011BA60
/// PSX def: int ReturnLvlT
extern dungeon_type ReturnLvlT; // alias: quest_return_dtype

/// address: 0x69BEF0
///
/// quest_return_dlvl tracks the return dungeon level of the quest set level.
///
/// PSX ref (SLPS-01416): 0x8011BA5C
/// PSX def: int ReturnLvl
extern int ReturnLvl; // alias: quest_return_dlvl
