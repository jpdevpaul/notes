#include "types.h"

// address: 0x45744E
//
// spell_get_mana_cost returns the mana cost of the given spell.
//
// PSX ref: 0x80077054
// PSX def: int GetManaAmount__Fii(int id, int sn)
int __fastcall spell_get_mana_cost(int player_num, spell_id spell_id);

// address: 0x45753A
//
// spell_use_mana spends the mana required to cast the given spell.
//
// PSX ref: 0x80077308
// PSX def: void UseMana__Fii(int id, int sn)
void __fastcall spell_use_mana(int player_num, spell_id spell_id);

// address: 0x457584
//
// TODO: add documentation.

// address: 0x4575D5
//
// spell_cast casts the given spell.
//
// PSX ref: 0x80077538
// PSX def: void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl)
void __fastcall spell_cast(int player_num, spell_id spell_id, int col, int row, int target_col, int target_row, int target_num, int spell_lvl);

// address: 0x4576B1
//
// TODO: add documentation.

// address: 0x4577CB
//
// TODO: add documentation.

// address: 0x4578EE
//
// TODO: add documentation.
