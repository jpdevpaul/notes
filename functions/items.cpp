// address: 0x41F096
//
// items_load_drop_graphics loads item drop graphics and initializes the
// tracking of dropped unique items.
void items_load_drop_graphics();

// address: 0x41F0E8
//
// TODO: add documentation.

// address: 0x41F13A
//
// TODO: add documentation.

// address: 0x41F24E
//
// TODO: add documentation.

// address: 0x41F320
//
// TODO: add documentation.

// address: 0x41F953
//
// TODO: add documentation.

// address: 0x41FA4A
//
// TODO: add documentation.

// address: 0x41FA97
//
// TODO: add documentation.

// address: 0x41FB91
//
// TODO: add documentation.

// address: 0x41FBF6
//
// TODO: add documentation.

// address: 0x41FC2C
//
// TODO: add documentation.

// address: 0x41FD3E
//
// TODO: add documentation.

// address: 0x41FD98
//
// TODO: add documentation.

// address: 0x41FE98
//
// TODO: add documentation.

// address: 0x41FEA4
//
// items_gen_seed generates a seed for the given item, distinct from the seed
// values of all other active items.
void __fastcall items_gen_seed(int player_num, int32_t *item_seed);

// address: 0x41FF16
//
// TODO: add documentation.

// address: 0x41FF19
//
// TODO: add documentation.

// address: 0x41FF4E
//
// TODO: add documentation.

// address: 0x4200F8
//
// TODO: add documentation.

// address: 0x4201F2
//
// TODO: add documentation.

// address: 0x4202E8
//
// TODO: add documentation.

// address: 0x420376
//
// TODO: add documentation.

// address: 0x4203E0
//
// TODO: add documentation.

// address: 0x42042C
//
// TODO: add documentation.

// address: 0x420514
//
// TODO: add documentation.

// address: 0x4206E5
//
// TODO: add documentation.

// address: 0x42084A
//
// TODO: add documentation.

// address: 0x420B17
//
// TODO: add documentation.

// address: 0x420B28
//
// TODO: add documentation.

// address: 0x420B68
//
// TODO: add documentation.

// address: 0x4215EF
//
// TODO: add documentation.

// address: 0x42191C
//
// TODO: add documentation.

// address: 0x4219C1
//
// TODO: add documentation.

// address: 0x421A4B
//
// items_get_rand_loot_id_from_monster returns the loot ID of a random item
// drop from the monster.
//
// The loot ID is positive for regular items and negative for unique items, as
// further described by the following pseudo-code.
//
//    switch {
//    case loot_id > 0:
//       // regular item drop.
//       item_id = loot_id - 1
//    case loot_id < 0:
//       // unique item drop.
//       unique_item_id = -loot_id - 1
//    case loot_id == 0:
//       // no item drop.
//    }
//
// The drops are calculated as follows.
//
//    * Winged Fiends (i.e. Fiend, Blink, Gloom and Familiar) never drop items.
//    * The Butcher always drops The Butcher's Cleaver.
//    * Skeleton King always drops The Undead Crown.
//
//    1) rnd(100) > 40: no drop
//    2) rnd(100) > 25: drop gold
//    3) Drop a random item with qlvl <= mlvl
//       - The drop rate of an item determines if it has non-existant, regular
//         or double chance of dropping.
//       - In single player, items with the Resurrect or the Heal Other spell
//         never drop.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.cpp#item_id
//    * https://github.com/sanctuary/notes/blob/master/enums.cpp#unique_item_id
int __fastcall items_get_rand_loot_id_from_monster(int monster_num);

// address: 0x421B32
//
// TODO: add documentation.

// address: 0x421C2A
//
// TODO: add documentation.

// address: 0x421CB7
//
// TODO: add documentation.

// address: 0x421D41
//
// TODO: add documentation.

// address: 0x421E11
//
// TODO: add documentation.

// address: 0x421F5C
//
// TODO: add documentation.

// address: 0x421FE6
//
// TODO: add documentation.

// address: 0x422024
//
// TODO: add documentation.

// address: 0x42217A
//
// TODO: add documentation.

// address: 0x422290
//
// TODO: add documentation.

