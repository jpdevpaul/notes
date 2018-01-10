#include "types.h"

// address: 0x4A1AE0
//
// quest_data contains the data related to each quest_id.
//
// PSX ref: 0x800DD908
// PSX def: QuestData questlist[16]
QuestData quest_data[16];

// address: 0x4A1C20
//
// quest_entrance_cursor_x_delta specifies a delta in X-coordinates from the
// quest entrance for which the hover text of the cursor will be visible.
int8_t quest_entrance_cursor_x_delta[7];

// address: 0x4A1C28
//
// quest_entrance_cursor_y_delta specifies a delta in Y-coordinates from the
// quest entrance for which the hover text of the cursor will be visible.
int8_t quest_entrance_cursor_y_delta[7];

// address: 0x4A1C30
//
// quest_stairway_names specifies the names of quest levels for the hover text
// of the cursor.
char *quest_stairway_names[5];

// address: 0x04A1C44
//
// rand_quest_id_group_1 is a quest group containing the three quests the
// Butcher, Ogden's Sign and Gharbad the Weak, which ensures that exactly one of
// these three quests appears in any single player game.
int rand_quest_id_group_1[3];

// address: 0x04A1C50
//
// rand_quest_id_group_2 is a quest group containing the three quests Halls of
// the Blind, the Magic Rock and Valor, which ensures that exactly one of these
// three quests appears in any single player game.
int rand_quest_id_group_2[3];

// address: 0x04A1C5C
//
// rand_quest_id_group_3 is a quest group containing the three quests Black
// Mushroom, Zhar the Mad and Anvil of Fury, which ensures that exactly one of
// these three quests appears in any single player game.
int rand_quest_id_group_3[3];

// address: 0x04A1C68
//
// rand_quest_id_group_4 is a quest group containing the two quests Lachdanan
// and Warlord of Blood, which ensures that exactly one of these two quests
// appears in any single player game.
int rand_quest_id_group_4[2];

// address: 0x4A1C70
//
// "Unholy Altar"
const char str_4A1C70[13] = {};

// address: 0x4A1C80
//
// "A Dark Passage"
const char str_4A1C80[15] = {};

// address: 0x4A1C90
//
// "Maze"
const char str_4A1C90[5] = {};

// address: 0x4A1C98
//
// "King Leoric's Tomb"
const char str_4A1C98[19] = {};

// address: 0x4A1CAC
//
// "Archbishop Lazarus"
const char str_4A1CAC[19] = {};

// address: 0x4A1CC0
//
// "The Chamber of Bone"
const char str_4A1CC0[20] = {};

// address: 0x4A1CD4
//
// "Poisoned Water Supply"
const char str_4A1CD4[22] = {};

// address: 0x4A1CEC
//
// "The Curse of King Leoric"
const char str_4A1CEC[25] = {};

// address: 0x4A1D08
//
// "Valor"
const char str_4A1D08[6] = {};

// address: 0x4A1D10
//
// "Halls of the Blind"
const char str_4A1D10[19] = {};

// address: 0x4A1D24
//
// "Ogden's Sign"
const char str_4A1D24[13] = {};

// address: 0x4A1D34
//
// "Gharbad The Weak"
const char str_4A1D34[17] = {};

// address: 0x4A1D48
//
// "The Magic Rock"
const char str_4A1D48[15] = {};

// address: 0x4A1D58
//
// "Levels\L3Data\L3pwater.pal"
const char str_4A1D58[27] = {};

// address: 0x4A1D74
//
// "To %s"
const char str_4A1D74[6] = {};

// address: 0x4A1D7C
//
// "Levels\L4Data\Warlord2.DUN"
const char str_4A1D7C[27] = {};

// address: 0x4A1D98
//
// "Levels\L2Data\Bonestr1.DUN"
const char str_4A1D98[27] = {};

// address: 0x4A1DB4
//
// "Levels\L2Data\Blind1.DUN"
const char str_4A1DB4[25] = {};

// address: 0x4A1DD0
//
// "Levels\L3Data\L3pfoul.pal"
const char str_4A1DD0[26] = {};

// address: 0x4A1DEC
//
// "Close Quest Log"
const char str_4A1DEC[16] = {};

// address: 0x4A1DFC
//
// "Quest Log"
const char str_4A1DFC[10] = {};
