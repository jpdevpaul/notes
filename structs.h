// 10 blocks for l1.min, l2.min and l3.min
// 16 blocks for l4.min and town.min
const int nblocks = 10;

// A DPiece represents a dungeon piece, which specifies how to arrange frames of
// a level CEL file in order to form a miniature tile. A dungeon piece consists
// of 10 or 16 blocks, where each non-empty block is represented by a CEL frame.
//
// A block specifies the graphics of a single block in a dungeon piece.
//
// Frame number in the level CEL file; or 0 if empty;
//    block&0x0FFF.
//
// Frame type, specifying the CEL decoding algorithm of the frame;
//    (block&0x7000) >> 12
typedef struct {
	// Either 10 or 16 blocks constituting the dungeon piece.
	uint16_t blocks[nblocks];
} DPiece;

// GossipData specifies the speech IDs for the gossip related to each quest.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#speech_id
typedef struct {
	// offset 0000 (4 bytes)
	speech_id the_magic_rock;
	// offset 0004 (4 bytes)
	speech_id black_mushroom;
	// offset 0008 (4 bytes)
	speech_id gharbad_the_weak;
	// offset 000C (4 bytes)
	speech_id zhar_the_mad;
	// offset 0010 (4 bytes)
	speech_id lachdanan;
	// offset 0014 (4 bytes)
	speech_id diablo;
	// offset 0018 (4 bytes)
	speech_id the_butcher;
	// offset 001C (4 bytes)
	speech_id ogdens_sign;
	// offset 0020 (4 bytes)
	speech_id halls_of_the_blind;
	// offset 0024 (4 bytes)
	speech_id valor;
	// offset 0028 (4 bytes)
	speech_id anvil_of_fury;
	// offset 002C (4 bytes)
	speech_id warlord_of_blood;
	// offset 0030 (4 bytes)
	speech_id the_curse_of_king_leoric;
	// offset 0034 (4 bytes)
	speech_id poisoned_water_supply;
	// offset 0038 (4 bytes)
	speech_id the_chamber_of_bone;
	// offset 003C (4 bytes)
	speech_id archbishop_lazarus;
} GossipData;

// HeroItem contains the most essential information about the item of a player,
// as used in save files.
typedef struct { // size = 0x13
	// offset 0000 (bytes 4)
	int32_t seed;
	// offset 0004 (bytes 2)
	uint16_t wCF;
	// offset 0006 (bytes 2)
	item_id item_id;
	// offset 0008 (bytes 1)
	uint8_t identified_and_item_quality; // The first bit corresponds to identified and the remaining bits corresponds to item_quality.
	// offset 0009 (bytes 1)
	int8_t durability_cur;
	// offset 000A (bytes 1)
	int8_t durability_max;
	// offset 000B (bytes 1)
	int8_t charges_min;
	// offset 000C (bytes 1)
	int8_t charges_max;
	// offset 000D (bytes 2)
	int16_t gold_price;
	// offset 000F (bytes 4)
	uint32_t only_used_by_ear; // Stores the last 4 bytes of the ear name.
} HeroItem;

// Hero contains the most essential information about a player, as used in save
// files.
typedef struct { // size = 0x4F2
	// offset 0008 (1 bytes)
	int8_t daction;
	// offset 0009 (1 bytes)
	int8_t param1;
	// offset 000A (1 bytes)
	int8_t param2;
	// offset 000B (1 bytes)
	int8_t dlvl;
	// offset 000C (1 bytes)
	int8_t x;
	// offset 000D (1 bytes)
	int8_t y;
	// offset 000E (1 bytes)
	int8_t target_x;
	// offset 000F (1 bytes)
	int8_t target_y;
	// offset 0010 (32 bytes)
	char name[32];
	// offset 0030 (1 bytes)
	player_class player_class;
	// offset 0031 (1 bytes)
	int8_t str_base;
	// offset 0032 (1 bytes)
	int8_t mag_base;
	// offset 0033 (1 bytes)
	int8_t dex_base;
	// offset 0034 (1 bytes)
	int8_t vit_base;
	// offset 0035 (1 bytes)
	int8_t clvl;
	// offset 0036 (1 bytes)
	int8_t points;
	// offset 0037 (4 bytes)
	int32_t exp;
	// offset 003B (4 bytes)
	int32_t gold_total;
	// offset 003F (4 bytes)
	int32_t hp_base_cur;
	// offset 0043 (4 bytes)
	int32_t hp_base_max;
	// offset 0047 (4 bytes)
	int32_t mp_base_cur;
	// offset 004B (4 bytes)
	int32_t mp_base_max;
	// offset 004F (37 bytes)
	int8_t spell_lvl_from_spell_id[37];
	// offset 0074 (8 bytes)
	uint32_t known_spells[2]; // bitfield of known spells.
	// offset 007C (133 bytes)
	HeroItem body_items[7];
	// offset 0101 (760 bytes)
	HeroItem inv_items[40];
	// offset 03F9 (40 bytes)
	int8_t inv_num_from_inv_grid[40];
	// offset 0421 (1 bytes)
	int8_t ninv_items;
	// offset 0422 (152 bytes)
	HeroItem belt_items[8];
	// offset 04BD (1 bytes)
	int8_t on_battlenet;
	// offset 04BE (1 bytes)
	int8_t has_manashild;
	// offset 04D2 (4 bytes)
	int32_t difficulty;
} Hero;