// address: 0x42232B
//
// TODO: add documentation.

// address: 0x4223D0
//
// TODO: add documentation.

// address: 0x42243D
//
// TODO: add documentation.

// address: 0x4224A6
//
// TODO: add documentation.

// address: 0x42254A
//
// TODO: add documentation.

// address: 0x42265C
//
// TODO: add documentation.

// address: 0x422795
//
// TODO: add documentation.

// address: 0x4228B1
//
// TODO: add documentation.

// address: 0x422989
//
// TODO: add documentation.

// address: 0x422A50
//
// TODO: add documentation.

// address: 0x422A84
//
// TODO: add documentation.

// address: 0x422ADE
//
// TODO: add documentation.

// address: 0x422BB2
//
// TODO: add documentation.

// address: 0x422BCF
//
// TODO: add documentation.

// address: 0x422BF0
//
// TODO: add documentation.

// address: 0x422C63
//
// TODO: add documentation.

// address: 0x422C9C
//
// TODO: add documentation.

// address: 0x422CF6
//
// TODO: add documentation.

// address: 0x422D6C
//
// TODO: add documentation.

// address: 0x422DDD
//
// TODO: add documentation.

// address: 0x422E14
//
// TODO: add documentation.

// address: 0x422EF4
//
// TODO: add documentation.

// address: 0x423530
//
// TODO: add documentation.

// address: 0x42358C
//
// TODO: add documentation.

// address: 0x42365B
//
// TODO: add documentation.

// address: 0x4236A6
//
// items_draw_unique_item_box renders the unique item box on screen.
void items_draw_unique_item_box();

// address: 0x4237DC
//
// TODO: add documentation.

// address: 0x4238D4
//
// TODO: add documentation.

// address: 0x423AE1
//
// TODO: add documentation.

// address: 0x423CE0
//
// TODO: add documentation.

// address: 0x4241D7
//
// items_is_equipable reports whether the given item is equipable.
bool32_t __fastcall items_is_equipable(Item *item);

// address: 0x42421C
//
// TODO: add documentation.

// address: 0x424252
//
// TODO: add documentation.

// address: 0x4242C1
//
// TODO: add documentation.

// address: 0x4242F5
//
// TODO: add documentation.

// address: 0x424351
//
// TODO: add documentation.

// address: 0x424420
//
// TODO: add documentation.

// address: 0x42445F
//
// TODO: add documentation.

// address: 0x4244C6
//
// TODO: add documentation.

// address: 0x4245A0
//
// TODO: add documentation.

// address: 0x42466C
//
// TODO: add documentation.

// address: 0x4246D2
//
// TODO: add documentation.

// address: 0x424735
//
// TODO: add documentation.

// address: 0x424795
//
// TODO: add documentation.

// address: 0x424815
//
// TODO: add documentation.

// address: 0x4249A4
//
// TODO: add documentation.

// address: 0x424A03
//
// TODO: add documentation.

// address: 0x424A9B
//
// TODO: add documentation.

// address: 0x424B49
//
// TODO: add documentation.

// address: 0x424BAC
//
// TODO: add documentation.

// address: 0x424C0C
//
// TODO: add documentation.

// address: 0x424D57
//
// items_create_base_gold creates the base gold item.
void items_create_base_gold();

// address: 0x424D80
//
// TODO: add documentation.

// address: 0x424DD1
//
// TODO: add documentation.

// address: 0x424E3C
//
// TODO: add documentation.

// address: 0x424EA1
//
// TODO: add documentation.

// address: 0x424F52
//
// TODO: add documentation.

// address: 0x424FB8
//
// TODO: add documentation.

// address: 0x42501F
//
// items_update_stores_equipable updates the equipability of store owner items.
void items_update_stores_equipable();

// address: 0x4250C0
//
// TODO: add documentation.

// address: 0x4250EF
//
// TODO: add documentation.

// address: 0x4251B8
//
// TODO: add documentation.

// address: 0x42526E
//
// TODO: add documentation.

// address: 0x425311
//
// TODO: add documentation.

// address: 0x425357
//
// TODO: add documentation.

// address: 0x42539E
//
// TODO: add documentation.

