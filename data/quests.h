#include "types.h"

/// address: 0x4A1AE0
///
/// questlist contains the data related to each quest_id.
///
/// PSX ref (SLPS-01416): 0x800DD908
/// PSX def: QuestData questlist[16]
extern QuestData questlist[16]; // alias: quest_data

/// address: 0x4A1C20
///
/// questxoff specifies a delta in X-coordinates from the quest entrance for
/// which the hover text of the cursor will be visible.
///
/// PSX ref (easy-as-pie): 0x8012B488
/// PSX def: char questxoff[7]
extern int8_t questxoff[7]; // alias: quest_entrance_cursor_x_delta

/// address: 0x4A1C28
///
/// questyoff specifies a delta in Y-coordinates from the quest entrance for
/// which the hover text of the cursor will be visible.
///
/// PSX ref (easy-as-pie): 0x8012B490
/// PSX def: char questyoff[7]
extern int8_t questyoff[7]; // alias: quest_entrance_cursor_y_delta

/// address: 0x4A1C30
///
/// SetLevelName specifies the names of quest levels for the hover text of the
/// cursor.
///
/// PSX ref (SLPS-01416): 0x8010D6CC
/// PSX def: int SetLevelName[6]
extern char *SetLevelName[5]; // alias: quest_stairway_names

/// address: 0x4A1C44
///
/// QuestGroup1 is a quest group containing the three quests the Butcher,
/// Ogden's Sign and Gharbad the Weak, which ensures that exactly one of these
/// three quests appears in any single player game.
///
/// PSX ref (SLPS-01416): 0x800DDA1C
/// PSX def: int QuestGroup1[3]
extern quest_id QuestGroup1[3]; // alias: rand_quest_id_group_1

/// address: 0x4A1C50
///
/// QuestGroup2 is a quest group containing the three quests Halls of the Blind,
/// the Magic Rock and Valor, which ensures that exactly one of these three
/// quests appears in any single player game.
///
/// PSX ref (SLPS-01416): 0x800DDA28
/// PSX def: int QuestGroup2[3]
extern quest_id QuestGroup2[3]; // alias: rand_quest_id_group_2

/// address: 0x4A1C5C
///
/// QuestGroup3 is a quest group containing the three quests Black Mushroom,
/// Zhar the Mad and Anvil of Fury, which ensures that exactly one of these
/// three quests appears in any single player game.
///
/// PSX ref (SLPS-01416): 0x800DDA34
/// PSX def: int QuestGroup3[3]
extern quest_id QuestGroup3[3]; // alias: rand_quest_id_group_3

/// address: 0x4A1C68
///
/// QuestGroup4 is a quest group containing the two quests Lachdanan and Warlord
/// of Blood, which ensures that exactly one of these two quests appears in any
/// single player game.
///
/// PSX ref (SLPS-01416): 0x8011BA30
/// PSX def: int QuestGroup4[2]
extern quest_id QuestGroup4[2]; // alias: rand_quest_id_group_4

/// address: 0x4A1C70
///
/// "Unholy Altar"
extern char str_4A1C70[13];

/// address: 0x4A1C80
///
/// "A Dark Passage"
extern char str_4A1C80[15];

/// address: 0x4A1C90
///
/// "Maze"
extern char str_4A1C90[5];

/// address: 0x4A1C98
///
/// "King Leoric's Tomb"
extern char str_4A1C98[19];

/// address: 0x4A1CAC
///
/// "Archbishop Lazarus"
extern char str_4A1CAC[19];

/// address: 0x4A1CC0
///
/// "The Chamber of Bone"
extern char str_4A1CC0[20];

/// address: 0x4A1CD4
///
/// "Poisoned Water Supply"
extern char str_4A1CD4[22];

/// address: 0x4A1CEC
///
/// "The Curse of King Leoric"
extern char str_4A1CEC[25];

/// address: 0x4A1D08
///
/// "Valor"
extern char str_4A1D08[6];

/// address: 0x4A1D10
///
/// "Halls of the Blind"
extern char str_4A1D10[19];

/// address: 0x4A1D24
///
/// "Ogden's Sign"
extern char str_4A1D24[13];

/// address: 0x4A1D34
///
/// "Gharbad The Weak"
extern char str_4A1D34[17];

/// address: 0x4A1D48
///
/// "The Magic Rock"
extern char str_4A1D48[15];

/// address: 0x4A1D58
///
/// "Levels\L3Data\L3pwater.pal"
extern char str_4A1D58[27];

/// address: 0x4A1D74
///
/// "To %s"
extern char str_4A1D74[6];

/// address: 0x4A1D7C
///
/// "Levels\L4Data\Warlord2.DUN"
extern char str_4A1D7C[27];

/// address: 0x4A1D98
///
/// "Levels\L2Data\Bonestr1.DUN"
extern char str_4A1D98[27];

/// address: 0x4A1DB4
///
/// "Levels\L2Data\Blind1.DUN"
extern char str_4A1DB4[25];

/// address: 0x4A1DD0
///
/// "Levels\L3Data\L3pfoul.pal"
extern char str_4A1DD0[26];

/// address: 0x4A1DEC
///
/// "Close Quest Log"
extern char str_4A1DEC[16];

/// address: 0x4A1DFC
///
/// "Quest Log"
extern char str_4A1DFC[10];
