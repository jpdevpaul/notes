# Structures

## GossipData

```c
// GossipData specifies the speech IDs for the gossip related to each quest.
typedef struct {
    speech_id the_magic_rock;
    speech_id black_mushroom;
    speech_id gharbad_the_weak;
    speech_id zhar_the_mad;
    speech_id lachdanan;
    speech_id diablo;
    speech_id the_butcher;
    speech_id ogdens_sign;
    speech_id halls_of_the_blind;
    speech_id valor;
    speech_id anvil_of_fury;
    speech_id warlord_of_blood;
    speech_id the_curse_of_king_leoric;
    speech_id poisoned_water_supply;
    speech_id the_chamber_of_bone;
    speech_id archbishop_lazarus;
} GossipData;
```

## Item

```c
// Item describes in-game state of any game item.
typedef struct
{
    uint random_seed;
    uint16_t unknown;
    uint16_t reserved_0;
    item_type type;
    int row;
    int col;
    int drop_anim_update;
    void *drop_cel_data;
    int drop_frame_count;
    int drop_cur_frame;
    int drop_width;
    int drop_x_offset;
    int inactive;
    item_drop_state drop_state;
    uint8_t reserved_1;
    uint16_t reserved_2;
    int draw_quest_item;
    int is_identified;
    item_quality quality;
    char unindentified_name[64];
    char full_name[64];
    item_equip_type equip_type;
    item_category category;
    uint8_t reserved_3;
    item_inv_graphics_id inv_graphics_id;
    int unindentified_price; // also represents number of gold pieces for item `gold`
    int full_price;
    int min_attack_damage;
    int max_attack_damage;
    int armor_class;
    item_special_effect special_effect_flags; // bitmask
    item_code code;
    spell_id staff_spell_id;
    int cur_staff_charges;
    int max_staff_charges;
    int cur_durability;
    int max_durability; // if it equals 255 then item is indestructible
    int percent_dmg_done_bonus;
    int to_hit_bonus;
    int armor_class_percent_bonus;
    int strength_bonus;
    int magic_bonus;
    int dexterity_bonus;
    int vitality_bonus;
    int fire_resistance_bonus;
    int lightning_resistance_bonus;
    int magic_resistance_bonus;
    int mana_bonus; // in Q26.6 fixed-point format (each displayed mana point equals 64)
    int life_bonus; // in Q26.6 fixed-point format (each displayed health point equals 64)
    int attack_damage_bonus;
    int damage_taken_bonus;
    int light_radius_bonus; // measured in 10% chunks
    uint8_t spell_level_bonus;
    uint8_t held_in_hand;
    int16_t reserved_4;
    unique_item_id unique_id;
    int fire_damage_min;
    int fire_damage_max;
    int lightning_damage_min;
    int lightning_damage_max;
    int armor_penetration;
    item_effect_type prefix_effect_type;
    item_effect_type suffix_effect_type;
    int16_t reserved_5;
    int prefix_price;
    int prefix_price_multiplier;
    int suffix_price;
    int suffix_price_multiplier;
    uint8_t required_strength;
    uint8_t reguired_magic;
    uint8_t required_dexterity;
    uint8_t required_vitality;
    int is_equippable;
    item_id id;
    int reserved_6;
} Item;
```

References:
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_category
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_code
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_drop_state
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_effect_type
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_equip_type
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_id
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_inv_graphics_id
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_quality
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_special_effect
* https://github.com/sanctuary/notes/blob/master/enumerates.md#item_type

References:
* https://github.com/sanctuary/notes/blob/master/enumerates.md#speech_id

## Point

```c
// A Point is an X, Y coordinate pair. The axes increase right and down.
typedef struct {
    int32_t x;
    int32_t y;
} Point;
```

## Portal

```c
// A Portal represents a portal between two levels.
//
// PSX def:
//    typedef struct DPortal {
//       unsigned char x;
//       unsigned char y;
//       unsigned char level;
//       unsigned char ltype;
//       unsigned char setlvl;
//    } DPortal;
typedef struct {
    int8_t col
    int8_t row
    int8_t dlvl
    dtype dtype
    quest_level quest_lvl
} Portal;
```

## Shadow

```c
// A Shadow contains the shadows for a 2x2 block of base tile IDs.
//
// PSX def:
//    typedef struct ShadowStruct {
//       unsigned char strig;
//       unsigned char s1;
//       unsigned char s2;
//       unsigned char s3;
//       unsigned char nv1;
//       unsigned char nv2;
//       unsigned char nv3;
//    } ShadowStruct;
typedef struct {
    // 2x2 block of base tile IDs.
    l1_tile_id base_bottom;
    l1_tile_id base_top;
    l1_tile_id base_right;
    l1_tile_id base_left;
    // replacement shadow tile IDs.
    l1_tile_id shadow_top;
    l1_tile_id shadow_right;
    l1_tile_id shadow_left;
} Shadow;
```

References:
* https://github.com/sanctuary/graphics/blob/master/l1/tiles/base.md
* https://github.com/sanctuary/graphics/blob/master/l2/tiles/base.md
