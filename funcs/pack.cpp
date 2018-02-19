#include "types.h"

/// address: 0x448755
///
/// j_pack_cpp_init initializes the C++ runtime of pack.cpp.
void j_pack_cpp_init();

/// address: 0x44875A
///
/// pack_cpp_init initializes the C++ runtime of pack.cpp.
void pack_cpp_init();

/// address: 0x448765
///
/// pack_get_hero_from_player retrieves hero information from the player struct.
void __fastcall pack_get_hero_from_player(Hero *hero, int player_num, bool32_t copy_has_manashield);

/// address: 0x448953
///
/// pack_get_hero_item_from_item retrieves hero item information from the item struct.
void __fastcall pack_get_hero_item_from_item(HeroItem *hero_item, Item *item);

/* TODO: uncomment when the Player struct has been added to structs.h.

/// address: 0x448A5E
///
/// pack_regenerate_gold_item_seeds regenerates the item seed of all gold in the
/// plyer's inventory inventory.
void __fastcall pack_regenerate_gold_item_seeds(Player *player);

*/

/// address: 0x448AD0
///
/// pack_get_player_from_hero retrieves player information from the hero struct.
void __fastcall pack_get_player_from_hero(Hero *hero, int player_num, bool32_t set_hp_min_1);

/// address: 0x448D48
///
/// pack_get_item_from_hero_item retrieves item information from the hero item struct.
void __fastcall pack_get_item_from_hero_item(HeroItem *hero_item, Item *item);