// Item describes in-game state of any game item.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_class
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_misc_id
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_drop_state
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_effect_type
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_equip_type
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_id
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_inv_graphics_id
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_quality
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_special_effect
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_type
typedef struct { // size = 0x170
	// offset 0000 (4 bytes)
	uint32_t seed;
	// offset 0004 (2 bytes)
	uint16_t CF;
	// offset 0008 (4 bytes)
	item_type type;
	// offset 000C (4 bytes)
	int32_t col;
	// offset 0010 (4 bytes)
	int32_t row;
	// offset 0014 (4 bytes)
	int32_t drop_anim_update;
	// offset 0018 (4 bytes)
	void *drop_cel_data;
	// offset 001C (4 bytes)
	int32_t drop_frame_count;
	// offset 0020 (4 bytes)
	int32_t cur_drop_frame;
	// offset 0024 (4 bytes)
	int32_t drop_width;
	// offset 0028 (4 bytes)
	int32_t drop_x_offset;
	// offset 002C (4 bytes)
	bool32_t inactive; // unused in win 1.09b, used in win 1.00 debug.
	// offset 0030 (1 byte)
	item_drop_state drop_state;
	// offset 0034 (4 bytes)
	bool32_t draw_quest_item;
	// offset 0038 (1 byte)
	bool32_t is_identified;
	// offset 003C (1 byte)
	item_quality quality;
	// offset 003D (64 bytes)
	char unindentified_name[64];
	// offset 007D (64 bytes)
	char full_name[64];
	// offset 00BD (1 byte)
	item_equip_type equip_type;
	// offset 00BE (1 byte)
	item_class _class;
	// offset 00C0 (4 bytes)
	item_inv_graphics_id inv_graphics_id;
	// offset 00C4 (4 bytes)
	int32_t unindentified_price; // also represents number of gold pieces for item `gold`
	// offset 00C8 (4 bytes)
	int32_t full_price;
	// offset 00CC (4 bytes)
	int32_t min_attack_damage;
	// offset 00D0 (4 bytes)
	int32_t max_attack_damage;
	// offset 00D4 (4 bytes)
	int32_t armor_class;
	// offset 00D8 (4 bytes)
	item_special_effect special_effect_flags; // bitmask
	// offset 00DC (4 bytes)
	item_misc_id misc_id;
	// offset 00E0 (4 bytes)
	spell_id item_spell_id;
	// offset 00E4 (4 bytes)
	int32_t cur_staff_charges;
	// offset 00E8 (4 bytes)
	int32_t max_staff_charges;
	// offset 00EC (4 bytes)
	int32_t cur_durability;
	// offset 00F0 (4 bytes)
	int32_t max_durability; // if it equals 255 then item is indestructible
	// offset 00F4 (4 bytes)
	int32_t attack_damage_percent_bonus;
	// offset 00F8 (4 bytes)
	int32_t to_hit_bonus;
	// offset 00FC (4 bytes)
	int32_t armor_class_percent_bonus;
	// offset 0100 (4 bytes)
	int32_t strength_bonus;
	// offset 0104 (4 bytes)
	int32_t magic_bonus;
	// offset 0108 (4 bytes)
	int32_t dexterity_bonus;
	// offset 010C (4 bytes)
	int32_t vitality_bonus;
	// offset 0110 (4 bytes)
	int32_t fire_resistance_bonus;
	// offset 0114 (4 bytes)
	int32_t lightning_resistance_bonus;
	// offset 0118 (4 bytes)
	int32_t magic_resistance_bonus;
	// offset 011C (4 bytes)
	int32_t mana_bonus; // in Q26.6 fixed-point format (each displayed mana point equals 64)
	// offset 0120 (4 bytes)
	int32_t life_bonus; // in Q26.6 fixed-point format (each displayed health point equals 64)
	// offset 0124 (4 bytes)
	int32_t attack_damage_bonus;
	// offset 0128 (4 bytes)
	int32_t damage_taken_bonus;
	// offset 012C (4 bytes)
	int32_t light_radius_bonus; // measured in 10% chunks
	// offset 0130 (1 byte)
	uint8_t spell_level_bonus;
	// offset 0131 (1 byte)
	bool8_t held_in_hand;
	// offset 0134 (4 byte)
	unique_item_id unique_id;
	// offset 0138 (4 byte)
	int32_t fire_damage_min;
	// offset 013C (4 byte)
	int32_t fire_damage_max;
	// offset 0140 (4 byte)
	int32_t lightning_damage_min;
	// offset 0144 (4 byte)
	int32_t lightning_damage_max;
	// offset 0148 (4 byte)
	int32_t armor_penetration;
	// offset 014C (4 byte)
	item_effect_type prefix_effect_type;
	// offset 014D (4 byte)
	item_effect_type suffix_effect_type;
	// offset 0150 (4 byte)
	int32_t prefix_price;
	// offset 0154 (4 byte)
	int32_t prefix_price_multiplier;
	// offset 0158 (4 byte)
	int32_t suffix_price;
	// offset 015C (4 byte)
	int32_t suffix_price_multiplier;
	// offset 0160 (1 byte)
	uint8_t required_strength;
	// offset 0161 (1 byte)
	uint8_t reguied_magic;
	// offset 0162 (1 byte)
	uint8_t required_dexterity;
	// offset 0163 (1 byte)
	uint8_t required_vitality;
	// offset 0164 (1 byte)
	bool32_t is_equippable;
	// offset 0168 (4 byte)
	item_id id;
} Item;

