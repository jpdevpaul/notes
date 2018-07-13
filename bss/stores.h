#include "types.h"

/// address: 0x69F10C
///
/// ndialogue_lines specifies the number of lines in the active store owner
/// dialogue.
///
/// PSX ref: 0x8011C8A8
/// PSX def: int storenumh
extern int ndialogue_lines;

/// address: 0x69F118
///
/// wirt_item contains the item for sale by Wirt.
///
/// PSX ref: 0x800E0AF8
/// PSX def: ItemStruct _boyitem[2]
extern Item wirt_item;

/// address: 0x69F290
///
/// griswold_premium_items contains the premium items for sale by Griswold.
///
/// PSX ref: 0x800DF508
/// PSX def: ItemStruct _premiumitem[2][6]
extern Item griswold_premium_items[6];

/// address: 0x6A09F0
///
/// player_items contains copies of player items for use by store owners in
/// dialogues.
///
/// PSX ref: 0x800E1D88
/// PSX def: ItemStruct storehold[48]
extern Item player_items[48];

/// address: 0x6A4EF8
///
/// adria_items contains the items for sale by Adria.
///
/// PSX ref: 0x800DFA18
/// PSX def: ItemStruct _witchitem[2][20]
extern Item adria_items[20];

/// address: 0x6A6BBC
///
/// ngriswold_premium_items specifies the number of premium items sold by
/// Griswold.
extern int ngriswold_premium_items;

/// address: 0x6A6BC0
///
/// pepin_items contains the items for sale by Pepin.
///
/// PSX ref: 0x800E0BD0
/// PSX def: ItemStruct _healitem[2][20]
extern Item pepin_items[20];

/// address: 0x6A8880
///
/// item_base_gold represents the base gold item.
///
/// PSX ref: 0x800E1CB0
/// PSX def: ItemStruct _golditem[2]
extern Item item_base_gold;

/// address: 0x6A8A40
///
/// griswold_basic_items contains the basic items for sale by Griswold.
///
/// PSX ref: 0x800DE428
/// PSX def: ItemStruct _smithitem[2][20]
extern Item griswold_basic_items[20];
