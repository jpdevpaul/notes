#include "types.h"

/// address: 0x69F10C
///
/// storenumh specifies the number of lines in the active store owner dialogue.
///
/// PSX ref (easy-as-pie): 0x8012C1DC
/// PSX def: int storenumh
extern int storenumh; // alias: ndialogue_lines

/// address: 0x69F118
///
/// boyitem contains the item for sale by Wirt.
///
/// PSX ref (easy-as-pie): 0x800E58C4
/// PSX def: struct ItemStruct boyitem
extern Item boyitem; // alias: wirt_item

/// address: 0x69F290
///
/// premiumitem contains the premium items for sale by Griswold.
///
/// PSX ref (easy-as-pie): 0x800E4954
/// PSX def: struct ItemStruct premiumitem[6]
extern Item premiumitem[6]; // alias: griswold_premium_items

/// address: 0x69FB34
///
/// premiumlevel determines the level of the premium items sold by Griswold.
///
/// PSX ref (easy-as-pie): 0x8012B514
/// PSX def: int premiumlevel
extern int premiumlevel; // alias: griswold_premium_level

/// address: 0x6A09F0
///
/// storehold contains copies of player items for use by store owners in
/// dialogues.
///
/// PSX ref (easy-as-pie): 0x800E65D4
/// PSX def: struct ItemStruct storehold[48]
extern Item storehold[48]; // alias: player_items

/// address: 0x6A4EF8
///
/// witchitem contains the items for sale by Adria.
///
/// PSX ref (easy-as-pie): 0x800E4CE4
/// PSX def: struct ItemStruct witchitem[20]
extern Item witchitem[20]; // alias: adria_items

/// address: 0x6A6BBC
///
/// numpremium specifies the number of premium items sold by Griswold.
///
/// PSX ref (easy-as-pie): 0x8012B510
/// PSX def: int numpremium
extern int numpremium; // alias: ngriswold_premium_items

/// address: 0x6A6BC0
///
/// healitem contains the items for sale by Pepin.
///
/// PSX ref (easy-as-pie): 0x800E59F4
/// PSX def: struct ItemStruct healitem[20]
extern Item healitem[20]; // alias: pepin_items

/// address: 0x6A8880
///
/// golditem represents the base gold item.
///
/// PSX ref (easy-as-pie): 0x800E595C
/// PSX def: struct ItemStruct golditem
extern Item golditem; // alias: item_base_gold

/// address: 0x6A8A40
///
/// smithitem contains the basic items for sale by Griswold.
///
/// PSX ref (easy-as-pie): 0x800E3D74
/// PSX def: struct ItemStruct smithitem[20]
extern Item smithitem[20]; // alias: griswold_basic_items