// ItemData describes possible basic state a of game item (i.e. state before possibly applying
// prefix, suffix, unique, effects or spells for books or staves)
typedef struct { // size = 0x4C
	// offset 0000 (4 bytes)
	item_drop_rate drop_rate;
	// offset 0004 (1 byte)
	item_class _class;
	// offset 0005 (1 byte)
	item_equip_type equip_type;
	// offset 0008 (4 bytes)
	item_inv_graphics_id inv_graphics_id;
	// offset 000C (1 byte)
	item_type type;
	// offset 000D (1 byte)
	unique_base_item unique_base_item_id;
	// offset 0010 (4 bytes)
	const char *name;
	// offset 0014 (4 bytes)
	const char *short_name; // applied if item description becomes too long after adding affixes
	                        // and/or spell
	// offset 0018 (4 bytes)
	item_quality quality;
	// offset 001C (4 bytes)
	int max_durability;
	// offset 0020 (4 bytes)
	int min_attack_damage;
	// offset 0024 (4 bytes)
	int max_attack_damage;
	// offset 0028 (4 bytes)
	int min_armor_class;
	// offset 002C (4 bytes)
	int max_armor_class;
	// offset 0030 (1 byte)
	uint8_t required_strength;
	// offset 0031 (1 byte)
	uint8_t required_magic;
	// offset 0032 (1 byte)
	uint8_t required_dexterity;
	// offset 0034 (4 bytes)
	item_special_effect special_effect_flags; // Rarely set, only for undead crown and even this
	                                          // case seems to be redundant due one of its unique
	                                          // item effect
	// offset 0038 (4 bytes)
	item_misc_id misc_id;
	// offset 003C (4 bytes)
	spell_id spell_id; // Used for charges on Short Staff of Charged Bolt,
	                   // and used for scrolls otherwise.
	// offset 0040 (4 bytes)
	bool32_t is_usable; // Set if item could be triggered with right click (e.g. for gold,
	                    // potions, elixirs, books and scrolls). Some unique items do still
	                    // trigger an action on right click even though for them this flag
	                    // is not set.
	// offset 0044 (4 bytes)
	int price;
	// offset 0048 (4 bytes)
	int max_price; // Unused but for all items is specified higher than price
} ItemData;

// ItemEffect describes possible effect caused by suffix or prefix of magic item or one of
// 5 unique item's effects. For some rare effect types min/max values represent different
// type of parameters.
typedef struct {
	item_effect_type type;
	int32_t min_value;
	int32_t max_value;
} ItemEffect;

// ItemAffixData describes effect and properties of affix with listed name.
//
// PSX def:
//    typedef struct PLStruct {
//       int PLName;
//       int PLPower;
//       int PLParam1;
//       int PLParam2;
//       char PLMinLvl;
//       long PLIType;
//       unsigned char PLGOE;
//       unsigned char PLDouble;
//       unsigned char PLOk;
//       int PLMinVal;
//       int PLMaxVal;
//       int PLMultVal;
//    } PLStruct;
typedef struct { // size = 0x30
	// offset 0000 (4 bytes)
	const char *name;
	// offset 0004 (12 bytes)
	ItemEffect effect;
	// offset 0010 (1 bytes)
	int8_t quality_level;
	// offset 0014 (4 bytes)
	affix_item_type item_type_flags; // bitmask
	// offset 0018 (4 bytes)
	int excluded_combination; // contains 0x01 or 0x10. If (suffix | preffix) == 0x11 they will
	                          // never be applied to a single item simultaneously. Also if prefix
	                          // has value 0x01 it also means that it can not be present on a staff
	                          // with a spell.
	// offset 001C (4 bytes)
	bool32_t double_chance; // if it is set then there's a twice is likely chance that this affix
	                        // will be generated than if it's not
	// offset 0020 (4 bytes)
	bool32_t not_cursed; // cursed affixes are never applied to items sold in town and also have
	                     // lower probability to be applied in other cases.
	// offset 0024 (4 bytes)
	int min_price;
	// offset 0028 (4 bytes)
	int max_price;
	// offset 002C (4 bytes)
	int cost_multiplier;
} ItemAffixData;

