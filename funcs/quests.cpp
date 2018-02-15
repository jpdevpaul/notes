#include "types.h"

/// address: 0x45138E
///
/// quests_init initializes the quests game state.
///
/// PSX ref: 0x8015E7DC
/// PSX def: void InitQuests__Fv()
void quests_init();

/// address: 0x45155C
///
/// TODO: add documentation.

/// address: 0x45178F
///
/// quests_set_stairway_text sets the description text of stairways in the quest
/// level.
bool32_t quests_set_stairway_text();

/// address: 0x451831
///
/// quests_is_active reports whether the given quest is active.
///
/// PSX ref: 0x80067B70
/// PSX def: unsigned char QuestStatus__Fi(int i)
///
/// NOTE: quest_num and quest_id are equivalent, as indicated by this function.
bool32_t __fastcall quests_is_active(quest_id quest_num);

/// address: 0x451871
///
/// TODO: add documentation.

/// address: 0x451BEA
///
/// quests_init_the_butcher_area initializes the quest area of The Butcher.
///
/// PSX ref: 0x8015ED8C
/// PSX def: void DrawButcher__Fv()
void quests_init_the_butcher_area();

/// address: 0x451C11
///
/// quests_init_the_curse_of_king_leoric_area initializes the quest area of The
/// Curse of King Leoric.
///
/// PSX ref: 0x8015EDD0
/// PSX def: void DrawSkelKing__Fiii(int q, int x, int y)
void __fastcall quests_init_the_curse_of_king_leoric_area(quest_id quest_id, int xx, int yy);

/// address: 0x451C32
///
/// quests_init_warlord_of_blood_area initializes the quest area of Warlord of
/// Blood.
///
/// PSX ref: 0x8015EE64
/// PSX def: void DrawWarLord__Fii(int x, int y)
void __fastcall quests_init_warlord_of_blood_area(int xx, int yy);

/// address: 0x451CC2
///
/// quests_init_the_chamber_of_bone_area initializes the quest area of The
/// Chamber of Bone.
///
/// PSX ref: 0x8015EF60
/// PSX def: void DrawSChamber__Fiii(int q, int x, int y)
void __fastcall quests_init_the_chamber_of_bone_area(quest_id quest_id, int xx, int yy);

/// address: 0x451D7C
///
/// quests_init_odgens_sign_area initializes the quest area of Odgen's Sign.
///
/// PSX ref: 0x8015F09C
/// PSX def: void DrawLTBanner__Fii(int x, int y)
void __fastcall quests_init_odgens_sign_area(int xx, int yy);

/// address: 0x451E08
///
/// quests_init_halls_of_the_blind_area initializes the quest area of Halls of
/// the Blind.
///
/// PSX ref: 0x8015F178
/// PSX def: void DrawBlind__Fii(int x, int y)
void __fastcall quests_init_halls_of_the_blind_area(int xx, int yy);

/// address: 0x451E94
///
/// quests_init_valor_area initializes the quest area of Valor.
///
/// PSX ref: 0x8015F254
/// PSX def: void DrawBlood__Fii(int x, int y)
void __fastcall quests_init_valor_area(int xx, int yy);

/// address: 0x451F20
///
/// quests_init_quest_area initializes the given quest area.
///
/// PSX ref: 0x8015F334
/// PSX def: void DRLG_CheckQuests__Fii(int x, int y)
void __fastcall quests_init_quest_area(int xx, int yy);

/// address: 0x451FB1
///
/// TODO: add documentation.

/// address: 0x452064
///
/// TODO: add documentation.

/// address: 0x45209D
///
/// TODO: add documentation.

/// address: 0x452159
///
/// TODO: add documentation.

/// address: 0x45247F
///
/// TODO: add documentation.

/// address: 0x4525CD
///
/// quests_draw renders the quest log on screen.
void quests_draw_quest_log();

/// address: 0x452659
///
/// TODO: add documentation.

/// address: 0x4526C9
///
/// TODO: add documentation.

/// address: 0x452710
///
/// TODO: add documentation.

/// address: 0x45275A
///
/// TODO: add documentation.

/// address: 0x45279C
///
/// TODO: add documentation.

/// address: 0x4527F1
///
/// TODO: add documentation.
