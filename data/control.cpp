#include "types.h"

/// address: 0x483C2C
///
/// spelicon_frame_from_spell_id maps from spell_id to spelicon.cel frame number.
int8_t spelicon_frame_from_spell_id[37];

/// address: 0x483C54
///
/// panel_buttons maps from panel_button_id to the position and dimensions of a
/// panel button.
PanelButton panel_buttons[8];

/// address: 0x483CF4
///
/// button_hotkeys maps from panel_button_id to hotkey name.
char *button_hotkeys[8];

/// address: 0x483D14
///
/// button_descriptions maps from panel_button_id to panel button description.
char *button_descriptions[8];

/// address: 0x483D34
///
/// attribute_inc_rects maps from attribute_id to the rectangle on screen used
/// for attribute increment buttons.
Rectangle attribute_inc_rects[4];

/// address: 0x483D74
///
/// spell_id_from_spellbook_pos maps from spellbook position to spell_id.
spell_id spell_id_from_spellbook_pos[42];

/// address: 0x483E1C
///
/// "Player Attack"
const char str_483E1C[14] = {};

/// address: 0x483E2C
///
/// "Send Message"
const char str_483E2C[13] = {};

/// address: 0x483E3C
///
/// "Spell book"
const char str_483E3C[11] = {};

/// address: 0x483E48
///
/// "Inventory"
const char str_483E48[10] = {};

/// address: 0x483E54
///
/// "Main Menu"
const char str_483E54[10] = {};

/// address: 0x483E60
///
/// "Automap"
const char str_483E60[8] = {};

/// address: 0x483E68
///
/// "Quests log"
const char str_483E68[11] = {};

/// address: 0x483E74
///
/// "Character Information"
const char str_483E74[22] = {};

/// address: 0x483E8C
///
/// "Enter"
const char str_483E8C[6] = {};

/// address: 0x483E94
///
/// "'b'"
const char str_483E94[4] = {};

/// address: 0x483E98
///
/// "'i'"
const char str_483E98[4] = {};

/// address: 0x483E9C
///
/// "Esc"
const char str_483E9C[4] = {};

/// address: 0x483EA0
///
/// "Tab"
const char str_483EA0[4] = {};

/// address: 0x483EA4
///
/// "'q'"
const char str_483EA4[4] = {};

/// address: 0x483EA8
///
/// "'c'"
const char str_483EA8[4] = {};

/// address: 0x483EAC
///
/// "Spell Hot Key #F%i"
const char str_483EAC[19] = {};

/// address: 0x483EC0
///
/// "%s Skill"
const char str_483EC0[9] = {};

/// address: 0x483ECC
///
/// "Spell Level %i"
const char str_483ECC[15] = {};

/// address: 0x483EDC
///
/// "Spell Level 0 - Unusable"
const char str_483EDC[25] = {};

/// address: 0x483EF8
///
/// "Damages undead only"
const char str_483EF8[20] = {};

/// address: 0x483F0C
///
/// "%s Spell"
const char str_483F0C[9] = {};

/// address: 0x483F18
///
/// "%i Scrolls"
const char str_483F18[11] = {};

/// address: 0x483F24
///
/// "1 Scroll"
const char str_483F24[9] = {};

/// address: 0x483F30
///
/// "Scroll of %s"
const char str_483F30[13] = {};

/// address: 0x483F40
///
/// "%i Charges"
const char str_483F40[11] = {};

/// address: 0x483F4C
///
/// "1 Charge"
const char str_483F4C[9] = {};

/// address: 0x483F58
///
/// "Staff of %s"
const char str_483F58[12] = {};

/// address: 0x483F64
///
/// `CtrlPan\Golddrop.cel`
const char str_483F64[21] = {};

/// address: 0x483F7C
///
/// `Data\Quest.CEL`
const char str_483F7C[15] = {};

/// address: 0x483F8C
///
/// `Data\SpellI2.CEL`
const char str_483F8C[17] = {};

/// address: 0x483FA0
///
/// `Data\SpellBkB.CEL`
const char str_483FA0[18] = {};

/// address: 0x483FB4
///
/// `Data\SpellBk.CEL`
const char str_483FB4[17] = {};

