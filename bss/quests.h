#include "types.h"

/// address: 0x69BD08
///
/// quest_cel points to the contents of "data/quest.cel".
extern void *quest_cel;

/// address: 0x69BD10
///
/// quests contains the quests of the current game.
///
/// PSX ref: 0x800DDA40
/// PSX def: QuestStruct quests[16];
extern Quest quests[16];
