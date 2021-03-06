#ifndef __CONTROL_H__
#define __CONTROL_H__

#include "types.h"

/// address (1.00dbg): 0x40FB08
/// address (1.09b):   0x4037D4
///
/// PSX ref: 0x800301B4
/// PSX def: void DrawSpellCel__FllUclUcc(long xp, long yp, unsigned char Trans, long nCel, int w, int sel)
///
/// DrawSpellCel draws the spell CEL frame at the specified screen coordinates.
///
/// Parameters:
///    - xp:    screen X-coordinate (x = xp - 64).
///    - yp:    screen Y-coordinate (y = yp - 160).
///    - cel:   CEL buffer.
///    - frame: 1-indexed frame number.
///    - w:     frame width in pixels.
void __fastcall DrawSpellCel(int xp, int yp, void *cel, int frame, int w);

/// address (1.00dbg): 0x40FBD5
/// address (1.09b):   0x40387E
///
/// PSX ref: 0x80030D38
/// PSX def: void SetSpellTrans__Fc(char t)
///
/// SetSpellTrans sets the spell colour transition based on the given spell
/// type.
///
/// Parameters:
///    - t: spell type.
void __fastcall SetSpellTrans(char t); // TODO: add enum for t.

/// address (1.00dbg): 0x40FD02
/// address (1.09b):   0x4039C7
///
/// DrawSpell draws the active spell icon.
void __cdecl DrawSpell(); // TODO: find original name.

/// address (1.00dbg): 0x40FDD1
/// address (1.09b):   0x403A8E
///
/// PSX ref: 0x800366D8
/// PSX def: void DrawSpellBook__Fb(bool DrawBg)
///
/// DrawSpellList draws the list of speedbook spells.
void DrawSpellList();

/// address (1.00dbg): 0x410298
/// address (1.09b):   0x403F69
///
/// PSX ref: 0x80031D54
/// PSX def: void SetSpell__Fi(int pnum)
///
/// SetSpell sets the active spell from the speedbook cursor target.
void SetSpell();

/// address (1.00dbg): ?
/// address (1.09b):   0x403FAC
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404017
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4040DA
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404218
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x40424A
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404259
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4042C5
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4042CA
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x40431B
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x40435B
///
/// control_draw_life_orb renders the life orb on screen.
void control_draw_life_orb();

/// address (1.00dbg): ?
/// address (1.09b):   0x4043F4
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404475
///
/// control_draw_mana_orb renders the mana orb on screen.
void control_draw_mana_orb();

/// address (1.00dbg): ?
/// address (1.09b):   0x4044F6
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x40456A
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404616
///
/// control_load_graphics loads control panel graphics.
void control_load_graphics();

/// address (1.00dbg): ?
/// address (1.09b):   0x404934
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404959
///
/// control_draw_panel_buttons renders the control panel buttons on screen.
void control_draw_panel_buttons();

/// address (1.00dbg): ?
/// address (1.09b):   0x404A0A
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404B52
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404BEB
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404C00
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404C74
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404CA0
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x404FE4
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x405181
///
/// control_cleanup releases the resources used by the control panel.
void control_cleanup();

/// address (1.00dbg): ?
/// address (1.09b):   0x405295
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4052C8
///
/// control_draw_description_box renders the description box on screen.
void control_draw_description_box();

/// address (1.00dbg): ?
/// address (1.09b):   0x4055BC
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x405681
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4056D8
///
/// control_draw_character_screen renders the character screen on screen.
void control_draw_character_screen();

/// address (1.00dbg): ?
/// address (1.09b):   0x406058
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x40610F
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4061CA
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x406200
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x406234
///
/// control_draw_level_up_button renders a level up button on screen.
void control_draw_level_up_button();

/// address (1.00dbg): ?
/// address (1.09b):   0x40627A
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x406366
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x406408
///
/// control_draw_durability_icons renders durability icons on screen.
void control_draw_durability_icons();

/// address (1.00dbg): ?
/// address (1.09b):   0x40648E
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x406508
///
/// control_draw_red_hue renders the screen in red hue.
void control_draw_red_hue();

/// address (1.00dbg): ?
/// address (1.09b):   0x406592
///
/// control_get_spell_type returns the spell type of the given spell ID, and
/// report whether is may be cast in town.
spell_type __fastcall control_get_spell_type(spell_id spell_id, bool32_t check_town);

/// address (1.00dbg): ?
/// address (1.09b):   0x406667
///
/// control_draw_spellbook renders the spellbook on screen.
void control_draw_spellbook();

/// address (1.00dbg): ?
/// address (1.09b):   0x4068F4
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4069B6
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x406AF8
///
/// control_get_gold_quantity returns the gramatically correct quantity for the
/// given amount of gold (i.e. "piece" or "pieces").
char *__fastcall control_get_gold_quantity(int gold);

/// address (1.00dbg): ?
/// address (1.09b):   0x406B08
///
/// control_draw_gold_drop_box renders the gold drop box on screen.
void __fastcall control_draw_gold_drop_box(int amount);

/// address (1.00dbg): ?
/// address (1.09b):   0x406C40
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x406D6E
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x406E24
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x406E6A
///
/// control_draw_talk_panel renders the talk panel on screen.
void control_draw_talk_panel();

/// address (1.00dbg): ?
/// address (1.09b):   0x407071
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4070F3
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x40714D
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4071C0
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4071FA
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x407241
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x40725A
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x40729A
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x407304
///
/// TODO: add documentation.

/// address (1.00dbg): ?
/// address (1.09b):   0x4073C2
///
/// TODO: add documentation.

#endif // __CONTROL_H__
