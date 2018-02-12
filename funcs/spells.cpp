#include "types.h"

/// address: 0x45744E
///
/// spell_get_mana_cost returns the mana cost of the given spell.
///
/// PSX ref: 0x80077054
/// PSX def: int GetManaAmount__Fii(int id, int sn)
int __fastcall spell_get_mana_cost(int player_num, spell_id spell_id);

/// address: 0x45753A
///
/// spell_use_mana spends the mana required to cast the given spell.
///
/// PSX ref: 0x80077308
/// PSX def: void UseMana__Fii(int id, int sn)
void __fastcall spell_use_mana(int player_num, spell_id spell_id);

/// address: 0x457584
///
/// spell_can_cast reports whether the player may cast the specified spell.
///
/// PSX ref: 0x80077498
/// PSX def: unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly)
bool32_t __fastcall spell_can_cast(int player_num, int spell_id, int spell_type, bool32_t mana_only);

/// address: 0x4575D5
///
/// spell_cast casts the given spell.
///
/// PSX ref: 0x80077538
/// PSX def: void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl)
void __fastcall spell_cast(int player_num, spell_id spell_id, int x, int y, int target_x, int target_y, int target_num, int spell_lvl);

/// address: 0x4576B1
///
/// spell_cast_resurrect casts resurrect on the target player.
///
/// PSX ref: 0x80077850
/// PSX def: void DoResurrect__Fii(int pnum, int rid)
void __fastcall spell_cast_resurrect(int player_num, int target_player_num);

/// address: 0x4577CB
///
/// spell_resurrect resurrects the given player.
void __fastcall spell_resurrect(int player_num);

/// address: 0x4578EE
///
/// spell_cast_heal_other casts heal other on the target player.
///
/// PSX ref: 0x80077AB8
/// PSX def: void DoHealOther__Fii(int pnum, int rid)
void __fastcall spell_cast_heal_other(int player_num, int target_player_num);