/// address: 0x483FC8
///
/// `Items\DurIcons.CEL`
const char str_483FC8[19] = {};

/// address: 0x483FDC
///
/// `Data\CharBut.CEL`
const char str_483FDC[17] = {};

/// address: 0x483FF0
///
/// `CtrlPan\Panel8bu.CEL`
const char str_483FF0[21] = {};

/// address: 0x484008
///
/// `CtrlPan\TalkButt.CEL`
const char str_484008[21] = {};

/// address: 0x484020
///
/// `CtrlPan\P8But2.CEL`
const char str_484020[19] = {};

/// address: 0x484034
///
/// `CtrlPan\TalkPanl.CEL`
const char str_484034[21] = {};

/// address: 0x48404C
///
/// `CtrlPan\P8Bulbs.CEL`
const char str_48404C[20] = {};

/// address: 0x484060
///
/// `CtrlPan\Panel8.CEL`
const char str_484060[19] = {};

/// address: 0x484074
///
/// `CtrlPan\SpelIcon.CEL`
const char str_484074[21] = {};

/// address: 0x48408C
///
/// `Data\Char.CEL`
const char str_48408C[14] = {};

/// address: 0x48409C
///
/// `CtrlPan\SmalText.CEL`
const char str_48409C[21] = {};

/// address: 0x4840B4
///
/// "Hotkey : 's'"
const char str_4840B4[13] = {};

/// address: 0x4840C4
///
/// "Select current spell button"
const char str_4840C4[28] = {};

/// address: 0x4840E0
///
/// "Hotkey : %s"
const char str_4840E0[12] = {};

/// address: 0x4840EC
///
/// "Player attack"
const char str_4840EC[14] = {};

/// address: 0x4840FC
///
/// "Player friendly"
const char str_4840FC[16] = {};

/// address: 0x48410C
///
/// "Hit Points %i of %i"
const char str_48410C[20] = {};

/// address: 0x484120
///
/// "Level : %i"
const char str_484120[11] = {};

/// address: 0x48412C
///
/// "Requirements not met"
const char str_48412C[21] = {};

/// address: 0x484144
///
/// "%i gold %s"
const char str_484144[11] = {};

/// address: 0x484150
///
/// "MAX"
const char str_484150[4] = {};

/// address: 0x484154
///
/// "%i-%i"
const char str_484154[6] = {};

/// address: 0x48415C
///
/// "%i%%"
const char str_48415C[5] = {};

/// address: 0x484164
///
/// "None"
const char str_484164[5] = {};

/// address: 0x48416C
///
/// "%li"
const char str_48416C[4] = {};

/// address: 0x484170
///
/// "%i"
const char str_484170[3] = {};

/// address: 0x484174
///
/// "Sorceror"
const char str_484174[9] = {};

/// address: 0x484180
///
/// "Rogue"
const char str_484180[6] = {};

/// address: 0x484188
///
/// "Warrior"
const char str_484188[8] = {};

/// address: 0x484190
///
/// "Level Up"
const char str_484190[9] = {};

/// address: 0x48419C
///
/// "Skill"
const char str_48419C[6] = {};

/// address: 0x4841A4
///
/// "Staff (%i charges)"
const char str_4841A4[19] = {};

/// address: 0x4841B8
///
/// "Mana: %i  Dam: 1/3 tgt hp"
const char str_4841B8[26] = {};

/// address: 0x4841D4
///
/// "Mana: %i   Dam: n/a"
const char str_4841D4[20] = {};

/// address: 0x4841E8
///
/// "Mana: %i  Dam: %i - %i"
const char str_4841E8[23] = {};

/// address: 0x484200
///
/// "pieces"
const char str_484200[7] = {};

/// address: 0x484208
///
/// "piece"
const char str_484208[6] = {};

/// address: 0x484210
///
/// "%u"
const char str_484210[3] = {};

/// address: 0x484214
///
/// "you want to remove?"
const char str_484214[20] = {};

/// address: 0x484228
///
/// "%s.  How many do"
const char str_484228[17] = {};

/// address: 0x48423C
///
/// "You have %u gold"
const char str_48423C[17] = {};