// MissileGraphicData specifies the different missile animation graphics.
typedef struct { // size = 0xEC
	// offset 0000 (1 bytes)
	missile_graphic_id missile_graphic_id;
	// offset 0001 (1 bytes)
	int8_t nanims; // number of animations.
	// offset 0004 (4 bytes)
	char *cl2_name;
	// offset 0008 (4 bytes)
	uint32_t flags;
	// offset 000C (64 bytes)
	void *cl2_from_orientation[16];
	// offset 004C (64 bytes)
	void *anim_speed_from_orientation[16];
	// offset 005C (64 bytes)
	void *last_frame_from_orientation[16];
	// offset 006C (64 bytes)
	void *frame_width_from_orientation[16];
	// offset 00AC (64 bytes)
	void *x_offset_from_orientation[16];
} MissileGraphicData;

// A Point is an X, Y coordinate pair. The axes increase right and down.
typedef struct {
	int32_t x;
	int32_t y;
} Point;

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
	int8_t col;
	int8_t row;
	int8_t dlvl;
	dungeon_type dtype;
	quest_level quest_lvl;
} Portal;

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
//
// TODO: Figure out how to fix broken links. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/base.md
//    * https://github.com/sanctuary/graphics/blob/master/l2/tiles/base.md
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

// ScreenRow represents a single horizontal line of pixels on the screen.
//
// size = 0x300
typedef struct {
	// offset 0000 (64 bytes)
	uint8_t col_unused_1[64];
	// offset 0040 (640 bytes)
	uint8_t pixels[640];
	// offset 02C0 (64 bytes)
	uint8_t col_unused_2[64];
} ScreenRow;

// Screen represents the pixels of the screen.
//
// size = 0x7B000
typedef struct {
	// offset 00000000 (122880 bytes)
	ScreenRow row_unused_1[160];
	// offset 0001E000 (368640 bytes)
	ScreenRow row[480];
	// offset 00078000 (12288 bytes)
	ScreenRow row_unused_2[16];
} Screen;

// SoundFile represents a WAV sound file.
//
// PSX def:
//    typedef struct TSnd {
//    } TSnd;
typedef struct { // size = 0x28
	// offset 0000 (18 bytes)
	WAVEFORMATEX fmt;
	// offset 0014 (4 bytes)
	int32_t len;
	// offset 0018 (4 bytes)
	int32_t offset;
	// offset 001C (4 bytes)
	char *sound_path;
	// offset 0020 (4 bytes)
	IDirectSoundBuffer *DSB; // direct sound buffer.
	// offset 0024 (4 bytes)
	uint32_t start_tc; // start tick count.
} SoundFile;

// A Tile consists of four dungeon pieces (top, right, left, bottom), forming a
// square.
//
//           top
//
//            /\
//    left   /\/\   right
//           \/\/
//            \/
//
//          bottom
typedef struct {
	// Dungeon piece ID at the top of the tile.
	uint16_t top;
	// Dungeon piece ID at the right of the tile.
	uint16_t right;
	// Dungeon piece ID at the left of the tile.
	uint16_t left;
	// Dungeon piece ID at the bottom of the tile.
	uint16_t bottom;
} Tile;

struct TMsg;

// TMsgHeader represents the header of a timed message.
typedef struct {
	TMsg *next;
	uint32_t start_tc;
	uint8_t len;
} TMsgHeader;

// TMsg represents a timed message.
typedef struct TMsg {
	TMsgHeader hdr;
	uint8_t data[3]; // The size of msg is >= 3 and is dynamically allocated.
} TMsg;

// UniqueItemData describes the properties and effects of a unique item.
typedef struct { // size = 0x54
	// offset 0000 (4 bytes)
	char *name;
	// offset 0004 (1 bytes)
	unique_base_item  unique_base_item;
	// offset 0005 (1 bytes)
	int8_t quality_lvl;
	// offset 0006 (1 bytes)
	int8_t neffects;
	// offset 0008 (4 bytes)
	int32_t gold_price;
	// offset 000C (72 bytes)
	ItemEffect effects[6];
} UniqueItemData;
