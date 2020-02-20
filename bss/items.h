#include "types.h"

/// address: 0x634CC8
///
/// active_item_nums keeps track of the item_num of active items.
///
/// PSX ref (SLPS-01416): 0x800D5354
/// PSX def: char itemactive[127];
extern int active_item_nums[127];

/// address: 0x634EC8
///
/// available_item_nums tracks available item numbers.
///
/// PSX ref (SLPS-01416): 0x800D53D4
/// PSX def: char itemavail[127];
extern int available_item_nums[127];

/// address: 0x635A28
///
/// PSX ref: 0x800D1D54
/// PSX def: ItemStruct item[128]
///
/// items contains the items on ground of the current game.
extern Item item[128]; // alias: items

/// address: 0x6412DC
///
/// PSX ref (SLPS-01416): 0x800D5454
/// PSX def: unsigned char UniqueItemFlag[128];
///
/// UniqueItemFlag reports whether the given unique item ID has dropped.
extern bool32_t UniqueItemFlag[128]; // unique_has_dropped

/// address: 0x6414DC
///
/// PSX ref (SLPS-01416):0x8011B888
/// PSX def: long numitems
///
/// nitems specifies the number of items located on the ground of the current
/// dungeon level.
extern int nitems;
