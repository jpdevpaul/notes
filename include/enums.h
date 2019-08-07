#ifndef ENUMS_H
#define ENUMS_H

/// Bit flag which is used to determine if affix could be applied to certain type of items.
/// As it can be noted each flag just represents one or more values from `item_type` enumeration.
///
/// bitflag
typedef enum {
	AFFIX_ITEM_TYPE_JEWELRY = 0x00000001,
	AFFIX_ITEM_TYPE_BOW     = 0x00000010,
	AFFIX_ITEM_TYPE_STAFF   = 0x00000100,
	AFFIX_ITEM_TYPE_WEAPON  = 0x00001000,
	AFFIX_ITEM_TYPE_SHIELD  = 0x00010000,
	AFFIX_ITEM_TYPE_ARMOR   = 0x00100000,
} affix_item_type;

/// Attribute IDs.
typedef enum {
	ATTRIBUTE_ID_STR = 0,
	ATTRIBUTE_ID_MAG = 1,
	ATTRIBUTE_ID_DEX = 2,
	ATTRIBUTE_ID_VIT = 3,
} attribute_id;

/// MPQ block flags.
///
/// bitflag
typedef enum {
	BLOCK_FLAG_IMPLODE                = 0x00000100, ///< compressed file (PKWARE)
	BLOCK_FLAG_COMPRESS               = 0x00000200, ///< compressed file
	BLOCK_FLAG_ENCRYPTED              = 0x00010000, ///< encrypted file
	BLOCK_FLAG_POSITION_DEPENDENT_KEY = 0x00020000, ///< position dependent decryption key
	BLOCK_FLAG_PATCH_FILE             = 0x00100000, ///< incremental patch file for an existing file in the base MPQ
	BLOCK_FLAG_SINGLE_UNIT            = 0x01000000, ///< file contained in a single unit, not split in sectors
	BLOCK_FLAG_DELETED                = 0x02000000, ///< deleted file; used by patch archives to delete files in lower-priority archives
	BLOCK_FLAG_SECTOR_CRC             = 0x04000000, ///< sector CRC checksums
	BLOCK_FLAG_EXISTS                 = 0x80000000, ///< file present
} block_flag;

/// Special block indices.
typedef enum {
	BLOCK_INDEX_HASH_ENTRY_EMPTY   = -1,
	BLOCK_INDEX_HASH_ENTRY_DELETED = -2,
} block_index;

/// Network message commands.
typedef enum {
	CMD_0 = 0,
	// TODO: Define message commands (there are 93 of them).
} cmd;

/// Cursor IDs; frame_num+1 of objcurs.cel.
typedef enum {
	CURSOR_ID_NONE           =  0,
	CURSOR_ID_HAND           =  1,
	CURSOR_ID_IDENTIFY       =  2,
	CURSOR_ID_ITEM_REPAIR    =  3,
	CURSOR_ID_STAFF_RECHARGE =  4,
	CURSOR_ID_TRAP_DISARM    =  5,
	CURSOR_ID_OIL            =  6,
	CURSOR_ID_TELEKINESIS    =  7,
	CURSOR_ID_RESURRECT      =  8,
	CURSOR_ID_TELEPORT       =  9,
	CURSOR_ID_HEAL_OTHER     = 10,
	CURSOR_ID_HOURGLASS      = 11,
	CURSOR_ID_FIRST_ITEM     = 12,
} cursor_id;

/// Damage types.
typedef enum {
	DAMAGE_TYPE_NONE      = 0,
	DAMAGE_TYPE_FIRE      = 1,
	DAMAGE_TYPE_LIGHTNING = 2,
	DAMAGE_TYPE_MAGIC     = 3,
	DAMAGE_TYPE_ACID      = 4,
} damage_type;

/// Directions.
///
/// # Map layout
///
///                  (x=0 y=0)
///                      _
///                     / \
///                    /   \
///               y   /     \   x
///                  /       \
///                 /         \
///    (x=0 y=95)  |           |  (x=95 y=0)
///                 \         /
///                  \       /
///                   \     /
///                    \   /
///                     \_/
///                 (x=95 y=95)
///
/// # Step based on direction
///
///    * South      (x+1, y+1)
///    * South west (x,   y+1)
///    * West       (x-1, y+1)
///    * North west (x-1, y)
///    * North      (x-1, y-1)
///    * North east (x,   y-1)
///    * East       (x+1, y-1)
///    * South east (x+1, y)
typedef enum {
	DIRECTION_SOUTH      = 0,
	DIRECTION_SOUTH_WEST = 1,
	DIRECTION_WEST       = 2,
	DIRECTION_NORTH_WEST = 3,
	DIRECTION_NORTH      = 4,
	DIRECTION_NORTH_EAST = 5,
	DIRECTION_EAST       = 6,
	DIRECTION_SOUTH_EAST = 7,
	DIRECTION_OMNI       = 8, ///< All directions.
} direction;

/// Dungeon types.
typedef enum {
	DUNGEON_TYPE_TRISTRAM  = 0, ///< dlvl:       0
	DUNGEON_TYPE_CATHEDRAL = 1, ///< dlvl:  1 -  4
	DUNGEON_TYPE_CATACOMBS = 2, ///< dlvl:  5 -  8
	DUNGEON_TYPE_CAVES     = 3, ///< dlvl:  9 - 12
	DUNGEON_TYPE_HELL      = 4, ///< dlvl: 13 - 16
	DUNGEON_TYPE_NONE      = -1,
} dungeon_type;

/// Enterances to town (warp), used as bitfield.
typedef enum {
	ENTERANCE_OPEN_CATACOMBS = 0x01,
	ENTERANCE_OPEN_CAVES     = 0x02,
	ENTERANCE_OPEN_HELL      = 0x04,
} enterance_open;

/// Error IDs for on screen error messages.
typedef enum {
	ERROR_ID_NONE                                  =  0,
	ERROR_ID_NO_AUTOMAP_AVAILABLE_IN_TOWN          =  1,
	ERROR_ID_NO_MULTIPLAYER_FUNCTIONS_IN_DEMO      =  2,
	ERROR_ID_DS_INIT_FAILED                        =  3,
	ERROR_ID_NOT_AVAILABLE_IN_SHAREWARE_VERSION    =  4,
	ERROR_ID_NOT_ENOUGH_SPACE_TO_SAVE              =  5,
	ERROR_ID_NO_PAUSE_IN_TOWN                      =  6,
	ERROR_ID_COPYING_TO_A_HARD_DISK_IS_RECOMMENDED =  7,
	ERROR_ID_MULTIPLAYER_SYNC_PROBLEM              =  8,
	ERROR_ID_NO_PAUSE_IN_MULTIPLAYER               =  9,
	ERROR_ID_LOADING                               = 10,
	ERROR_ID_SAVING                                = 11,
	ERROR_ID_SHRINE_MYSTERIOUS                     = 12,
	ERROR_ID_SHRINE_HIDDEN                         = 13,
	ERROR_ID_SHRINE_GLOOMY                         = 14,
	ERROR_ID_SHRINE_WEIRD                          = 15,
	ERROR_ID_SHRINE_MAGICAL_1                      = 16,
	ERROR_ID_SHRINE_STONE                          = 17,
	ERROR_ID_SHRINE_RELIGIOUS                      = 18,
	ERROR_ID_SHRINE_ENCHANTED                      = 19,
	ERROR_ID_SHRINE_THAUMATURGIC                   = 20,
	ERROR_ID_SHRINE_FASCINATING                    = 21,
	ERROR_ID_SHRINE_CRYPTIC                        = 22,
	ERROR_ID_SHRINE_MAGICAL_2                      = 23,
	ERROR_ID_SHRINE_ELDRITCH                       = 24,
	ERROR_ID_SHRINE_EERIE                          = 25,
	ERROR_ID_SHRINE_DIVINE                         = 26,
	ERROR_ID_SHRINE_HOLY                           = 27,
	ERROR_ID_SHRINE_SACRED                         = 28,
	ERROR_ID_SHRINE_SPIRITUAL                      = 29,
	ERROR_ID_SHRINE_SPOOKY_YOU                     = 30,
	ERROR_ID_SHRINE_SPOOKY_OTHERS                  = 31,
	ERROR_ID_SHRINE_ABANDONED                      = 32,
	ERROR_ID_SHRINE_CREEPY                         = 33,
	ERROR_ID_SHRINE_QUIET                          = 34,
	ERROR_ID_SHRINE_SECLUDED                       = 35,
	ERROR_ID_SHRINE_ORNATE                         = 36,
	ERROR_ID_SHRINE_GLIMMERING                     = 37,
	ERROR_ID_SHRINE_TAINTED_YOU                    = 38,
	ERROR_ID_SHRINE_TAINTED_OTHERS                 = 39,
	ERROR_ID_CLVL_8_REQUIRED                       = 40,
	ERROR_ID_CLVL_13_REQUIRED                      = 41,
	ERROR_ID_CLVL_17_REQUIRED                      = 42,
	ERROR_ID_ARCANE_KNOWLEDGE_GAINED               = 43,
} error_id;

/// Event types for multiplayer games.
typedef enum {
	EVENT_TYPE_PLAYER_CREATE_GAME =  1,
	EVENT_TYPE_2                  =  2,
	EVENT_TYPE_PLAYER_LEAVE_GAME  =  3,
	EVENT_TYPE_PLAYER_MESSAGE     =  4,
	EVENT_TYPE_5                  =  5,
	EVENT_TYPE_6                  =  6,
	EVENT_TYPE_7                  =  7,
	EVENT_TYPE_8                  =  8,
	EVENT_TYPE_9                  =  9,
	EVENT_TYPE_10                 = 10,
	EVENT_TYPE_11                 = 11,
	EVENT_TYPE_12                 = 12,
	EVENT_TYPE_13                 = 13,
	EVENT_TYPE_14                 = 14,
	EVENT_TYPE_15                 = 15,
} event_type;

/// Network game information.
typedef enum {
	GAME_INFO_NAME = 1,
	GAME_INFO_PASS = 2,
} game_info;

/// TODO: add definition of interface_mode members.

/// User-defined events for signaling interface mode changes.
typedef enum {
	INTERFACE_MODE_402 = 0x402,
	INTERFACE_MODE_403 = 0x403,
	INTERFACE_MODE_404 = 0x404,
	INTERFACE_MODE_405 = 0x405,
	INTERFACE_MODE_406 = 0x406,
	INTERFACE_MODE_407 = 0x407,
	INTERFACE_MODE_408 = 0x408,
	INTERFACE_MODE_409 = 0x409,
	INTERFACE_MODE_40A = 0x40A,
	INTERFACE_MODE_40B = 0x40B,
} interface_mode;

/// Broad item categorization.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/structs.h#item
typedef enum {
	ITEM_CLASS_NONE                   = 0,
	ITEM_CLASS_WEAPON                 = 1,
	ITEM_CLASS_ARMOR                  = 2,
	ITEM_CLASS_JEWELRY_AND_CONSUMABLE = 3,
	ITEM_CLASS_GOLD                   = 4,
	ITEM_CLASS_QUEST                  = 5,
} item_class;

/// Item drop IDs, used for the graphics of item drop animations.
typedef enum {
	ITEM_DROP_ID_MEDIUM_ARMOR         =  0, ///< Armor2
	ITEM_DROP_ID_AXE                  =  1, ///< Axe
	ITEM_DROP_ID_BOTTLE_DARK_RED      =  2, ///< FBttle
	ITEM_DROP_ID_BOW                  =  3, ///< Bow
	ITEM_DROP_ID_GOLD                 =  4, ///< GoldFlip
	ITEM_DROP_ID_HELM                 =  5, ///< Helmut
	ITEM_DROP_ID_MACE                 =  6, ///< Mace
	ITEM_DROP_ID_SHIELD               =  7, ///< Shield
	ITEM_DROP_ID_SWORD                =  8, ///< SwrdFlip
	ITEM_DROP_ID_MAGIC_ROCK           =  9, ///< Rock
	ITEM_DROP_ID_CLEAVER              = 10, ///< Cleaver
	ITEM_DROP_ID_STAFF                = 11, ///< Staff
	ITEM_DROP_ID_RING                 = 12, ///< Ring
	ITEM_DROP_ID_CROWN                = 13, ///< CrownF
	ITEM_DROP_ID_LIGHT_ARMOR          = 14, ///< LArmor
	ITEM_DROP_ID_WOODEN_SHIELD        = 15, ///< WShield
	ITEM_DROP_ID_SCROLL               = 16, ///< Scroll
	ITEM_DROP_ID_HEAVY_ARMOR          = 17, ///< FPlateAr
	ITEM_DROP_ID_BOOK                 = 18, ///< FBook
	ITEM_DROP_ID_FOOD                 = 19, ///< Food
	ITEM_DROP_ID_BOTTLE_BRIGHT_BLUE   = 20, ///< FBttleBB
	ITEM_DROP_ID_BOTTLE_DARK_YELLOW   = 21, ///< FBttleDY
	ITEM_DROP_ID_BOTTLE_ORANGE        = 22, ///< FBttleOR
	ITEM_DROP_ID_BOTTLE_BRIGHT_RED    = 23, ///< FBttleBR
	ITEM_DROP_ID_BOTTLE_BLACK         = 24, ///< FBttleBL
	ITEM_DROP_ID_BOTTLE_BRIGHT_YELLOW = 25, ///< FBttleBY
	ITEM_DROP_ID_BOTTLE_WHITE         = 26, ///< FBttleWH
	ITEM_DROP_ID_BOTTLE_DARK_BLUE     = 27, ///< FBttleDB
	ITEM_DROP_ID_EAR                  = 28, ///< FEar
	ITEM_DROP_ID_BRAIN                = 29, ///< FBrain
	ITEM_DROP_ID_BLACK_MUSHROOM       = 30, ///< FMush
	ITEM_DROP_ID_TAVERN_SIGN          = 31, ///< Innsign
	ITEM_DROP_ID_BLOOD_STONE          = 32, ///< Bldstn
	ITEM_DROP_ID_ANVIL_OF_FURY        = 33, ///< Fanvil
	ITEM_DROP_ID_STAFF_OF_LAZARUS     = 34, ///< FLazStaf
} item_drop_id;

/// Item drop rates.
typedef enum {
	ITEM_DROP_RATE_NEVER   = 0, ///< never drops.
	ITEM_DROP_RATE_REGULAR = 1, ///< regular drop chance.
	ITEM_DROP_RATE_DOUBLE  = 2, ///< twice as likely to drop.
} item_drop_rate;

/// TODO: Rethink item_drop_state enum. It probably has to do with animation, and
/// then ITEM_DROP_STATE_GLIMMERING would make sense, as that would be
/// represented as ANIM_BACK_FORTH, or ANIM_LOOP. Will have to verify how the
/// various values are actually used in game when it comes to animations.

/// References:
///    * https://github.com/sanctuary/notes/blob/master/structs.h#item
typedef enum {
	ITEM_DROP_STATE_STARTED    = 0,
	ITEM_DROP_STATE_COMPLETE   = 1,
	ITEM_DROP_STATE_GLIMMERING = 2,
	ITEM_DROP_STATE_UNKNOWN    = 3,
} item_drop_state;

/// Type of effect caused by suffix, prefix of magic item or one of 5 or less
/// effects of unique item.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/structs.h#item
typedef enum {
	ITEM_EFFECT_TYPE_TO_HIT_PLUS                            =  0,
	ITEM_EFFECT_TYPE_TO_HIT_MINUS                           =  1,
	ITEM_EFFECT_TYPE_PERCENT_ATTACK_DAMAGE_PLUS             =  2,
	ITEM_EFFECT_TYPE_PERCENT_ATTACK_DAMAGE_MINUS            =  3,
	ITEM_EFFECT_TYPE_TO_HIT_AND_PERCENT_ATTACK_DAMAGE_PLUS  =  4,
	ITEM_EFFECT_TYPE_TO_HIT_AND_PERCENT_ATTACK_DAMAGE_MINUS =  5,
	ITEM_EFFECT_TYPE_ARMOR_CLASS_PERCENT_PLUS               =  6,
	ITEM_EFFECT_TYPE_ARMOR_CLASS_PERCENT_MINUS              =  7,
	ITEM_EFFECT_TYPE_FIRE_RESISTANCE_BONUS                  =  8,
	ITEM_EFFECT_TYPE_LIGHTNING_RESISTANCE_BONUS             =  9,
	ITEM_EFFECT_TYPE_MAGIC_RESISTANCE_BONUS                 = 10,
	ITEM_EFFECT_TYPE_ALL_RESISTANCES_BONUS                  = 11,
	ITEM_EFFECT_TYPE_SPELL_LEVELS_PLUS                      = 14,
	ITEM_EFFECT_TYPE_EXTRA_CHARGES                          = 15,
	ITEM_EFFECT_TYPE_FIRE_DAMAGE_BONUS                      = 16,
	ITEM_EFFECT_TYPE_LIGHTNING_DAMAGE_BONUS                 = 17,
	ITEM_EFFECT_TYPE_STRENGTH_PLUS                          = 19,
	ITEM_EFFECT_TYPE_STRENGTH_MINUS                         = 20,
	ITEM_EFFECT_TYPE_MAGIC_PLUS                             = 21,
	ITEM_EFFECT_TYPE_MAGIC_MINUS                            = 22,
	ITEM_EFFECT_TYPE_DEXTERITY_PLUS                         = 23,
	ITEM_EFFECT_TYPE_DEXTERITY_MINUS                        = 24,
	ITEM_EFFECT_TYPE_VITALITY_PLUS                          = 25,
	ITEM_EFFECT_TYPE_VITALITY_MINUS                         = 26,
	ITEM_EFFECT_TYPE_ALL_ATTRIBUTES_PLUS                    = 27,
	ITEM_EFFECT_TYPE_ALL_ATTRIBUTES_MINUS                   = 28,
	ITEM_EFFECT_TYPE_DAMAGE_TAKEN_PLUS                      = 29,
	ITEM_EFFECT_TYPE_DAMAGE_TAKEN_MINUS                     = 30,
	ITEM_EFFECT_TYPE_LIFE_PLUS                              = 31,
	ITEM_EFFECT_TYPE_LIFE_MINUS                             = 32,
	ITEM_EFFECT_TYPE_MANA_PLUS                              = 33,
	ITEM_EFFECT_TYPE_MANA_MINUS                             = 34,
	ITEM_EFFECT_TYPE_DURABILITY_PERCENT_PLUS                = 35,
	ITEM_EFFECT_TYPE_DURABILITY_PERCENT_MINUS               = 36,
	ITEM_EFFECT_TYPE_INDESTRUCTIBLE                         = 37,
	ITEM_EFFECT_TYPE_LIGHT_RADIUS_PLUS                      = 38,
	ITEM_EFFECT_TYPE_LIGHT_RADIUS_MINUS                     = 39,
	ITEM_EFFECT_TYPE_FIRE_ARROWS                            = 42,
	ITEM_EFFECT_TYPE_LIGHTNING_ARROWS                       = 43,
	ITEM_EFFECT_TYPE_CUSTOM_GRAPHICS                        = 44,
	ITEM_EFFECT_TYPE_THORNS                                 = 45,
	ITEM_EFFECT_TYPE_NO_MANA                                = 46,
	ITEM_EFFECT_TYPE_USER_CANT_HEAL                         = 47,
	ITEM_EFFECT_TYPE_ABSORBS_HALF_OF_TRAP_DAMAGE            = 52,
	ITEM_EFFECT_TYPE_KNOCKBACK                              = 53,
	ITEM_EFFECT_TYPE_HIT_MONSTER_DOESNT_HEAL                = 54,
	ITEM_EFFECT_TYPE_STEAL_MANA                             = 55,
	ITEM_EFFECT_TYPE_STEAL_LIFE                             = 56,
	ITEM_EFFECT_TYPE_DAMAGES_TARGETS_ARMOR                  = 57,
	ITEM_EFFECT_TYPE_FASTER_ATTACK                          = 58,
	ITEM_EFFECT_TYPE_FASTER_HIT_RECOVERY                    = 59,
	ITEM_EFFECT_TYPE_FAST_BLOCK                             = 60,
	ITEM_EFFECT_TYPE_ATTACK_DAMAGE_PLUS                     = 61,
	ITEM_EFFECT_TYPE_RANDOM_SPEED_ARROWS                    = 62,
	ITEM_EFFECT_TYPE_CUSTOM_ATTACK_DAMAGE                   = 63, ///< used for Butcher's Cleaver
	ITEM_EFFECT_TYPE_CUSTOM_DURABILITY                      = 64,
	ITEM_EFFECT_TYPE_NO_STRENGTH_REQUIREMENT                = 65,
	ITEM_EFFECT_TYPE_SET_SPELL_ID_AND_CHARGES               = 66, ///< (most likely erroneously) sets current spell charges to spell_id
	ITEM_EFFECT_TYPE_FASTER_ATTACK_SWING                    = 67,
	ITEM_EFFECT_TYPE_MAKE_WEAPON_ONE_HANDED                 = 68,
	ITEM_EFFECT_TYPE_3X_DAMAGE_VS_DEMONS                    = 69,
	ITEM_EFFECT_TYPE_ALL_RESISTANCES_EQUAL_0                = 70,
	ITEM_EFFECT_TYPE_CONSTANTLY_LOSE_HIT_POINTS             = 72,
	ITEM_EFFECT_TYPE_LIFE_STEAL_RANDOM                      = 73, ///< in range 0-12.5%, used for The Undead Crown
	ITEM_EFFECT_TYPE_INFRAVISION                            = 74,
	ITEM_EFFECT_TYPE_CUSTOM_ARMOR_CLASS                     = 75,
	ITEM_EFFECT_TYPE_ARMOR_CLASS_ADDED_TO_LIFE              = 76,
	ITEM_EFFECT_TYPE_10_PERCENT_MANA_ADDED_TO_ARMOR         = 77,
	ITEM_EFFECT_TYPE_FIRE_RESISTANCE_BASED_ON_CLVL          = 78,
	ITEM_EFFECT_TYPE_ARMOR_CLASS_MINUS                      = 79,
	ITEM_EFFECT_TYPE_INVALID                                = -1,
} item_effect_type;

/// Enumeration describing in which slot item could be equipped.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/structs.h#item
typedef enum {
	ITEM_EQUIP_TYPE_NONE        = 0,
	ITEM_EQUIP_TYPE_ONE_HANDED  = 1,
	ITEM_EQUIP_TYPE_TWO_HANDED  = 2,
	ITEM_EQUIP_TYPE_CHEST       = 3,
	ITEM_EQUIP_TYPE_HEAD        = 4,
	ITEM_EQUIP_TYPE_RING        = 5,
	ITEM_EQUIP_TYPE_AMULET      = 6,
	ITEM_EQUIP_TYPE_UNEQUIPABLE = 7,
	ITEM_EQUIP_TYPE_BELT        = 8,
	ITEM_EQUIP_TYPE_INVALID     = -1,
} item_equip_type;

/// TODO: Add remaining enums for item_graphic_id.

/// Item graphic IDs; frame_num-11 of objcurs.cel.
typedef enum {
	ITEM_GRAPHIC_ID_POTION_OF_FULL_MANA         = 0,
	ITEM_GRAPHIC_ID_SCROLL_OF                   = 1,
	ITEM_GRAPHIC_ID_GOLD_SMALL                  = 4,
	ITEM_GRAPHIC_ID_GOLD_MEDIUM                 = 5,
	ITEM_GRAPHIC_ID_GOLD_LARGE                  = 6,
	ITEM_GRAPHIC_ID_RING_OF_TRUTH               = 10,
	ITEM_GRAPHIC_ID_RING                        = 12,
	ITEM_GRAPHIC_ID_SPECTRAL_ELIXIR             = 15,
	ITEM_GRAPHIC_ID_GOLDEN_ELIXIR               = 17,
	ITEM_GRAPHIC_ID_EMPYREAN_BAND               = 18,
	ITEM_GRAPHIC_ID_EAR_SORCEROR                = 19,
	ITEM_GRAPHIC_ID_EAR_WARRIOR                 = 20,
	ITEM_GRAPHIC_ID_EAR_ROGUE                   = 21,
	ITEM_GRAPHIC_ID_BLOOD_STONE                 = 25,
	ITEM_GRAPHIC_ID_ELIXIR_OF_VITALITY          = 31,
	ITEM_GRAPHIC_ID_POTION_OF_HEALING           = 32,
	ITEM_GRAPHIC_ID_POTION_OF_FULL_REJUVENATION = 33,
	ITEM_GRAPHIC_ID_ELIXIR_OF_MAGIC             = 34,
	ITEM_GRAPHIC_ID_POTION_OF_FULL_HEALING      = 35,
	ITEM_GRAPHIC_ID_ELIXIR_OF_DEXTERITY         = 36,
	ITEM_GRAPHIC_ID_POTION_OF_REJUVENATION      = 37,
	ITEM_GRAPHIC_ID_ELIXIR_OF_STRENGTH          = 38,
	ITEM_GRAPHIC_ID_POTION_OF_MANA              = 39,
	ITEM_GRAPHIC_ID_BRAIN                       = 40,
	ITEM_GRAPHIC_ID_OPTIC_AMULET                = 44,
	ITEM_GRAPHIC_ID_AMULET                      = 45,
	ITEM_GRAPHIC_ID_DAGGER                      = 51,
	ITEM_GRAPHIC_ID_BLADE                       = 56,
	ITEM_GRAPHIC_ID_BASTARD_SWORD               = 57,
	ITEM_GRAPHIC_ID_MACE                        = 59,
	ITEM_GRAPHIC_ID_LONG_SWORD                  = 60,
	ITEM_GRAPHIC_ID_BROAD_SWORD                 = 61,
	ITEM_GRAPHIC_ID_FALCHION                    = 62,
	ITEM_GRAPHIC_ID_MORNING_STAR                = 63,
	ITEM_GRAPHIC_ID_SHORT_SWORD                 = 64,
	ITEM_GRAPHIC_ID_CLAYMORE                    = 65,
	ITEM_GRAPHIC_ID_CLUB                        = 66,
	ITEM_GRAPHIC_ID_SABRE                       = 67,
	ITEM_GRAPHIC_ID_SPIKED_CLUB                 = 70,
	ITEM_GRAPHIC_ID_SCIMITAR                    = 72,
	ITEM_GRAPHIC_ID_FULL_HELM                   = 75,
	ITEM_GRAPHIC_ID_MAGIC_ROCK                  = 76,
	ITEM_GRAPHIC_ID_THE_UNDEAD_CROWN            = 78,
	ITEM_GRAPHIC_ID_HELM                        = 82,
	ITEM_GRAPHIC_ID_BUCKLER                     = 83,
	ITEM_GRAPHIC_ID_VIEL_OF_STEEL               = 85,
	ITEM_GRAPHIC_ID_BOOK_GREY                   = 86,
	ITEM_GRAPHIC_ID_BOOK_RED                    = 87,
	ITEM_GRAPHIC_ID_BOOK_BLUE                   = 88,
	ITEM_GRAPHIC_ID_BLACK_MUSHROOM              = 89,
	ITEM_GRAPHIC_ID_SKULL_CAP                   = 90,
	ITEM_GRAPHIC_ID_CAP                         = 91,
	ITEM_GRAPHIC_ID_HARLEQUIN_CREST             = 93,
	ITEM_GRAPHIC_ID_CROWN                       = 95,
	ITEM_GRAPHIC_ID_MAP_OF_THE_STARS            = 96,
	ITEM_GRAPHIC_ID_FUNGAL_TOME                 = 97,
	ITEM_GRAPHIC_ID_GREAT_HELM                  = 98,
	ITEM_GRAPHIC_ID_BATTLE_AXE                  = 101,
	ITEM_GRAPHIC_ID_HUNTERS_BOW                 = 102,
	ITEM_GRAPHIC_ID_FIELD_PLATE                 = 103,
	ITEM_GRAPHIC_ID_SMALL_SHIELD                = 105,
	ITEM_GRAPHIC_ID_CLEAVER                     = 106,
	ITEM_GRAPHIC_ID_STUDDED_LEATHER_ARMOR       = 107,
	ITEM_GRAPHIC_ID_SHORT_STAFF                 = 109,
	ITEM_GRAPHIC_ID_TWO_HANDED_SWORD            = 110,
	ITEM_GRAPHIC_ID_CHAIN_MAIL                  = 111,
	ITEM_GRAPHIC_ID_SMALL_AXE                   = 112,
	ITEM_GRAPHIC_ID_KITE_SHIELD                 = 113,
	ITEM_GRAPHIC_ID_SCALE_MAIL                  = 114,
	ITEM_GRAPHIC_ID_SHORT_BOW                   = 118,
	ITEM_GRAPHIC_ID_LONG_WAR_BOW                = 119,
	ITEM_GRAPHIC_ID_WAR_HAMMER                  = 121,
	ITEM_GRAPHIC_ID_MAUL                        = 122,
	ITEM_GRAPHIC_ID_LONG_STAFF                  = 123,
	ITEM_GRAPHIC_ID_WAR_STAFF                   = 124,
	ITEM_GRAPHIC_ID_TAVERN_SIGN                 = 126,
	ITEM_GRAPHIC_ID_HARD_LEATHER_ARMOR          = 127,
	ITEM_GRAPHIC_ID_RAGS                        = 128,
	ITEM_GRAPHIC_ID_QUILTED_ARMOR               = 129,
	ITEM_GRAPHIC_ID_FLAIL                       = 131,
	ITEM_GRAPHIC_ID_TOWER_SHIELD                = 132,
	ITEM_GRAPHIC_ID_COMPOSITE_BOW               = 133,
	ITEM_GRAPHIC_ID_GREAT_SWORD                 = 134,
	ITEM_GRAPHIC_ID_LEATHER_ARMOR               = 135,
	ITEM_GRAPHIC_ID_SPLINT_MAIL                 = 136,
	ITEM_GRAPHIC_ID_ROBE                        = 137,
	ITEM_GRAPHIC_ID_ANVIL_OF_FURY               = 140,
	ITEM_GRAPHIC_ID_BROAD_AXE                   = 141,
	ITEM_GRAPHIC_ID_LARGE_AXE                   = 142,
	ITEM_GRAPHIC_ID_GREAT_AXE                   = 143,
	ITEM_GRAPHIC_ID_AXE                         = 144,
	ITEM_GRAPHIC_ID_LARGE_SHIELD                = 147,
	ITEM_GRAPHIC_ID_GOTHIC_SHIELD               = 148,
	ITEM_GRAPHIC_ID_CLOAK                       = 149,
	ITEM_GRAPHIC_ID_CAPE                        = 150,
	ITEM_GRAPHIC_ID_FULL_PLATE_MAIL             = 151,
	ITEM_GRAPHIC_ID_GOTHIC_PLATE                = 152,
	ITEM_GRAPHIC_ID_BREAST_PLATE                = 153,
	ITEM_GRAPHIC_ID_RING_MAIL                   = 154,
	ITEM_GRAPHIC_ID_STAFF_OF_LAZARUS            = 155,
	ITEM_GRAPHIC_ID_ARKAINES_VALOR              = 157,
	ITEM_GRAPHIC_ID_SHORT_WAR_BOW               = 165,
	ITEM_GRAPHIC_ID_COMPOSITE_STAFF             = 166,
	ITEM_GRAPHIC_ID_SHORT_BATTLE_BOW            = 167,
	ITEM_GRAPHIC_ID_GOLD                        = 168,
} item_graphic_id;

/// TODO: add missing enums of item_id.

/// Item IDs specify item_data array indices.
///
/// PSX def:
///    typedef enum _item_indexes {
///       IDI_GOLD = 0,
///       IDI_WARRIOR = 1,
///       IDI_WARRSHLD = 2,
///       IDI_WARRCLUB = 3,
///       IDI_ROGUE = 4,
///       IDI_SORCEROR = 5,
///       IDI_CLEAVER = 6,
///       IDI_FIRSTQUEST = 6,
///       IDI_SKCROWN = 7,
///       IDI_INFRARING = 8,
///       IDI_ROCK = 9,
///       IDI_OPTAMULET = 10,
///       IDI_TRING = 11,
///       IDI_BANNER = 12,
///       IDI_HARCREST = 13,
///       IDI_STEELVEIL = 14,
///       IDI_GLDNELIX = 15,
///       IDI_ANVIL = 16,
///       IDI_MUSHROOM = 17,
///       IDI_BRAIN = 18,
///       IDI_FUNGALTM = 19,
///       IDI_SPECELIX = 20,
///       IDI_BLDSTONE = 21,
///       IDI_LASTQUEST = 22,
///       IDI_MAPOFDOOM = 22,
///       IDI_EAR = 23,
///       IDI_HEAL = 24,
///       IDI_MANA = 25,
///       IDI_IDENTIFY = 26,
///       IDI_PORTAL = 27,
///       IDI_ARMOFVAL = 28,
///       IDI_FULLHEAL = 29,
///       IDI_FULLMANA = 30,
///       IDI_GRISWOLD = 31,
///       IDI_LGTFORGE = 32,
///       IDI_LAZSTAFF = 33,
///       IDI_RESURRECT = 34,
///    } _item_indexes;
typedef enum {
	ITEM_ID_GOLD                             =   0,
	ITEM_ID_SHORT_SWORD                      =   1,
	ITEM_ID_BUCKLER                          =   2,
	ITEM_ID_CLUB                             =   3,
	ITEM_ID_SHORT_BOW                        =   4,
	ITEM_ID_SHORT_STAFF_OF_CHARGED_BOLT      =   5,
	ITEM_ID_CLEAVER                          =   6,
	ITEM_ID_THE_UNDEAD_CROWN                 =   7,
	ITEM_ID_EMPYREAN_BAND                    =   8,
	ITEM_ID_MAGIC_ROCK                       =   9,
	ITEM_ID_OPTIC_AMULET                     =  10,
	ITEM_ID_RING_OF_TRUTH                    =  11,
	ITEM_ID_TAVERN_SIGN                      =  12,
	ITEM_ID_HARLEQUIN_CREST                  =  13,
	ITEM_ID_VEIL_OF_STEEL                    =  14,
	ITEM_ID_GOLDEN_ELIXIR                    =  15,
	ITEM_ID_ANVIL_OF_FURY                    =  16,
	ITEM_ID_BLACK_MUSHROOM                   =  17,
	ITEM_ID_BRAIN                            =  18,
	ITEM_ID_FUNGAL_TOME                      =  19,
	ITEM_ID_SPECTRAL_ELIXIR                  =  20,
	ITEM_ID_BLOOD_STONE                      =  21,
	ITEM_ID_MAP_OF_THE_STARS                 =  22,
	ITEM_ID_HEART                            =  23,
	ITEM_ID_POTION_OF_HEALING                =  24,
	ITEM_ID_POTION_OF_MANA                   =  25,
	ITEM_ID_SCROLL_OF_IDENTIFY               =  26,
	ITEM_ID_SCROLL_OF_TOWN_PORTAL            =  27,
	ITEM_ID_ARKAINES_VALOR                   =  28,
	ITEM_ID_POTION_OF_FULL_HEALING           =  29,
	ITEM_ID_POTION_OF_FULL_MANA              =  30,
	ITEM_ID_GRISWOLDS_EDGE                   =  31,
	ITEM_ID_LIGHTFORGE                       =  32,
	ITEM_ID_STAFF_OF_LAZARUS                 =  33,
	ITEM_ID_SCROLL_OF_RESURRECT              =  34,
	ITEM_ID_NULL_1                           =  35,
	ITEM_ID_NULL_2                           =  36,
	ITEM_ID_NULL_3                           =  37,
	ITEM_ID_NULL_4                           =  38,
	ITEM_ID_NULL_5                           =  39,
	ITEM_ID_NULL_6                           =  40,
	ITEM_ID_NULL_7                           =  41,
	ITEM_ID_NULL_8                           =  42,
	ITEM_ID_NULL_9                           =  43,
	ITEM_ID_NULL_10                          =  44,
	ITEM_ID_NULL_11                          =  45,
	ITEM_ID_NULL_12                          =  46,
	ITEM_ID_NULL_13                          =  47,
	ITEM_ID_BASE_CAP                         =  48,
	ITEM_ID_BASE_SKULL_CAP                   =  49,
	ITEM_ID_BASE_HELM                        =  50,
	ITEM_ID_BASE_FULL_HELM                   =  51,
	ITEM_ID_BASE_CROWN                       =  52,
	ITEM_ID_BASE_GREAT_HELM                  =  53,
	ITEM_ID_BASE_CAPE                        =  54,
	ITEM_ID_BASE_RAGS                        =  55,
	ITEM_ID_BASE_CLOAK                       =  56,
	ITEM_ID_BASE_ROBE                        =  57,
	ITEM_ID_BASE_QUILTED_ARMOR               =  58,
	ITEM_ID_BASE_LEATHER_ARMOR               =  59,
	ITEM_ID_BASE_HARD_LEATHER_ARMOR          =  60,
	ITEM_ID_BASE_STUDDED_LEATHER_ARMOR       =  61,
	ITEM_ID_BASE_RING_MAIL                   =  62,
	ITEM_ID_BASE_CHAIN_MAIL                  =  63,
	ITEM_ID_BASE_SCALE_MAIL                  =  64,
	ITEM_ID_BASE_BREAST_PLATE                =  65,
	ITEM_ID_BASE_SPLINT_MAIL                 =  66,
	ITEM_ID_BASE_PLATE_MAIL                  =  67,
	ITEM_ID_BASE_FIELD_PLATE                 =  68,
	ITEM_ID_BASE_GOTHIC_PLATE                =  69,
	ITEM_ID_BASE_FULL_PLATE_MAIL             =  70,
	ITEM_ID_BASE_BUCKLER                     =  71,
	ITEM_ID_BASE_SMALL_SHIELD                =  72,
	ITEM_ID_BASE_LARGE_SHIELD                =  73,
	ITEM_ID_BASE_KITE_SHIELD                 =  74,
	ITEM_ID_BASE_TOWER_SHIELD                =  75,
	ITEM_ID_BASE_GOTHIC_SHIELD               =  76,
	ITEM_ID_BASE_POTION_OF_HEALING           =  77,
	ITEM_ID_BASE_POTION_OF_FULL_HEALING      =  78,
	ITEM_ID_BASE_POTION_OF_MANA              =  79,
	ITEM_ID_BASE_POTION_OF_FULL_MANA         =  80,
	ITEM_ID_BASE_POTION_OF_REJUVENATION      =  81,
	ITEM_ID_BASE_POTION_OF_FULL_REJUVENATION =  82,
	ITEM_ID_BASE_ELIXIR_OF_STRENGTH          =  83,
	ITEM_ID_BASE_ELIXIR_OF_MAGIC             =  84,
	ITEM_ID_BASE_ELIXIR_OF_DEXTERITY         =  85,
	ITEM_ID_BASE_ELIXIR_OF_VITALITY          =  86,
	ITEM_ID_BASE_SCROLL_OF_HEALING           =  87,
	ITEM_ID_BASE_SCROLL_OF_LIGHTNING         =  88,
	ITEM_ID_BASE_SCROLL_OF_IDENTIFY          =  89,
	ITEM_ID_BASE_SCROLL_OF_RESURRECT         =  90,
	ITEM_ID_BASE_SCROLL_OF_FIRE_WALL         =  91,
	ITEM_ID_BASE_SCROLL_OF_INFERNO           =  92,
	ITEM_ID_BASE_SCROLL_OF_TOWN_PORTAL       =  93,
	ITEM_ID_BASE_SCROLL_OF_FLASH             =  94,
	ITEM_ID_BASE_SCROLL_OF_INFRAVISION       =  95,
	ITEM_ID_BASE_SCROLL_OF_PHASING           =  96,
	ITEM_ID_BASE_SCROLL_OF_MANA_SHIELD       =  97,
	ITEM_ID_BASE_SCROLL_OF_FLAME_WAVE        =  98,
	ITEM_ID_BASE_SCROLL_OF_FIREBALL          =  99,
	ITEM_ID_BASE_SCROLL_OF_STONE_CURSE       = 100,
	ITEM_ID_BASE_SCROLL_OF_CHAIN_LIGHTNING   = 101,
	ITEM_ID_BASE_SCROLL_OF_GUARDIAN          = 102,
	ITEM_ID_BASE_NON_ITEM                    = 103,
	ITEM_ID_BASE_SCROLL_OF_NOVA              = 104,
	ITEM_ID_BASE_SCROLL_OF_GOLEM             = 105,
	ITEM_ID_BASE_SCROLL_OF_NONE              = 106,
	ITEM_ID_BASE_SCROLL_OF_TELEPORT          = 107,
	ITEM_ID_BASE_SCROLL_OF_APOCALYPSE        = 108,
	ITEM_ID_BASE_BOOK_QLVL_2                 = 109,
	ITEM_ID_BASE_BOOK_QLVL_8                 = 110,
	ITEM_ID_BASE_BOOK_QLVL_14                = 111,
	ITEM_ID_BASE_BOOK_QLVL_20                = 112,
	ITEM_ID_BASE_DAGGER                      = 113,
	ITEM_ID_BASE_SHORT_SWORD                 = 114,
	ITEM_ID_BASE_FALCHION                    = 115,
	ITEM_ID_BASE_SCIMITAR                    = 116,
	ITEM_ID_BASE_CLAYMORE                    = 117,
	ITEM_ID_BASE_BLADE                       = 118,
	ITEM_ID_BASE_SABRE                       = 119,
	ITEM_ID_BASE_LONG_SWORD                  = 120,
	ITEM_ID_BASE_BROAD_SWORD                 = 121,
	ITEM_ID_BASE_BASTARD_SWORD               = 122,
	ITEM_ID_BASE_TWO_HANDED_SWORD            = 123,
	ITEM_ID_BASE_GREAT_SWORD                 = 124,
	ITEM_ID_BASE_SMALL_AXE                   = 125,
	ITEM_ID_BASE_AXE                         = 126,
	ITEM_ID_BASE_LARGE_AXE                   = 127,
	ITEM_ID_BASE_BROAD_AXE                   = 128,
	ITEM_ID_BASE_BATTLE_AXE                  = 129,
	ITEM_ID_BASE_GREAT_AXE                   = 130,
	ITEM_ID_BASE_MACE                        = 131,
	ITEM_ID_BASE_MORNING_STAR                = 132,
	ITEM_ID_BASE_WAR_HAMMER                  = 133,
	ITEM_ID_BASE_SPIKED_CLUB                 = 134,
	ITEM_ID_BASE_CLUB                        = 135,
	ITEM_ID_BASE_FLAIL                       = 136,
	ITEM_ID_BASE_MAUL                        = 137,
	ITEM_ID_BASE_SHORT_BOW                   = 138,
	ITEM_ID_BASE_HUNTERS_BOW                 = 139,
	ITEM_ID_BASE_LONG_BOW                    = 140,
	ITEM_ID_BASE_COMPOSITE_BOW               = 141,
	ITEM_ID_BASE_SHORT_BATTLE_BOW            = 142,
	ITEM_ID_BASE_LONG_BATTLE_BOW             = 143,
	ITEM_ID_BASE_SHORT_WAR_BOW               = 144,
	ITEM_ID_BASE_LONG_WAR_BOW                = 145,
	ITEM_ID_BASE_SHORT_STAFF                 = 146,
	ITEM_ID_BASE_LONG_STAFF                  = 147,
	ITEM_ID_BASE_COMPOSITE_STAFF             = 148,
	ITEM_ID_BASE_QUARTER_STAFF               = 149,
	ITEM_ID_BASE_WAR_STAFF                   = 150,
	ITEM_ID_BASE_RING_QLVL_5                 = 151,
	ITEM_ID_BASE_RING_QLVL_10                = 152,
	ITEM_ID_BASE_RING_QLVL_15                = 153,
	ITEM_ID_BASE_AMULET_QLVL_8               = 154,
	ITEM_ID_BASE_AMULET_QLVL_16              = 155,
	ITEM_ID_NULL_14                          = 156,
} item_id;

/// ID characterizing item appearance. Frame number (11 + item_inv_graphics_id)
/// from data/inv/objcurs.cel is used as item graphics for inventory.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/structs.h#item
typedef enum {
	ITEM_INV_GRAPHICS_ID_POTION_OF_FULL_MANA         =   0,
	ITEM_INV_GRAPHICS_ID_SCROLL_OF                   =   1,
	ITEM_INV_GRAPHICS_ID_GOLD_SMALL                  =   4,
	ITEM_INV_GRAPHICS_ID_GOLD_MEDIUM                 =   5,
	ITEM_INV_GRAPHICS_ID_GOLD_LARGE                  =   6,
	ITEM_INV_GRAPHICS_ID_RING_OF_TRUTH               =  10,
	ITEM_INV_GRAPHICS_ID_RING                        =  12,
	ITEM_INV_GRAPHICS_ID_SPECTRAL_ELIXIR             =  15,
	ITEM_INV_GRAPHICS_ID_GOLDEN_ELIXIR               =  17,
	ITEM_INV_GRAPHICS_ID_EMPYREAN_BAND               =  18,
	ITEM_INV_GRAPHICS_ID_EAR_SORCEROR                =  19,
	ITEM_INV_GRAPHICS_ID_EAR_WARRIOR                 =  20,
	ITEM_INV_GRAPHICS_ID_EAR_ROGUE                   =  21,
	ITEM_INV_GRAPHICS_ID_BLOOD_STONE                 =  25,
	ITEM_INV_GRAPHICS_ID_ELIXIR_OF_VITALITY          =  31,
	ITEM_INV_GRAPHICS_ID_POTION_OF_HEALING           =  32,
	ITEM_INV_GRAPHICS_ID_POTION_OF_FULL_REJUVENATION =  33,
	ITEM_INV_GRAPHICS_ID_ELIXIR_OF_MAGIC             =  34,
	ITEM_INV_GRAPHICS_ID_POTION_OF_FULL_HEALING      =  35,
	ITEM_INV_GRAPHICS_ID_ELIXIR_OF_DEXTERITY         =  36,
	ITEM_INV_GRAPHICS_ID_POTION_OF_REJUVENATION      =  37,
	ITEM_INV_GRAPHICS_ID_ELIXIR_OF_STRENGTH          =  38,
	ITEM_INV_GRAPHICS_ID_POTION_OF_MANA              =  39,
	ITEM_INV_GRAPHICS_ID_BRAIN                       =  40,
	ITEM_INV_GRAPHICS_ID_OPTIC_AMULET                =  44,
	ITEM_INV_GRAPHICS_ID_AMULET                      =  45,
	ITEM_INV_GRAPHICS_ID_DAGGER                      =  51,
	ITEM_INV_GRAPHICS_ID_BLADE                       =  56,
	ITEM_INV_GRAPHICS_ID_BASTARD_SWORD               =  57,
	ITEM_INV_GRAPHICS_ID_MACE                        =  59,
	ITEM_INV_GRAPHICS_ID_LONG_SWORD                  =  60,
	ITEM_INV_GRAPHICS_ID_BROAD_SWORD                 =  61,
	ITEM_INV_GRAPHICS_ID_FALCHION                    =  62,
	ITEM_INV_GRAPHICS_ID_MORNING_STAR                =  63,
	ITEM_INV_GRAPHICS_ID_SHORT_SWORD                 =  64,
	ITEM_INV_GRAPHICS_ID_CLAYMORE                    =  65,
	ITEM_INV_GRAPHICS_ID_CLUB                        =  66,
	ITEM_INV_GRAPHICS_ID_SABRE                       =  67,
	ITEM_INV_GRAPHICS_ID_SPIKED_CLUB                 =  70,
	ITEM_INV_GRAPHICS_ID_SCIMITAR                    =  72,
	ITEM_INV_GRAPHICS_ID_FULL_HELM                   =  75,
	ITEM_INV_GRAPHICS_ID_MAGIC_ROCK                  =  76,
	ITEM_INV_GRAPHICS_ID_THE_UNDEAD_CROWN            =  78,
	ITEM_INV_GRAPHICS_ID_HELM                        =  82,
	ITEM_INV_GRAPHICS_ID_BUCKLER                     =  83,
	ITEM_INV_GRAPHICS_ID_VIEL_OF_STEEL               =  85,
	ITEM_INV_GRAPHICS_ID_BOOK_GREY                   =  86,
	ITEM_INV_GRAPHICS_ID_BOOK_RED                    =  87,
	ITEM_INV_GRAPHICS_ID_BOOK_BLUE                   =  88,
	ITEM_INV_GRAPHICS_ID_BLACK_MUSHROOM              =  89,
	ITEM_INV_GRAPHICS_ID_SKULL_CAP                   =  90,
	ITEM_INV_GRAPHICS_ID_CAP                         =  91,
	ITEM_INV_GRAPHICS_ID_HARLEQUIN_CREST             =  93,
	ITEM_INV_GRAPHICS_ID_CROWN                       =  95,
	ITEM_INV_GRAPHICS_ID_MAP_OF_THE_STARS            =  96,
	ITEM_INV_GRAPHICS_ID_FUNGAL_TOME                 =  97,
	ITEM_INV_GRAPHICS_ID_GREAT_HELM                  =  98,
	ITEM_INV_GRAPHICS_ID_BATTLE_AXE                  = 101,
	ITEM_INV_GRAPHICS_ID_HUNTERS_BOW                 = 102,
	ITEM_INV_GRAPHICS_ID_FIELD_PLATE                 = 103,
	ITEM_INV_GRAPHICS_ID_SMALL_SHIELD                = 105,
	ITEM_INV_GRAPHICS_ID_CLEAVER                     = 106,
	ITEM_INV_GRAPHICS_ID_STUDDED_LEATHER_ARMOR       = 107,
	ITEM_INV_GRAPHICS_ID_SHORT_STAFF                 = 109,
	ITEM_INV_GRAPHICS_ID_TWO_HANDED_SWORD            = 110,
	ITEM_INV_GRAPHICS_ID_CHAIN_MAIL                  = 111,
	ITEM_INV_GRAPHICS_ID_SMALL_AXE                   = 112,
	ITEM_INV_GRAPHICS_ID_KITE_SHIELD                 = 113,
	ITEM_INV_GRAPHICS_ID_SCALE_MAIL                  = 114,
	ITEM_INV_GRAPHICS_ID_SHORT_BOW                   = 118,
	ITEM_INV_GRAPHICS_ID_LONG_WAR_BOW                = 119,
	ITEM_INV_GRAPHICS_ID_WAR_HAMMER                  = 121,
	ITEM_INV_GRAPHICS_ID_MAUL                        = 122,
	ITEM_INV_GRAPHICS_ID_LONG_STAFF                  = 123,
	ITEM_INV_GRAPHICS_ID_WAR_STAFF                   = 124,
	ITEM_INV_GRAPHICS_ID_TAVERN_SIGN                 = 126,
	ITEM_INV_GRAPHICS_ID_HARD_LEATHER_ARMOR          = 127,
	ITEM_INV_GRAPHICS_ID_RAGS                        = 128,
	ITEM_INV_GRAPHICS_ID_QUILTED_ARMOR               = 129,
	ITEM_INV_GRAPHICS_ID_FLAIL                       = 131,
	ITEM_INV_GRAPHICS_ID_TOWER_SHIELD                = 132,
	ITEM_INV_GRAPHICS_ID_COMPOSITE_BOW               = 133,
	ITEM_INV_GRAPHICS_ID_GREAT_SWORD                 = 134,
	ITEM_INV_GRAPHICS_ID_LEATHER_ARMOR               = 135,
	ITEM_INV_GRAPHICS_ID_SPLINT_MAIL                 = 136,
	ITEM_INV_GRAPHICS_ID_ROBE                        = 137,
	ITEM_INV_GRAPHICS_ID_ANVIL_OF_FURY               = 140,
	ITEM_INV_GRAPHICS_ID_BROAD_AXE                   = 141,
	ITEM_INV_GRAPHICS_ID_LARGE_AXE                   = 142,
	ITEM_INV_GRAPHICS_ID_GREAT_AXE                   = 143,
	ITEM_INV_GRAPHICS_ID_AXE                         = 144,
	ITEM_INV_GRAPHICS_ID_LARGE_SHIELD                = 147,
	ITEM_INV_GRAPHICS_ID_GOTHIC_SHIELD               = 148,
	ITEM_INV_GRAPHICS_ID_CLOAK                       = 149,
	ITEM_INV_GRAPHICS_ID_CAPE                        = 150,
	ITEM_INV_GRAPHICS_ID_FULL_PLATE_MAIL             = 151,
	ITEM_INV_GRAPHICS_ID_GOTHIC_PLATE                = 152,
	ITEM_INV_GRAPHICS_ID_BREAST_PLATE                = 153,
	ITEM_INV_GRAPHICS_ID_RING_MAIL                   = 154,
	ITEM_INV_GRAPHICS_ID_STAFF_OF_LAZARUS            = 155,
	ITEM_INV_GRAPHICS_ID_ARKAINES_VALOR              = 157,
	ITEM_INV_GRAPHICS_ID_SHORT_WAR_BOW               = 165,
	ITEM_INV_GRAPHICS_ID_COMPOSITE_STAFF             = 166,
	ITEM_INV_GRAPHICS_ID_SHORT_BATTLE_BOW            = 167,
	ITEM_INV_GRAPHICS_ID_GOLD                        = 168,
} item_inv_graphics_id;

/// Additional item categorization.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/structs.h#item
typedef enum {
	ITEM_MISC_ID_NONE                        =  0, ///< all non-unique weapons and armor have this code
	ITEM_MISC_ID_USE_FIRST                   =  1, ///< unused
	ITEM_MISC_ID_POTION_OF_FULL_HEALING      =  2,
	ITEM_MISC_ID_POTION_OF_HEALING           =  3,
	ITEM_MISC_ID_POTION_OF_MANA              =  6,
	ITEM_MISC_ID_POTION_OF_FULL_MANA         =  7,
	ITEM_MISC_ID_ELIXIR_OF_STRENGTH          = 10,
	ITEM_MISC_ID_ELIXIR_OF_MAGIC             = 11,
	ITEM_MISC_ID_ELIXIR_OF_DEXTERITY         = 12,
	ITEM_MISC_ID_ELIXIR_OF_VITALITY          = 13,
	ITEM_MISC_ID_POTION_OF_REJUVENATION      = 18,
	ITEM_MISC_ID_POTION_OF_FULL_REJUVENATION = 19,
	ITEM_MISC_ID_USE_LAST                    = 20, ///< unused
	ITEM_MISC_ID_SCROLL                      = 21,
	ITEM_MISC_ID_SCROLL_WITH_TARGET          = 22,
	ITEM_MISC_ID_STAFF                       = 23,
	ITEM_MISC_ID_BOOK                        = 24,
	ITEM_MISC_ID_RING                        = 25,
	ITEM_MISC_ID_AMULET                      = 26,
	ITEM_MISC_ID_UNIQUE                      = 27,
	ITEM_MISC_ID_POTION_OF_HEALING_SOMETHING = 28, ///< unused
	ITEM_MISC_ID_MAP_OF_THE_STARS            = 42,
	ITEM_MISC_ID_EAR                         = 43,
	ITEM_MISC_ID_SPECTRAL_ELIXIR             = 44,
	ITEM_MISC_ID_INVALID                     = -1,
} item_misc_id;

/// Item quality levels.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/structs.h#item
typedef enum {
	ITEM_QUALITY_NORMAL = 0,
	ITEM_QUALITY_MAGIC  = 1,
	ITEM_QUALITY_UNIQUE = 2,
} item_quality;

/// Bit flags used to describe unique, usually non-quantifiable effect on a
/// player caused by items.
///
/// bitflag
/// References:
///    * https://github.com/sanctuary/notes/blob/master/structs.h#item
typedef enum {
	ITEM_SPECIAL_EFFECT_NONE                        = 0x00000000,
	ITEM_SPECIAL_EFFECT_INFRAVISION                 = 0x00000001,
	ITEM_SPECIAL_EFFECT_LIFE_STEAL_RANDOM           = 0x00000002, ///< in range 0-12.5%
	ITEM_SPECIAL_EFFECT_RANDOM_SPEED_ARROWS         = 0x00000004,
	ITEM_SPECIAL_EFFECT_FIRE_ARROWS                 = 0x00000008,
	ITEM_SPECIAL_EFFECT_FIRE_DAMAGE_BONUS           = 0x00000010,
	ITEM_SPECIAL_EFFECT_LIGHTNING_DAMAGE_BONUS      = 0x00000020,
	ITEM_SPECIAL_EFFECT_CONSTANTLY_LOSE_HIT_POINTS  = 0x00000040,
	ITEM_SPECIAL_EFFECT_UNKNOWN_1                   = 0x00000080, ///< unused
	ITEM_SPECIAL_EFFECT_USER_CANT_HEAL              = 0x00000100,
	ITEM_SPECIAL_EFFECT_UNKNOWN_2                   = 0x00000200, ///< unused
	ITEM_SPECIAL_EFFECT_UNKNOWN_3                   = 0x00000400, ///< unused
	ITEM_SPECIAL_EFFECT_KNOCKS_TARGET_BACK          = 0x00000800,
	ITEM_SPECIAL_EFFECT_HIT_MONSTER_DOESNT_HEAL     = 0x00001000,
	ITEM_SPECIAL_EFFECT_MANA_STEAL_3_PERCENT        = 0x00002000,
	ITEM_SPECIAL_EFFECT_MANA_STEAL_5_PERCENT        = 0x00004000,
	ITEM_SPECIAL_EFFECT_LIFE_STEAL_3_PERCENT        = 0x00008000,
	ITEM_SPECIAL_EFFECT_LIFE_STEAL_5_PERCENT        = 0x00010000,
	ITEM_SPECIAL_EFFECT_QUICK_ATTACK                = 0x00020000, ///< Suffix: Readiness
	ITEM_SPECIAL_EFFECT_FAST_ATTACK                 = 0x00040000, ///< Suffix: Swiftness
	ITEM_SPECIAL_EFFECT_FASTER_ATTACK               = 0x00080000, ///< Suffix: Speed
	ITEM_SPECIAL_EFFECT_FASTEST_ATTACK              = 0x00100000, ///< Suffix: Haste
	ITEM_SPECIAL_EFFECT_FAST_HIT_RECOVERY           = 0x00200000, ///< Suffix: Balance
	ITEM_SPECIAL_EFFECT_FASTER_HIT_RECOVERY         = 0x00400000, ///< Suffix: Stability
	ITEM_SPECIAL_EFFECT_FASTEST_HIT_RECOVERY        = 0x00800000, ///< Suffix: Harmony
	ITEM_SPECIAL_EFFECT_FAST_BLOCK                  = 0x01000000,
	ITEM_SPECIAL_EFFECT_LIGHTNING_ARROWS            = 0x02000000,
	ITEM_SPECIAL_EFFECT_THORNS                      = 0x04000000,
	ITEM_SPECIAL_EFFECT_NO_MANA                     = 0x08000000, ///< cursed mana
	ITEM_SPECIAL_EFFECT_ABSORBS_HALF_OF_TRAP_DAMAGE = 0x10000000,
	ITEM_SPECIAL_EFFECT_UNKNOWN_4                   = 0x20000000, ///< unused
	ITEM_SPECIAL_EFFECT_3X_DAMAGE_VS_DEMONS         = 0x40000000,
	ITEM_SPECIAL_EFFECT_ALL_RESISTANCES_EQUAL_0     = 0x80000000,
} item_special_effect;

/// Item types.
typedef enum {
	ITEM_TYPE_MISC         =  0, ///< Potions, scrolls, books and quest items.
	ITEM_TYPE_SWORD        =  1,
	ITEM_TYPE_AXE          =  2,
	ITEM_TYPE_BOW          =  3,
	ITEM_TYPE_MACE         =  4,
	ITEM_TYPE_SHIELD       =  5,
	ITEM_TYPE_LIGHT_ARMOR  =  6,
	ITEM_TYPE_HELM         =  7,
	ITEM_TYPE_MEDIUM_ARMOR =  8,
	ITEM_TYPE_HEAVY_ARMOR  =  9,
	ITEM_TYPE_STAFF        = 10,
	ITEM_TYPE_GOLD         = 11,
	ITEM_TYPE_RING         = 12,
	ITEM_TYPE_AMULET       = 13,
	ITEM_TYPE_14           = 14, ///< NOTE: Unused?
	ITEM_TYPE_NONE         = -1,
} item_type;

/// Tile IDs for dungeon layout 1.
///
/// TODO: Figure out how to fix broken link. Requires graphics files, which may
/// not be put online. Perhaps, add a script to view locally.
///
/// References:
///    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/README.md
typedef enum {
	L1_TILE_ID_NONE                                    =   0,
	L1_TILE_ID_WALL_SW                                 =   1,
	L1_TILE_ID_WALL_SE                                 =   2,
	L1_TILE_ID_ARCH_NE_ARCH_NW                         =   3,
	L1_TILE_ID_WALL_SW_WALL_SE                         =   4,
	L1_TILE_ID_ARCH_SW_ARCH_SE                         =   5,
	L1_TILE_ID_WALL_END_SW                             =   6,
	L1_TILE_ID_WALL_END_SE                             =   7,
	L1_TILE_ID_ARCH_END_SW                             =   8,
	L1_TILE_ID_ARCH_END_SE                             =   9,
	L1_TILE_ID_WALL_SW_ARCH_SE                         =  10,
	L1_TILE_ID_ARCH_SW                                 =  11,
	L1_TILE_ID_ARCH_SE                                 =  12,
	L1_TILE_ID_FLOOR                                   =  13,
	L1_TILE_ID_ARCH_SW_WALL_SE                         =  14,
	L1_TILE_ID_COLUMN                                  =  15,
	L1_TILE_ID_ARCH_END_NE                             =  16,
	L1_TILE_ID_ARCH_END_NW                             =  17,
	L1_TILE_ID_DIRT_WALL_SW                            =  18,
	L1_TILE_ID_DIRT_WALL_SE                            =  19,
	L1_TILE_ID_DIRT_WALL_NE_WALL_NW                    =  20,
	L1_TILE_ID_DIRT_WALL_SW_WALL_SE                    =  21,
	L1_TILE_ID_DIRT                                    =  22,
	L1_TILE_ID_DIRT_WALL_END_SW                        =  23,
	L1_TILE_ID_DIRT_WALL_END_SE                        =  24,
	L1_TILE_ID_DOOR_SW                                 =  25,
	L1_TILE_ID_DOOR_SE                                 =  26,
	L1_TILE_ID_WALL_SW_BAR_SE                          =  27,
	L1_TILE_ID_DOOR_SW_DOOR_SE                         =  28,
	L1_TILE_ID_BAR_SW_BAR_SE                           =  29,
	L1_TILE_ID_DOOR_END_SW                             =  30,
	L1_TILE_ID_DOOR_END_SE                             =  31,
	L1_TILE_ID_BAR_END_SW                              =  32,
	L1_TILE_ID_BAR_END_SE                              =  33,
	L1_TILE_ID_DOOR_SW_BAR_SE                          =  34,
	L1_TILE_ID_BAR_SW                                  =  35,
	L1_TILE_ID_BAR_SE                                  =  36,
	L1_TILE_ID_BAR_SW_WALL_SE                          =  37,
	L1_TILE_ID_BAR_SW_ARCH_SE                          =  38,
	L1_TILE_ID_BAR_SW_DOOR_SE                          =  39,
	L1_TILE_ID_DOOR_SW_ARCH_SE                         =  40,
	L1_TILE_ID_DOOR_SW_WALL_SE                         =  41,
	L1_TILE_ID_ARCH_SW_DOOR_SE                         =  42,
	L1_TILE_ID_WALL_SW_DOOR_SE                         =  43,
	L1_TILE_ID_ARCH_SW_BAR_SE                          =  44,
	L1_TILE_ID_CIRCLE_MARKING_1                        =  45,
	L1_TILE_ID_CIRCLE_MARKING_2                        =  46,
	L1_TILE_ID_CIRCLE_MARKING_3                        =  47,
	L1_TILE_ID_CIRCLE_MARKING_4                        =  48,
	L1_TILE_ID_CIRCLE_MARKING_5                        =  49,
	L1_TILE_ID_CIRCLE_MARKING_6                        =  50,
	L1_TILE_ID_CIRCLE_MARKING_7                        =  51,
	L1_TILE_ID_CIRCLE_MARKING_8                        =  52,
	L1_TILE_ID_CIRCLE_MARKING_9                        =  53,
	L1_TILE_ID_CIRCLE_MARKING_10                       =  54,
	L1_TILE_ID_CIRCLE_MARKING_11                       =  55,
	L1_TILE_ID_CIRCLE_MARKING_12                       =  56,
	L1_TILE_ID_STAIR_A_1                               =  57,
	L1_TILE_ID_STAIR_A_2                               =  58,
	L1_TILE_ID_STAIR_A_3                               =  59,
	L1_TILE_ID_STAIR_A_4                               =  60,
	L1_TILE_ID_STAIR_A_5                               =  61,
	L1_TILE_ID_STAIR_A_6                               =  62,
	L1_TILE_ID_STAIR_B_1                               =  63,
	L1_TILE_ID_STAIR_B_2                               =  64,
	L1_TILE_ID_STAIR_B_3                               =  65,
	L1_TILE_ID_STAIR_B_4                               =  66,
	L1_TILE_ID_STAIR_B_5                               =  67,
	L1_TILE_ID_STAIR_B_6                               =  68,
	L1_TILE_ID_TOMB_1                                  =  69,
	L1_TILE_ID_TOMB_2                                  =  70,
	L1_TILE_ID_TOMB_3                                  =  71,
	L1_TILE_ID_TOMB_4                                  =  72,
	L1_TILE_ID_TOMB_5                                  =  73,
	L1_TILE_ID_TOMB_6                                  =  74,
	L1_TILE_ID_TOMB_7                                  =  75,
	L1_TILE_ID_TOMB_8                                  =  76,
	L1_TILE_ID_TOMB_9                                  =  77,
	L1_TILE_ID_TOMB_10                                 =  78,
	L1_TILE_ID_WALL_SW_2                               =  79,
	L1_TILE_ID_WALL_SE_2                               =  80,
	L1_TILE_ID_WALL_NE_WALL_NW                         =  81,
	L1_TILE_ID_WALL_SW_WALL_SE_2                       =  82,
	L1_TILE_ID_WALL_SW_3                               =  83,
	L1_TILE_ID_WALL_END_SW_2                           =  84,
	L1_TILE_ID_WALL_END_SE_2                           =  85,
	L1_TILE_ID_WALL_END_NE                             =  86,
	L1_TILE_ID_WALL_END_NW                             =  87,
	L1_TILE_ID_WALL_SE_3                               =  88,
	L1_TILE_ID_TAPESTRY_WALL_SW_1                      =  89,
	L1_TILE_ID_TAPESTRY_WALL_SW_2                      =  90,
	L1_TILE_ID_TAPESTRY_WALL_SE_1                      =  91,
	L1_TILE_ID_TAPESTRY_WALL_SE_2                      =  92,
	L1_TILE_ID_WALL_SW_4                               =  93,
	L1_TILE_ID_TOMB_WALL_SW                            =  94,
	L1_TILE_ID_TOMB_WALL_SE                            =  95,
	L1_TILE_ID_WALL_SE_4                               =  96,
	L1_TILE_ID_BLOOD_WALL_SE_1                         =  97,
	L1_TILE_ID_BLOOD_WALL_SE_2                         =  98,
	L1_TILE_ID_BLOOD_WALL_SE_3                         =  99,
	L1_TILE_ID_BLOOD_WALL_SW_1                         = 100,
	L1_TILE_ID_BLOOD_WALL_SW_2                         = 101,
	L1_TILE_ID_BLOOD_ARCH_SW                           = 102,
	L1_TILE_ID_BLOOD_DOOR_SW                           = 103,
	L1_TILE_ID_BLOOD_FLOOR_1                           = 104,
	L1_TILE_ID_BLOOD_FLOOR_2                           = 105,
	L1_TILE_ID_BLOOD_FLOOR_3                           = 106,
	L1_TILE_ID_CROSS_WALL_SW                           = 107,
	L1_TILE_ID_CROSS_WALL_SE                           = 108,
	L1_TILE_ID_NICHE_WALL_SW                           = 109,
	L1_TILE_ID_NICHE_WALL_SE                           = 110,
	L1_TILE_ID_STATUE_WALL_SW                          = 111,
	L1_TILE_ID_STATUE_WALL_SE                          = 112,
	L1_TILE_ID_TORCH_WALL_SW                           = 113,
	L1_TILE_ID_TORCH_WALL_SE                           = 114,
	L1_TILE_ID_BROKEN_WALL_SE_1                        = 115,
	L1_TILE_ID_BROKEN_WALL_SE_2                        = 116,
	L1_TILE_ID_BROKEN_WALL_SE_3                        = 117,
	L1_TILE_ID_BROKEN_ARCH_SE                          = 118,
	L1_TILE_ID_BROKEN_ENTERANCE_SE_1                   = 119,
	L1_TILE_ID_BROKEN_ENTERANCE_SE_2                   = 120,
	L1_TILE_ID_BROKEN_ARCH_SW_1                        = 121,
	L1_TILE_ID_BROKEN_WALL_SW_1                        = 122,
	L1_TILE_ID_BROKEN_ARCH_SW_2                        = 123,
	L1_TILE_ID_BROKEN_WALL_SW_2                        = 124,
	L1_TILE_ID_BROKEN_FLOOR_1                          = 125,
	L1_TILE_ID_BROKEN_ENTERANCE_SW_1                   = 126,
	L1_TILE_ID_BROKEN_ENTERANCE_SW_2                   = 127,
	L1_TILE_ID_CANDLESTICK_1                           = 128,
	L1_TILE_ID_CANDLESTICK_2                           = 129,
	L1_TILE_ID_CANDLESTICK_3                           = 130,
	L1_TILE_ID_SARCOPHAGUS_1                           = 131,
	L1_TILE_ID_SARCOPHAGUS_2                           = 132,
	L1_TILE_ID_BROKEN_FLOOR_2                          = 133,
	L1_TILE_ID_BROKEN_FLOOR_3                          = 134,
	L1_TILE_ID_BROKEN_FLOOR_4                          = 135,
	L1_TILE_ID_BROKEN_FLOOR_5                          = 136,
	L1_TILE_ID_BROKEN_FLOOR_6                          = 137,
	L1_TILE_ID_BROKEN_FLOOR_7                          = 138,
	L1_TILE_ID_FLOOR_SHADOW_ARCH_SW_RIGHT              = 139,
	L1_TILE_ID_FLOOR_SHADOW_ARCH_SE_LEFT               = 140,
	L1_TILE_ID_FLOOR_SHADOW_BAR_SW_RIGHT               = 141,
	L1_TILE_ID_FLOOR_SHADOW_SHAFT_RIGHT                = 142,
	L1_TILE_ID_FLOOR_SHADOW_ARCH_SE_LEFT_SHAFT_BOTTOM  = 143,
	L1_TILE_ID_FLOOR_SHADOW_SHAFT_BOTTOM_1             = 144,
	L1_TILE_ID_FLOOR_SHADOW_COLUMN_BOTTOM              = 145,
	L1_TILE_ID_WALL_SW_SHADOW_ARCH_SE_LEFT             = 146,
	L1_TILE_ID_ARCH_SW_SHADOW_ARCH_SE_LEFT             = 147,
	L1_TILE_ID_WALL_SE_SHADOW_ARCH_SW_RIGHT            = 148,
	L1_TILE_ID_ARCH_SE_SHADOW_ARCH_SW_RIGHT            = 149,
	L1_TILE_ID_FLOOR_SHADOW_ARCH_SE_LEFT_ARCH_SW_RIGHT = 150,
	L1_TILE_ID_FLOOR_SHADOW_SHAFT_BOTTOM_ARCH_SW_RIGHT = 151,
	L1_TILE_ID_FLOOR_SHADOW_SHAFT_BOTTOM_2             = 152,
	L1_TILE_ID_ARCH_SE_SHADOW_BAR_SW_RIGHT             = 153,
	L1_TILE_ID_WALL_SE_SHADOW_BAR_SW_RIGHT             = 154,
	L1_TILE_ID_WALL_SW_3_SHADOW_ARCH_SE_LEFT           = 155,
	L1_TILE_ID_WALL_SE_3_SHADOW_ARCH_SW_RIGHT          = 156,
	L1_TILE_ID_WALL_SE_3_SHADOW_BAR_SW_RIGHT           = 157,
	L1_TILE_ID_WALL_SW_WALL_SE_3                       = 158,
	L1_TILE_ID_ARCH_SW_WALL_SE_3                       = 159,
	L1_TILE_ID_WALL_SW_3_WALL_SE                       = 160,
	L1_TILE_ID_WALL_SW_3_ARCH_SE                       = 161,
	L1_TILE_ID_FLOOR_2                                 = 162,
	L1_TILE_ID_FLOOR_3                                 = 163,
	L1_TILE_ID_DOOR_SW_WALL_SE_3                       = 164,
	L1_TILE_ID_WALL_SW_3_DOOR_SE                       = 165,
	L1_TILE_ID_BLOOD_WALL_SW_3                         = 166,
	L1_TILE_ID_BLOOD_WALL_SW_4                         = 167,
	L1_TILE_ID_BLOOD_WALL_SW_WALL_SE                   = 168,
	L1_TILE_ID_BLOOD_WALL_SE_4                         = 169,
	L1_TILE_ID_BLOOD_WALL_SE_5                         = 170,
	L1_TILE_ID_BLOOD_FLOOR_4                           = 171,
	L1_TILE_ID_BLOOD_FLOOR_5                           = 172,
	L1_TILE_ID_BLOOD_FLOOR_6                           = 173,
	L1_TILE_ID_BLOOD_FLOOR_7                           = 174,
	L1_TILE_ID_OPEN_DOOR_SW                            = 175,
	L1_TILE_ID_OPEN_DOOR_SE                            = 176,
	L1_TILE_ID_OPEN_DOOR_SW_OPEN_DOOR_SE               = 177,
	L1_TILE_ID_OPEN_DOOR_END_SW                        = 178,
	L1_TILE_ID_OPEN_DOOR_END_SE                        = 179,
	L1_TILE_ID_OPEN_DOOR_SW_BAR_SE                     = 180,
	L1_TILE_ID_BAR_SW_OPEN_DOOR_SE                     = 181,
	L1_TILE_ID_OPEN_DOOR_SW_ARCH_SE                    = 182,
	L1_TILE_ID_OPEN_DOOR_SW_WALL_SE                    = 183,
	L1_TILE_ID_ARCH_SW_OPEN_DOOR_SE                    = 184,
	L1_TILE_ID_WALL_SW_OPEN_DOOR_SE                    = 185,
	L1_TILE_ID_OPEN_BLOOD_DOOR_SW                      = 186,
	L1_TILE_ID_OPEN_DOOR_SW_WALL_SE_3                  = 187,
	L1_TILE_ID_WALL_SW_3_OPEN_DOOR_SE                  = 188,
	L1_TILE_ID_OPEN_DOOR_SW_DOOR_SE                    = 189,
	L1_TILE_ID_DOOR_SW_OPEN_DOOR_SE                    = 190,
	L1_TILE_ID_WALL_SW_5                               = 191,
	L1_TILE_ID_WALL_SE_5                               = 192,
	L1_TILE_ID_ENTERANCE_SW_1                          = 193,
	L1_TILE_ID_ENTERANCE_SE_1                          = 194,
	L1_TILE_ID_DIRT_FLOOR_SHADOW                       = 195,
	L1_TILE_ID_DIRT_FLOOR_SHADOW_ARCH_SW_RIGHT         = 196,
	L1_TILE_ID_ENTERANCE_SW_2                          = 197,
	L1_TILE_ID_ENTERANCE_SE_2                          = 198,
	L1_TILE_ID_DIRT_WALL_SW_DIRT                       = 199,
	L1_TILE_ID_DIRT_WALL_SE_DIRT                       = 200,
	L1_TILE_ID_DIRT_WALL_NE_WALL_NW_DIRT               = 201,
	L1_TILE_ID_DIRT_WALL_SW_WALL_SE_DIRT               = 202,
	L1_TILE_ID_DIRT_DIRT                               = 203,
	L1_TILE_ID_DIRT_WALL_END_SW_DIRT                   = 204,
	L1_TILE_ID_DIRT_WALL_END_SE_DIRT                   = 205,
	L1_TILE_ID_BROKEN_ENTERANCE_SE_3                   = 206,
} l1_tile_id;

/// Tile IDs for dungeon layout 2.
typedef enum {
	L2_TILE_ID_NONE = 0,
	// TODO: add enums for l2_tile_id
} l2_tile_id;

/// Tile IDs for dungeon layout 3.
typedef enum {
	L3_TILE_ID_NONE = 0,
	// TODO: add enums for l3_tile_id
} l3_tile_id;

/// Tile IDs for dungeon layout 4.
typedef enum {
	L4_TILE_ID_NONE = 0,
	// TODO: add enums for l4_tile_id
} l4_tile_id;

/// Magic types.
typedef enum {
	MAGIC_TYPE_FIRE      = 0,
	MAGIC_TYPE_LIGHTNING = 1,
	MAGIC_TYPE_MAGIC     = 2,
} magic_type;

/// Missile graphic IDs specify missile_graphic_data array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/missiles.cpp#missile_graphic_data
typedef enum {
	MISSILE_GRAPHIC_ID_ARROW                  =  0, ///< "missiles/arrows.cl2"
	MISSILE_GRAPHIC_ID_FIRE_BALL              =  1, ///< "missiles/fireba%i.cl2"
	MISSILE_GRAPHIC_ID_GUARDIAN               =  2, ///< "missiles/guard%i.cl2"
	MISSILE_GRAPHIC_ID_LIGHTNING              =  3, ///< "missiles/lghning.cl2"
	MISSILE_GRAPHIC_ID_FIRE_WALL              =  4, ///< "missiles/firewal%i.cl2"
	MISSILE_GRAPHIC_ID_MAGIC_BLOSSOM          =  5, ///< "missiles/magblos.cl2"
	MISSILE_GRAPHIC_ID_PORTAL                 =  6, ///< "missiles/portal%i.cl2"
	MISSILE_GRAPHIC_ID_BLUE_EXPLOSION_FRONT   =  7, ///< "missiles/bluexfr.cl2"
	MISSILE_GRAPHIC_ID_BLUE_EXPLOSION_BACK    =  8, ///< "missiles/bluexbk.cl2"
	MISSILE_GRAPHIC_ID_MANA_SHIELD            =  9, ///< "missiles/manashld.cl2"
	MISSILE_GRAPHIC_ID_BLOOD                  = 10, ///< "missiles/blood%i.cl2"
	MISSILE_GRAPHIC_ID_BONE                   = 11, ///< "missiles/bone%i.cl2"
	MISSILE_GRAPHIC_ID_METAL_HIT              = 12, ///< "missiles/metlhit%i.cl2"
	MISSILE_GRAPHIC_ID_FIRE_ARROW             = 13, ///< "missiles/farrow%i.cl2"
	MISSILE_GRAPHIC_ID_DOOM_SERPENT           = 14, ///< "missiles/doom%i.cl2"
	MISSILE_GRAPHIC_ID_SPACE                  = 15, ///< " "
	MISSILE_GRAPHIC_ID_BLOOD_BURST            = 16, ///< "missiles/blodbur%i.cl2"
	MISSILE_GRAPHIC_ID_EXPLOSION              = 17, ///< "missiles/newexp.cl2"
	MISSILE_GRAPHIC_ID_SHATTER                = 18, ///< "missiles/shatter1.cl2"
	MISSILE_GRAPHIC_ID_BIG_EXPLOSION          = 19, ///< "missiles/bigexp.cl2"
	MISSILE_GRAPHIC_ID_INFERNO                = 20, ///< "missiles/inferno.cl2"
	MISSILE_GRAPHIC_ID_THIN_LIGHTNING         = 21, ///< "missiles/thinlght.cl2"
	MISSILE_GRAPHIC_ID_FLARE                  = 22, ///< "missiles/flare.cl2"
	MISSILE_GRAPHIC_ID_FLARE_EXPLOSION        = 23, ///< "missiles/flareexp.cl2"
	MISSILE_GRAPHIC_ID_MAGIC_BALL             = 24, ///< "missiles/magball%i.cl2"
	MISSILE_GRAPHIC_ID_KRULL                  = 25, ///< "missiles/krull.cl2"
	MISSILE_GRAPHIC_ID_MINI_LIGHTNING         = 26, ///< "missiles/miniltng.cl2"
	MISSILE_GRAPHIC_ID_HOLY_BOLT              = 27, ///< "missiles/holy%i.cl2"
	MISSILE_GRAPHIC_ID_HOLY_EXPLOSION         = 28, ///< "missiles/holyexpl.cl2"
	MISSILE_GRAPHIC_ID_LIGHTNING_ARROW        = 29, ///< "missiles/larrow%i.cl2"
	MISSILE_GRAPHIC_ID_FIRE_ARROW_EXPLOSION   = 30, ///< "missiles/firarwex.cl2"
	MISSILE_GRAPHIC_ID_ACID_BALL              = 31, ///< "missiles/acidbf%i.cl2"
	MISSILE_GRAPHIC_ID_ACID_SPLASH            = 32, ///< "missiles/acidspla.cl2"
	MISSILE_GRAPHIC_ID_ACID_PUDDLE            = 33, ///< "missiles/acidpud%i.cl2"
	MISSILE_GRAPHIC_ID_ETHEREAL_SHIELD        = 34, ///< "missiles/ethrshld.cl2"
	MISSILE_GRAPHIC_ID_ELEMENTAL              = 35, ///< "missiles/firerun%i.cl2"
	MISSILE_GRAPHIC_ID_RESURRECT              = 36, ///< "missiles/ressur1.cl2"
	MISSILE_GRAPHIC_ID_SKULL_BALL             = 37, ///< "missiles/sklball%i.cl2"
	MISSILE_GRAPHIC_ID_RED_PORTAL             = 38, ///< "missiles/rportal%i.cl2"
	MISSILE_GRAPHIC_ID_FIRE_PILLAR            = 39, ///< "missiles/fireplar.cl2"
	MISSILE_GRAPHIC_ID_BLUE_FLARE             = 40, ///< "missiles/scubmisb.cl2"
	MISSILE_GRAPHIC_ID_BLUE_FLARE_EXPLOSION   = 41, ///< "missiles/scbsexpb.cl2"
	MISSILE_GRAPHIC_ID_YELLOW_FLARE           = 42, ///< "missiles/scubmisc.cl2"
	MISSILE_GRAPHIC_ID_YELLOW_FLARE_EXPLOSION = 43, ///< "missiles/scbsexpc.cl2"
	MISSILE_GRAPHIC_ID_RED_FLARE              = 44, ///< "missiles/scubmisd.cl2"
	MISSILE_GRAPHIC_ID_RED_FLARE_EXPLOSION    = 45, ///< "missiles/scbsexpd.cl2"
	MISSILE_GRAPHIC_ID_NULL                   = 46, ///< NULL
	MISSILE_GRAPHIC_ID_INVALID                = 47,
} missile_graphic_id;

/// Monster AIs.
typedef enum {
	MONSTER_AI_ID_ZOMBIE               =  0,
	MONSTER_AI_ID_OVERLORD             =  1,
	MONSTER_AI_ID_SKELETON_SWORD       =  2,
	MONSTER_AI_ID_SKELETON_ARCHER      =  3,
	MONSTER_AI_ID_SCAVENGER            =  4,
	MONSTER_AI_ID_HORNED_DEMON         =  5,
	MONSTER_AI_ID_GOAT_MAN             =  6,
	MONSTER_AI_ID_GOAT_MAN_ARCHER      =  7,
	MONSTER_AI_ID_FALLEN_ONE           =  8,
	MONSTER_AI_ID_MAGMA_DEMON          =  9,
	MONSTER_AI_ID_SKELETON_KING        = 10,
	MONSTER_AI_ID_WINGED_FIEND         = 11,
	MONSTER_AI_ID_GARGOYLE             = 12,
	MONSTER_AI_ID_THE_BUTCHER          = 13,
	MONSTER_AI_ID_SUCCUBUS             = 14,
	MONSTER_AI_ID_HIDDEN               = 15,
	MONSTER_AI_ID_LIGHTNING_DEMON      = 16,
	MONSTER_AI_ID_FIREMAN              = 17,
	MONSTER_AI_ID_GHARBAD_THE_WEAK     = 18,
	MONSTER_AI_ID_SPITTING_TERROR      = 19,
	MONSTER_AI_ID_FAST_SPITTING_TERROR = 20,
	MONSTER_AI_ID_GOLEM                = 21,
	MONSTER_AI_ID_ZHAR_THE_MAD         = 22,
	MONSTER_AI_ID_SNOTSPILL            = 23,
	MONSTER_AI_ID_VIPER                = 24,
	MONSTER_AI_ID_MAGE                 = 25,
	MONSTER_AI_ID_BALROG               = 26,
	MONSTER_AI_ID_THE_DARK_LORD        = 27,
	MONSTER_AI_ID_ARCH_BISHOP_LAZARUS  = 28,
	MONSTER_AI_ID_UNIQUE_SUCCUBUS      = 29,
	MONSTER_AI_ID_LACHDANAN            = 30,
	MONSTER_AI_ID_WARLORD_OF_BLOOD     = 31,
} monster_ai_id;

/// Monster IDs specify monster_data array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/monsters.cpp#monster_data
typedef enum {
	MONSTER_ID_ZOMBIE                  =   0, ///< monsters/zombie/
	MONSTER_ID_GHOUL                   =   1, ///< monsters/zombie/
	MONSTER_ID_ROTTING_CARCASS         =   2, ///< monsters/zombie/
	MONSTER_ID_BLACK_DEATH             =   3, ///< monsters/zombie/
	MONSTER_ID_FALLEN_ONE_SPEAR        =   4, ///< monsters/falspear/
	MONSTER_ID_CARVER_SPEAR            =   5, ///< monsters/falspear/
	MONSTER_ID_DEVIL_KIN_SPEAR         =   6, ///< monsters/falspear/
	MONSTER_ID_DARK_ONE_SPEAR          =   7, ///< monsters/falspear/
	MONSTER_ID_SKELETON_AXE            =   8, ///< monsters/skelaxe/
	MONSTER_ID_CORPSE_AXE              =   9, ///< monsters/skelaxe/
	MONSTER_ID_BURNING_DEAD_AXE        =  10, ///< monsters/skelaxe/
	MONSTER_ID_HORROR_AXE              =  11, ///< monsters/skelaxe/
	MONSTER_ID_FALLEN_ONE_SWORD        =  12, ///< monsters/falsword/
	MONSTER_ID_CARVER_SWORD            =  13, ///< monsters/falsword/
	MONSTER_ID_DEVIL_KIN_SWORD         =  14, ///< monsters/falsword/
	MONSTER_ID_DARK_ONE_SWORD          =  15, ///< monsters/falsword/
	MONSTER_ID_SCAVENGER               =  16, ///< monsters/scav/
	MONSTER_ID_PLAGUE_EATER            =  17, ///< monsters/scav/
	MONSTER_ID_SHADOW_BEAST            =  18, ///< monsters/scav/
	MONSTER_ID_BONE_GASHER             =  19, ///< monsters/scav/
	MONSTER_ID_SKELETON_BOW            =  20, ///< monsters/skelbow/
	MONSTER_ID_CORPSE_BOW              =  21, ///< monsters/skelbow/
	MONSTER_ID_BURNING_DEAD_BOW        =  22, ///< monsters/skelbow/
	MONSTER_ID_HORROR_BOW              =  23, ///< monsters/skelbow/
	MONSTER_ID_SKELETON_CAPTAIN        =  24, ///< monsters/skelsd/
	MONSTER_ID_CORPSE_CAPTAIN          =  25, ///< monsters/skelsd/
	MONSTER_ID_BURNING_DEAD_CAPTAIN    =  26, ///< monsters/skelsd/
	MONSTER_ID_HORROR_CAPTAIN          =  27, ///< monsters/skelsd/
	MONSTER_ID_INVISIBLE_LORD          =  28, ///< monsters/tsneak/
	MONSTER_ID_HIDDEN                  =  29, ///< monsters/sneak/
	MONSTER_ID_STALKER                 =  30, ///< monsters/sneak/
	MONSTER_ID_UNSEEN                  =  31, ///< monsters/sneak/
	MONSTER_ID_ILLUSION_WEAVER         =  32, ///< monsters/sneak/
	MONSTER_ID_LORD_SAYTER             =  33, ///< monsters/goatlord/
	MONSTER_ID_FLESH_CLAN_MACE         =  34, ///< monsters/goatmace/
	MONSTER_ID_STONE_CLAN_MACE         =  35, ///< monsters/goatmace/
	MONSTER_ID_FIRE_CLAN_MACE          =  36, ///< monsters/goatmace/
	MONSTER_ID_NIGHT_CLAN_MACE         =  37, ///< monsters/goatmace/
	MONSTER_ID_FIEND                   =  38, ///< monsters/bat/
	MONSTER_ID_BLINK                   =  39, ///< monsters/bat/
	MONSTER_ID_GLOOM                   =  40, ///< monsters/bat/
	MONSTER_ID_FAMILIAR                =  41, ///< monsters/bat/
	MONSTER_ID_FLESH_CLAN_BOW          =  42, ///< monsters/goatbow/
	MONSTER_ID_STONE_CLAN_BOW          =  43, ///< monsters/goatbow/
	MONSTER_ID_FIRE_CLAN_BOW           =  44, ///< monsters/goatbow/
	MONSTER_ID_NIGHT_CLAN_BOW          =  45, ///< monsters/goatbow/
	MONSTER_ID_ACID_BEAST              =  46, ///< monsters/acid/
	MONSTER_ID_POISON_SPITTER          =  47, ///< monsters/acid/
	MONSTER_ID_PIT_BEAST               =  48, ///< monsters/acid/
	MONSTER_ID_LAVA_MAW                =  49, ///< monsters/acid/
	MONSTER_ID_SKELETON_KING           =  50, ///< monsters/sking/
	MONSTER_ID_THE_BUTCHER             =  51, ///< monsters/fatc/
	MONSTER_ID_OVERLORD                =  52, ///< monsters/fat/
	MONSTER_ID_MUD_MAN                 =  53, ///< monsters/fat/
	MONSTER_ID_TOAD_DEMON              =  54, ///< monsters/fat/
	MONSTER_ID_FLAYED_ONE              =  55, ///< monsters/fat/
	MONSTER_ID_WYRM                    =  56, ///< monsters/worm/
	MONSTER_ID_CAVE_SLUG               =  57, ///< monsters/worm/
	MONSTER_ID_DEVIL_WYRM              =  58, ///< monsters/worm/
	MONSTER_ID_DEVOURER                =  59, ///< monsters/worm/
	MONSTER_ID_MAGMA_DEMON             =  60, ///< monsters/magma/
	MONSTER_ID_BLOOD_STONE             =  61, ///< monsters/magma/
	MONSTER_ID_HELL_STONE              =  62, ///< monsters/magma/
	MONSTER_ID_LAVA_LORD               =  63, ///< monsters/magma/
	MONSTER_ID_HORNED_DEMON            =  64, ///< monsters/rhino/
	MONSTER_ID_MUD_RUNNER              =  65, ///< monsters/rhino/
	MONSTER_ID_FROST_CHARGER           =  66, ///< monsters/rhino/
	MONSTER_ID_OBSIDIAN_LORD           =  67, ///< monsters/rhino/
	MONSTER_ID_BONE_DEMON              =  68, ///< monsters/demskel/
	MONSTER_ID_RED_DEATH               =  69, ///< monsters/thin/
	MONSTER_ID_LITCH_DEMON             =  70, ///< monsters/thin/
	MONSTER_ID_UNDEAD_BALROG           =  71, ///< monsters/thin/
	MONSTER_ID_INCINERATOR             =  72, ///< monsters/fireman/
	MONSTER_ID_FLAME_LORD              =  73, ///< monsters/fireman/
	MONSTER_ID_DOOM_FIRE               =  74, ///< monsters/fireman/
	MONSTER_ID_HELL_BURNER             =  75, ///< monsters/fireman/
	MONSTER_ID_RED_STORM               =  76, ///< monsters/thin/
	MONSTER_ID_STORM_RIDER             =  77, ///< monsters/thin/
	MONSTER_ID_STORM_LORD              =  78, ///< monsters/thin/
	MONSTER_ID_MAELSTORM               =  79, ///< monsters/thin/
	MONSTER_ID_DEVIL_KIN_BRUTE         =  80, ///< monsters/bigfall/
	MONSTER_ID_WINGED_DEMON            =  81, ///< monsters/gargoyle/
	MONSTER_ID_GARGOYLE                =  82, ///< monsters/gargoyle/
	MONSTER_ID_BLOOD_CLAW              =  83, ///< monsters/gargoyle/
	MONSTER_ID_DEATH_WING              =  84, ///< monsters/gargoyle/
	MONSTER_ID_SLAYER                  =  85, ///< monsters/mega/
	MONSTER_ID_GUARDIAN                =  86, ///< monsters/mega/
	MONSTER_ID_VORTEX_LORD             =  87, ///< monsters/mega/
	MONSTER_ID_BALROG                  =  88, ///< monsters/mega/
	MONSTER_ID_CAVE_VIPER              =  89, ///< monsters/snake/
	MONSTER_ID_FIRE_DRAKE              =  90, ///< monsters/snake/
	MONSTER_ID_GOLD_VIPER              =  91, ///< monsters/snake/
	MONSTER_ID_AZURE_DRAKE             =  92, ///< monsters/snake/
	MONSTER_ID_BLACK_KNIGHT            =  93, ///< monsters/black/
	MONSTER_ID_DOOM_GUARD              =  94, ///< monsters/black/
	MONSTER_ID_STEEL_LORD              =  95, ///< monsters/black/
	MONSTER_ID_BLOOD_KNIGHT            =  96, ///< monsters/black/
	MONSTER_ID_UNRAVELER               =  97, ///< monsters/unrav/
	MONSTER_ID_HOLLOW_ONE              =  98, ///< monsters/unrav/
	MONSTER_ID_PAIN_MASTER             =  99, ///< monsters/unrav/
	MONSTER_ID_REALITY_WEAVER          = 100, ///< monsters/unrav/
	MONSTER_ID_SUCCUBUS                = 101, ///< monsters/succ/
	MONSTER_ID_SNOW_WITCH              = 102, ///< monsters/succ/
	MONSTER_ID_HELL_SPAWN              = 103, ///< monsters/succ/
	MONSTER_ID_SOUL_BURNER             = 104, ///< monsters/succ/
	MONSTER_ID_COUNSELOR               = 105, ///< monsters/mage/
	MONSTER_ID_MAGISTRATE              = 106, ///< monsters/mage/
	MONSTER_ID_CABALIST                = 107, ///< monsters/mage/
	MONSTER_ID_ADVOCATE                = 108, ///< monsters/mage/
	MONSTER_ID_GOLEM                   = 109, ///< monsters/golem/
	MONSTER_ID_THE_DARK_LORD           = 110, ///< monsters/diablo/
	MONSTER_ID_THE_ARCH_LITCH_MALIGNUS = 111, ///< monsters/darkmage/
	MONSTER_ID_NONE                    =  -1,
} monster_id;

/// Monster modes.
typedef enum {
	MONSTER_MODE_STANDING                 =  0,
	MONSTER_MODE_WALKING_1                =  1,
	MONSTER_MODE_WALKING_2                =  2,
	MONSTER_MODE_WALKING_3                =  3,
	MONSTER_MODE_ATTACKING                =  4,
	MONSTER_MODE_GETTING_HIT              =  5,
	MONSTER_MODE_DYING                    =  6,
	MONSTER_MODE_ATTACKING_SPECIAL        =  7,
	MONSTER_MODE_FADING_IN                =  8,
	MONSTER_MODE_FADING_OUT               =  9,
	MONSTER_MODE_ATTACKING_RANGED         = 10,
	MONSTER_MODE_STANDING_SPECIAL         = 11,
	MONSTER_MODE_ATTACKING_SPECIAL_RANGED = 12,
	MONSTER_MODE_DELAYING                 = 13,
	MONSTER_MODE_CHARGING                 = 14,
	MONSTER_MODE_STONED                   = 15,
	MONSTER_MODE_HEALING                  = 16,
	MONSTER_MODE_TALKING                  = 17,
} monster_mode;

/// Network message IDs.
typedef enum {
	NET_MSG_ID_I_NEED_HELP_COME_HERE   = 0,
	NET_MSG_ID_FOLLOW_ME               = 1,
	NET_MSG_ID_HERES_SOMETHING_FOR_YOU = 2,
	NET_MSG_ID_NOW_YOU_DIE             = 3,
} net_msg_id;

/// Object graphics.
typedef enum {
	OBJECT_GRAPHIC_ID_BRAZIER               =  0, ///< l1braz
	OBJECT_GRAPHIC_ID_L1_DOOR               =  1, ///< l1doors
	OBJECT_GRAPHIC_ID_LEVER                 =  2, ///< lever
	OBJECT_GRAPHIC_ID_SMALL_CHEST           =  3, ///< chest1
	OBJECT_GRAPHIC_ID_CHEST                 =  4, ///< chest2
	OBJECT_GRAPHIC_ID_BANNER                =  5, ///< banner
	OBJECT_GRAPHIC_ID_SKULL_PILE            =  6, ///< skulpile
	OBJECT_GRAPHIC_ID_SKULL_FIRE            =  7, ///< skulfire
	OBJECT_GRAPHIC_ID_SKULL_STICK           =  8, ///< skulstik
	OBJECT_GRAPHIC_ID_CRUCIFIED_SKELETON_S  =  9, ///< cruxsk1
	OBJECT_GRAPHIC_ID_CRUCIFIED_SKELETON_SE = 10, ///< cruxsk2
	OBJECT_GRAPHIC_ID_CRUCIFIED_SKELETON_SW = 11, ///< cruxsk3
	OBJECT_GRAPHIC_ID_STEEL_TOME            = 12, ///< book1
	OBJECT_GRAPHIC_ID_MYTHICAL_BOOK         = 13, ///< book2
	OBJECT_GRAPHIC_ID_ROCK_STAND            = 14, ///< rockstan
	OBJECT_GRAPHIC_ID_ANGEL                 = 15, ///< angel
	OBJECT_GRAPHIC_ID_LARGE_CHEST           = 16, ///< chest3
	OBJECT_GRAPHIC_ID_BURNING_CROSS         = 17, ///< burncros
	OBJECT_GRAPHIC_ID_CANDLE                = 18, ///< candle2
	OBJECT_GRAPHIC_ID_NUDE                  = 19, ///< nude2
	OBJECT_GRAPHIC_ID_SKULL_LEVER           = 20, ///< switch4
	OBJECT_GRAPHIC_ID_TORTURED_NUDE_MAN     = 21, ///< tnudem
	OBJECT_GRAPHIC_ID_TORTURED_NUDE_WOMAN   = 22, ///< tnudew
	OBJECT_GRAPHIC_ID_TORTURED_SOUL         = 23, ///< tsoul
	OBJECT_GRAPHIC_ID_L2_DOOR               = 24, ///< l2doors
	OBJECT_GRAPHIC_ID_WALL_TORCH_SIMPLE_SE  = 25, ///< wtorch4
	OBJECT_GRAPHIC_ID_WALL_TORCH_SIMPLE_SW  = 26, ///< wtorch3
	OBJECT_GRAPHIC_ID_SARCOPHAGUS           = 27, ///< sarc
	OBJECT_GRAPHIC_ID_FLAME                 = 28, ///< flame1
	OBJECT_GRAPHIC_ID_PRESSURE_PLATE        = 29, ///< prsrplt1
	OBJECT_GRAPHIC_ID_TRAPHOLE              = 30, ///< traphole
	OBJECT_GRAPHIC_ID_MINI_WATER            = 31, ///< miniwatr
	OBJECT_GRAPHIC_ID_WALL_TORCH_SE         = 32, ///< wtorch2
	OBJECT_GRAPHIC_ID_WALL_TORCH_SW         = 33, ///< wtorch1
	OBJECT_GRAPHIC_ID_BOOKCASE              = 34, ///< bcase
	OBJECT_GRAPHIC_ID_BOOKSHELF             = 35, ///< bshelf
	OBJECT_GRAPHIC_ID_WEAPON_RACK           = 36, ///< weapstnd
	OBJECT_GRAPHIC_ID_BARREL                = 37, ///< barrel
	OBJECT_GRAPHIC_ID_BARREL_EXPLOSION      = 38, ///< barrelex
	OBJECT_GRAPHIC_ID_LEFT_SHRINE           = 39, ///< lshrineg
	OBJECT_GRAPHIC_ID_RIGHT_SHRINE          = 40, ///< rshrineg
	OBJECT_GRAPHIC_ID_BLOOD_FOUNTAIN        = 41, ///< bloodfnt
	OBJECT_GRAPHIC_ID_DECAPITATED_BODY      = 42, ///< decap
	OBJECT_GRAPHIC_ID_PEDESTAL_OF_BLOOD     = 43, ///< pedistl
	OBJECT_GRAPHIC_ID_L3_DOOR               = 44, ///< l3doors
	OBJECT_GRAPHIC_ID_PURIFYING_SPRING      = 45, ///< pfountn
	OBJECT_GRAPHIC_ID_ARMOR_STAND           = 46, ///< armstand
	OBJECT_GRAPHIC_ID_GOAT_SHRINE           = 47, ///< goatshrn
	OBJECT_GRAPHIC_ID_CAULDRON              = 48, ///< cauldren
	OBJECT_GRAPHIC_ID_MURKY_POOL            = 49, ///< mfountn
	OBJECT_GRAPHIC_ID_FOUNTAIN_OF_TEARS     = 50, ///< tfountn
	OBJECT_GRAPHIC_ID_ALTAR_BOY             = 51, ///< altboy
	OBJECT_GRAPHIC_ID_MAGIC_CIRCLE          = 52, ///< mcirl
	OBJECT_GRAPHIC_ID_LABYRINTH_BOOKS       = 53, ///< bkslbrnt
	OBJECT_GRAPHIC_ID_MUSHROOM_PATCH        = 54, ///< mushptch
	OBJECT_GRAPHIC_ID_VILE_STAND            = 55, ///< lzstand
} object_graphic_id;

/// Object IDs specify object_data array indices.
typedef enum {
	OBJECT_ID_BRAZIER                          =  0, ///< l1braz (animated, ticksPerFrame 1)
	OBJECT_ID_L1_DOOR_SW                       =  1, ///< l1doors (frame 0)
	OBJECT_ID_L1_DOOR_SE                       =  2, ///< l1doors (frame 1)
	OBJECT_ID_SKULL_FIRE_THEME_3               =  3, ///< skulfire (animated, ticksPerFrame 2)
	OBJECT_ID_LEVER_POS_A                      =  4, ///< lever (frame 0)
	OBJECT_ID_SMALL_CHEST                      =  5, ///< chest1 (frame 0)
	OBJECT_ID_CHEST                            =  6, ///< chest2 (frame 0)
	OBJECT_ID_LARGE_CHEST                      =  7, ///< chest3 (frame 0)
	OBJECT_ID_INVALID_1                        =  8, ///< l1braz (invalid frame)
	OBJECT_ID_CANDLE_THEME_1                   =  9, ///< candle2 (animated, ticksPerFrame 2)
	OBJECT_ID_INVALID_2                        = 10, ///< l1braz (invalid frame)
	OBJECT_ID_BANNER_SE_THEME_3                = 11, ///< banner (frame 1)
	OBJECT_ID_BANNER_THEME_3                   = 12, ///< banner (frame 0)
	OBJECT_ID_BANNER_SW_THEME_3                = 13, ///< banner (frame 2)
	OBJECT_ID_SKULL_PILE                       = 14, ///< skulpile (invalid frame)
	OBJECT_ID_INVALID_3                        = 15, ///< l1braz (invalid frame)
	OBJECT_ID_INVALID_4                        = 16, ///< l1braz (invalid frame)
	OBJECT_ID_INVALID_5                        = 17, ///< l1braz (invalid frame)
	OBJECT_ID_INVALID_6                        = 18, ///< l1braz (invalid frame)
	OBJECT_ID_INVALID_7                        = 19, ///< l1braz (invalid frame)
	OBJECT_ID_CRUCIFIED_SKELETON_S             = 20, ///< cruxsk1 (frame 0)
	OBJECT_ID_CRUCIFIED_SKELETON_SE            = 21, ///< cruxsk2 (frame 0)
	OBJECT_ID_CRUCIFIED_SKELETON_SW            = 22, ///< cruxsk3 (frame 0)
	OBJECT_ID_ROCK_STAND                       = 23, ///< rockstan (frame 0)
	OBJECT_ID_ANGEL                            = 24, ///< angel (frame 0)
	OBJECT_ID_ANCIENT_TOME_OR_BOOK_OF_VILENESS = 25, ///< book2 (frame 0)
	OBJECT_ID_BURNING_CROSS                    = 26, ///< burncros (animated, ticksPerFrame 0)
	OBJECT_ID_NUDE                             = 27, ///< nude2 (animated, ticksPerFrame 3)
	OBJECT_ID_SKULL_LEVER                      = 28, ///< switch4 (frame 0)
	OBJECT_ID_TORTURED_NUDE_MAN_0              = 29, ///< tnudem (frame 0)
	OBJECT_ID_TORTURED_NUDE_MAN_1_THEME_6      = 30, ///< tnudem (frame 1)
	OBJECT_ID_TORTURED_NUDE_MAN_2_THEME_6      = 31, ///< tnudem (frame 2)
	OBJECT_ID_TORTURED_NUDE_MAN_3_THEME_6      = 32, ///< tnudem (frame 3)
	OBJECT_ID_TORTURED_NUDE_WOMAN_0_THEME_6    = 33, ///< tnudew (frame 0)
	OBJECT_ID_TORTURED_NUDE_WOMAN_1_THEME_6    = 34, ///< tnudew (frame 1)
	OBJECT_ID_TORTURED_NUDE_WOMAN_2_THEME_6    = 35, ///< tnudew (frame 2)
	OBJECT_ID_TORTURED_SOUL_0                  = 36, ///< tsoul (frame 0)
	OBJECT_ID_TORTURED_SOUL_1                  = 37, ///< tsoul (frame 1)
	OBJECT_ID_TORTURED_SOUL_2                  = 38, ///< tsoul (frame 2)
	OBJECT_ID_TORTURED_SOUL_3                  = 39, ///< tsoul (frame 3)
	OBJECT_ID_TORTURED_SOUL_4                  = 40, ///< tsoul (frame 4)
	OBJECT_ID_MYTHICAL_BOOK                    = 41, ///< book2 (frame 3)
	OBJECT_ID_L2_DOOR_SW                       = 42, ///< l2doors (frame 0)
	OBJECT_ID_L2_DOOR_SE                       = 43, ///< l2doors (frame 1)
	OBJECT_ID_WALL_TORCH_SIMPLE_SE             = 44, ///< wtorch4 (animated, ticksPerFrame 1)
	OBJECT_ID_WALL_TORCH_SIMPLE_SW             = 45, ///< wtorch3 (animated, ticksPerFrame 1)
	OBJECT_ID_WALL_TORCH_SW                    = 46, ///< wtorch1 (animated, ticksPerFrame 1)
	OBJECT_ID_WALL_TORCH_SE                    = 47, ///< wtorch2 (animated, ticksPerFrame 1)
	OBJECT_ID_SARCOPHAGUS                      = 48, ///< sarc (frame 0)
	OBJECT_ID_FLAME                            = 49, ///< flame1 (frame 0)
	OBJECT_ID_LEVER_POS_B                      = 50, ///< lever (frame 0)
	OBJECT_ID_MINI_WATER                       = 51, ///< miniwatr (animated, ticksPerFrame 1)
	OBJECT_ID_BOOK_CLOSED                      = 52, ///< book1 (frame 0)
	OBJECT_ID_TRAPHOLE_SW                      = 53, ///< traphole (frame 0)
	OBJECT_ID_TRAPHOLE_SE                      = 54, ///< traphole (frame 1)
	OBJECT_ID_BOOKCASE                         = 55, ///< bcase (frame 0)
	OBJECT_ID_WEAPON_RACK                      = 56, ///< weapstnd (frame 0)
	OBJECT_ID_BARREL                           = 57, ///< barrel (frame 0)
	OBJECT_ID_BARREL_EXPLOSION                 = 58, ///< barrelex (frame 0)
	OBJECT_ID_LEFT_SHRINE_THEME_1              = 59, ///< lshrineg (frame 0)
	OBJECT_ID_RIGHT_SHRINE_THEME_1             = 60, ///< rshrineg (frame 0)
	OBJECT_ID_SKELETON_TOME_THEME_3            = 61, ///< book2 (frame 3)
	OBJECT_ID_BOOKCASE_SW_THEME_5              = 62, ///< bcase (frame 2)
	OBJECT_ID_BOOKCASE_SE_THEME_5              = 63, ///< bcase (frame 3)
	OBJECT_ID_LIBRARY_BOOK_THEME_5             = 64, ///< book2 (frame 0)
	OBJECT_ID_CANDLE_THEME_5                   = 65, ///< candle2 (animated, ticksPerFrame 2)
	OBJECT_ID_BLOOD_FOUNTAIN_THEME_7           = 66, ///< bloodfnt (animated, ticksPerFrame 2)
	OBJECT_ID_DECAPITATED_BODY_N_THEME_8       = 67, ///< decap (frame 0)
	OBJECT_ID_SMALL_CHEST_TRAP                 = 68, ///< chest1 (frame 0)
	OBJECT_ID_CHEST_TRAP                       = 69, ///< chest2 (frame 0)
	OBJECT_ID_LARGE_CHEST_TRAP                 = 70, ///< chest3 (frame 0)
	OBJECT_ID_BOOK_OF_THE_BLIND                = 71, ///< book1 (frame 0)
	OBJECT_ID_BOOK_OF_BLOOD                    = 72, ///< book1 (frame 3)
	OBJECT_ID_PEDESTAL_OF_BLOOD                = 73, ///< pedistl (frame 0)
	OBJECT_ID_L3_DOOR_SE                       = 74, ///< l3doors (frame 0)
	OBJECT_ID_L3_DOOR_SW                       = 75, ///< l3doors (frame 1)
	OBJECT_ID_PURIFYING_SPRING_THEME_9         = 76, ///< pfountn (animated, ticksPerFrame 2)
	OBJECT_ID_ARMOR_STAND_THEME_10             = 77, ///< armstand (frame 0)
	OBJECT_ID_ARMOR_STAND_THEME_10_EMPTY       = 78, ///< armstand (frame 1)
	OBJECT_ID_GOAT_SHRINE_THEME_11             = 79, ///< goatshrn (animated, ticksPerFrame 2)
	OBJECT_ID_CAULDRON                         = 80, ///< cauldren (frame 0)
	OBJECT_ID_MURKY_POOL_THEME_13              = 81, ///< mfountn (animated, ticksPerFrame 2)
	OBJECT_ID_FOUNTAIN_OF_TEARS_THEME_14       = 82, ///< tfountn (animated, ticksPerFrame 2)
	OBJECT_ID_ALTAR_BOY                        = 83, ///< altboy (frame 0)
	OBJECT_ID_MAGIC_CIRCLE_PENTAGRAM           = 84, ///< mcirl (frame 0)
	OBJECT_ID_MAGIC_CIRCLE                     = 85, ///< mcirl (frame 0) [frame 2 in game]
	OBJECT_ID_LABYRINTH_BOOKS                  = 86, ///< bkslbrnt (frame 0)
	OBJECT_ID_CANDLE                           = 87, ///< candle2 (animated, ticksPerFrame 2)
	OBJECT_ID_STEEL_TOME                       = 88, ///< book1 (frame 3)
	OBJECT_ID_ARMOR_STAND_WARLORD_OF_BLOOD     = 89, ///< armstand (frame 0)
	OBJECT_ID_WEAPON_RACK_WARLORD_OF_BLOOD     = 90, ///< weapstnd (frame 0)
	OBJECT_ID_BURNING_CROSS_THEME_15           = 91, ///< burncros (animated, ticksPerFrame 0)
	OBJECT_ID_WEAPON_RACK_THEME_16             = 92, ///< weapstnd (frame 0)
	OBJECT_ID_WEAPON_RACK_THEME_16_EMPTY       = 93, ///< weapstnd (frame 1)
	OBJECT_ID_MUSHROOM_PATCH                   = 94, ///< mushptch (frame 0)
	OBJECT_ID_VILE_STAND                       = 95, ///< lzstand (frame 0)
	OBJECT_ID_SLAIN_HERO                       = 96, ///< decap (frame 1)
	OBJECT_ID_LARGE_CHEST_OGDENS_SIGN          = 97, ///< chest3 (frame 0)
	OBJECT_ID_INVALID_8                        = 98, ///< l1braz (invalid frame)
} object_id;

/// Pannel button IDs specify panel_buttons array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/control.cpp#panel_buttons
typedef enum {
	PANEL_BUTTON_ID_CHARACTER_INFORMATION = 0,
	PANEL_BUTTON_ID_QUESTS_LOG            = 1,
	PANEL_BUTTON_ID_AUTOMAP               = 2,
	PANEL_BUTTON_ID_MAIN_MENU             = 3,
	PANEL_BUTTON_ID_INVENTORY             = 4,
	PANEL_BUTTON_ID_SPELL_BOOK            = 5,
	PANEL_BUTTON_ID_SEND_MESSAGE          = 6,
	PANEL_BUTTON_ID_PLAYER_ATTACK         = 7,
} panel_button_id;

/// Player classes.
typedef enum {
	PLAYER_CLASS_WARRIOR  = 0,
	PLAYER_CLASS_ROGUE    = 1,
	PLAYER_CLASS_SORCEROR = 2,
} player_class;

/// Player modes.
///
/// PSX def:
///    typedef enum PLR_MODE {
///       PM_STAND = 0,
///       PM_WALK = 1,
///       PM_WALK2 = 2,
///       PM_WALK3 = 3,
///       PM_ATTACK = 4,
///       PM_RATTACK = 5,
///       PM_BLOCK = 6,
///       PM_GOTHIT = 7,
///       PM_DEATH = 8,
///       PM_SPELL = 9,
///       PM_NEWLVL = 10,
///       PM_QUIT = 11,
///    } PLR_MODE;
typedef enum {
	PLAYER_MODE_STANDING         =  0,
	PLAYER_MODE_WALKING_1        =  1,
	PLAYER_MODE_WALKING_2        =  2,
	PLAYER_MODE_WALKING_3        =  3,
	PLAYER_MODE_ATTACKING_MELEE  =  4,
	PLAYER_MODE_ATTACKING_RANGED =  5,
	PLAYER_MODE_BLOCKING         =  6,
	PLAYER_MODE_GETTING_HIT      =  7,
	PLAYER_MODE_DYING            =  8,
	PLAYER_MODE_CASTING_A_SPELL  =  9,
	PLAYER_MODE_CHANGING_LEVELS  = 10,
	PLAYER_MODE_QUITTING         = 11,
} player_mode;

/// Quest IDs specify quest_data array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/quests.cpp#quest_data
typedef enum {
	QUEST_ID_THE_MAGIC_ROCK           =  0,
	QUEST_ID_BLACK_MUSHROOM           =  1,
	QUEST_ID_GHARBAD_THE_WEAK         =  2,
	QUEST_ID_ZHAR_THE_MAD             =  3,
	QUEST_ID_LACHDANAN                =  4,
	QUEST_ID_DIABLO                   =  5,
	QUEST_ID_THE_BUTCHER              =  6,
	QUEST_ID_OGDENS_SIGN              =  7,
	QUEST_ID_HALLS_OF_THE_BLIND       =  8,
	QUEST_ID_VALOR                    =  9,
	QUEST_ID_ANVIL_OF_FURY            = 10,
	QUEST_ID_WARLORD_OF_BLOOD         = 11,
	QUEST_ID_THE_CURSE_OF_KING_LEORIC = 12,
	QUEST_ID_POISONED_WATER_SUPPLY    = 13,
	QUEST_ID_THE_CHAMBER_OF_BONE      = 14,
	QUEST_ID_ARCHBISHOP_LAZARUS       = 15,
	QUEST_ID_INVALID                  = -1,
} quest_id;

/// Quest levels.
///
/// PSX def:
///    typedef enum _setlevels {
///       SL_SKELKING = 1,
///       SL_BONECHAMB = 2,
///       SL_MAZE = 3,
///       SL_POISONWATER = 4,
///       SL_VILEBETRAYER = 5,
///    } _setlevels;
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/setmaps.cpp#quest_level_names
typedef enum {
	QUEST_LEVEL_NONE                    = 0,
	QUEST_LEVEL_SKELETON_KINGS_LAIR     = 1,
	QUEST_LEVEL_BONE_CHAMBER            = 2,
	QUEST_LEVEL_MAZE                    = 3,
	QUEST_LEVEL_POISONED_WATER_SUPPLY   = 4,
	QUEST_LEVEL_ARCHBISHOP_LAZARUS_LAIR = 5,
} quest_level;

/// Quest level IDs.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/quests.cpp#quest_stairway_names
typedef enum {
	QUEST_LEVEL_ID_KING_LEORICS_TOMB   = 0,
	QUEST_LEVEL_ID_THE_CHAMBER_OF_BONE = 1,
	QUEST_LEVEL_ID_MAZE                = 2,
	QUEST_LEVEL_ID_A_DARK_PASSAGE      = 3,
	QUEST_LEVEL_ID_UNHOLY_ALTAR        = 4,
} quest_level_id;

/// Quest state records the progress of the quest.
typedef enum {
	QUEST_STATE_INACTIVE = 0,
	QUEST_STATE_WAITING  = 1,
	QUEST_STATE_ACTIVE   = 2,
	QUEST_STATE_COMPLETE = 3,
} quest_state;

/// Sound effects to load.
///
/// bitflag
typedef enum {
	SFX_FLAG_STREAM   = 0x01,
	SFX_FLAG_MISC     = 0x02,
	SFX_FLAG_UI       = 0x04,
	SFX_FLAG_08       = 0x08,
	SFX_FLAG_ROGUE    = 0x10,
	SFX_FLAG_WARRIOR  = 0x20,
	SFX_FLAG_SORCEROR = 0x40,
	SFX_FLAG_LOADED   = 0x80,
} sfx_flag;

/// Sound effect IDs specify sfx_data array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/effects.cpp#sfx_data
typedef enum {
	SFX_ID_MISC_WALK1_WAV                                                                                  =   0,
	SFX_ID_MISC_WALK2_WAV                                                                                  =   1,
	SFX_ID_MISC_WALK3_WAV                                                                                  =   2,
	SFX_ID_MISC_WALK4_WAV                                                                                  =   3,
	SFX_ID_MISC_BFIRE_WAV                                                                                  =   4,
	SFX_ID_MISC_FMAG_WAV                                                                                   =   5,
	SFX_ID_MISC_TMAG_WAV                                                                                   =   6,
	SFX_ID_MISC_LGHIT_WAV                                                                                  =   7,
	SFX_ID_MISC_LGHIT1_WAV                                                                                 =   8,
	SFX_ID_MISC_SWING_WAV                                                                                  =   9,
	SFX_ID_MISC_SWING2_WAV                                                                                 =  10,
	SFX_ID_MISC_DEAD_WAV                                                                                   =  11,
	SFX_ID_MISC_QUESTDON_WAV                                                                               =  12,
	SFX_ID_ITEMS_ARMRFKD_WAV                                                                               =  13,
	SFX_ID_ITEMS_BARLFIRE_WAV                                                                              =  14,
	SFX_ID_ITEMS_BARREL_WAV                                                                                =  15,
	SFX_ID_ITEMS_BHIT_WAV                                                                                  =  16,
	SFX_ID_ITEMS_BHIT1_WAV                                                                                 =  17,
	SFX_ID_ITEMS_CHEST_WAV                                                                                 =  18,
	SFX_ID_ITEMS_DOORCLOS_WAV                                                                              =  19,
	SFX_ID_ITEMS_DOOROPEN_WAV                                                                              =  20,
	SFX_ID_ITEMS_FLIPANVL_WAV                                                                              =  21,
	SFX_ID_ITEMS_FLIPAXE_WAV                                                                               =  22,
	SFX_ID_ITEMS_FLIPBLST_WAV                                                                              =  23,
	SFX_ID_ITEMS_FLIPBODY_WAV                                                                              =  24,
	SFX_ID_ITEMS_FLIPBOOK_WAV                                                                              =  25,
	SFX_ID_ITEMS_FLIPBOW_WAV                                                                               =  26,
	SFX_ID_ITEMS_FLIPCAP_WAV                                                                               =  27,
	SFX_ID_ITEMS_FLIPHARM_WAV                                                                              =  28,
	SFX_ID_ITEMS_FLIPLARM_WAV                                                                              =  29,
	SFX_ID_ITEMS_FLIPMAG_WAV                                                                               =  30,
	SFX_ID_ITEMS_FLIPMAG1_WAV                                                                              =  31,
	SFX_ID_ITEMS_FLIPMUSH_WAV                                                                              =  32,
	SFX_ID_ITEMS_FLIPPOT_WAV                                                                               =  33,
	SFX_ID_ITEMS_FLIPRING_WAV                                                                              =  34,
	SFX_ID_ITEMS_FLIPROCK_WAV                                                                              =  35,
	SFX_ID_ITEMS_FLIPSCRL_WAV                                                                              =  36,
	SFX_ID_ITEMS_FLIPSHLD_WAV                                                                              =  37,
	SFX_ID_ITEMS_FLIPSIGN_WAV                                                                              =  38,
	SFX_ID_ITEMS_FLIPSTAF_WAV                                                                              =  39,
	SFX_ID_ITEMS_FLIPSWOR_WAV                                                                              =  40,
	SFX_ID_ITEMS_GOLD_WAV                                                                                  =  41,
	SFX_ID_ITEMS_HLMTFKD_WAV                                                                               =  42,
	SFX_ID_ITEMS_INVANVL_WAV                                                                               =  43,
	SFX_ID_ITEMS_INVAXE_WAV                                                                                =  44,
	SFX_ID_ITEMS_INVBLST_WAV                                                                               =  45,
	SFX_ID_ITEMS_INVBODY_WAV                                                                               =  46,
	SFX_ID_ITEMS_INVBOOK_WAV                                                                               =  47,
	SFX_ID_ITEMS_INVBOW_WAV                                                                                =  48,
	SFX_ID_ITEMS_INVCAP_WAV                                                                                =  49,
	SFX_ID_ITEMS_INVGRAB_WAV                                                                               =  50,
	SFX_ID_ITEMS_INVHARM_WAV                                                                               =  51,
	SFX_ID_ITEMS_INVLARM_WAV                                                                               =  52,
	SFX_ID_ITEMS_INVMUSH_WAV                                                                               =  53,
	SFX_ID_ITEMS_INVPOT_WAV                                                                                =  54,
	SFX_ID_ITEMS_INVRING_WAV                                                                               =  55,
	SFX_ID_ITEMS_INVROCK_WAV                                                                               =  56,
	SFX_ID_ITEMS_INVSCROL_WAV                                                                              =  57,
	SFX_ID_ITEMS_INVSHIEL_WAV                                                                              =  58,
	SFX_ID_ITEMS_INVSIGN_WAV                                                                               =  59,
	SFX_ID_ITEMS_INVSTAF_WAV                                                                               =  60,
	SFX_ID_ITEMS_INVSWORD_WAV                                                                              =  61,
	SFX_ID_ITEMS_LEVER_WAV                                                                                 =  62,
	SFX_ID_ITEMS_MAGIC_WAV                                                                                 =  63,
	SFX_ID_ITEMS_MAGIC1_WAV                                                                                =  64,
	SFX_ID_ITEMS_READBOOK_WAV                                                                              =  65,
	SFX_ID_ITEMS_SARC_WAV                                                                                  =  66,
	SFX_ID_ITEMS_SHIELFKD_WAV                                                                              =  67,
	SFX_ID_ITEMS_SWRDFKD_WAV                                                                               =  68,
	SFX_ID_ITEMS_TITLEMOV_WAV                                                                              =  69,
	SFX_ID_ITEMS_TITLSLCT_WAV                                                                              =  70,
	SFX_ID_MISC_BLANK_WAV                                                                                  =  71,
	SFX_ID_ITEMS_TRAP_WAV                                                                                  =  72,
	SFX_ID_MISC_CAST1_WAV                                                                                  =  73,
	SFX_ID_MISC_CAST10_WAV                                                                                 =  74,
	SFX_ID_MISC_CAST12_WAV                                                                                 =  75,
	SFX_ID_MISC_CAST2_WAV                                                                                  =  76,
	SFX_ID_MISC_CAST3_WAV                                                                                  =  77,
	SFX_ID_MISC_CAST4_WAV                                                                                  =  78,
	SFX_ID_MISC_CAST5_WAV                                                                                  =  79,
	SFX_ID_MISC_CAST6_WAV                                                                                  =  80,
	SFX_ID_MISC_CAST7_WAV                                                                                  =  81,
	SFX_ID_MISC_CAST8_WAV                                                                                  =  82,
	SFX_ID_MISC_CAST9_WAV                                                                                  =  83,
	SFX_ID_MISC_HEALING_WAV                                                                                =  84,
	SFX_ID_MISC_REPAIR_WAV                                                                                 =  85,
	SFX_ID_MISC_ACIDS1_WAV                                                                                 =  86,
	SFX_ID_MISC_ACIDS2_WAV                                                                                 =  87,
	SFX_ID_MISC_APOC_WAV                                                                                   =  88,
	SFX_ID_MISC_ARROWALL_WAV                                                                               =  89,
	SFX_ID_MISC_BLDBOIL_WAV                                                                                =  90,
	SFX_ID_MISC_BLODSTAR_WAV                                                                               =  91,
	SFX_ID_MISC_BLSIMPT_WAV                                                                                =  92,
	SFX_ID_MISC_BONESP_WAV                                                                                 =  93,
	SFX_ID_MISC_BSIMPCT_WAV                                                                                =  94,
	SFX_ID_MISC_CALDRON_WAV                                                                                =  95,
	SFX_ID_MISC_CBOLT_WAV                                                                                  =  96,
	SFX_ID_MISC_CHLTNING_WAV                                                                               =  97,
	SFX_ID_MISC_DSERP_WAV                                                                                  =  98,
	SFX_ID_MISC_ELECIMP1_WAV                                                                               =  99,
	SFX_ID_MISC_ELEMENTL_WAV                                                                               = 100,
	SFX_ID_MISC_ETHEREAL_WAV                                                                               = 101,
	SFX_ID_MISC_FBALL_WAV                                                                                  = 102,
	SFX_ID_MISC_FBOLT1_WAV                                                                                 = 103,
	SFX_ID_MISC_FBOLT2_WAV                                                                                 = 104,
	SFX_ID_MISC_FIRIMP1_WAV                                                                                = 105,
	SFX_ID_MISC_FIRIMP2_WAV                                                                                = 106,
	SFX_ID_MISC_FLAMWAVE_WAV                                                                               = 107,
	SFX_ID_MISC_FLASH_WAV                                                                                  = 108,
	SFX_ID_MISC_FOUNTAIN_WAV                                                                               = 109,
	SFX_ID_MISC_GOLUM_WAV                                                                                  = 110,
	SFX_ID_MISC_GOLUMDED_WAV                                                                               = 111,
	SFX_ID_MISC_GSHRINE_WAV                                                                                = 112,
	SFX_ID_MISC_GUARD_WAV                                                                                  = 113,
	SFX_ID_MISC_GRDLANCH_WAV                                                                               = 114,
	SFX_ID_MISC_HOLYBOLT_WAV                                                                               = 115,
	SFX_ID_MISC_HYPER_WAV                                                                                  = 116,
	SFX_ID_MISC_INFRAVIS_WAV                                                                               = 117,
	SFX_ID_MISC_INVISIBL_WAV                                                                               = 118,
	SFX_ID_MISC_INVPOT_WAV                                                                                 = 119,
	SFX_ID_MISC_LNING1_WAV                                                                                 = 120,
	SFX_ID_MISC_LTNING_WAV                                                                                 = 121,
	SFX_ID_MISC_MSHIELD_WAV                                                                                = 122,
	SFX_ID_MISC_NOVA_WAV                                                                                   = 123,
	SFX_ID_MISC_PORTAL_WAV                                                                                 = 124,
	SFX_ID_MISC_PUDDLE_WAV                                                                                 = 125,
	SFX_ID_MISC_RESUR_WAV                                                                                  = 126,
	SFX_ID_MISC_SCURSE_WAV                                                                                 = 127,
	SFX_ID_MISC_SCURIMP_WAV                                                                                = 128,
	SFX_ID_MISC_SENTINEL_WAV                                                                               = 129,
	SFX_ID_MISC_SHATTER_WAV                                                                                = 130,
	SFX_ID_MISC_SOULFIRE_WAV                                                                               = 131,
	SFX_ID_MISC_SPOUTLOP_WAV                                                                               = 132,
	SFX_ID_MISC_SPOUTSTR_WAV                                                                               = 133,
	SFX_ID_MISC_STORM_WAV                                                                                  = 134,
	SFX_ID_MISC_TRAPDIS_WAV                                                                                = 135,
	SFX_ID_MISC_TELEPORT_WAV                                                                               = 136,
	SFX_ID_MISC_VTHEFT_WAV                                                                                 = 137,
	SFX_ID_MISC_WALLLOOP_WAV                                                                               = 138,
	SFX_ID_MISC_WALLSTRT_WAV                                                                               = 139,
	SFX_ID_TOWNERS_BMAID01_WAV_I_DONT_LIKE_TO_THINK_ABOUT_HOW_THE_KING_DIED                                = 140,
	SFX_ID_TOWNERS_BMAID02_WAV_OH_MY                                                                       = 141,
	SFX_ID_TOWNERS_BMAID03_WAV_I_REMEMBER_LAZARUS_AS_BEING_A_VERY_KIND_AND_GIVING                          = 142,
	SFX_ID_TOWNERS_BMAID04_WAV_MY_GRANDMOTHER_IS_VERY_WEAK_AND_GARDA_SAYS_THAT_WE                          = 143,
	SFX_ID_TOWNERS_BMAID05_WAV                                                                             = 144,
	SFX_ID_TOWNERS_BMAID06_WAV_I_AM_AFRAID_THAT_I_HAVENT_HEARD_ANYTHING_ABOUT_THAT                         = 145,
	SFX_ID_TOWNERS_BMAID07_WAV                                                                             = 146,
	SFX_ID_TOWNERS_BMAID08_WAV_WHEN_FARNHAM_SAID_SOMETHING_ABOUT_A_BUTCHER_KILLING_PEOPLE_I                = 147,
	SFX_ID_TOWNERS_BMAID09_WAV                                                                             = 148,
	SFX_ID_TOWNERS_BMAID10_WAV_IF_YOU_HAVE_QUESTIONS_ABOUT_BLINDNESS_YOU_SHOULD_TALK_TO                    = 149,
	SFX_ID_TOWNERS_BMAID11_WAV_IVE_NEVER_HEARD_OF_A_LACHDANAN_BEFORE                                       = 150,
	SFX_ID_TOWNERS_BMAID12_WAV_GRISWOLDS_FATHER_USED_TO_TELL_SOME_OF_US_WHEN_WE                            = 151,
	SFX_ID_TOWNERS_BMAID13_WAV_THE_STORY_OF_THE_MAGIC_ARMOR_CALLED_VALOR_IS_SOMETHING                      = 152,
	SFX_ID_TOWNERS_BMAID14_WAV                                                                             = 153,
	SFX_ID_TOWNERS_BMAID15_WAV                                                                             = 154,
	SFX_ID_TOWNERS_BMAID16_WAV_IF_YOU_ARE_TO_BATTLE_SUCH_A_FIERCE_OPPONENT_MAY                             = 155,
	SFX_ID_TOWNERS_BMAID17_WAV                                                                             = 156,
	SFX_ID_TOWNERS_BMAID18_WAV_WELL_A_CARAVAN_OF_SOME_VERY_IMPORTANT_PEOPLE_DID_STOP                       = 157,
	SFX_ID_TOWNERS_BMAID19_WAV_I_THINK_OGDEN_MIGHT_HAVE_SOME_MUSHROOMS_IN_THE_STORAGE                      = 158,
	SFX_ID_TOWNERS_BMAID20_WAV_THE_BEST_PERSON_TO_ASK_ABOUT_THAT_SORT_OF_THING                             = 159,
	SFX_ID_TOWNERS_BMAID21_WAV                                                                             = 160,
	SFX_ID_TOWNERS_BMAID22_WAV                                                                             = 161,
	SFX_ID_TOWNERS_BMAID23_WAV                                                                             = 162,
	SFX_ID_TOWNERS_BMAID24_WAV                                                                             = 163,
	SFX_ID_TOWNERS_BMAID25_WAV                                                                             = 164,
	SFX_ID_TOWNERS_BMAID26_WAV                                                                             = 165,
	SFX_ID_TOWNERS_BMAID27_WAV                                                                             = 166,
	SFX_ID_TOWNERS_BMAID28_WAV                                                                             = 167,
	SFX_ID_TOWNERS_BMAID29_WAV                                                                             = 168,
	SFX_ID_TOWNERS_BMAID30_WAV                                                                             = 169,
	SFX_ID_TOWNERS_BMAID31_WAV_GOOD_DAY                                                                    = 170,
	SFX_ID_TOWNERS_BMAID32_WAV_MY_GRANDMOTHER_HAD_A_DREAM_THAT_YOU_WOULD_COME_AND                          = 171,
	SFX_ID_TOWNERS_BMAID33_WAV_THE_WOMAN_AT_THE_EDGE_OF_TOWN_IS_A_WITCH                                    = 172,
	SFX_ID_TOWNERS_BMAID34_WAV_OUR_BLACKSMITH_IS_A_POINT_OF_PRIDE_TO_THE_PEOPLE                            = 173,
	SFX_ID_TOWNERS_BMAID35_WAV_CAIN_HAS_BEEN_THE_STORYTELLER_OF_TRISTRAM_FOR_AS_LONG                       = 174,
	SFX_ID_TOWNERS_BMAID36_WAV_FARNHAM_IS_A_DRUNKARD_WHO_FILLS_HIS_BELLY_WITH_ALE                          = 175,
	SFX_ID_TOWNERS_BMAID37_WAV_PEPIN_SAVED_MY_GRANDMOTHERS_LIFE_AND_I_KNOW_THAT_I                          = 176,
	SFX_ID_TOWNERS_BMAID38_WAV                                                                             = 177,
	SFX_ID_TOWNERS_BMAID39_WAV_I_GREW_UP_WITH_WIRTS_MOTHER_CANACE                                          = 178,
	SFX_ID_TOWNERS_BMAID40_WAV_OGDEN_AND_HIS_WIFE_HAVE_TAKEN_ME_AND_MY_GRANDMOTHER                         = 179,
	SFX_ID_TOWNERS_BSMITH01_WAV_I_MADE_MANY_OF_THE_WEAPONS_AND_MOST_OF_THE                                 = 180,
	SFX_ID_TOWNERS_BSMITH02_WAV_DEMONS_STOLE_OGDENS_SIGN_YOU_SAY                                           = 181,
	SFX_ID_TOWNERS_BSMITH03_WAV_I_WAS_THERE_WHEN_LAZARUS_LED_US_INTO_THE_LABYRINTH                         = 182,
	SFX_ID_TOWNERS_BSMITH04_WAV_PEPIN_HAS_TOLD_YOU_THE_TRUTH                                               = 183,
	SFX_ID_TOWNERS_BSMITH05_WAV                                                                            = 184,
	SFX_ID_TOWNERS_BSMITH06_WAV                                                                            = 185,
	SFX_ID_TOWNERS_BSMITH07_WAV_I_KNOW_NOTHING_OF_THIS_PLACE_BUT_YOU_MAY_TRY                               = 186,
	SFX_ID_TOWNERS_BSMITH08_WAV                                                                            = 187,
	SFX_ID_TOWNERS_BSMITH09_WAV                                                                            = 188,
	SFX_ID_TOWNERS_BSMITH10_WAV_I_SAW_WHAT_FARNHAM_CALLS_THE_BUTCHER_AS_IT_SWATHED                         = 189,
	SFX_ID_TOWNERS_BSMITH11_WAV                                                                            = 190,
	SFX_ID_TOWNERS_BSMITH12_WAV_I_AM_AFRAID_THAT_I_HAVE_NEITHER_HEARD_NOR_SEEN                             = 191,
	SFX_ID_TOWNERS_BSMITH13_WAV_IF_IT_IS_ACTUALLY_LACHDANAN_THAT_YOU_HAVE_MET_THEN                         = 192,
	SFX_ID_TOWNERS_BSMITH14_WAV_THE_ARMOR_KNOWN_AS_VALOR_COULD_BE_WHAT_TIPS_THE                            = 193,
	SFX_ID_TOWNERS_BSMITH15_WAV                                                                            = 194,
	SFX_ID_TOWNERS_BSMITH16_WAV                                                                            = 195,
	SFX_ID_TOWNERS_BSMITH17_WAV_DARK_AND_WICKED_LEGENDS_SURROUNDS_THE_ONE_WARLORD_OF_BLOOD                 = 196,
	SFX_ID_TOWNERS_BSMITH18_WAV                                                                            = 197,
	SFX_ID_TOWNERS_BSMITH19_WAV_IF_ADRIA_DOESNT_HAVE_ONE_OF_THESE_YOU_CAN_BET                              = 198,
	SFX_ID_TOWNERS_BSMITH20_WAV_I_HAVE_NEVER_SEEN_A_MAP_OF_THIS_SORT_BEFORE                                = 199,
	SFX_ID_TOWNERS_BSMITH21_WAV_GREETINGS                                                                  = 200,
	SFX_ID_TOWNERS_BSMITH22_WAV_NOTHING_YET_EH                                                             = 201,
	SFX_ID_TOWNERS_BSMITH23_WAV_I_CAN_HARDLY_BELIEVE_IT                                                    = 202,
	SFX_ID_TOWNERS_BSMITH24_WAV_STAY_FOR_A_MOMENT                                                          = 203,
	SFX_ID_TOWNERS_BSMITH25_WAV_I_AM_STILL_WAITING_FOR_YOU_TO_BRING_ME_THAT                                = 204,
	SFX_ID_TOWNERS_BSMITH26_WAV_LET_ME_SEE_THAT                                                            = 205,
	SFX_ID_TOWNERS_BSMITH27_WAV                                                                            = 206,
	SFX_ID_TOWNERS_BSMITH28_WAV                                                                            = 207,
	SFX_ID_TOWNERS_BSMITH29_WAV                                                                            = 208,
	SFX_ID_TOWNERS_BSMITH30_WAV                                                                            = 209,
	SFX_ID_TOWNERS_BSMITH31_WAV                                                                            = 210,
	SFX_ID_TOWNERS_BSMITH32_WAV                                                                            = 211,
	SFX_ID_TOWNERS_BSMITH33_WAV                                                                            = 212,
	SFX_ID_TOWNERS_BSMITH34_WAV                                                                            = 213,
	SFX_ID_TOWNERS_BSMITH35_WAV                                                                            = 214,
	SFX_ID_TOWNERS_BSMITH36_WAV                                                                            = 215,
	SFX_ID_TOWNERS_BSMITH37_WAV                                                                            = 216,
	SFX_ID_TOWNERS_BSMITH38_WAV                                                                            = 217,
	SFX_ID_TOWNERS_BSMITH39_WAV                                                                            = 218,
	SFX_ID_TOWNERS_BSMITH40_WAV                                                                            = 219,
	SFX_ID_TOWNERS_BSMITH41_WAV                                                                            = 220,
	SFX_ID_TOWNERS_BSMITH42_WAV                                                                            = 221,
	SFX_ID_TOWNERS_BSMITH43_WAV                                                                            = 222,
	SFX_ID_TOWNERS_BSMITH44_WAV_WELL_WHAT_CAN_I_DO_FOR_YA                                                  = 223,
	SFX_ID_TOWNERS_BSMITH45_WAV_IF_YOURE_LOOKING_FOR_A_GOOD_WEAPON_LET_ME_SHOW                             = 224,
	SFX_ID_TOWNERS_BSMITH46_WAV_THE_AXE                                                                    = 225,
	SFX_ID_TOWNERS_BSMITH47_WAV_LOOK_AT_THAT_EDGE_THAT_BALANCE                                             = 226,
	SFX_ID_TOWNERS_BSMITH48_WAV_YOUR_WEAPONS_AND_ARMOR_WILL_SHOW_THE_SIGNS_OF_YOUR                         = 227,
	SFX_ID_TOWNERS_BSMITH49_WAV_WHILE_I_HAVE_TO_PRACTICALLY_SMUGGLE_IN_THE_METALS_AND                      = 228,
	SFX_ID_TOWNERS_BSMITH50_WAV_GILLIAN_IS_A_NICE_LASS                                                     = 229,
	SFX_ID_TOWNERS_BSMITH51_WAV_SOMETIMES_I_THINK_THAT_CAIN_TALKS_TOO_MUCH_BUT_I                           = 230,
	SFX_ID_TOWNERS_BSMITH52_WAV_I_WAS_WITH_FARNHAM_THAT_NIGHT_THAT_LAZARUS_LED_US                          = 231,
	SFX_ID_TOWNERS_BSMITH53_WAV_A_GOOD_MAN_WHO_PUTS_THE_NEEDS_OF_OTHERS_ABOVE                              = 232,
	SFX_ID_TOWNERS_BSMITH54_WAV                                                                            = 233,
	SFX_ID_TOWNERS_BSMITH55_WAV_THAT_LAD_IS_GOING_TO_GET_HIMSELF_INTO_SERIOUS_TROUBLE                      = 234,
	SFX_ID_TOWNERS_BSMITH56_WAV_THE_INNKEEPER_HAS_LITTLE_BUSINESS_AND_NO_REAL_WAY_OF                       = 235,
	SFX_ID_TOWNERS_COW1_WAV                                                                                = 236,
	SFX_ID_TOWNERS_COW2_WAV                                                                                = 237,
	SFX_ID_TOWNERS_DEADGUY2_WAV                                                                            = 238,
	SFX_ID_TOWNERS_DRUNK01_WAV_I_DONT_CARE_ABOUT_THAT                                                      = 239,
	SFX_ID_TOWNERS_DRUNK02_WAV_YOU_KNOW_WHAT_I_THINK                                                       = 240,
	SFX_ID_TOWNERS_DRUNK03_WAV_THEY_STAB_THEN_BITE_THEN_THEYRE_ALL_AROUND_YOU                              = 241,
	SFX_ID_TOWNERS_DRUNK04_WAV_YOU_DRINK_WATER                                                             = 242,
	SFX_ID_TOWNERS_DRUNK05_WAV                                                                             = 243,
	SFX_ID_TOWNERS_DRUNK06_WAV                                                                             = 244,
	SFX_ID_TOWNERS_DRUNK07_WAV_OKAY_SO_LISTEN                                                              = 245,
	SFX_ID_TOWNERS_DRUNK08_WAV                                                                             = 246,
	SFX_ID_TOWNERS_DRUNK09_WAV                                                                             = 247,
	SFX_ID_TOWNERS_DRUNK10_WAV_BIG                                                                         = 248,
	SFX_ID_TOWNERS_DRUNK11_WAV                                                                             = 249,
	SFX_ID_TOWNERS_DRUNK12_WAV_LOOK_HERE                                                                   = 250,
	SFX_ID_TOWNERS_DRUNK13_WAV_LACHDANAN_IS_DEAD                                                           = 251,
	SFX_ID_TOWNERS_DRUNK14_WAV_GRISWOLD_CANT_SELL_HIS_ANVIL                                                = 252,
	SFX_ID_TOWNERS_DRUNK15_WAV_ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                                            = 253,
	SFX_ID_TOWNERS_DRUNK16_WAV                                                                             = 254,
	SFX_ID_TOWNERS_DRUNK17_WAV_ALWAYS_YOU_GOTTA_TALK_ABOUT_BLOOD                                           = 255,
	SFX_ID_TOWNERS_DRUNK18_WAV                                                                             = 256,
	SFX_ID_TOWNERS_DRUNK19_WAV_I_USED_TO_HAVE_A_NICE_RING                                                  = 257,
	SFX_ID_TOWNERS_DRUNK20_WAV_OGDEN_MIXES_A_MEAN_BLACK_MUSHROOM_BUT_I_GET_SICK                            = 258,
	SFX_ID_TOWNERS_DRUNK21_WAV_LISTEN_HERE_COME_CLOSE                                                      = 259,
	SFX_ID_TOWNERS_DRUNK22_WAV                                                                             = 260,
	SFX_ID_TOWNERS_DRUNK23_WAV_I_WANNA_TELL_YA_SUMTHIN_CAUSE_I_KNOW_ALL_ABOUT                              = 261,
	SFX_ID_TOWNERS_DRUNK24_WAV_NO_ONE_EVER_LIS                                                             = 262,
	SFX_ID_TOWNERS_DRUNK25_WAV_I_KNOW_YOU_GOTS_YOUR_OWN_IDEAS_AND_I_KNOW                                   = 263,
	SFX_ID_TOWNERS_DRUNK26_WAV_IF_I_WAS_YOU                                                                = 264,
	SFX_ID_TOWNERS_DRUNK27_WAV_CANT_A_FELLA_DRINK_IN_PEACE                                                 = 265,
	SFX_ID_TOWNERS_DRUNK28_WAV_THE_GAL_WHO_BRINGS_THE_DRINKS                                               = 266,
	SFX_ID_TOWNERS_DRUNK29_WAV_WHY_DONT_THAT_OLD_CRONE_DO_SOMETHIN_FOR_A_CHANGE                            = 267,
	SFX_ID_TOWNERS_DRUNK30_WAV_CAIN_ISNT_WHAT_HE_SAYS_HE_IS                                                = 268,
	SFX_ID_TOWNERS_DRUNK31_WAV_GRISWOLD                                                                    = 269,
	SFX_ID_TOWNERS_DRUNK32_WAV_HEHEHE_I_LIKE_PEPIN                                                         = 270,
	SFX_ID_TOWNERS_DRUNK33_WAV                                                                             = 271,
	SFX_ID_TOWNERS_DRUNK34_WAV_WIRT_IS_A_KID_WITH_MORE_PROBLEMS_THAN_EVEN_ME                               = 272,
	SFX_ID_TOWNERS_DRUNK35_WAV_OGDEN_IS_THE_BEST_MAN_IN_TOWN                                               = 273,
	SFX_ID_TOWNERS_HEALER01_WAV_THE_LOSS_OF_HIS_SON_WAS_TOO_MUCH_FOR_KING                                  = 274,
	SFX_ID_TOWNERS_HEALER02_WAV_MY_GOODNESS_DEMONS_RUNNING_ABOUT_THE_VILLAGE_AT_NIGHT_PILLAGING            = 275,
	SFX_ID_TOWNERS_HEALER03_WAV_I_WAS_SHOCKED_WHEN_I_HEARD_OF_WHAT_THE_TOWNSPEOPLE                         = 276,
	SFX_ID_TOWNERS_HEALER04_WAV                                                                            = 277,
	SFX_ID_TOWNERS_HEALER05_WAV_THIS_SOUNDS_LIKE_A_VERY_DANGEROUS_PLACE                                    = 278,
	SFX_ID_TOWNERS_HEALER06_WAV                                                                            = 279,
	SFX_ID_TOWNERS_HEALER07_WAV                                                                            = 280,
	SFX_ID_TOWNERS_HEALER08_WAV_BY_THE_LIGHT_I_KNOW_OF_THIS_VILE_DEMON                                     = 281,
	SFX_ID_TOWNERS_HEALER09_WAV                                                                            = 282,
	SFX_ID_TOWNERS_HEALER10_WAV_THIS_DOES_SEEM_FAMILIAR_SOMEHOW                                            = 283,
	SFX_ID_TOWNERS_HEALER11_WAV_A_GOLDEN_ELIXIR_YOU_SAY                                                    = 284,
	SFX_ID_TOWNERS_HEALER12_WAV_IF_YOU_HAD_BEEN_LOOKING_FOR_INFORMATION_ON_THE_PESTLE                      = 285,
	SFX_ID_TOWNERS_HEALER13_WAV_HMM                                                                        = 286,
	SFX_ID_TOWNERS_HEALER14_WAV                                                                            = 287,
	SFX_ID_TOWNERS_HEALER15_WAV                                                                            = 288,
	SFX_ID_TOWNERS_HEALER16_WAV_CAIN_WOULD_BE_ABLE_TO_TELL_YOU_MUCH_MORE_ABOUT                             = 289,
	SFX_ID_TOWNERS_HEALER17_WAV                                                                            = 290,
	SFX_ID_TOWNERS_HEALER18_WAV_I_DONT_KNOW_WHAT_IT_IS_THAT_THEY_THOUGHT_THEY                              = 291,
	SFX_ID_TOWNERS_HEALER19_WAV_I_CANT_MAKE_MUCH_OF_THE_WRITING_ON_THIS_MAP                                = 292,
	SFX_ID_TOWNERS_HEALER20_WAV_IM_GLAD_I_CAUGHT_UP_TO_YOU_IN_TIME                                         = 293,
	SFX_ID_TOWNERS_HEALER21_WAV_PLEASE_YOU_MUST_HURRY                                                      = 294,
	SFX_ID_TOWNERS_HEALER22_WAV_WHATS_THAT_YOU_SAY                                                         = 295,
	SFX_ID_TOWNERS_HEALER23_WAV                                                                            = 296,
	SFX_ID_TOWNERS_HEALER24_WAV                                                                            = 297,
	SFX_ID_TOWNERS_HEALER25_WAV                                                                            = 298,
	SFX_ID_TOWNERS_HEALER26_WAV_THE_WITCH_TOLD_ME_THAT_YOU_WERE_SEARCHING_FOR_THE                          = 299,
	SFX_ID_TOWNERS_HEALER27_WAV_EXCELLENT_THIS_IS_JUST_WHAT_I_HAD_IN_MIND                                  = 300,
	SFX_ID_TOWNERS_HEALER28_WAV                                                                            = 301,
	SFX_ID_TOWNERS_HEALER29_WAV                                                                            = 302,
	SFX_ID_TOWNERS_HEALER30_WAV                                                                            = 303,
	SFX_ID_TOWNERS_HEALER31_WAV                                                                            = 304,
	SFX_ID_TOWNERS_HEALER32_WAV                                                                            = 305,
	SFX_ID_TOWNERS_HEALER33_WAV                                                                            = 306,
	SFX_ID_TOWNERS_HEALER34_WAV                                                                            = 307,
	SFX_ID_TOWNERS_HEALER35_WAV                                                                            = 308,
	SFX_ID_TOWNERS_HEALER36_WAV                                                                            = 309,
	SFX_ID_TOWNERS_HEALER37_WAV_WHAT_AILS_YOU_MY_FRIEND                                                    = 310,
	SFX_ID_TOWNERS_HEALER38_WAV_I_HAVE_MADE_A_VERY_INTERESTING_DISCOVERY                                   = 311,
	SFX_ID_TOWNERS_HEALER39_WAV_BEFORE_IT_WAS_TAKEN_OVER_BY_WELL_WHATEVER_LURKS_BELOW                      = 312,
	SFX_ID_TOWNERS_HEALER40_WAV_GRISWOLD_KNOWS_AS_MUCH_ABOUT_THE_ART_OF_WAR_AS                             = 313,
	SFX_ID_TOWNERS_HEALER41_WAV_CAIN_IS_A_TRUE_FRIEND_AND_A_WISE_SAGE                                      = 314,
	SFX_ID_TOWNERS_HEALER42_WAV_EVEN_MY_SKILLS_HAVE_BEEN_UNABLE_TO_FULLY_HEAL_FARNHAM                      = 315,
	SFX_ID_TOWNERS_HEALER43_WAV_WHILE_I_USE_SOME_LIMITED_FORMS_OF_MAGIC_TO_CREATE                          = 316,
	SFX_ID_TOWNERS_HEALER44_WAV                                                                            = 317,
	SFX_ID_TOWNERS_HEALER45_WAV_POOR_WIRT                                                                  = 318,
	SFX_ID_TOWNERS_HEALER46_WAV_I_REALLY_DONT_UNDERSTAND_WHY_OGDEN_STAYS_HERE_IN_TRISTRAM                  = 319,
	SFX_ID_TOWNERS_HEALER47_WAV_OGDENS_BARMAID_IS_A_SWEET_GIRL                                             = 320,
	SFX_ID_TOWNERS_PEGBOY01_WAV_LOOK_IM_RUNNING_A_BUSINESS_HERE                                            = 321,
	SFX_ID_TOWNERS_PEGBOY02_WAV_WHAT                                                                       = 322,
	SFX_ID_TOWNERS_PEGBOY03_WAV_YES_THE_RIGHTEOUS_LAZARUS_WHO_WAS_SOOO_EFFECTIVE_AGAINST_THOSE             = 323,
	SFX_ID_TOWNERS_PEGBOY04_WAV_FOR_ONCE_IM_WITH_YOU                                                       = 324,
	SFX_ID_TOWNERS_PEGBOY05_WAV                                                                            = 325,
	SFX_ID_TOWNERS_PEGBOY06_WAV                                                                            = 326,
	SFX_ID_TOWNERS_PEGBOY07_WAV_A_VAST_AND_MYSTERIOUS_TREASURE_YOU_SAY                                     = 327,
	SFX_ID_TOWNERS_PEGBOY08_WAV                                                                            = 328,
	SFX_ID_TOWNERS_PEGBOY09_WAV                                                                            = 329,
	SFX_ID_TOWNERS_PEGBOY10_WAV_I_KNOW_MORE_THAN_YOUD_THINK_ABOUT_THAT_GRISLY_FIEND                        = 330,
	SFX_ID_TOWNERS_PEGBOY11_WAV_LETS_SEE_AM_I_SELLING_YOU_SOMETHING                                        = 331,
	SFX_ID_TOWNERS_PEGBOY12_WAV_WAIT_LET_ME_GUESS                                                          = 332,
	SFX_ID_TOWNERS_PEGBOY13_WAV_IF_YOU_WERE_TO_FIND_THIS_ARTIFACT_FOR_GRISWOLD_IT                          = 333,
	SFX_ID_TOWNERS_PEGBOY14_WAV_YOU_INTEND_TO_FIND_THE_ARMOR_KNOWN_AS_VALOR                                = 334,
	SFX_ID_TOWNERS_PEGBOY15_WAV                                                                            = 335,
	SFX_ID_TOWNERS_PEGBOY16_WAV                                                                            = 336,
	SFX_ID_TOWNERS_PEGBOY17_WAV_I_HAVENT_EVER_DEALT_WITH_THIS_WARLORD_YOU_SPEAK_OF                         = 337,
	SFX_ID_TOWNERS_PEGBOY18_WAV_IF_ANYONE_CAN_MAKE_SOMETHING_OUT_OF_THAT_ROCK_GRISWOLD                     = 338,
	SFX_ID_TOWNERS_PEGBOY19_WAV_I_DONT_HAVE_ANY_MUSHROOMS_OF_ANY_SIZE_OR_COLOR                             = 339,
	SFX_ID_TOWNERS_PEGBOY20_WAV_IVE_BEEN_LOOKING_FOR_A_MAP_BUT_THAT_CERTAINLY_ISNT                         = 340,
	SFX_ID_TOWNERS_PEGBOY21_WAV                                                                            = 341,
	SFX_ID_TOWNERS_PEGBOY22_WAV                                                                            = 342,
	SFX_ID_TOWNERS_PEGBOY23_WAV                                                                            = 343,
	SFX_ID_TOWNERS_PEGBOY24_WAV                                                                            = 344,
	SFX_ID_TOWNERS_PEGBOY25_WAV                                                                            = 345,
	SFX_ID_TOWNERS_PEGBOY26_WAV                                                                            = 346,
	SFX_ID_TOWNERS_PEGBOY27_WAV                                                                            = 347,
	SFX_ID_TOWNERS_PEGBOY28_WAV                                                                            = 348,
	SFX_ID_TOWNERS_PEGBOY29_WAV                                                                            = 349,
	SFX_ID_TOWNERS_PEGBOY30_WAV                                                                            = 350,
	SFX_ID_TOWNERS_PEGBOY31_WAV                                                                            = 351,
	SFX_ID_TOWNERS_PEGBOY32_WAV_PSSST                                                                      = 352,
	SFX_ID_TOWNERS_PEGBOY33_WAV_NOT_EVERYONE_IN_TRISTRAM_HAS_A_USE                                         = 353,
	SFX_ID_TOWNERS_PEGBOY34_WAV_DONT_TRUST_EVERYTHING_THE_DRUNK_SAYS                                       = 354,
	SFX_ID_TOWNERS_PEGBOY35_WAV_IN_CASE_YOU_HAVENT_NOTICED_I_DONT_BUY_ANYTHING_FROM                        = 355,
	SFX_ID_TOWNERS_PEGBOY36_WAV_I_GUESS_I_OWE_THE_BLACKSMITH_MY_LIFE                                       = 356,
	SFX_ID_TOWNERS_PEGBOY37_WAV_IF_I_WERE_A_FEW_YEARS_OLDER_I_WOULD_SHOWER                                 = 357,
	SFX_ID_TOWNERS_PEGBOY38_WAV_CAIN_KNOWS_TOO_MUCH                                                        = 358,
	SFX_ID_TOWNERS_PEGBOY39_WAV_FARNHAM                                                                    = 359,
	SFX_ID_TOWNERS_PEGBOY40_WAV_AS_LONG_AS_YOU_DONT_NEED_ANYTHING_REATTACHED_OLD_PEPIN                     = 360,
	SFX_ID_TOWNERS_PEGBOY41_WAV                                                                            = 361,
	SFX_ID_TOWNERS_PEGBOY42_WAV_ADRIA_TRULY_BOTHERS_ME                                                     = 362,
	SFX_ID_TOWNERS_PEGBOY43_WAV_OGDEN_IS_A_FOOL_FOR_STAYING_HERE                                           = 363,
	SFX_ID_TOWNERS_PRIEST00_WAV                                                                            = 364,
	SFX_ID_TOWNERS_PRIEST01_WAV                                                                            = 365,
	SFX_ID_TOWNERS_PRIEST02_WAV                                                                            = 366,
	SFX_ID_TOWNERS_PRIEST03_WAV                                                                            = 367,
	SFX_ID_TOWNERS_PRIEST04_WAV                                                                            = 368,
	SFX_ID_TOWNERS_PRIEST05_WAV                                                                            = 369,
	SFX_ID_TOWNERS_PRIEST06_WAV                                                                            = 370,
	SFX_ID_TOWNERS_PRIEST07_WAV                                                                            = 371,
	SFX_ID_TOWNERS_STORYT00_WAV                                                                            = 372,
	SFX_ID_TOWNERS_STORYT01_WAV_AHH_THE_STORY_OF_OUR_KING_IS_IT                                            = 373,
	SFX_ID_TOWNERS_STORYT02_WAV_I_SEE_THAT_THIS_STRANGE_BEHAVIOR_PUZZLES_YOU_AS_WELL                       = 374,
	SFX_ID_TOWNERS_STORYT03_WAV                                                                            = 375,
	SFX_ID_TOWNERS_STORYT04_WAV_HMM_I_DONT_KNOW_WHAT_I_CAN_REALLY_TELL_YOU                                 = 376,
	SFX_ID_TOWNERS_STORYT05_WAV                                                                            = 377,
	SFX_ID_TOWNERS_STORYT06_WAV                                                                            = 378,
	SFX_ID_TOWNERS_STORYT07_WAV_A_BOOK_THAT_SPEAKS_OF_A_CHAMBER_OF_HUMAN_BONES                             = 379,
	SFX_ID_TOWNERS_STORYT08_WAV                                                                            = 380,
	SFX_ID_TOWNERS_STORYT09_WAV                                                                            = 381,
	SFX_ID_TOWNERS_STORYT10_WAV_IT_SEEMS_THAT_THE_ARCHBISHOP_LAZARUS_GOADED_MANY_OF_THE                    = 382,
	SFX_ID_TOWNERS_STORYT11_WAV                                                                            = 383,
	SFX_ID_TOWNERS_STORYT12_WAV_YOU_RECITE_AN_INTERESTING_RHYME_WRITTEN_IN_A_STYLE_THAT                    = 384,
	SFX_ID_TOWNERS_STORYT13_WAV_YOU_CLAIM_TO_HAVE_SPOKEN_WITH_LACHDANAN                                    = 385,
	SFX_ID_TOWNERS_STORYT14_WAV_GRISWOLD_SPEAKS_OF_THE_ANVIL_OF_FURY                                       = 386,
	SFX_ID_TOWNERS_STORYT15_WAV_THE_GATEWAY_OF_BLOOD_AND_THE_HALLS_OF_FIRE_ARE                             = 387,
	SFX_ID_TOWNERS_STORYT16_WAV                                                                            = 388,
	SFX_ID_TOWNERS_STORYT17_WAV                                                                            = 389,
	SFX_ID_TOWNERS_STORYT18_WAV_I_KNOW_OF_ONLY_ONE_LEGEND_THAT_SPEAKS_OF_SUCH                              = 390,
	SFX_ID_TOWNERS_STORYT19_WAV                                                                            = 391,
	SFX_ID_TOWNERS_STORYT20_WAV_GRISWOLD_SPEAKS_OF_THE_HEAVEN_STONE_THAT_WAS_DESTINED_FOR                  = 392,
	SFX_ID_TOWNERS_STORYT21_WAV_THE_WITCH_ADRIA_SEEKS_A_BLACK_MUSHROOM                                     = 393,
	SFX_ID_TOWNERS_STORYT22_WAV_SO_THE_LEGEND_OF_THE_MAP_IS_REAL                                           = 394,
	SFX_ID_TOWNERS_STORYT23_WAV_OUR_TIME_IS_RUNNING_SHORT                                                  = 395,
	SFX_ID_TOWNERS_STORYT24_WAV_I_AM_SURE_THAT_YOU_TRIED_YOUR_BEST_BUT_I                                   = 396,
	SFX_ID_TOWNERS_STORYT25_WAV_HELLO_MY_FRIEND                                                            = 397,
	SFX_ID_TOWNERS_STORYT26_WAV_WHILE_YOU_ARE_VENTURING_DEEPER_INTO_THE_LABYRINTH_YOU_MAY                  = 398,
	SFX_ID_TOWNERS_STORYT27_WAV_I_KNOW_OF_MANY_MYTHS_AND_LEGENDS_THAT_MAY_CONTAIN                          = 399,
	SFX_ID_TOWNERS_STORYT28_WAV_GRISWOLD                                                                   = 400,
	SFX_ID_TOWNERS_STORYT29_WAV_OGDEN_HAS_OWNED_AND_RUN_THE_RISING_SUN_INN_AND                             = 401,
	SFX_ID_TOWNERS_STORYT30_WAV_POOR_FARNHAM                                                               = 402,
	SFX_ID_TOWNERS_STORYT31_WAV_THE_WITCH_ADRIA_IS_AN_ANOMALY_HERE_IN_TRISTRAM                             = 403,
	SFX_ID_TOWNERS_STORYT32_WAV                                                                            = 404,
	SFX_ID_TOWNERS_STORYT33_WAV_THE_STORY_OF_WIRT_IS_A_FRIGHTENING_AND_TRAGIC_ONE                          = 405,
	SFX_ID_TOWNERS_STORYT34_WAV_AH_PEPIN                                                                   = 406,
	SFX_ID_TOWNERS_STORYT35_WAV_GILLIAN_IS_A_FINE_WOMAN                                                    = 407,
	SFX_ID_TOWNERS_STORYT36_WAV_THIS_DOES_NOT_BODE_WELL_FOR_IT_CONFIRMS_MY_DARKEST                         = 408,
	SFX_ID_TOWNERS_STORYT37_WAV_YOU_MUST_HURRY_AND_RESCUE_ALBRECHT_FROM_THE_HANDS_OF                       = 409,
	SFX_ID_TOWNERS_STORYT38_WAV_YOUR_STORY_IS_QUITE_GRIM_MY_FRIEND                                         = 410,
	SFX_ID_TOWNERS_TAVOWN00_WAV_THANK_GOODNESS_YOUVE_RETURNED                                              = 411,
	SFX_ID_TOWNERS_TAVOWN01_WAV_LAZARUS_WAS_THE_ARCHBISHOP_WHO_LED_MANY_OF_THE_TOWNSPEOPLE                 = 412,
	SFX_ID_TOWNERS_TAVOWN02_WAV_I_HAVE_ALWAYS_TRIED_TO_KEEP_A_LARGE_SUPPLY_OF                              = 413,
	SFX_ID_TOWNERS_TAVOWN03_WAV                                                                            = 414,
	SFX_ID_TOWNERS_TAVOWN04_WAV                                                                            = 415,
	SFX_ID_TOWNERS_TAVOWN05_WAV_I_AM_AFRAID_THAT_I_DONT_KNOW_ANYTHING_ABOUT_THAT                           = 416,
	SFX_ID_TOWNERS_TAVOWN06_WAV                                                                            = 417,
	SFX_ID_TOWNERS_TAVOWN07_WAV                                                                            = 418,
	SFX_ID_TOWNERS_TAVOWN08_WAV_YES_FARNHAM_HAS_MUMBLED_SOMETHING_ABOUT_A_HULKING_BRUTE_WHO                = 419,
	SFX_ID_TOWNERS_TAVOWN09_WAV                                                                            = 420,
	SFX_ID_TOWNERS_TAVOWN10_WAV_I_NEVER_MUCH_CARED_FOR_POETRY                                              = 421,
	SFX_ID_TOWNERS_TAVOWN11_WAV_YOU_SPEAK_OF_A_BRAVE_WARRIOR_LONG_DEAD                                     = 422,
	SFX_ID_TOWNERS_TAVOWN12_WAV_DONT_YOU_THINK_THAT_GRISWOLD_WOULD_BE_A_BETTER_PERSON                      = 423,
	SFX_ID_TOWNERS_TAVOWN13_WAV_EVERY_CHILD_HEARS_THE_STORY_OF_THE_WARRIOR_ARKAINE_AND                     = 424,
	SFX_ID_TOWNERS_TAVOWN14_WAV                                                                            = 425,
	SFX_ID_TOWNERS_TAVOWN15_WAV                                                                            = 426,
	SFX_ID_TOWNERS_TAVOWN16_WAV_I_AM_AFRAID_THAT_I_HAVENT_HEARD_ANYTHING_ABOUT_SUCH                        = 427,
	SFX_ID_TOWNERS_TAVOWN17_WAV                                                                            = 428,
	SFX_ID_TOWNERS_TAVOWN18_WAV_THE_CARAVAN_STOPPED_HERE_TO_TAKE_ON_SOME_SUPPLIES_FOR                      = 429,
	SFX_ID_TOWNERS_TAVOWN19_WAV_LET_ME_JUST_SAY_THIS                                                       = 430,
	SFX_ID_TOWNERS_TAVOWN20_WAV_IF_THE_WITCH_CANT_HELP_YOU_AND_SUGGESTS_YOU_SEE                            = 431,
	SFX_ID_TOWNERS_TAVOWN21_WAV_THE_VILLAGE_NEEDS_YOUR_HELP_GOOD_MASTER                                    = 432,
	SFX_ID_TOWNERS_TAVOWN22_WAV_AS_I_TOLD_YOU_GOOD_MASTER_THE_KING_WAS_ENTOMBED                            = 433,
	SFX_ID_TOWNERS_TAVOWN23_WAV_THE_CURSE_OF_OUR_KING_HAS_PASSED_BUT_I_FEAR                                = 434,
	SFX_ID_TOWNERS_TAVOWN24_WAV_MASTER_I_HAVE_A_STRANGE_EXPERIENCE_TO_RELATE                               = 435,
	SFX_ID_TOWNERS_TAVOWN25_WAV_OH_YOU_DIDNT_HAVE_TO_BRING_BACK_MY_SIGN_BUT                                = 436,
	SFX_ID_TOWNERS_TAVOWN26_WAV                                                                            = 437,
	SFX_ID_TOWNERS_TAVOWN27_WAV                                                                            = 438,
	SFX_ID_TOWNERS_TAVOWN28_WAV                                                                            = 439,
	SFX_ID_TOWNERS_TAVOWN29_WAV                                                                            = 440,
	SFX_ID_TOWNERS_TAVOWN30_WAV                                                                            = 441,
	SFX_ID_TOWNERS_TAVOWN31_WAV                                                                            = 442,
	SFX_ID_TOWNERS_TAVOWN32_WAV                                                                            = 443,
	SFX_ID_TOWNERS_TAVOWN33_WAV                                                                            = 444,
	SFX_ID_TOWNERS_TAVOWN34_WAV                                                                            = 445,
	SFX_ID_TOWNERS_TAVOWN35_WAV                                                                            = 446,
	SFX_ID_TOWNERS_TAVOWN36_WAV_GREETINGS_GOOD_MASTER                                                      = 447,
	SFX_ID_TOWNERS_TAVOWN37_WAV_MANY_ADVENTURERS_HAVE_GRACED_THE_TABLES_OF_MY_TAVERN_AND                   = 448,
	SFX_ID_TOWNERS_TAVOWN38_WAV_GRISWOLD_THE_BLACKSMITH_IS_EXTREMELY_KNOWLEDGEABLE_ABOUT_WEAPONS_AND_ARMOR = 449,
	SFX_ID_TOWNERS_TAVOWN39_WAV_FARNHAM_SPENDS_FAR_TOO_MUCH_TIME_HERE_DROWNING_HIS_SORROWS                 = 450,
	SFX_ID_TOWNERS_TAVOWN40_WAV_ADRIA_IS_WISE_BEYOND_HER_YEARS_BUT_I_MUST_ADMIT                            = 451,
	SFX_ID_TOWNERS_TAVOWN41_WAV_IF_YOU_WANT_TO_KNOW_MORE_ABOUT_THE_HISTORY_OF                              = 452,
	SFX_ID_TOWNERS_TAVOWN42_WAV                                                                            = 453,
	SFX_ID_TOWNERS_TAVOWN43_WAV_WIRT_IS_A_RAPSCALLION_AND_A_LITTLE_SCOUNDREL                               = 454,
	SFX_ID_TOWNERS_TAVOWN44_WAV_PEPIN_IS_A_GOOD_MAN                                                        = 455,
	SFX_ID_TOWNERS_TAVOWN45_WAV_GILLIAN_MY_BARMAID                                                         = 456,
	SFX_ID_TOWNERS_WITCH01_WAV_THE_DEAD_WHO_WALK_AMONG_THE_LIVING_FOLLOW_THE_CURSED                        = 457,
	SFX_ID_TOWNERS_WITCH02_WAV_NO_MORTAL_CAN_TRULY_UNDERSTAND_THE_MIND_OF_THE_DEMON                        = 458,
	SFX_ID_TOWNERS_WITCH03_WAV_I_DID_NOT_KNOW_THIS_LAZARUS_OF_WHOM_YOU_SPEAK                               = 459,
	SFX_ID_TOWNERS_WITCH04_WAV_THE_PEOPLE_OF_TRISTRAM_WILL_DIE_IF_YOU_CANNOT_RESTORE                       = 460,
	SFX_ID_TOWNERS_WITCH05_WAV                                                                             = 461,
	SFX_ID_TOWNERS_WITCH06_WAV                                                                             = 462,
	SFX_ID_TOWNERS_WITCH07_WAV_YOU_WILL_BECOME_AN_ETERNAL_SERVANT_OF_THE_DARK_LORDS                        = 463,
	SFX_ID_TOWNERS_WITCH08_WAV                                                                             = 464,
	SFX_ID_TOWNERS_WITCH09_WAV                                                                             = 465,
	SFX_ID_TOWNERS_WITCH10_WAV_THE_BUTCHER_IS_A_SADISTIC_CREATURE_THAT_DELIGHTS_IN_THE                     = 466,
	SFX_ID_TOWNERS_WITCH11_WAV                                                                             = 467,
	SFX_ID_TOWNERS_WITCH12_WAV_THIS_IS_A_PLACE_OF_GREAT_ANGUISH_AND_TERROR_AND                             = 468,
	SFX_ID_TOWNERS_WITCH13_WAV_YOU_MAY_MEET_PEOPLE_WHO_ARE_TRAPPED_WITHIN_THE_LABYRINTH                    = 469,
	SFX_ID_TOWNERS_WITCH14_WAV_THERE_ARE_MANY_ARTIFACTS_WITHIN_THE_LABYRINTH_THAT_HOLD_POWERS              = 470,
	SFX_ID_TOWNERS_WITCH15_WAV_SHOULD_YOU_FIND_THESE_STONES_OF_BLOOD_USE_THEM_CAREFULLY                    = 471,
	SFX_ID_TOWNERS_WITCH16_WAV                                                                             = 472,
	SFX_ID_TOWNERS_WITCH17_WAV                                                                             = 473,
	SFX_ID_TOWNERS_WITCH18_WAV_HIS_PROWESS_WITH_THE_BLADE_IS_AWESOME_AND_HE_HAS                            = 474,
	SFX_ID_TOWNERS_WITCH19_WAV                                                                             = 475,
	SFX_ID_TOWNERS_WITCH20_WAV_THE_HEAVEN_STONE_IS_VERY_POWERFUL_AND_WERE_IT_ANY                           = 476,
	SFX_ID_TOWNERS_WITCH21_WAV_OH_IM_AFRAID_THIS_DOES_NOT_BODE_WELL_AT_ALL                                 = 477,
	SFX_ID_TOWNERS_WITCH22_WAV_WHAT_DO_WE_HAVE_HERE                                                        = 478,
	SFX_ID_TOWNERS_WITCH23_WAV_ITS_A_BIG_BLACK_MUSHROOM_THAT_I_NEED                                        = 479,
	SFX_ID_TOWNERS_WITCH24_WAV_YES_THIS_WILL_BE_PERFECT_FOR_A_BREW_THAT_I                                  = 480,
	SFX_ID_TOWNERS_WITCH25_WAV_WHY_HAVE_YOU_BROUGHT_THAT_HERE                                              = 481,
	SFX_ID_TOWNERS_WITCH26_WAV_WHAT                                                                        = 482,
	SFX_ID_TOWNERS_WITCH27_WAV                                                                             = 483,
	SFX_ID_TOWNERS_WITCH28_WAV                                                                             = 484,
	SFX_ID_TOWNERS_WITCH29_WAV                                                                             = 485,
	SFX_ID_TOWNERS_WITCH30_WAV                                                                             = 486,
	SFX_ID_TOWNERS_WITCH31_WAV                                                                             = 487,
	SFX_ID_TOWNERS_WITCH32_WAV                                                                             = 488,
	SFX_ID_TOWNERS_WITCH33_WAV                                                                             = 489,
	SFX_ID_TOWNERS_WITCH34_WAV                                                                             = 490,
	SFX_ID_TOWNERS_WITCH35_WAV                                                                             = 491,
	SFX_ID_TOWNERS_WITCH36_WAV                                                                             = 492,
	SFX_ID_TOWNERS_WITCH37_WAV                                                                             = 493,
	SFX_ID_TOWNERS_WITCH38_WAV_I_SENSE_A_SOUL_IN_SEARCH_OF_ANSWERS                                         = 494,
	SFX_ID_TOWNERS_WITCH39_WAV_WISDOM_IS_EARNED_NOT_GIVEN                                                  = 495,
	SFX_ID_TOWNERS_WITCH40_WAV_THE_GREATEST_POWER_IS_OFTEN_THE_SHORTEST_LIVED                              = 496,
	SFX_ID_TOWNERS_WITCH41_WAV_THOUGH_THE_HEAT_OF_THE_SUN_IS_BEYOND_MEASURE_THE                            = 497,
	SFX_ID_TOWNERS_WITCH42_WAV_THE_SUM_OF_OUR_KNOWLEDGE_IS_IN_THE_SUM_OF                                   = 498,
	SFX_ID_TOWNERS_WITCH43_WAV_TO_A_MAN_WHO_ONLY_KNOWS_IRON_THERE_IS_NO                                    = 499,
	SFX_ID_TOWNERS_WITCH44_WAV_CORRUPTION_HAS_THE_STRENGTH_OF_DECEIT_BUT_INNOCENCE_HOLDS_THE               = 500,
	SFX_ID_TOWNERS_WITCH45_WAV_A_CHEST_OPENED_IN_DARKNESS_HOLDS_NO_GREATER_TREASURE_THAN                   = 501,
	SFX_ID_TOWNERS_WITCH46_WAV_THE_HIGHER_YOU_PLACE_YOUR_FAITH_IN_ONE_MAN_THE                              = 502,
	SFX_ID_TOWNERS_WITCH47_WAV_THE_HAND_THE_HEART_AND_THE_MIND_CAN_PERFORM_MIRACLES                        = 503,
	SFX_ID_TOWNERS_WITCH48_WAV                                                                             = 504,
	SFX_ID_TOWNERS_WITCH49_WAV_THERE_IS_MUCH_ABOUT_THE_FUTURE_WE_CANNOT_SEE_BUT                            = 505,
	SFX_ID_TOWNERS_WITCH50_WAV_EARTHEN_WALLS_AND_THATCHED_CANOPY_DO_NOT_A_HOME_CREATE                      = 506,
	SFX_ID_TOWNERS_WOUND01_WAV_PLEASE_LISTEN_TO_ME                                                         = 507,
	SFX_ID_SORCEROR_MAGE01_WAV_BEYOND_THE_HALL_OF_HEROES_LIES_THE_CHAMBER_OF_BONE                          = 508,
	SFX_ID_SORCEROR_MAGE02_WAV                                                                             = 509,
	SFX_ID_SORCEROR_MAGE03_WAV                                                                             = 510,
	SFX_ID_SORCEROR_MAGE04_WAV                                                                             = 511,
	SFX_ID_SORCEROR_MAGE05_WAV                                                                             = 512,
	SFX_ID_SORCEROR_MAGE06_WAV                                                                             = 513,
	SFX_ID_SORCEROR_MAGE07_WAV                                                                             = 514,
	SFX_ID_SORCEROR_MAGE08_WAV                                                                             = 515,
	SFX_ID_SORCEROR_MAGE09_WAV                                                                             = 516,
	SFX_ID_SORCEROR_MAGE10_WAV                                                                             = 517,
	SFX_ID_SORCEROR_MAGE11_WAV_I_CAN_SEE_WHAT_YOU_SEE_NOT                                                  = 518,
	SFX_ID_SORCEROR_MAGE12_WAV_THE_ARMORIES_OF_HELL_ARE_HOME_TO_THE_WARLORD_OF                             = 519,
	SFX_ID_SORCEROR_MAGE13_WAV                                                                             = 520,
	SFX_ID_SORCEROR_MAGE14_WAV                                                                             = 521,
	SFX_ID_SORCEROR_MAGE15_WAV                                                                             = 522,
	SFX_ID_SORCEROR_MAGE16_WAV                                                                             = 523,
	SFX_ID_SORCEROR_MAGE17_WAV                                                                             = 524,
	SFX_ID_SORCEROR_MAGE18_WAV                                                                             = 525,
	SFX_ID_SORCEROR_MAGE19_WAV                                                                             = 526,
	SFX_ID_SORCEROR_MAGE20_WAV                                                                             = 527,
	SFX_ID_SORCEROR_MAGE21_WAV                                                                             = 528,
	SFX_ID_SORCEROR_MAGE22_WAV                                                                             = 529,
	SFX_ID_SORCEROR_MAGE23_WAV                                                                             = 530,
	SFX_ID_SORCEROR_MAGE24_WAV                                                                             = 531,
	SFX_ID_SORCEROR_MAGE25_WAV                                                                             = 532,
	SFX_ID_SORCEROR_MAGE26_WAV                                                                             = 533,
	SFX_ID_SORCEROR_MAGE27_WAV                                                                             = 534,
	SFX_ID_SORCEROR_MAGE28_WAV                                                                             = 535,
	SFX_ID_SORCEROR_MAGE29_WAV                                                                             = 536,
	SFX_ID_SORCEROR_MAGE30_WAV                                                                             = 537,
	SFX_ID_SORCEROR_MAGE31_WAV                                                                             = 538,
	SFX_ID_SORCEROR_MAGE32_WAV                                                                             = 539,
	SFX_ID_SORCEROR_MAGE33_WAV                                                                             = 540,
	SFX_ID_SORCEROR_MAGE34_WAV                                                                             = 541,
	SFX_ID_SORCEROR_MAGE35_WAV                                                                             = 542,
	SFX_ID_SORCEROR_MAGE36_WAV                                                                             = 543,
	SFX_ID_SORCEROR_MAGE37_WAV                                                                             = 544,
	SFX_ID_SORCEROR_MAGE38_WAV                                                                             = 545,
	SFX_ID_SORCEROR_MAGE39_WAV                                                                             = 546,
	SFX_ID_SORCEROR_MAGE40_WAV                                                                             = 547,
	SFX_ID_SORCEROR_MAGE41_WAV                                                                             = 548,
	SFX_ID_SORCEROR_MAGE42_WAV                                                                             = 549,
	SFX_ID_SORCEROR_MAGE43_WAV                                                                             = 550,
	SFX_ID_SORCEROR_MAGE44_WAV                                                                             = 551,
	SFX_ID_SORCEROR_MAGE45_WAV                                                                             = 552,
	SFX_ID_SORCEROR_MAGE46_WAV                                                                             = 553,
	SFX_ID_SORCEROR_MAGE47_WAV                                                                             = 554,
	SFX_ID_SORCEROR_MAGE48_WAV                                                                             = 555,
	SFX_ID_SORCEROR_MAGE49_WAV                                                                             = 556,
	SFX_ID_SORCEROR_MAGE50_WAV                                                                             = 557,
	SFX_ID_SORCEROR_MAGE51_WAV                                                                             = 558,
	SFX_ID_SORCEROR_MAGE52_WAV                                                                             = 559,
	SFX_ID_SORCEROR_MAGE53_WAV                                                                             = 560,
	SFX_ID_SORCEROR_MAGE54_WAV                                                                             = 561,
	SFX_ID_SORCEROR_MAGE55_WAV                                                                             = 562,
	SFX_ID_SORCEROR_MAGE56_WAV                                                                             = 563,
	SFX_ID_SORCEROR_MAGE57_WAV                                                                             = 564,
	SFX_ID_SORCEROR_MAGE58_WAV                                                                             = 565,
	SFX_ID_SORCEROR_MAGE59_WAV                                                                             = 566,
	SFX_ID_SORCEROR_MAGE60_WAV                                                                             = 567,
	SFX_ID_SORCEROR_MAGE61_WAV                                                                             = 568,
	SFX_ID_SORCEROR_MAGE62_WAV                                                                             = 569,
	SFX_ID_SORCEROR_MAGE63_WAV                                                                             = 570,
	SFX_ID_SORCEROR_MAGE64_WAV                                                                             = 571,
	SFX_ID_SORCEROR_MAGE65_WAV                                                                             = 572,
	SFX_ID_SORCEROR_MAGE66_WAV                                                                             = 573,
	SFX_ID_SORCEROR_MAGE67_WAV                                                                             = 574,
	SFX_ID_SORCEROR_MAGE68_WAV                                                                             = 575,
	SFX_ID_SORCEROR_MAGE69_WAV                                                                             = 576,
	SFX_ID_SORCEROR_MAGE69B_WAV                                                                            = 577,
	SFX_ID_SORCEROR_MAGE70_WAV                                                                             = 578,
	SFX_ID_SORCEROR_MAGE71_WAV                                                                             = 579,
	SFX_ID_SORCEROR_MAGE72_WAV                                                                             = 580,
	SFX_ID_SORCEROR_MAGE73_WAV                                                                             = 581,
	SFX_ID_SORCEROR_MAGE74_WAV                                                                             = 582,
	SFX_ID_SORCEROR_MAGE75_WAV                                                                             = 583,
	SFX_ID_SORCEROR_MAGE76_WAV                                                                             = 584,
	SFX_ID_SORCEROR_MAGE77_WAV                                                                             = 585,
	SFX_ID_SORCEROR_MAGE78_WAV                                                                             = 586,
	SFX_ID_SORCEROR_MAGE79_WAV                                                                             = 587,
	SFX_ID_SORCEROR_MAGE80_WAV                                                                             = 588,
	SFX_ID_SORCEROR_MAGE81_WAV                                                                             = 589,
	SFX_ID_SORCEROR_MAGE82_WAV                                                                             = 590,
	SFX_ID_SORCEROR_MAGE83_WAV                                                                             = 591,
	SFX_ID_SORCEROR_MAGE84_WAV                                                                             = 592,
	SFX_ID_SORCEROR_MAGE85_WAV                                                                             = 593,
	SFX_ID_SORCEROR_MAGE86_WAV                                                                             = 594,
	SFX_ID_SORCEROR_MAGE87_WAV                                                                             = 595,
	SFX_ID_SORCEROR_MAGE88_WAV                                                                             = 596,
	SFX_ID_SORCEROR_MAGE89_WAV                                                                             = 597,
	SFX_ID_SORCEROR_MAGE90_WAV                                                                             = 598,
	SFX_ID_SORCEROR_MAGE91_WAV                                                                             = 599,
	SFX_ID_SORCEROR_MAGE92_WAV                                                                             = 600,
	SFX_ID_SORCEROR_MAGE93_WAV                                                                             = 601,
	SFX_ID_SORCEROR_MAGE94_WAV                                                                             = 602,
	SFX_ID_SORCEROR_MAGE95_WAV                                                                             = 603,
	SFX_ID_SORCEROR_MAGE96_WAV                                                                             = 604,
	SFX_ID_SORCEROR_MAGE97_WAV                                                                             = 605,
	SFX_ID_SORCEROR_MAGE98_WAV                                                                             = 606,
	SFX_ID_SORCEROR_MAGE99_WAV                                                                             = 607,
	SFX_ID_SORCEROR_MAGE100_WAV                                                                            = 608,
	SFX_ID_SORCEROR_MAGE101_WAV                                                                            = 609,
	SFX_ID_SORCEROR_MAGE102_WAV                                                                            = 610,
	SFX_ID_ROGUE_ROGUE01_WAV_BEYOND_THE_HALL_OF_HEROES_LIES_THE_CHAMBER_OF_BONE                            = 611,
	SFX_ID_ROGUE_ROGUE02_WAV                                                                               = 612,
	SFX_ID_ROGUE_ROGUE03_WAV                                                                               = 613,
	SFX_ID_ROGUE_ROGUE04_WAV                                                                               = 614,
	SFX_ID_ROGUE_ROGUE05_WAV                                                                               = 615,
	SFX_ID_ROGUE_ROGUE06_WAV                                                                               = 616,
	SFX_ID_ROGUE_ROGUE07_WAV                                                                               = 617,
	SFX_ID_ROGUE_ROGUE08_WAV                                                                               = 618,
	SFX_ID_ROGUE_ROGUE09_WAV                                                                               = 619,
	SFX_ID_ROGUE_ROGUE10_WAV                                                                               = 620,
	SFX_ID_ROGUE_ROGUE11_WAV_I_CAN_SEE_WHAT_YOU_SEE_NOT                                                    = 621,
	SFX_ID_ROGUE_ROGUE12_WAV_THE_ARMORIES_OF_HELL_ARE_HOME_TO_THE_WARLORD_OF                               = 622,
	SFX_ID_ROGUE_ROGUE13_WAV                                                                               = 623,
	SFX_ID_ROGUE_ROGUE14_WAV                                                                               = 624,
	SFX_ID_ROGUE_ROGUE15_WAV                                                                               = 625,
	SFX_ID_ROGUE_ROGUE16_WAV                                                                               = 626,
	SFX_ID_ROGUE_ROGUE17_WAV                                                                               = 627,
	SFX_ID_ROGUE_ROGUE18_WAV                                                                               = 628,
	SFX_ID_ROGUE_ROGUE19_WAV                                                                               = 629,
	SFX_ID_ROGUE_ROGUE20_WAV                                                                               = 630,
	SFX_ID_ROGUE_ROGUE21_WAV                                                                               = 631,
	SFX_ID_ROGUE_ROGUE22_WAV                                                                               = 632,
	SFX_ID_ROGUE_ROGUE23_WAV                                                                               = 633,
	SFX_ID_ROGUE_ROGUE24_WAV                                                                               = 634,
	SFX_ID_ROGUE_ROGUE25_WAV                                                                               = 635,
	SFX_ID_ROGUE_ROGUE26_WAV                                                                               = 636,
	SFX_ID_ROGUE_ROGUE27_WAV                                                                               = 637,
	SFX_ID_ROGUE_ROGUE28_WAV                                                                               = 638,
	SFX_ID_ROGUE_ROGUE29_WAV                                                                               = 639,
	SFX_ID_ROGUE_ROGUE30_WAV                                                                               = 640,
	SFX_ID_ROGUE_ROGUE31_WAV                                                                               = 641,
	SFX_ID_ROGUE_ROGUE32_WAV                                                                               = 642,
	SFX_ID_ROGUE_ROGUE33_WAV                                                                               = 643,
	SFX_ID_ROGUE_ROGUE34_WAV                                                                               = 644,
	SFX_ID_ROGUE_ROGUE35_WAV                                                                               = 645,
	SFX_ID_ROGUE_ROGUE36_WAV                                                                               = 646,
	SFX_ID_ROGUE_ROGUE37_WAV                                                                               = 647,
	SFX_ID_ROGUE_ROGUE38_WAV                                                                               = 648,
	SFX_ID_ROGUE_ROGUE39_WAV                                                                               = 649,
	SFX_ID_ROGUE_ROGUE40_WAV                                                                               = 650,
	SFX_ID_ROGUE_ROGUE41_WAV                                                                               = 651,
	SFX_ID_ROGUE_ROGUE42_WAV                                                                               = 652,
	SFX_ID_ROGUE_ROGUE43_WAV                                                                               = 653,
	SFX_ID_ROGUE_ROGUE44_WAV                                                                               = 654,
	SFX_ID_ROGUE_ROGUE45_WAV                                                                               = 655,
	SFX_ID_ROGUE_ROGUE46_WAV                                                                               = 656,
	SFX_ID_ROGUE_ROGUE47_WAV                                                                               = 657,
	SFX_ID_ROGUE_ROGUE48_WAV                                                                               = 658,
	SFX_ID_ROGUE_ROGUE49_WAV                                                                               = 659,
	SFX_ID_ROGUE_ROGUE50_WAV                                                                               = 660,
	SFX_ID_ROGUE_ROGUE51_WAV                                                                               = 661,
	SFX_ID_ROGUE_ROGUE52_WAV                                                                               = 662,
	SFX_ID_ROGUE_ROGUE53_WAV                                                                               = 663,
	SFX_ID_ROGUE_ROGUE54_WAV                                                                               = 664,
	SFX_ID_ROGUE_ROGUE55_WAV                                                                               = 665,
	SFX_ID_ROGUE_ROGUE56_WAV                                                                               = 666,
	SFX_ID_ROGUE_ROGUE57_WAV                                                                               = 667,
	SFX_ID_ROGUE_ROGUE58_WAV                                                                               = 668,
	SFX_ID_ROGUE_ROGUE59_WAV                                                                               = 669,
	SFX_ID_ROGUE_ROGUE60_WAV                                                                               = 670,
	SFX_ID_ROGUE_ROGUE61_WAV                                                                               = 671,
	SFX_ID_ROGUE_ROGUE62_WAV                                                                               = 672,
	SFX_ID_ROGUE_ROGUE63_WAV                                                                               = 673,
	SFX_ID_ROGUE_ROGUE64_WAV                                                                               = 674,
	SFX_ID_ROGUE_ROGUE65_WAV                                                                               = 675,
	SFX_ID_ROGUE_ROGUE66_WAV                                                                               = 676,
	SFX_ID_ROGUE_ROGUE67_WAV                                                                               = 677,
	SFX_ID_ROGUE_ROGUE68_WAV                                                                               = 678,
	SFX_ID_ROGUE_ROGUE69_WAV                                                                               = 679,
	SFX_ID_ROGUE_ROGUE69B_WAV                                                                              = 680,
	SFX_ID_ROGUE_ROGUE70_WAV                                                                               = 681,
	SFX_ID_ROGUE_ROGUE71_WAV                                                                               = 682,
	SFX_ID_ROGUE_ROGUE72_WAV                                                                               = 683,
	SFX_ID_ROGUE_ROGUE73_WAV                                                                               = 684,
	SFX_ID_ROGUE_ROGUE74_WAV                                                                               = 685,
	SFX_ID_ROGUE_ROGUE75_WAV                                                                               = 686,
	SFX_ID_ROGUE_ROGUE76_WAV                                                                               = 687,
	SFX_ID_ROGUE_ROGUE77_WAV                                                                               = 688,
	SFX_ID_ROGUE_ROGUE78_WAV                                                                               = 689,
	SFX_ID_ROGUE_ROGUE79_WAV                                                                               = 690,
	SFX_ID_ROGUE_ROGUE80_WAV                                                                               = 691,
	SFX_ID_ROGUE_ROGUE81_WAV                                                                               = 692,
	SFX_ID_ROGUE_ROGUE82_WAV                                                                               = 693,
	SFX_ID_ROGUE_ROGUE83_WAV                                                                               = 694,
	SFX_ID_ROGUE_ROGUE84_WAV                                                                               = 695,
	SFX_ID_ROGUE_ROGUE85_WAV                                                                               = 696,
	SFX_ID_ROGUE_ROGUE86_WAV                                                                               = 697,
	SFX_ID_ROGUE_ROGUE87_WAV                                                                               = 698,
	SFX_ID_ROGUE_ROGUE88_WAV                                                                               = 699,
	SFX_ID_ROGUE_ROGUE89_WAV                                                                               = 700,
	SFX_ID_ROGUE_ROGUE90_WAV                                                                               = 701,
	SFX_ID_ROGUE_ROGUE91_WAV                                                                               = 702,
	SFX_ID_ROGUE_ROGUE92_WAV                                                                               = 703,
	SFX_ID_ROGUE_ROGUE93_WAV                                                                               = 704,
	SFX_ID_ROGUE_ROGUE94_WAV                                                                               = 705,
	SFX_ID_ROGUE_ROGUE95_WAV                                                                               = 706,
	SFX_ID_ROGUE_ROGUE96_WAV                                                                               = 707,
	SFX_ID_ROGUE_ROGUE97_WAV                                                                               = 708,
	SFX_ID_ROGUE_ROGUE98_WAV                                                                               = 709,
	SFX_ID_ROGUE_ROGUE99_WAV                                                                               = 710,
	SFX_ID_ROGUE_ROGUE100_WAV                                                                              = 711,
	SFX_ID_ROGUE_ROGUE101_WAV                                                                              = 712,
	SFX_ID_ROGUE_ROGUE102_WAV                                                                              = 713,
	SFX_ID_WARRIOR_WARIOR01_WAV_BEYOND_THE_HALL_OF_HEROES_LIES_THE_CHAMBER_OF_BONE                         = 714,
	SFX_ID_WARRIOR_WARIOR02_WAV                                                                            = 715,
	SFX_ID_WARRIOR_WARIOR03_WAV                                                                            = 716,
	SFX_ID_WARRIOR_WARIOR04_WAV                                                                            = 717,
	SFX_ID_WARRIOR_WARIOR05_WAV                                                                            = 718,
	SFX_ID_WARRIOR_WARIOR06_WAV                                                                            = 719,
	SFX_ID_WARRIOR_WARIOR07_WAV                                                                            = 720,
	SFX_ID_WARRIOR_WARIOR08_WAV                                                                            = 721,
	SFX_ID_WARRIOR_WARIOR09_WAV                                                                            = 722,
	SFX_ID_WARRIOR_WARIOR10_WAV                                                                            = 723,
	SFX_ID_WARRIOR_WARIOR11_WAV_I_CAN_SEE_WHAT_YOU_SEE_NOT                                                 = 724,
	SFX_ID_WARRIOR_WARIOR12_WAV_THE_ARMORIES_OF_HELL_ARE_HOME_TO_THE_WARLORD_OF                            = 725,
	SFX_ID_WARRIOR_WARIOR13_WAV                                                                            = 726,
	SFX_ID_WARRIOR_WARIOR14_WAV                                                                            = 727,
	SFX_ID_WARRIOR_WARIO14B_WAV                                                                            = 728,
	SFX_ID_WARRIOR_WARIO14C_WAV                                                                            = 729,
	SFX_ID_WARRIOR_WARIOR15_WAV                                                                            = 730,
	SFX_ID_WARRIOR_WARIO15B_WAV                                                                            = 731,
	SFX_ID_WARRIOR_WARIO15C_WAV                                                                            = 732,
	SFX_ID_WARRIOR_WARIOR16_WAV                                                                            = 733,
	SFX_ID_WARRIOR_WARIO16B_WAV                                                                            = 734,
	SFX_ID_WARRIOR_WARIO16C_WAV                                                                            = 735,
	SFX_ID_WARRIOR_WARIOR17_WAV                                                                            = 736,
	SFX_ID_WARRIOR_WARIOR18_WAV                                                                            = 737,
	SFX_ID_WARRIOR_WARIOR19_WAV                                                                            = 738,
	SFX_ID_WARRIOR_WARIOR20_WAV                                                                            = 739,
	SFX_ID_WARRIOR_WARIOR21_WAV                                                                            = 740,
	SFX_ID_WARRIOR_WARIOR22_WAV                                                                            = 741,
	SFX_ID_WARRIOR_WARIOR23_WAV                                                                            = 742,
	SFX_ID_WARRIOR_WARIOR24_WAV                                                                            = 743,
	SFX_ID_WARRIOR_WARIOR25_WAV                                                                            = 744,
	SFX_ID_WARRIOR_WARIOR26_WAV                                                                            = 745,
	SFX_ID_WARRIOR_WARIOR27_WAV                                                                            = 746,
	SFX_ID_WARRIOR_WARIOR28_WAV                                                                            = 747,
	SFX_ID_WARRIOR_WARIOR29_WAV                                                                            = 748,
	SFX_ID_WARRIOR_WARIOR30_WAV                                                                            = 749,
	SFX_ID_WARRIOR_WARIOR31_WAV                                                                            = 750,
	SFX_ID_WARRIOR_WARIOR32_WAV                                                                            = 751,
	SFX_ID_WARRIOR_WARIOR33_WAV                                                                            = 752,
	SFX_ID_WARRIOR_WARIOR34_WAV                                                                            = 753,
	SFX_ID_WARRIOR_WARIOR35_WAV                                                                            = 754,
	SFX_ID_WARRIOR_WARIOR36_WAV                                                                            = 755,
	SFX_ID_WARRIOR_WARIOR37_WAV                                                                            = 756,
	SFX_ID_WARRIOR_WARIOR38_WAV                                                                            = 757,
	SFX_ID_WARRIOR_WARIOR39_WAV                                                                            = 758,
	SFX_ID_WARRIOR_WARIOR40_WAV                                                                            = 759,
	SFX_ID_WARRIOR_WARIOR41_WAV                                                                            = 760,
	SFX_ID_WARRIOR_WARIOR42_WAV                                                                            = 761,
	SFX_ID_WARRIOR_WARIOR43_WAV                                                                            = 762,
	SFX_ID_WARRIOR_WARIOR44_WAV                                                                            = 763,
	SFX_ID_WARRIOR_WARIOR45_WAV                                                                            = 764,
	SFX_ID_WARRIOR_WARIOR46_WAV                                                                            = 765,
	SFX_ID_WARRIOR_WARIOR47_WAV                                                                            = 766,
	SFX_ID_WARRIOR_WARIOR48_WAV                                                                            = 767,
	SFX_ID_WARRIOR_WARIOR49_WAV                                                                            = 768,
	SFX_ID_WARRIOR_WARIOR50_WAV                                                                            = 769,
	SFX_ID_WARRIOR_WARIOR51_WAV                                                                            = 770,
	SFX_ID_WARRIOR_WARIOR52_WAV                                                                            = 771,
	SFX_ID_WARRIOR_WARIOR53_WAV                                                                            = 772,
	SFX_ID_WARRIOR_WARIOR54_WAV                                                                            = 773,
	SFX_ID_WARRIOR_WARIOR55_WAV                                                                            = 774,
	SFX_ID_WARRIOR_WARIOR56_WAV                                                                            = 775,
	SFX_ID_WARRIOR_WARIOR57_WAV                                                                            = 776,
	SFX_ID_WARRIOR_WARIOR58_WAV                                                                            = 777,
	SFX_ID_WARRIOR_WARIOR59_WAV                                                                            = 778,
	SFX_ID_WARRIOR_WARIOR60_WAV                                                                            = 779,
	SFX_ID_WARRIOR_WARIOR61_WAV                                                                            = 780,
	SFX_ID_WARRIOR_WARIOR62_WAV                                                                            = 781,
	SFX_ID_WARRIOR_WARIOR63_WAV                                                                            = 782,
	SFX_ID_WARRIOR_WARIOR64_WAV                                                                            = 783,
	SFX_ID_WARRIOR_WARIOR65_WAV                                                                            = 784,
	SFX_ID_WARRIOR_WARIOR66_WAV                                                                            = 785,
	SFX_ID_WARRIOR_WARIOR67_WAV                                                                            = 786,
	SFX_ID_WARRIOR_WARIOR68_WAV                                                                            = 787,
	SFX_ID_WARRIOR_WARIOR69_WAV                                                                            = 788,
	SFX_ID_WARRIOR_WARIO69B_WAV                                                                            = 789,
	SFX_ID_WARRIOR_WARIOR70_WAV                                                                            = 790,
	SFX_ID_WARRIOR_WARIOR71_WAV                                                                            = 791,
	SFX_ID_WARRIOR_WARIOR72_WAV                                                                            = 792,
	SFX_ID_WARRIOR_WARIOR73_WAV                                                                            = 793,
	SFX_ID_WARRIOR_WARIOR74_WAV                                                                            = 794,
	SFX_ID_WARRIOR_WARIOR75_WAV                                                                            = 795,
	SFX_ID_WARRIOR_WARIOR76_WAV                                                                            = 796,
	SFX_ID_WARRIOR_WARIOR77_WAV                                                                            = 797,
	SFX_ID_WARRIOR_WARIOR78_WAV                                                                            = 798,
	SFX_ID_WARRIOR_WARIOR79_WAV                                                                            = 799,
	SFX_ID_WARRIOR_WARIOR80_WAV                                                                            = 800,
	SFX_ID_WARRIOR_WARIOR81_WAV                                                                            = 801,
	SFX_ID_WARRIOR_WARIOR82_WAV                                                                            = 802,
	SFX_ID_WARRIOR_WARIOR83_WAV                                                                            = 803,
	SFX_ID_WARRIOR_WARIOR84_WAV                                                                            = 804,
	SFX_ID_WARRIOR_WARIOR85_WAV                                                                            = 805,
	SFX_ID_WARRIOR_WARIOR86_WAV                                                                            = 806,
	SFX_ID_WARRIOR_WARIOR87_WAV                                                                            = 807,
	SFX_ID_WARRIOR_WARIOR88_WAV                                                                            = 808,
	SFX_ID_WARRIOR_WARIOR89_WAV                                                                            = 809,
	SFX_ID_WARRIOR_WARIOR90_WAV                                                                            = 810,
	SFX_ID_WARRIOR_WARIOR91_WAV                                                                            = 811,
	SFX_ID_WARRIOR_WARIOR92_WAV                                                                            = 812,
	SFX_ID_WARRIOR_WARIOR93_WAV                                                                            = 813,
	SFX_ID_WARRIOR_WARIOR94_WAV                                                                            = 814,
	SFX_ID_WARRIOR_WARIOR95_WAV                                                                            = 815,
	SFX_ID_WARRIOR_WARIO95B_WAV                                                                            = 816,
	SFX_ID_WARRIOR_WARIO95C_WAV                                                                            = 817,
	SFX_ID_WARRIOR_WARIO95D_WAV                                                                            = 818,
	SFX_ID_WARRIOR_WARIO95E_WAV                                                                            = 819,
	SFX_ID_WARRIOR_WARIO95F_WAV                                                                            = 820,
	SFX_ID_WARRIOR_WARIO96B_WAV                                                                            = 821,
	SFX_ID_WARRIOR_WARIO97_WAV                                                                             = 822,
	SFX_ID_WARRIOR_WARIO98_WAV                                                                             = 823,
	SFX_ID_WARRIOR_WARIOR99_WAV                                                                            = 824,
	SFX_ID_WARRIOR_WARIO100_WAV                                                                            = 825,
	SFX_ID_WARRIOR_WARIO101_WAV                                                                            = 826,
	SFX_ID_WARRIOR_WARIO102_WAV                                                                            = 827,
	SFX_ID_NARRATOR_NAR01_WAV_TAKE_HEED_AND_BEAR_WITNESS_TO_THE_TRUTHS_THAT_LIE                            = 828,
	SFX_ID_NARRATOR_NAR02_WAV_TAKE_HEED_AND_BEAR_WITNESS_TO_THE_TRUTHS_THAT_LIE                            = 829,
	SFX_ID_NARRATOR_NAR03_WAV_TAKE_HEED_AND_BEAR_WITNESS_TO_THE_TRUTHS_THAT_LIE                            = 830,
	SFX_ID_NARRATOR_NAR04_WAV_SO_IT_CAME_TO_BE_THAT_THERE_WAS_A_GREAT                                      = 831,
	SFX_ID_NARRATOR_NAR05_WAV_MANY_DEMONS_TRAVELED_TO_THE_MORTAL_REALM_IN_SEARCH_OF                        = 832,
	SFX_ID_NARRATOR_NAR06_WAV_SO_IT_CAME_TO_BE_THAT_THE_THREE_PRIME_EVILS                                  = 833,
	SFX_ID_NARRATOR_NAR07_WAV_ALL_PRAISES_TO_DIABLO                                                        = 834,
	SFX_ID_NARRATOR_NAR08_WAV_GLORY_AND_APPROBATION_TO_DIABLO                                              = 835,
	SFX_ID_NARRATOR_NAR09_WAV_HAIL_AND_SACRIFICE_TO_DIABLO                                                 = 836,
	SFX_ID_MISC_LVL16INT_WAV                                                                               = 837,
	SFX_ID_MONSTERS_BUTCHER_WAV                                                                            = 838,
	SFX_ID_MONSTERS_GARBUD01_WAV_PLEEEEASE_NO_HURT                                                         = 839,
	SFX_ID_MONSTERS_GARBUD02_WAV_SOMETHING_FOR_YOU_I_AM_MAKING                                             = 840,
	SFX_ID_MONSTERS_GARBUD03_WAV_NOTHING_YET                                                               = 841,
	SFX_ID_MONSTERS_GARBUD04_WAV_THIS_TOO_GOOD_FOR_YOU                                                     = 842,
	SFX_ID_MONSTERS_IZUAL01_WAV                                                                            = 843,
	SFX_ID_MONSTERS_LACH01_WAV_PLEASE_DONT_KILL_ME_JUST_HEAR_ME_OUT                                        = 844,
	SFX_ID_MONSTERS_LACH02_WAV_YOU_HAVE_NOT_FOUND_THE_GOLDEN_ELIXIR                                        = 845,
	SFX_ID_MONSTERS_LACH03_WAV_YOU_HAVE_SAVED_MY_SOUL_FROM_DAMNATION_AND_FOR_THAT                          = 846,
	SFX_ID_MONSTERS_LAZ01_WAV_ABANDON_YOUR_FOOLISH_QUEST                                                   = 847,
	SFX_ID_MONSTERS_LAZ02_WAV                                                                              = 848,
	SFX_ID_MONSTERS_SKING01_WAV_THE_WARMTH_OF_LIFE_HAS_ENTERED_MY_TOMB                                     = 849,
	SFX_ID_MONSTERS_SNOT01_WAV_HEY                                                                         = 850,
	SFX_ID_MONSTERS_SNOT02_WAV_YOU_KILL_UGLIES_GET_BANNER                                                  = 851,
	SFX_ID_MONSTERS_SNOT03_WAV_YOU_GIVE                                                                    = 852,
	SFX_ID_MONSTERS_WARLRD01_WAV_MY_BLADE_SINGS_FOR_YOUR_BLOOD_MORTAL_AND_BY_MY                            = 853,
	SFX_ID_MONSTERS_WLOCK01_WAV                                                                            = 854,
	SFX_ID_MONSTERS_ZHAR01_WAV_WHAT                                                                        = 855,
	SFX_ID_MONSTERS_ZHAR02_WAV_ARRRRGH                                                                     = 856,
	SFX_ID_MONSTERS_DIABLOD_WAV                                                                            = 857,
} sfx_id;

/// Speech IDs specify speech_data array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/rdata/talk.cpp#speech_data
typedef enum {
	SPEECH_ID_TOWNERS_STORYT01_WAV_AHH_THE_STORY_OF_OUR_KING_IS_IT                                            =   0,
	SPEECH_ID_TOWNERS_TAVOWN21_WAV_THE_VILLAGE_NEEDS_YOUR_HELP_GOOD_MASTER                                    =   1,
	SPEECH_ID_TOWNERS_TAVOWN22_WAV_AS_I_TOLD_YOU_GOOD_MASTER_THE_KING_WAS_ENTOMBED                            =   2,
	SPEECH_ID_TOWNERS_TAVOWN23_WAV_THE_CURSE_OF_OUR_KING_HAS_PASSED_BUT_I_FEAR                                =   3,
	SPEECH_ID_TOWNERS_HEALER01_WAV_THE_LOSS_OF_HIS_SON_WAS_TOO_MUCH_FOR_KING                                  =   4,
	SPEECH_ID_TOWNERS_BMAID01_WAV_I_DONT_LIKE_TO_THINK_ABOUT_HOW_THE_KING_DIED                                =   5,
	SPEECH_ID_TOWNERS_BSMITH01_WAV_I_MADE_MANY_OF_THE_WEAPONS_AND_MOST_OF_THE                                 =   6,
	SPEECH_ID_TOWNERS_DRUNK01_WAV_I_DONT_CARE_ABOUT_THAT                                                      =   7,
	SPEECH_ID_TOWNERS_WITCH01_WAV_THE_DEAD_WHO_WALK_AMONG_THE_LIVING_FOLLOW_THE_CURSED                        =   8,
	SPEECH_ID_TOWNERS_PEGBOY01_WAV_LOOK_IM_RUNNING_A_BUSINESS_HERE                                            =   9,
	SPEECH_ID_MONSTERS_SKING01_WAV_THE_WARMTH_OF_LIFE_HAS_ENTERED_MY_TOMB                                     =  10,
	SPEECH_ID_TOWNERS_STORYT02_WAV_I_SEE_THAT_THIS_STRANGE_BEHAVIOR_PUZZLES_YOU_AS_WELL                       =  11,
	SPEECH_ID_TOWNERS_TAVOWN24_WAV_MASTER_I_HAVE_A_STRANGE_EXPERIENCE_TO_RELATE                               =  12,
	SPEECH_ID_TOWNERS_TAVOWN25_WAV_OH_YOU_DIDNT_HAVE_TO_BRING_BACK_MY_SIGN_BUT                                =  13,
	SPEECH_ID_TOWNERS_HEALER02_WAV_MY_GOODNESS_DEMONS_RUNNING_ABOUT_THE_VILLAGE_AT_NIGHT_PILLAGING            =  14,
	SPEECH_ID_TOWNERS_BMAID02_WAV_OH_MY                                                                       =  15,
	SPEECH_ID_TOWNERS_BSMITH02_WAV_DEMONS_STOLE_OGDENS_SIGN_YOU_SAY                                           =  16,
	SPEECH_ID_TOWNERS_DRUNK02_WAV_YOU_KNOW_WHAT_I_THINK                                                       =  17,
	SPEECH_ID_TOWNERS_WITCH02_WAV_NO_MORTAL_CAN_TRULY_UNDERSTAND_THE_MIND_OF_THE_DEMON                        =  18,
	SPEECH_ID_TOWNERS_PEGBOY02_WAV_WHAT                                                                       =  19,
	SPEECH_ID_MONSTERS_SNOT01_WAV_HEY                                                                         =  20,
	SPEECH_ID_MONSTERS_SNOT02_WAV_YOU_KILL_UGLIES_GET_BANNER                                                  =  21,
	SPEECH_ID_MONSTERS_SNOT03_WAV_YOU_GIVE                                                                    =  22,
	SPEECH_ID_TOWNERS_STORYT36_WAV_THIS_DOES_NOT_BODE_WELL_FOR_IT_CONFIRMS_MY_DARKEST                         =  23,
	SPEECH_ID_TOWNERS_STORYT37_WAV_YOU_MUST_HURRY_AND_RESCUE_ALBRECHT_FROM_THE_HANDS_OF                       =  24,
	SPEECH_ID_TOWNERS_STORYT38_WAV_YOUR_STORY_IS_QUITE_GRIM_MY_FRIEND_1                                       =  25,
	SPEECH_ID_TOWNERS_TAVOWN01_WAV_LAZARUS_WAS_THE_ARCHBISHOP_WHO_LED_MANY_OF_THE_TOWNSPEOPLE                 =  26,
	SPEECH_ID_TOWNERS_STORYT38_WAV_YOUR_STORY_IS_QUITE_GRIM_MY_FRIEND_2                                       =  27,
	SPEECH_ID_TOWNERS_STORYT38_WAV_YOUR_STORY_IS_QUITE_GRIM_MY_FRIEND_3                                       =  28,
	SPEECH_ID_TOWNERS_HEALER03_WAV_I_WAS_SHOCKED_WHEN_I_HEARD_OF_WHAT_THE_TOWNSPEOPLE                         =  29,
	SPEECH_ID_TOWNERS_BMAID03_WAV_I_REMEMBER_LAZARUS_AS_BEING_A_VERY_KIND_AND_GIVING                          =  30,
	SPEECH_ID_TOWNERS_BSMITH03_WAV_I_WAS_THERE_WHEN_LAZARUS_LED_US_INTO_THE_LABYRINTH                         =  31,
	SPEECH_ID_TOWNERS_DRUNK03_WAV_THEY_STAB_THEN_BITE_THEN_THEYRE_ALL_AROUND_YOU                              =  32,
	SPEECH_ID_TOWNERS_WITCH03_WAV_I_DID_NOT_KNOW_THIS_LAZARUS_OF_WHOM_YOU_SPEAK                               =  33,
	SPEECH_ID_TOWNERS_PEGBOY03_WAV_YES_THE_RIGHTEOUS_LAZARUS_WHO_WAS_SOOO_EFFECTIVE_AGAINST_THOSE             =  34,
	SPEECH_ID_MONSTERS_LAZ01_WAV_ABANDON_YOUR_FOOLISH_QUEST_1                                                 =  35,
	SPEECH_ID_MONSTERS_LAZ01_WAV_ABANDON_YOUR_FOOLISH_QUEST_2                                                 =  36,
	SPEECH_ID_TOWNERS_STORYT04_WAV_HMM_I_DONT_KNOW_WHAT_I_CAN_REALLY_TELL_YOU                                 =  37,
	SPEECH_ID_TOWNERS_TAVOWN02_WAV_I_HAVE_ALWAYS_TRIED_TO_KEEP_A_LARGE_SUPPLY_OF                              =  38,
	SPEECH_ID_TOWNERS_HEALER20_WAV_IM_GLAD_I_CAUGHT_UP_TO_YOU_IN_TIME                                         =  39,
	SPEECH_ID_TOWNERS_HEALER21_WAV_PLEASE_YOU_MUST_HURRY                                                      =  40,
	SPEECH_ID_TOWNERS_HEALER22_WAV_WHATS_THAT_YOU_SAY                                                         =  41,
	SPEECH_ID_TOWNERS_BMAID04_WAV_MY_GRANDMOTHER_IS_VERY_WEAK_AND_GARDA_SAYS_THAT_WE                          =  42,
	SPEECH_ID_TOWNERS_BSMITH04_WAV_PEPIN_HAS_TOLD_YOU_THE_TRUTH                                               =  43,
	SPEECH_ID_TOWNERS_DRUNK04_WAV_YOU_DRINK_WATER                                                             =  44,
	SPEECH_ID_TOWNERS_WITCH04_WAV_THE_PEOPLE_OF_TRISTRAM_WILL_DIE_IF_YOU_CANNOT_RESTORE                       =  45,
	SPEECH_ID_TOWNERS_PEGBOY04_WAV_FOR_ONCE_IM_WITH_YOU                                                       =  46,
	SPEECH_ID_TOWNERS_STORYT07_WAV_A_BOOK_THAT_SPEAKS_OF_A_CHAMBER_OF_HUMAN_BONES                             =  47,
	SPEECH_ID_TOWNERS_TAVOWN05_WAV_I_AM_AFRAID_THAT_I_DONT_KNOW_ANYTHING_ABOUT_THAT                           =  48,
	SPEECH_ID_TOWNERS_HEALER05_WAV_THIS_SOUNDS_LIKE_A_VERY_DANGEROUS_PLACE                                    =  49,
	SPEECH_ID_TOWNERS_BMAID06_WAV_I_AM_AFRAID_THAT_I_HAVENT_HEARD_ANYTHING_ABOUT_THAT                         =  50,
	SPEECH_ID_TOWNERS_BSMITH07_WAV_I_KNOW_NOTHING_OF_THIS_PLACE_BUT_YOU_MAY_TRY                               =  51,
	SPEECH_ID_TOWNERS_DRUNK07_WAV_OKAY_SO_LISTEN                                                              =  52,
	SPEECH_ID_TOWNERS_WITCH07_WAV_YOU_WILL_BECOME_AN_ETERNAL_SERVANT_OF_THE_DARK_LORDS                        =  53,
	SPEECH_ID_TOWNERS_PEGBOY07_WAV_A_VAST_AND_MYSTERIOUS_TREASURE_YOU_SAY                                     =  54,
	SPEECH_ID_TOWNERS_STORYT10_WAV_IT_SEEMS_THAT_THE_ARCHBISHOP_LAZARUS_GOADED_MANY_OF_THE                    =  55,
	SPEECH_ID_TOWNERS_TAVOWN08_WAV_YES_FARNHAM_HAS_MUMBLED_SOMETHING_ABOUT_A_HULKING_BRUTE_WHO                =  56,
	SPEECH_ID_TOWNERS_HEALER08_WAV_BY_THE_LIGHT_I_KNOW_OF_THIS_VILE_DEMON                                     =  57,
	SPEECH_ID_TOWNERS_BMAID08_WAV_WHEN_FARNHAM_SAID_SOMETHING_ABOUT_A_BUTCHER_KILLING_PEOPLE_I                =  58,
	SPEECH_ID_TOWNERS_BSMITH10_WAV_I_SAW_WHAT_FARNHAM_CALLS_THE_BUTCHER_AS_IT_SWATHED                         =  59,
	SPEECH_ID_TOWNERS_DRUNK10_WAV_BIG                                                                         =  60,
	SPEECH_ID_TOWNERS_WITCH10_WAV_THE_BUTCHER_IS_A_SADISTIC_CREATURE_THAT_DELIGHTS_IN_THE                     =  61,
	SPEECH_ID_TOWNERS_PEGBOY10_WAV_I_KNOW_MORE_THAN_YOUD_THINK_ABOUT_THAT_GRISLY_FIEND                        =  62,
	SPEECH_ID_TOWNERS_WOUND01_WAV_PLEASE_LISTEN_TO_ME                                                         =  63,
	SPEECH_ID_MONSTERS_BUTCHER_WAV                                                                            =  64,
	SPEECH_ID_TOWNERS_STORYT12_WAV_YOU_RECITE_AN_INTERESTING_RHYME_WRITTEN_IN_A_STYLE_THAT                    =  65,
	SPEECH_ID_TOWNERS_TAVOWN10_WAV_I_NEVER_MUCH_CARED_FOR_POETRY                                              =  66,
	SPEECH_ID_TOWNERS_HEALER10_WAV_THIS_DOES_SEEM_FAMILIAR_SOMEHOW                                            =  67,
	SPEECH_ID_TOWNERS_BMAID10_WAV_IF_YOU_HAVE_QUESTIONS_ABOUT_BLINDNESS_YOU_SHOULD_TALK_TO                    =  68,
	SPEECH_ID_TOWNERS_BSMITH12_WAV_I_AM_AFRAID_THAT_I_HAVE_NEITHER_HEARD_NOR_SEEN                             =  69,
	SPEECH_ID_TOWNERS_DRUNK12_WAV_LOOK_HERE                                                                   =  70,
	SPEECH_ID_TOWNERS_WITCH12_WAV_THIS_IS_A_PLACE_OF_GREAT_ANGUISH_AND_TERROR_AND                             =  71,
	SPEECH_ID_TOWNERS_PEGBOY11_WAV_LETS_SEE_AM_I_SELLING_YOU_SOMETHING                                        =  72,
	SPEECH_ID_TOWNERS_STORYT13_WAV_YOU_CLAIM_TO_HAVE_SPOKEN_WITH_LACHDANAN                                    =  73,
	SPEECH_ID_TOWNERS_TAVOWN11_WAV_YOU_SPEAK_OF_A_BRAVE_WARRIOR_LONG_DEAD                                     =  74,
	SPEECH_ID_TOWNERS_HEALER11_WAV_A_GOLDEN_ELIXIR_YOU_SAY                                                    =  75,
	SPEECH_ID_TOWNERS_BMAID11_WAV_IVE_NEVER_HEARD_OF_A_LACHDANAN_BEFORE                                       =  76,
	SPEECH_ID_TOWNERS_BSMITH13_WAV_IF_IT_IS_ACTUALLY_LACHDANAN_THAT_YOU_HAVE_MET_THEN                         =  77,
	SPEECH_ID_TOWNERS_DRUNK13_WAV_LACHDANAN_IS_DEAD                                                           =  78,
	SPEECH_ID_TOWNERS_WITCH13_WAV_YOU_MAY_MEET_PEOPLE_WHO_ARE_TRAPPED_WITHIN_THE_LABYRINTH                    =  79,
	SPEECH_ID_TOWNERS_PEGBOY12_WAV_WAIT_LET_ME_GUESS                                                          =  80,
	SPEECH_ID_MONSTERS_LACH01_WAV_PLEASE_DONT_KILL_ME_JUST_HEAR_ME_OUT                                        =  81,
	SPEECH_ID_MONSTERS_LACH02_WAV_YOU_HAVE_NOT_FOUND_THE_GOLDEN_ELIXIR                                        =  82,
	SPEECH_ID_MONSTERS_LACH03_WAV_YOU_HAVE_SAVED_MY_SOUL_FROM_DAMNATION_AND_FOR_THAT                          =  83,
	SPEECH_ID_TOWNERS_STORYT14_WAV_GRISWOLD_SPEAKS_OF_THE_ANVIL_OF_FURY                                       =  84,
	SPEECH_ID_TOWNERS_TAVOWN12_WAV_DONT_YOU_THINK_THAT_GRISWOLD_WOULD_BE_A_BETTER_PERSON                      =  85,
	SPEECH_ID_TOWNERS_HEALER12_WAV_IF_YOU_HAD_BEEN_LOOKING_FOR_INFORMATION_ON_THE_PESTLE                      =  86,
	SPEECH_ID_TOWNERS_BMAID12_WAV_GRISWOLDS_FATHER_USED_TO_TELL_SOME_OF_US_WHEN_WE                            =  87,
	SPEECH_ID_TOWNERS_BSMITH21_WAV_GREETINGS                                                                  =  88,
	SPEECH_ID_TOWNERS_BSMITH22_WAV_NOTHING_YET_EH                                                             =  89,
	SPEECH_ID_TOWNERS_BSMITH23_WAV_I_CAN_HARDLY_BELIEVE_IT                                                    =  90,
	SPEECH_ID_TOWNERS_DRUNK14_WAV_GRISWOLD_CANT_SELL_HIS_ANVIL                                                =  91,
	SPEECH_ID_TOWNERS_WITCH14_WAV_THERE_ARE_MANY_ARTIFACTS_WITHIN_THE_LABYRINTH_THAT_HOLD_POWERS              =  92,
	SPEECH_ID_TOWNERS_PEGBOY13_WAV_IF_YOU_WERE_TO_FIND_THIS_ARTIFACT_FOR_GRISWOLD_IT                          =  93,
	SPEECH_ID_TOWNERS_STORYT15_WAV_THE_GATEWAY_OF_BLOOD_AND_THE_HALLS_OF_FIRE_ARE                             =  94,
	SPEECH_ID_TOWNERS_TAVOWN13_WAV_EVERY_CHILD_HEARS_THE_STORY_OF_THE_WARRIOR_ARKAINE_AND                     =  95,
	SPEECH_ID_TOWNERS_HEALER13_WAV_HMM                                                                        =  96,
	SPEECH_ID_TOWNERS_BMAID13_WAV_THE_STORY_OF_THE_MAGIC_ARMOR_CALLED_VALOR_IS_SOMETHING                      =  97,
	SPEECH_ID_TOWNERS_BSMITH14_WAV_THE_ARMOR_KNOWN_AS_VALOR_COULD_BE_WHAT_TIPS_THE                            =  98,
	SPEECH_ID_TOWNERS_DRUNK15_WAV_ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                                            =  99,
	SPEECH_ID_TOWNERS_WITCH15_WAV_SHOULD_YOU_FIND_THESE_STONES_OF_BLOOD_USE_THEM_CAREFULLY                    = 100,
	SPEECH_ID_TOWNERS_PEGBOY14_WAV_YOU_INTEND_TO_FIND_THE_ARMOR_KNOWN_AS_VALOR                                = 101,
	SPEECH_ID_TOWNERS_STORYT18_WAV_I_KNOW_OF_ONLY_ONE_LEGEND_THAT_SPEAKS_OF_SUCH                              = 102,
	SPEECH_ID_TOWNERS_TAVOWN16_WAV_I_AM_AFRAID_THAT_I_HAVENT_HEARD_ANYTHING_ABOUT_SUCH                        = 103,
	SPEECH_ID_TOWNERS_HEALER16_WAV_CAIN_WOULD_BE_ABLE_TO_TELL_YOU_MUCH_MORE_ABOUT                             = 104,
	SPEECH_ID_TOWNERS_BMAID16_WAV_IF_YOU_ARE_TO_BATTLE_SUCH_A_FIERCE_OPPONENT_MAY                             = 105,
	SPEECH_ID_TOWNERS_BSMITH17_WAV_DARK_AND_WICKED_LEGENDS_SURROUNDS_THE_ONE_WARLORD_OF_BLOOD                 = 106,
	SPEECH_ID_TOWNERS_DRUNK17_WAV_ALWAYS_YOU_GOTTA_TALK_ABOUT_BLOOD                                           = 107,
	SPEECH_ID_TOWNERS_WITCH18_WAV_HIS_PROWESS_WITH_THE_BLADE_IS_AWESOME_AND_HE_HAS                            = 108,
	SPEECH_ID_TOWNERS_PEGBOY17_WAV_I_HAVENT_EVER_DEALT_WITH_THIS_WARLORD_YOU_SPEAK_OF                         = 109,
	SPEECH_ID_MONSTERS_WARLRD01_WAV_MY_BLADE_SINGS_FOR_YOUR_BLOOD_MORTAL_AND_BY_MY                            = 110,
	SPEECH_ID_TOWNERS_STORYT20_WAV_GRISWOLD_SPEAKS_OF_THE_HEAVEN_STONE_THAT_WAS_DESTINED_FOR                  = 111,
	SPEECH_ID_TOWNERS_TAVOWN18_WAV_THE_CARAVAN_STOPPED_HERE_TO_TAKE_ON_SOME_SUPPLIES_FOR                      = 112,
	SPEECH_ID_TOWNERS_HEALER18_WAV_I_DONT_KNOW_WHAT_IT_IS_THAT_THEY_THOUGHT_THEY                              = 113,
	SPEECH_ID_TOWNERS_BMAID18_WAV_WELL_A_CARAVAN_OF_SOME_VERY_IMPORTANT_PEOPLE_DID_STOP                       = 114,
	SPEECH_ID_TOWNERS_BSMITH24_WAV_STAY_FOR_A_MOMENT                                                          = 115,
	SPEECH_ID_TOWNERS_BSMITH25_WAV_I_AM_STILL_WAITING_FOR_YOU_TO_BRING_ME_THAT                                = 116,
	SPEECH_ID_TOWNERS_BSMITH26_WAV_LET_ME_SEE_THAT                                                            = 117,
	SPEECH_ID_TOWNERS_DRUNK19_WAV_I_USED_TO_HAVE_A_NICE_RING                                                  = 118,
	SPEECH_ID_TOWNERS_WITCH20_WAV_THE_HEAVEN_STONE_IS_VERY_POWERFUL_AND_WERE_IT_ANY                           = 119,
	SPEECH_ID_TOWNERS_PEGBOY18_WAV_IF_ANYONE_CAN_MAKE_SOMETHING_OUT_OF_THAT_ROCK_GRISWOLD                     = 120,
	SPEECH_ID_TOWNERS_STORYT21_WAV_THE_WITCH_ADRIA_SEEKS_A_BLACK_MUSHROOM                                     = 121,
	SPEECH_ID_TOWNERS_TAVOWN19_WAV_LET_ME_JUST_SAY_THIS                                                       = 122,
	SPEECH_ID_TOWNERS_HEALER26_WAV_THE_WITCH_TOLD_ME_THAT_YOU_WERE_SEARCHING_FOR_THE                          = 123,
	SPEECH_ID_TOWNERS_HEALER27_WAV_EXCELLENT_THIS_IS_JUST_WHAT_I_HAD_IN_MIND                                  = 124,
	SPEECH_ID_TOWNERS_BMAID19_WAV_I_THINK_OGDEN_MIGHT_HAVE_SOME_MUSHROOMS_IN_THE_STORAGE                      = 125,
	SPEECH_ID_TOWNERS_BSMITH19_WAV_IF_ADRIA_DOESNT_HAVE_ONE_OF_THESE_YOU_CAN_BET                              = 126,
	SPEECH_ID_TOWNERS_DRUNK20_WAV_OGDEN_MIXES_A_MEAN_BLACK_MUSHROOM_BUT_I_GET_SICK                            = 127,
	SPEECH_ID_TOWNERS_WITCH22_WAV_WHAT_DO_WE_HAVE_HERE                                                        = 128,
	SPEECH_ID_TOWNERS_WITCH23_WAV_ITS_A_BIG_BLACK_MUSHROOM_THAT_I_NEED                                        = 129,
	SPEECH_ID_TOWNERS_WITCH24_WAV_YES_THIS_WILL_BE_PERFECT_FOR_A_BREW_THAT_I                                  = 130,
	SPEECH_ID_TOWNERS_WITCH25_WAV_WHY_HAVE_YOU_BROUGHT_THAT_HERE                                              = 131,
	SPEECH_ID_TOWNERS_WITCH26_WAV_WHAT                                                                        = 132,
	SPEECH_ID_TOWNERS_PEGBOY19_WAV_I_DONT_HAVE_ANY_MUSHROOMS_OF_ANY_SIZE_OR_COLOR                             = 133,
	SPEECH_ID_TOWNERS_STORYT22_WAV_SO_THE_LEGEND_OF_THE_MAP_IS_REAL                                           = 134,
	SPEECH_ID_TOWNERS_STORYT23_WAV_OUR_TIME_IS_RUNNING_SHORT                                                  = 135,
	SPEECH_ID_TOWNERS_STORYT24_WAV_I_AM_SURE_THAT_YOU_TRIED_YOUR_BEST_BUT_I                                   = 136,
	SPEECH_ID_TOWNERS_TAVOWN20_WAV_IF_THE_WITCH_CANT_HELP_YOU_AND_SUGGESTS_YOU_SEE                            = 137,
	SPEECH_ID_TOWNERS_HEALER19_WAV_I_CANT_MAKE_MUCH_OF_THE_WRITING_ON_THIS_MAP                                = 138,
	SPEECH_ID_TOWNERS_BMAID20_WAV_THE_BEST_PERSON_TO_ASK_ABOUT_THAT_SORT_OF_THING                             = 139,
	SPEECH_ID_TOWNERS_BSMITH20_WAV_I_HAVE_NEVER_SEEN_A_MAP_OF_THIS_SORT_BEFORE                                = 140,
	SPEECH_ID_TOWNERS_DRUNK21_WAV_LISTEN_HERE_COME_CLOSE                                                      = 141,
	SPEECH_ID_TOWNERS_WITCH21_WAV_OH_IM_AFRAID_THIS_DOES_NOT_BODE_WELL_AT_ALL                                 = 142,
	SPEECH_ID_TOWNERS_PEGBOY20_WAV_IVE_BEEN_LOOKING_FOR_A_MAP_BUT_THAT_CERTAINLY_ISNT                         = 143,
	SPEECH_ID_MONSTERS_GARBUD01_WAV_PLEEEEASE_NO_HURT                                                         = 144,
	SPEECH_ID_MONSTERS_GARBUD02_WAV_SOMETHING_FOR_YOU_I_AM_MAKING                                             = 145,
	SPEECH_ID_MONSTERS_GARBUD03_WAV_NOTHING_YET                                                               = 146,
	SPEECH_ID_MONSTERS_GARBUD04_WAV_THIS_TOO_GOOD_FOR_YOU                                                     = 147,
	SPEECH_ID_MONSTERS_ZHAR01_WAV_WHAT                                                                        = 148,
	SPEECH_ID_MONSTERS_ZHAR02_WAV_ARRRRGH                                                                     = 149,
	SPEECH_ID_TOWNERS_STORYT25_WAV_HELLO_MY_FRIEND                                                            = 150,
	SPEECH_ID_TOWNERS_STORYT26_WAV_WHILE_YOU_ARE_VENTURING_DEEPER_INTO_THE_LABYRINTH_YOU_MAY                  = 151,
	SPEECH_ID_TOWNERS_STORYT27_WAV_I_KNOW_OF_MANY_MYTHS_AND_LEGENDS_THAT_MAY_CONTAIN                          = 152,
	SPEECH_ID_TOWNERS_STORYT28_WAV_GRISWOLD                                                                   = 153,
	SPEECH_ID_TOWNERS_STORYT29_WAV_OGDEN_HAS_OWNED_AND_RUN_THE_RISING_SUN_INN_AND                             = 154,
	SPEECH_ID_TOWNERS_STORYT30_WAV_POOR_FARNHAM                                                               = 155,
	SPEECH_ID_TOWNERS_STORYT31_WAV_THE_WITCH_ADRIA_IS_AN_ANOMALY_HERE_IN_TRISTRAM                             = 156,
	SPEECH_ID_TOWNERS_STORYT33_WAV_THE_STORY_OF_WIRT_IS_A_FRIGHTENING_AND_TRAGIC_ONE                          = 157,
	SPEECH_ID_TOWNERS_STORYT34_WAV_AH_PEPIN                                                                   = 158,
	SPEECH_ID_TOWNERS_STORYT35_WAV_GILLIAN_IS_A_FINE_WOMAN                                                    = 159,
	SPEECH_ID_TOWNERS_TAVOWN36_WAV_GREETINGS_GOOD_MASTER                                                      = 160,
	SPEECH_ID_TOWNERS_TAVOWN37_WAV_MANY_ADVENTURERS_HAVE_GRACED_THE_TABLES_OF_MY_TAVERN_AND                   = 161,
	SPEECH_ID_TOWNERS_TAVOWN38_WAV_GRISWOLD_THE_BLACKSMITH_IS_EXTREMELY_KNOWLEDGEABLE_ABOUT_WEAPONS_AND_ARMOR = 162,
	SPEECH_ID_TOWNERS_TAVOWN39_WAV_FARNHAM_SPENDS_FAR_TOO_MUCH_TIME_HERE_DROWNING_HIS_SORROWS                 = 163,
	SPEECH_ID_TOWNERS_TAVOWN40_WAV_ADRIA_IS_WISE_BEYOND_HER_YEARS_BUT_I_MUST_ADMIT                            = 164,
	SPEECH_ID_TOWNERS_TAVOWN41_WAV_IF_YOU_WANT_TO_KNOW_MORE_ABOUT_THE_HISTORY_OF                              = 165,
	SPEECH_ID_TOWNERS_TAVOWN43_WAV_WIRT_IS_A_RAPSCALLION_AND_A_LITTLE_SCOUNDREL                               = 166,
	SPEECH_ID_TOWNERS_TAVOWN44_WAV_PEPIN_IS_A_GOOD_MAN                                                        = 167,
	SPEECH_ID_TOWNERS_TAVOWN45_WAV_GILLIAN_MY_BARMAID                                                         = 168,
	SPEECH_ID_TOWNERS_HEALER37_WAV_WHAT_AILS_YOU_MY_FRIEND                                                    = 169,
	SPEECH_ID_TOWNERS_HEALER38_WAV_I_HAVE_MADE_A_VERY_INTERESTING_DISCOVERY                                   = 170,
	SPEECH_ID_TOWNERS_HEALER39_WAV_BEFORE_IT_WAS_TAKEN_OVER_BY_WELL_WHATEVER_LURKS_BELOW                      = 171,
	SPEECH_ID_TOWNERS_HEALER40_WAV_GRISWOLD_KNOWS_AS_MUCH_ABOUT_THE_ART_OF_WAR_AS                             = 172,
	SPEECH_ID_TOWNERS_HEALER41_WAV_CAIN_IS_A_TRUE_FRIEND_AND_A_WISE_SAGE                                      = 173,
	SPEECH_ID_TOWNERS_HEALER42_WAV_EVEN_MY_SKILLS_HAVE_BEEN_UNABLE_TO_FULLY_HEAL_FARNHAM                      = 174,
	SPEECH_ID_TOWNERS_HEALER43_WAV_WHILE_I_USE_SOME_LIMITED_FORMS_OF_MAGIC_TO_CREATE                          = 175,
	SPEECH_ID_TOWNERS_HEALER45_WAV_POOR_WIRT                                                                  = 176,
	SPEECH_ID_TOWNERS_HEALER46_WAV_I_REALLY_DONT_UNDERSTAND_WHY_OGDEN_STAYS_HERE_IN_TRISTRAM                  = 177,
	SPEECH_ID_TOWNERS_HEALER47_WAV_OGDENS_BARMAID_IS_A_SWEET_GIRL                                             = 178,
	SPEECH_ID_TOWNERS_BMAID31_WAV_GOOD_DAY                                                                    = 179,
	SPEECH_ID_TOWNERS_BMAID32_WAV_MY_GRANDMOTHER_HAD_A_DREAM_THAT_YOU_WOULD_COME_AND                          = 180,
	SPEECH_ID_TOWNERS_BMAID33_WAV_THE_WOMAN_AT_THE_EDGE_OF_TOWN_IS_A_WITCH                                    = 181,
	SPEECH_ID_TOWNERS_BMAID34_WAV_OUR_BLACKSMITH_IS_A_POINT_OF_PRIDE_TO_THE_PEOPLE                            = 182,
	SPEECH_ID_TOWNERS_BMAID35_WAV_CAIN_HAS_BEEN_THE_STORYTELLER_OF_TRISTRAM_FOR_AS_LONG                       = 183,
	SPEECH_ID_TOWNERS_BMAID36_WAV_FARNHAM_IS_A_DRUNKARD_WHO_FILLS_HIS_BELLY_WITH_ALE                          = 184,
	SPEECH_ID_TOWNERS_BMAID37_WAV_PEPIN_SAVED_MY_GRANDMOTHERS_LIFE_AND_I_KNOW_THAT_I                          = 185,
	SPEECH_ID_TOWNERS_BMAID39_WAV_I_GREW_UP_WITH_WIRTS_MOTHER_CANACE                                          = 186,
	SPEECH_ID_TOWNERS_BMAID40_WAV_OGDEN_AND_HIS_WIFE_HAVE_TAKEN_ME_AND_MY_GRANDMOTHER                         = 187,
	SPEECH_ID_TOWNERS_BSMITH44_WAV_WELL_WHAT_CAN_I_DO_FOR_YA                                                  = 188,
	SPEECH_ID_TOWNERS_BSMITH45_WAV_IF_YOURE_LOOKING_FOR_A_GOOD_WEAPON_LET_ME_SHOW                             = 189,
	SPEECH_ID_TOWNERS_BSMITH46_WAV_THE_AXE                                                                    = 190,
	SPEECH_ID_TOWNERS_BSMITH47_WAV_LOOK_AT_THAT_EDGE_THAT_BALANCE                                             = 191,
	SPEECH_ID_TOWNERS_BSMITH48_WAV_YOUR_WEAPONS_AND_ARMOR_WILL_SHOW_THE_SIGNS_OF_YOUR                         = 192,
	SPEECH_ID_TOWNERS_BSMITH49_WAV_WHILE_I_HAVE_TO_PRACTICALLY_SMUGGLE_IN_THE_METALS_AND                      = 193,
	SPEECH_ID_TOWNERS_BSMITH50_WAV_GILLIAN_IS_A_NICE_LASS                                                     = 194,
	SPEECH_ID_TOWNERS_BSMITH51_WAV_SOMETIMES_I_THINK_THAT_CAIN_TALKS_TOO_MUCH_BUT_I                           = 195,
	SPEECH_ID_TOWNERS_BSMITH52_WAV_I_WAS_WITH_FARNHAM_THAT_NIGHT_THAT_LAZARUS_LED_US                          = 196,
	SPEECH_ID_TOWNERS_BSMITH53_WAV_A_GOOD_MAN_WHO_PUTS_THE_NEEDS_OF_OTHERS_ABOVE                              = 197,
	SPEECH_ID_TOWNERS_BSMITH55_WAV_THAT_LAD_IS_GOING_TO_GET_HIMSELF_INTO_SERIOUS_TROUBLE                      = 198,
	SPEECH_ID_TOWNERS_BSMITH56_WAV_THE_INNKEEPER_HAS_LITTLE_BUSINESS_AND_NO_REAL_WAY_OF                       = 199,
	SPEECH_ID_TOWNERS_DRUNK27_WAV_CANT_A_FELLA_DRINK_IN_PEACE                                                 = 200,
	SPEECH_ID_TOWNERS_DRUNK28_WAV_THE_GAL_WHO_BRINGS_THE_DRINKS                                               = 201,
	SPEECH_ID_TOWNERS_DRUNK29_WAV_WHY_DONT_THAT_OLD_CRONE_DO_SOMETHIN_FOR_A_CHANGE                            = 202,
	SPEECH_ID_TOWNERS_DRUNK30_WAV_CAIN_ISNT_WHAT_HE_SAYS_HE_IS                                                = 203,
	SPEECH_ID_TOWNERS_DRUNK31_WAV_GRISWOLD                                                                    = 204,
	SPEECH_ID_TOWNERS_DRUNK32_WAV_HEHEHE_I_LIKE_PEPIN                                                         = 205,
	SPEECH_ID_TOWNERS_DRUNK34_WAV_WIRT_IS_A_KID_WITH_MORE_PROBLEMS_THAN_EVEN_ME                               = 206,
	SPEECH_ID_TOWNERS_DRUNK35_WAV_OGDEN_IS_THE_BEST_MAN_IN_TOWN                                               = 207,
	SPEECH_ID_TOWNERS_DRUNK23_WAV_I_WANNA_TELL_YA_SUMTHIN_CAUSE_I_KNOW_ALL_ABOUT                              = 208,
	SPEECH_ID_TOWNERS_DRUNK24_WAV_NO_ONE_EVER_LIS                                                             = 209,
	SPEECH_ID_TOWNERS_DRUNK25_WAV_I_KNOW_YOU_GOTS_YOUR_OWN_IDEAS_AND_I_KNOW                                   = 210,
	SPEECH_ID_TOWNERS_DRUNK26_WAV_IF_I_WAS_YOU                                                                = 211,
	SPEECH_ID_TOWNERS_WITCH38_WAV_I_SENSE_A_SOUL_IN_SEARCH_OF_ANSWERS                                         = 212,
	SPEECH_ID_TOWNERS_WITCH39_WAV_WISDOM_IS_EARNED_NOT_GIVEN                                                  = 213,
	SPEECH_ID_TOWNERS_WITCH40_WAV_THE_GREATEST_POWER_IS_OFTEN_THE_SHORTEST_LIVED                              = 214,
	SPEECH_ID_TOWNERS_WITCH41_WAV_THOUGH_THE_HEAT_OF_THE_SUN_IS_BEYOND_MEASURE_THE                            = 215,
	SPEECH_ID_TOWNERS_WITCH42_WAV_THE_SUM_OF_OUR_KNOWLEDGE_IS_IN_THE_SUM_OF                                   = 216,
	SPEECH_ID_TOWNERS_WITCH43_WAV_TO_A_MAN_WHO_ONLY_KNOWS_IRON_THERE_IS_NO                                    = 217,
	SPEECH_ID_TOWNERS_WITCH44_WAV_CORRUPTION_HAS_THE_STRENGTH_OF_DECEIT_BUT_INNOCENCE_HOLDS_THE               = 218,
	SPEECH_ID_TOWNERS_WITCH45_WAV_A_CHEST_OPENED_IN_DARKNESS_HOLDS_NO_GREATER_TREASURE_THAN                   = 219,
	SPEECH_ID_TOWNERS_WITCH46_WAV_THE_HIGHER_YOU_PLACE_YOUR_FAITH_IN_ONE_MAN_THE                              = 220,
	SPEECH_ID_TOWNERS_WITCH47_WAV_THE_HAND_THE_HEART_AND_THE_MIND_CAN_PERFORM_MIRACLES                        = 221,
	SPEECH_ID_TOWNERS_WITCH49_WAV_THERE_IS_MUCH_ABOUT_THE_FUTURE_WE_CANNOT_SEE_BUT                            = 222,
	SPEECH_ID_TOWNERS_WITCH50_WAV_EARTHEN_WALLS_AND_THATCHED_CANOPY_DO_NOT_A_HOME_CREATE                      = 223,
	SPEECH_ID_TOWNERS_PEGBOY32_WAV_PSSST                                                                      = 224,
	SPEECH_ID_TOWNERS_PEGBOY33_WAV_NOT_EVERYONE_IN_TRISTRAM_HAS_A_USE                                         = 225,
	SPEECH_ID_TOWNERS_PEGBOY34_WAV_DONT_TRUST_EVERYTHING_THE_DRUNK_SAYS                                       = 226,
	SPEECH_ID_TOWNERS_PEGBOY35_WAV_IN_CASE_YOU_HAVENT_NOTICED_I_DONT_BUY_ANYTHING_FROM                        = 227,
	SPEECH_ID_TOWNERS_PEGBOY36_WAV_I_GUESS_I_OWE_THE_BLACKSMITH_MY_LIFE                                       = 228,
	SPEECH_ID_TOWNERS_PEGBOY37_WAV_IF_I_WERE_A_FEW_YEARS_OLDER_I_WOULD_SHOWER                                 = 229,
	SPEECH_ID_TOWNERS_PEGBOY38_WAV_CAIN_KNOWS_TOO_MUCH                                                        = 230,
	SPEECH_ID_TOWNERS_PEGBOY39_WAV_FARNHAM                                                                    = 231,
	SPEECH_ID_TOWNERS_PEGBOY40_WAV_AS_LONG_AS_YOU_DONT_NEED_ANYTHING_REATTACHED_OLD_PEPIN                     = 232,
	SPEECH_ID_TOWNERS_PEGBOY42_WAV_ADRIA_TRULY_BOTHERS_ME                                                     = 233,
	SPEECH_ID_TOWNERS_PEGBOY43_WAV_OGDEN_IS_A_FOOL_FOR_STAYING_HERE                                           = 234,
	SPEECH_ID_WARRIOR_WARIOR01_WAV_BEYOND_THE_HALL_OF_HEROES_LIES_THE_CHAMBER_OF_BONE                         = 235,
	SPEECH_ID_WARRIOR_WARIOR10_WAV                                                                            = 236,
	SPEECH_ID_WARRIOR_WARIOR11_WAV_I_CAN_SEE_WHAT_YOU_SEE_NOT                                                 = 237,
	SPEECH_ID_WARRIOR_WARIOR12_WAV_THE_ARMORIES_OF_HELL_ARE_HOME_TO_THE_WARLORD_OF                            = 238,
	SPEECH_ID_SORCEROR_MAGE01_WAV_BEYOND_THE_HALL_OF_HEROES_LIES_THE_CHAMBER_OF_BONE                          = 239,
	SPEECH_ID_SORCEROR_MAGE10_WAV                                                                             = 240,
	SPEECH_ID_SORCEROR_MAGE11_WAV_I_CAN_SEE_WHAT_YOU_SEE_NOT                                                  = 241,
	SPEECH_ID_SORCEROR_MAGE12_WAV_THE_ARMORIES_OF_HELL_ARE_HOME_TO_THE_WARLORD_OF                             = 242,
	SPEECH_ID_ROGUE_ROGUE01_WAV_BEYOND_THE_HALL_OF_HEROES_LIES_THE_CHAMBER_OF_BONE                            = 243,
	SPEECH_ID_ROGUE_ROGUE10_WAV                                                                               = 244,
	SPEECH_ID_ROGUE_ROGUE11_WAV_I_CAN_SEE_WHAT_YOU_SEE_NOT                                                    = 245,
	SPEECH_ID_ROGUE_ROGUE12_WAV_THE_ARMORIES_OF_HELL_ARE_HOME_TO_THE_WARLORD_OF                               = 246,
	SPEECH_ID_TOWNERS_COW1_WAV                                                                                = 247,
	SPEECH_ID_TOWNERS_COW2_WAV                                                                                = 248,
	SPEECH_ID_NARRATOR_NAR01_WAV_TAKE_HEED_AND_BEAR_WITNESS_TO_THE_TRUTHS_THAT_LIE                            = 249,
	SPEECH_ID_NARRATOR_NAR02_WAV_TAKE_HEED_AND_BEAR_WITNESS_TO_THE_TRUTHS_THAT_LIE                            = 250,
	SPEECH_ID_NARRATOR_NAR03_WAV_TAKE_HEED_AND_BEAR_WITNESS_TO_THE_TRUTHS_THAT_LIE                            = 251,
	SPEECH_ID_NARRATOR_NAR04_WAV_SO_IT_CAME_TO_BE_THAT_THERE_WAS_A_GREAT                                      = 252,
	SPEECH_ID_NARRATOR_NAR05_WAV_MANY_DEMONS_TRAVELED_TO_THE_MORTAL_REALM_IN_SEARCH_OF                        = 253,
	SPEECH_ID_NARRATOR_NAR06_WAV_SO_IT_CAME_TO_BE_THAT_THE_THREE_PRIME_EVILS                                  = 254,
	SPEECH_ID_NARRATOR_NAR07_WAV_ALL_PRAISES_TO_DIABLO                                                        = 255,
	SPEECH_ID_NARRATOR_NAR08_WAV_GLORY_AND_APPROBATION_TO_DIABLO                                              = 256,
	SPEECH_ID_NARRATOR_NAR09_WAV_HAIL_AND_SACRIFICE_TO_DIABLO                                                 = 257,
	SPEECH_ID_TOWNERS_TAVOWN00_WAV_THANK_GOODNESS_YOUVE_RETURNED                                              = 258,
	SPEECH_ID_INVALID                                                                                         =  -1,
} speech_id;

/// Spell IDs specify spell_data array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/spells.cpp#spell_data
typedef enum {
	SPELL_ID_NULL            =  0,
	SPELL_ID_FIREBOLT        =  1,
	SPELL_ID_HEALING         =  2,
	SPELL_ID_LIGHTNING       =  3,
	SPELL_ID_FLASH           =  4,
	SPELL_ID_IDENTIFY        =  5,
	SPELL_ID_FIRE_WALL       =  6,
	SPELL_ID_TOWN_PORTAL     =  7,
	SPELL_ID_STONE_CURSE     =  8,
	SPELL_ID_INFRAVISION     =  9,
	SPELL_ID_PHASING         = 10,
	SPELL_ID_MANA_SHIELD     = 11,
	SPELL_ID_FIREBALL        = 12,
	SPELL_ID_GUARDIAN        = 13,
	SPELL_ID_CHAIN_LIGHTNING = 14,
	SPELL_ID_FLAME_WAVE      = 15,
	SPELL_ID_DOOM_SERPENTS   = 16,
	SPELL_ID_BLOOD_RITUAL    = 17,
	SPELL_ID_NOVA            = 18,
	SPELL_ID_INVISIBILITY    = 19,
	SPELL_ID_INFERNO         = 20,
	SPELL_ID_GOLEM           = 21,
	SPELL_ID_BLOOD_BOIL      = 22,
	SPELL_ID_TELEPORT        = 23,
	SPELL_ID_APOCALYPSE      = 24,
	SPELL_ID_ETHEREALIZE     = 25,
	SPELL_ID_ITEM_REPAIR     = 26,
	SPELL_ID_STAFF_RECHARGE  = 27,
	SPELL_ID_TRAP_DISARM     = 28,
	SPELL_ID_ELEMENTAL       = 29,
	SPELL_ID_CHARGED_BOLT    = 30,
	SPELL_ID_HOLY_BOLT       = 31,
	SPELL_ID_RESURRECT       = 32,
	SPELL_ID_TELEKINESIS     = 33,
	SPELL_ID_HEAL_OTHER      = 34,
	SPELL_ID_BLOOD_STAR      = 35,
	SPELL_ID_BONE_SPIRIT     = 36,
	SPELL_ID_INVALID         = -1,
} spell_id;

/// Spell types.
typedef enum {
	SPELL_TYPE_SKILL   = 0,
	SPELL_TYPE_SPELL   = 1,
	SPELL_TYPE_SCROLL  = 2,
	SPELL_TYPE_CHARGES = 3,
	SPELL_TYPE_INVALID = 4,
} spell_type;

/// step represents the movement of one step in a path.
///
///      5
///     2 1
///    8 0 6
///     4 3
///      7
typedef enum {
	STEP_NONE       = 0,
	STEP_NORTH_EAST = 1,
	STEP_NORTH_WEST = 2,
	STEP_SOUTH_EAST = 3,
	STEP_SOUTH_WEST = 4,
	STEP_NORTH      = 5,
	STEP_EAST       = 6,
	STEP_SOUTH      = 7,
	STEP_WEST       = 8,
} step;

/// Step direction used for path finding.
///
/// north
///    -1
///    -1
///
/// west
///    -1
///    1
///
/// east
///    1
///    -1
///
/// south
///    1
///    1
///
/// north west
///    -1
///    0
///
/// north east
///    0
///    -1
///
/// south east
///    1
///    0
///
/// south west
///    0
///    1
typedef enum {
	STEP_DIRECTION_NORTH      = 0,
	STEP_DIRECTION_WEST       = 1,
	STEP_DIRECTION_EAST       = 2,
	STEP_DIRECTION_SOUTH      = 3,
	STEP_DIRECTION_NORTH_WEST = 4,
	STEP_DIRECTION_NORTH_EAST = 5,
	STEP_DIRECTION_SOUTH_WEST = 6,
	STEP_DIRECTION_SOUTH_EAST = 7,
} step_direction;

/// Talk IDs for conversation dialogues.
typedef enum {
	TALK_ID_NONE                      =  0,
	TALK_ID_GRISWOLD                  =  1,
	TALK_ID_GRISWOLD_BUY_BASIC        =  2,
	TALK_ID_GRISWOLD_SELL             =  3,
	TALK_ID_GRISWOLD_REPAIR           =  4,
	TALK_ID_ADRIA                     =  5,
	TALK_ID_ADRIA_BUY                 =  6,
	TALK_ID_ADRIA_SELL                =  7,
	TALK_ID_ADRIA_RECHARGE            =  8,
	TALK_ID_NOT_ENOUGH_GOLD           =  9,
	TALK_ID_NOT_ENOUGH_ROOM           = 10,
	TALK_ID_CONFIRM                   = 11,
	TALK_ID_WIRT                      = 12,
	TALK_ID_WIRT_BUY                  = 13,
	TALK_ID_PEPIN                     = 14,
	TALK_ID_CAIN                      = 15,
	TALK_ID_PEPIN_BUY                 = 16,
	TALK_ID_CAIN_IDENTIFY             = 17,
	TALK_ID_GRISWOLD_BUY_PREMIUM      = 18,
	TALK_ID_GOSSIP                    = 19,
	TALK_ID_CAIN_SHOW_IDENTIFIED_ITEM = 20,
	TALK_ID_ODGEN                     = 21,
	TALK_ID_FARNHAM                   = 22,
	TALK_ID_GILLIAN                   = 23,
} talk_id;

/// Theme IDs.
typedef enum {
	THEME_ID_BARREL             =  0,
	THEME_ID_SHRINE             =  1,
	THEME_ID_MONSTER_PIT        =  2,
	THEME_ID_SKELETON_ROOM      =  3,
	THEME_ID_TREASURE           =  4,
	THEME_ID_LIBRARY            =  5,
	THEME_ID_TORTURE            =  6,
	THEME_ID_BLOOD_FOUNTAIN     =  7,
	THEME_ID_DECAPITATED        =  8,
	THEME_ID_PURIFYING_FOUNTAIN =  9,
	THEME_ID_ARMOR_STAND        = 10,
	THEME_ID_GOAT_SHRINE        = 11,
	THEME_ID_CAULDRON           = 12,
	THEME_ID_MURKY_FOUNTAIN     = 13,
	THEME_ID_TEAR_FOUNTAIN      = 14,
	THEME_ID_BURNING_CROSS      = 15,
	THEME_ID_WEAPON_RACK        = 16,
	THEME_ID_NONE               = -1,
} theme_id;

/// Template IDs for error windows.
typedef enum {
	TEMPLATE_ID_DX_INIT_ERROR              = 104,
	TEMPLATE_ID_OUT_OF_MEMORY_ERROR        = 105,
	TEMPLATE_ID_FILE_NOT_FOUND_ERROR       = 106,
	TEMPLATE_ID_DDRAW_DLL_NOT_FOUND_ERROR  = 107,
	TEMPLATE_ID_DSOUND_DLL_NOT_FOUND_ERROR = 108,
	TEMPLATE_ID_DISK_SPACE_ERROR           = 110,
	TEMPLATE_ID_SWITCH_VIDEO_MODE_ERROR    = 111,
	TEMPLATE_ID_INSERT_CD_ERROR            = 112,
	TEMPLATE_ID_RESTRICTED_USER_ERROR      = 113,
	TEMPLATE_ID_READ_ONLY_DIRECTORY_ERROR  = 114,
} template_id;

/// Text colours.
typedef enum {
	TEXT_COLOR_GREY = 0,
	TEXT_COLOR_BLUE = 1,
	TEXT_COLOR_RED  = 2,
	TEXT_COLOR_GOLD = 3,
} text_color;

/// Towner animation sequence IDs specify towner_anim_seq array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/towners.cpp#towner_anim_seq
typedef enum {
	TOWNER_ANIM_SEQ_ID_GRISWOLD = 0,
	TOWNER_ANIM_SEQ_ID_PEPIN    = 1,
	TOWNER_ANIM_SEQ_ID_CAIN     = 2,
	TOWNER_ANIM_SEQ_ID_OGDEN    = 3,
	TOWNER_ANIM_SEQ_ID_FARNHAM  = 4,
	TOWNER_ANIM_SEQ_ID_ADRIA    = 5,
	TOWNER_ANIM_SEQ_ID_NONE     = -1,
} towner_anim_seq_id;

/// Towner IDs for NPCs in Tristram.
typedef enum {
	TOWNER_ID_GRISWOLD         = 0,
	TOWNER_ID_PEPIN            = 1,
	TOWNER_ID_WOUNDED_TOWNSMAN = 2,
	TOWNER_ID_OGDEN            = 3,
	TOWNER_ID_CAIN             = 4,
	TOWNER_ID_FARNHAM          = 5,
	TOWNER_ID_ADRIA            = 6,
	TOWNER_ID_GILLIAN          = 7,
	TOWNER_ID_WIRT             = 8,
	TOWNER_ID_COW              = 9,
} towner_id;

/// Music track IDs.
typedef enum {
	TRACK_ID_TRISTRAM  = 0,
	TRACK_ID_CATHEDRAL = 1,
	TRACK_ID_CATACOMBS = 2,
	TRACK_ID_CAVES     = 3,
	TRACK_ID_HELL      = 4,
	TRACK_ID_INTRO     = 5,
	TRACK_ID_NONE      = 6,
} track_id;

/// Unique base items specify the underlying base items of unique items.
typedef enum {
	UNIQUE_BASE_ITEM_NONE                  =  0,
	UNIQUE_BASE_ITEM_SHORT_BOW             =  1,
	UNIQUE_BASE_ITEM_LONG_BOW              =  2,
	UNIQUE_BASE_ITEM_HUNTERS_BOW           =  3,
	UNIQUE_BASE_ITEM_COMPOSITE_BOW         =  4,
	UNIQUE_BASE_ITEM_LONG_WAR_BOW          =  5,
	UNIQUE_BASE_ITEM_LONG_BATTLE_BOW       =  6,
	UNIQUE_BASE_ITEM_DAGGER                =  7,
	UNIQUE_BASE_ITEM_FALCHION              =  8,
	UNIQUE_BASE_ITEM_CLAYMORE              =  9,
	UNIQUE_BASE_ITEM_BROAD_SWORD           = 10,
	UNIQUE_BASE_ITEM_SABRE                 = 11,
	UNIQUE_BASE_ITEM_SCIMITAR              = 12,
	UNIQUE_BASE_ITEM_LONG_SWORD            = 13,
	UNIQUE_BASE_ITEM_BASTARD_SWORD         = 14,
	UNIQUE_BASE_ITEM_TWO_HANDED_SWORD      = 15,
	UNIQUE_BASE_ITEM_GREAT_SWORD           = 16,
	UNIQUE_BASE_ITEM_CLEAVER               = 17,
	UNIQUE_BASE_ITEM_LARGE_AXE             = 18,
	UNIQUE_BASE_ITEM_BROAD_AXE             = 19,
	UNIQUE_BASE_ITEM_SMALL_AXE             = 20,
	UNIQUE_BASE_ITEM_BATTLE_AXE            = 21,
	UNIQUE_BASE_ITEM_GREAT_AXE             = 22,
	UNIQUE_BASE_ITEM_MACE                  = 23,
	UNIQUE_BASE_ITEM_MORNING_STAR          = 24,
	UNIQUE_BASE_ITEM_SPIKED_CLUB           = 25,
	UNIQUE_BASE_ITEM_MAUL                  = 26,
	UNIQUE_BASE_ITEM_WAR_HAMMER            = 27,
	UNIQUE_BASE_ITEM_FLAIL                 = 28,
	UNIQUE_BASE_ITEM_LONG_STAFF            = 29,
	UNIQUE_BASE_ITEM_SHORT_STAFF           = 30,
	UNIQUE_BASE_ITEM_COMPOSITE_STAFF       = 31,
	UNIQUE_BASE_ITEM_QUARTER_STAFF         = 32,
	UNIQUE_BASE_ITEM_WAR_STAFF             = 33,
	UNIQUE_BASE_ITEM_SKULL_CAP             = 34,
	UNIQUE_BASE_ITEM_HELM                  = 35,
	UNIQUE_BASE_ITEM_GREAT_HELM            = 36,
	UNIQUE_BASE_ITEM_CROWN                 = 37,
	UNIQUE_BASE_ITEM_RAGS                  = 39,
	UNIQUE_BASE_ITEM_STUDDED_LEATHER_ARMOR = 40,
	UNIQUE_BASE_ITEM_CLOAK                 = 41,
	UNIQUE_BASE_ITEM_ROBE                  = 42,
	UNIQUE_BASE_ITEM_CHAIN_MAIL            = 43,
	UNIQUE_BASE_ITEM_LEATHER_ARMOR         = 44,
	UNIQUE_BASE_ITEM_BREAST_PLATE          = 45,
	UNIQUE_BASE_ITEM_CAPE                  = 46,
	UNIQUE_BASE_ITEM_PLATE_MAIL            = 47,
	UNIQUE_BASE_ITEM_FULL_PLATE_MAIL       = 48,
	UNIQUE_BASE_ITEM_BUCKLER               = 49,
	UNIQUE_BASE_ITEM_SMALL_SHIELD          = 50,
	UNIQUE_BASE_ITEM_LARGE_SHIELD          = 51,
	UNIQUE_BASE_ITEM_KITE_SHIELD           = 52,
	UNIQUE_BASE_ITEM_GOTHIC_SHIELD         = 53,
	UNIQUE_BASE_ITEM_RING                  = 54,
	UNIQUE_BASE_ITEM_AMULET                = 56,
	UNIQUE_BASE_ITEM_THE_UNDEAD_CROWN      = 57,
	UNIQUE_BASE_ITEM_EMPYREAN_BAND         = 58,
	UNIQUE_BASE_ITEM_OPTIC_AMULET          = 59,
	UNIQUE_BASE_ITEM_RING_OF_TRUTH         = 60,
	UNIQUE_BASE_ITEM_HARLEQUIN_CREST       = 61,
	UNIQUE_BASE_ITEM_MAP_OF_THE_STARS      = 62,
	UNIQUE_BASE_ITEM_ELIXIR                = 63,
	UNIQUE_BASE_ITEM_ARKAINES_VALOR        = 64,
	UNIQUE_BASE_ITEM_VEIL_OF_STEEL         = 65,
	UNIQUE_BASE_ITEM_GRISWOLDS_EDGE        = 66,
	UNIQUE_BASE_ITEM_LIGHTFORGE            = 67,
	UNIQUE_BASE_ITEM_STAFF_OF_LAZARUS      = 68,
	UNIQUE_BASE_ITEM_INVALID               = -1,
} unique_base_item;

/// Unique item IDs specify unique_item_data array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/rdata/items.cpp#unique_item_data
typedef enum {
	UNIQUE_ITEM_ID_THE_BUTCHERS_CLEAVER   =  0,
	UNIQUE_ITEM_ID_THE_UNDEAD_CROWN       =  1,
	UNIQUE_ITEM_ID_EMPYREAN_BAND          =  2,
	UNIQUE_ITEM_ID_OPTIC_AMULET           =  3,
	UNIQUE_ITEM_ID_RING_OF_TRUTH          =  4,
	UNIQUE_ITEM_ID_HARLEQUIN_CREST        =  5,
	UNIQUE_ITEM_ID_VEIL_OF_STEEL          =  6,
	UNIQUE_ITEM_ID_ARKAINES_VALOR         =  7,
	UNIQUE_ITEM_ID_GRISWOLDS_EDGE         =  8,
	UNIQUE_ITEM_ID_LIGHTFORGE             =  9,
	UNIQUE_ITEM_ID_THE_RIFT_BOW           = 10,
	UNIQUE_ITEM_ID_THE_NEEDLER            = 11,
	UNIQUE_ITEM_ID_THE_CELESTIAL_BOW      = 12,
	UNIQUE_ITEM_ID_DEADLY_HUNTER          = 13,
	UNIQUE_ITEM_ID_BOW_OF_THE_DEAD        = 14,
	UNIQUE_ITEM_ID_THE_BLACKOAK_BOW       = 15,
	UNIQUE_ITEM_ID_FLAMEDART              = 16,
	UNIQUE_ITEM_ID_FLESHSTINGER           = 17,
	UNIQUE_ITEM_ID_WINDFORCE              = 18,
	UNIQUE_ITEM_ID_EAGLEHORN              = 19,
	UNIQUE_ITEM_ID_GONNAGALS_DIRK         = 20,
	UNIQUE_ITEM_ID_THE_DEFENDER           = 21,
	UNIQUE_ITEM_ID_GRYPHONS_CLAW          = 22,
	UNIQUE_ITEM_ID_BLACK_RAZOR            = 23,
	UNIQUE_ITEM_ID_GIBBOUS_MOON           = 24,
	UNIQUE_ITEM_ID_ICE_SHANK              = 25,
	UNIQUE_ITEM_ID_THE_EXECUTIONERS_BLADE = 26,
	UNIQUE_ITEM_ID_THE_BONESAW            = 27,
	UNIQUE_ITEM_ID_SHADOWHAWK             = 28,
	UNIQUE_ITEM_ID_WIZARDSPIKE            = 29,
	UNIQUE_ITEM_ID_LIGHTSABRE             = 30,
	UNIQUE_ITEM_ID_THE_FALCONS_TALON      = 31,
	UNIQUE_ITEM_ID_INFERNO                = 32,
	UNIQUE_ITEM_ID_DOOMBRINGER            = 33,
	UNIQUE_ITEM_ID_THE_GRIZZLY            = 34,
	UNIQUE_ITEM_ID_THE_GRANDFATHER        = 35,
	UNIQUE_ITEM_ID_THE_MANGLER            = 36,
	UNIQUE_ITEM_ID_SHARP_BEAK             = 37,
	UNIQUE_ITEM_ID_BLOODSLAYER            = 38,
	UNIQUE_ITEM_ID_THE_CELESTIAL_AXE      = 39,
	UNIQUE_ITEM_ID_WICKED_AXE             = 40,
	UNIQUE_ITEM_ID_STONECLEAVER           = 41,
	UNIQUE_ITEM_ID_AGUINARAS_HATCHET      = 42,
	UNIQUE_ITEM_ID_HELLSLAYER             = 43,
	UNIQUE_ITEM_ID_MESSERSCHMIDTS_REAVER  = 44,
	UNIQUE_ITEM_ID_CRACKRUST              = 45,
	UNIQUE_ITEM_ID_HAMMER_OF_JHOLM        = 46,
	UNIQUE_ITEM_ID_CIVERBS_CUDGEL         = 47,
	UNIQUE_ITEM_ID_THE_CELESTIAL_STAR     = 48,
	UNIQUE_ITEM_ID_BARANARS_STAR          = 49,
	UNIQUE_ITEM_ID_GNARLED_ROOT           = 50,
	UNIQUE_ITEM_ID_THE_CRANIUM_BASHER     = 51,
	UNIQUE_ITEM_ID_SCHAEFERS_HAMMER       = 52,
	UNIQUE_ITEM_ID_DREAMFLANGE            = 53,
	UNIQUE_ITEM_ID_STAFF_OF_SHADOWS       = 54,
	UNIQUE_ITEM_ID_IMMOLATOR              = 55,
	UNIQUE_ITEM_ID_STORM_SPIRE            = 56,
	UNIQUE_ITEM_ID_GLEAMSONG              = 57,
	UNIQUE_ITEM_ID_THUNDERCALL            = 58,
	UNIQUE_ITEM_ID_THE_PROTECTOR          = 59,
	UNIQUE_ITEM_ID_NAJS_PUZZLER           = 60,
	UNIQUE_ITEM_ID_MINDCRY                = 61,
	UNIQUE_ITEM_ID_ROD_OF_ONAN            = 62,
	UNIQUE_ITEM_ID_HELM_OF_SPIRITS        = 63,
	UNIQUE_ITEM_ID_THINKING_CAP           = 64,
	UNIQUE_ITEM_ID_OVERLORDS_HELM         = 65,
	UNIQUE_ITEM_ID_FOOLS_CREST            = 66,
	UNIQUE_ITEM_ID_GOTTERDAMERUNG         = 67,
	UNIQUE_ITEM_ID_ROYAL_CIRCLET          = 68,
	UNIQUE_ITEM_ID_TORN_FLESH_OF_SOULS    = 69,
	UNIQUE_ITEM_ID_THE_GLADIATORS_BANE    = 70,
	UNIQUE_ITEM_ID_THE_RAINBOW_CLOAK      = 71,
	UNIQUE_ITEM_ID_LEATHER_OF_AUT         = 72,
	UNIQUE_ITEM_ID_WISDOMS_WRAP           = 73,
	UNIQUE_ITEM_ID_SPARKING_MAIL          = 74,
	UNIQUE_ITEM_ID_SCAVENGER_CARAPACE     = 75,
	UNIQUE_ITEM_ID_NIGHTSCAPE             = 76,
	UNIQUE_ITEM_ID_NAJS_LIGHT_PLATE       = 77,
	UNIQUE_ITEM_ID_DEMONSPIKE_COAT        = 78,
	UNIQUE_ITEM_ID_THE_DEFLECTOR          = 79,
	UNIQUE_ITEM_ID_SPLIT_SKULL_SHIELD     = 80,
	UNIQUE_ITEM_ID_DRAGONS_BREACH         = 81,
	UNIQUE_ITEM_ID_BLACKOAK_SHIELD        = 82,
	UNIQUE_ITEM_ID_HOLY_DEFENDER          = 83,
	UNIQUE_ITEM_ID_STORMSHIELD            = 84,
	UNIQUE_ITEM_ID_BRAMBLE                = 85,
	UNIQUE_ITEM_ID_RING_OF_REGHA          = 86,
	UNIQUE_ITEM_ID_THE_BLEEDER            = 87,
	UNIQUE_ITEM_ID_CONSTRICTING_RING      = 88,
	UNIQUE_ITEM_ID_RING_OF_ENGAGEMENT     = 89,
	UNIQUE_ITEM_ID_NULL                   = 90,
} unique_item_id;

/// Monster actions.
typedef enum {
	MONSTER_ACTION_STAND   = 0,
	MONSTER_ACTION_WALK    = 1,
	MONSTER_ACTION_ATTACK  = 2,
	MONSTER_ACTION_HIT     = 3,
	MONSTER_ACTION_DEATH   = 4,
	MONSTER_ACTION_SPECIAL = 5,
} monster_action;

/// Unique monster IDs specify unique_monster_data array indices.
///
/// References:
///    * https://github.com/sanctuary/notes/blob/master/data/monsters.cpp#unique_monster_data
typedef enum {
	UNIQUE_MONSTER_ID_GHARBAD_THE_WEAK         =  0, ///< MONSTER_ID_FLESH_CLAN_MACE
	UNIQUE_MONSTER_ID_SKELETON_KING            =  1, ///< MONSTER_ID_SKELETON_KING
	UNIQUE_MONSTER_ID_ZHAR_THE_MAD             =  2, ///< MONSTER_ID_COUNSELOR
	UNIQUE_MONSTER_ID_SNOTSPILL                =  3, ///< MONSTER_ID_DARK_ONE_SPEAR
	UNIQUE_MONSTER_ID_ARCH_BISHOP_LAZARUS      =  4, ///< MONSTER_ID_ADVOCATE
	UNIQUE_MONSTER_ID_RED_VEX                  =  5, ///< MONSTER_ID_HELL_SPAWN
	UNIQUE_MONSTER_ID_BLACKJADE                =  6, ///< MONSTER_ID_HELL_SPAWN
	UNIQUE_MONSTER_ID_LACHDANAN                =  7, ///< MONSTER_ID_BLOOD_KNIGHT
	UNIQUE_MONSTER_ID_WARLORD_OF_BLOOD         =  8, ///< MONSTER_ID_STEEL_LORD
	UNIQUE_MONSTER_ID_THE_BUTCHER              =  9, ///< MONSTER_ID_THE_BUTCHER
	UNIQUE_MONSTER_ID_BONEHEAD_KEENAXE         = 10, ///< MONSTER_ID_CORPSE_AXE
	UNIQUE_MONSTER_ID_BLADESKIN_THE_SLASHER    = 11, ///< MONSTER_ID_FALLEN_ONE_SWORD
	UNIQUE_MONSTER_ID_SOULPUS                  = 12, ///< MONSTER_ID_ZOMBIE
	UNIQUE_MONSTER_ID_PUKERAT_THE_UNCLEAN      = 13, ///< MONSTER_ID_FALLEN_ONE_SPEAR
	UNIQUE_MONSTER_ID_BONERIPPER               = 14, ///< MONSTER_ID_SKELETON_AXE
	UNIQUE_MONSTER_ID_ROTFEAST_THE_HUNGRY      = 15, ///< MONSTER_ID_ZOMBIE
	UNIQUE_MONSTER_ID_GUTSHANK_THE_QUICK       = 16, ///< MONSTER_ID_CARVER_SWORD
	UNIQUE_MONSTER_ID_BROKENHEAD_BANGSHIELD    = 17, ///< MONSTER_ID_CORPSE_CAPTAIN
	UNIQUE_MONSTER_ID_BONGO                    = 18, ///< MONSTER_ID_DEVIL_KIN_SPEAR
	UNIQUE_MONSTER_ID_ROTCARNAGE               = 19, ///< MONSTER_ID_GHOUL
	UNIQUE_MONSTER_ID_SHADOWBITE               = 20, ///< MONSTER_ID_SCAVENGER
	UNIQUE_MONSTER_ID_DEADEYE                  = 21, ///< MONSTER_ID_SKELETON_BOW
	UNIQUE_MONSTER_ID_MADEYE_THE_DEAD          = 22, ///< MONSTER_ID_BURNING_DEAD_AXE
	UNIQUE_MONSTER_ID_EL_CHUPACABRAS           = 23, ///< MONSTER_ID_PLAGUE_EATER
	UNIQUE_MONSTER_ID_SKULLFIRE                = 24, ///< MONSTER_ID_CORPSE_BOW
	UNIQUE_MONSTER_ID_WARPSKULL                = 25, ///< MONSTER_ID_HIDDEN
	UNIQUE_MONSTER_ID_GORETONGUE               = 26, ///< MONSTER_ID_ROTTING_CARCASS
	UNIQUE_MONSTER_ID_PULSECRAWLER             = 27, ///< MONSTER_ID_SHADOW_BEAST
	UNIQUE_MONSTER_ID_MOONBENDER               = 28, ///< MONSTER_ID_BLINK
	UNIQUE_MONSTER_ID_WRATHRAVEN               = 29, ///< MONSTER_ID_BLINK
	UNIQUE_MONSTER_ID_SPINEEATER               = 30, ///< MONSTER_ID_BONE_GASHER
	UNIQUE_MONSTER_ID_BLACKASH_THE_BURNING     = 31, ///< MONSTER_ID_BURNING_DEAD_BOW
	UNIQUE_MONSTER_ID_SHADOWCROW               = 32, ///< MONSTER_ID_DARK_ONE_SWORD
	UNIQUE_MONSTER_ID_BLIGHTSTONE_THE_WEAK     = 33, ///< MONSTER_ID_LORD_SAYTER
	UNIQUE_MONSTER_ID_BILEFROTH_THE_PIT_MASTER = 34, ///< MONSTER_ID_OVERLORD
	UNIQUE_MONSTER_ID_BLOODSKIN_DARKBOW        = 35, ///< MONSTER_ID_FLESH_CLAN_BOW
	UNIQUE_MONSTER_ID_FOULWING                 = 36, ///< MONSTER_ID_GLOOM
	UNIQUE_MONSTER_ID_SHADOWDRINKER            = 37, ///< MONSTER_ID_HORROR_CAPTAIN
	UNIQUE_MONSTER_ID_HAZESHIFTER              = 38, ///< MONSTER_ID_UNSEEN
	UNIQUE_MONSTER_ID_DEATHSPIT                = 39, ///< MONSTER_ID_ACID_BEAST
	UNIQUE_MONSTER_ID_BLOODGUTTER              = 40, ///< MONSTER_ID_FIRE_CLAN_MACE
	UNIQUE_MONSTER_ID_DEATHSHADE_FLESHMAUL     = 41, ///< MONSTER_ID_STONE_CLAN_MACE
	UNIQUE_MONSTER_ID_WARMAGGOT_THE_MAD        = 42, ///< MONSTER_ID_WYRM
	UNIQUE_MONSTER_ID_GLASSKULL_THE_JAGGED     = 43, ///< MONSTER_ID_RED_STORM
	UNIQUE_MONSTER_ID_BLIGHTFIRE               = 44, ///< MONSTER_ID_FIRE_CLAN_BOW
	UNIQUE_MONSTER_ID_NIGHTWING_THE_COLD       = 45, ///< MONSTER_ID_GARGOYLE
	UNIQUE_MONSTER_ID_GORESTONE                = 46, ///< MONSTER_ID_NIGHT_CLAN_BOW
	UNIQUE_MONSTER_ID_BRONZEFIST_FIRESTONE     = 47, ///< MONSTER_ID_HELL_STONE
	UNIQUE_MONSTER_ID_WRATHFIRE_THE_DOOMED     = 48, ///< MONSTER_ID_INCINERATOR
	UNIQUE_MONSTER_ID_FIREWOUND_THE_GRIM       = 49, ///< MONSTER_ID_MAGMA_DEMON
	UNIQUE_MONSTER_ID_BARON_SLUDGE             = 50, ///< MONSTER_ID_MUD_MAN
	UNIQUE_MONSTER_ID_BLIGHTHORN_STEELMACE     = 51, ///< MONSTER_ID_NIGHT_CLAN_MACE
	UNIQUE_MONSTER_ID_CHAOSHOWLER              = 52, ///< MONSTER_ID_POISON_SPITTER
	UNIQUE_MONSTER_ID_DOOMGRIN_THE_ROTTING     = 53, ///< MONSTER_ID_RED_DEATH
	UNIQUE_MONSTER_ID_MADBURNER                = 54, ///< MONSTER_ID_FLAME_LORD
	UNIQUE_MONSTER_ID_BONESAW_THE_LITCH        = 55, ///< MONSTER_ID_LITCH_DEMON
	UNIQUE_MONSTER_ID_BREAKSPINE               = 56, ///< MONSTER_ID_MUD_RUNNER
	UNIQUE_MONSTER_ID_DEVILSKULL_SHARPBONE     = 57, ///< MONSTER_ID_RED_DEATH
	UNIQUE_MONSTER_ID_BROKENSTORM              = 58, ///< MONSTER_ID_RED_STORM
	UNIQUE_MONSTER_ID_STORMBANE                = 59, ///< MONSTER_ID_STORM_RIDER
	UNIQUE_MONSTER_ID_OOZEDROOL                = 60, ///< MONSTER_ID_TOAD_DEMON
	UNIQUE_MONSTER_ID_GOLDBLIGHT_OF_THE_FLAME  = 61, ///< MONSTER_ID_BLOOD_CLAW
	UNIQUE_MONSTER_ID_BLACKSTORM               = 62, ///< MONSTER_ID_OBSIDIAN_LORD
	UNIQUE_MONSTER_ID_PLAGUEWRATH              = 63, ///< MONSTER_ID_POISON_SPITTER
	UNIQUE_MONSTER_ID_THE_FLAYER               = 64, ///< MONSTER_ID_STORM_RIDER
	UNIQUE_MONSTER_ID_BLUEHORN                 = 65, ///< MONSTER_ID_FROST_CHARGER
	UNIQUE_MONSTER_ID_WARPFIRE_HELLSPAWN       = 66, ///< MONSTER_ID_HELL_BURNER
	UNIQUE_MONSTER_ID_FANGSPEIR                = 67, ///< MONSTER_ID_CAVE_VIPER
	UNIQUE_MONSTER_ID_FESTERSKULL              = 68, ///< MONSTER_ID_UNDEAD_BALROG
	UNIQUE_MONSTER_ID_LIONSKULL_THE_BENT       = 69, ///< MONSTER_ID_BLACK_KNIGHT
	UNIQUE_MONSTER_ID_BLACKTONGUE              = 70, ///< MONSTER_ID_COUNSELOR
	UNIQUE_MONSTER_ID_VILETOUCH                = 71, ///< MONSTER_ID_DEATH_WING
	UNIQUE_MONSTER_ID_VIPERFLAME               = 72, ///< MONSTER_ID_FIRE_DRAKE
	UNIQUE_MONSTER_ID_FANGSKIN                 = 73, ///< MONSTER_ID_GOLD_VIPER
	UNIQUE_MONSTER_ID_WITCHFIRE_THE_UNHOLY     = 74, ///< MONSTER_ID_SUCCUBUS
	UNIQUE_MONSTER_ID_BLACKSKULL               = 75, ///< MONSTER_ID_BALROG
	UNIQUE_MONSTER_ID_SOULSLASH                = 76, ///< MONSTER_ID_UNRAVELER
	UNIQUE_MONSTER_ID_WINDSPAWN                = 77, ///< MONSTER_ID_VORTEX_LORD
	UNIQUE_MONSTER_ID_LORD_OF_THE_PIT          = 78, ///< MONSTER_ID_AZURE_DRAKE
	UNIQUE_MONSTER_ID_RUSTWEAVER               = 79, ///< MONSTER_ID_DOOM_GUARD
	UNIQUE_MONSTER_ID_HOWLINGIRE_THE_SHADE     = 80, ///< MONSTER_ID_HOLLOW_ONE
	UNIQUE_MONSTER_ID_DOOMCLOUD                = 81, ///< MONSTER_ID_MAELSTORM
	UNIQUE_MONSTER_ID_BLOODMOON_SOULFIRE       = 82, ///< MONSTER_ID_PAIN_MASTER
	UNIQUE_MONSTER_ID_WITCHMOON                = 83, ///< MONSTER_ID_SNOW_WITCH
	UNIQUE_MONSTER_ID_GOREFEAST                = 84, ///< MONSTER_ID_VORTEX_LORD
	UNIQUE_MONSTER_ID_GRAYWAR_THE_SLAYER       = 85, ///< MONSTER_ID_DOOM_GUARD
	UNIQUE_MONSTER_ID_DREADJUDGE               = 86, ///< MONSTER_ID_MAGISTRATE
	UNIQUE_MONSTER_ID_STAREYE_THE_WITCH        = 87, ///< MONSTER_ID_HELL_SPAWN
	UNIQUE_MONSTER_ID_STEELSKULL_THE_HUNTER    = 88, ///< MONSTER_ID_STEEL_LORD
	UNIQUE_MONSTER_ID_SIR_GORASH               = 89, ///< MONSTER_ID_BLOOD_KNIGHT
	UNIQUE_MONSTER_ID_THE_VIZIER               = 90, ///< MONSTER_ID_CABALIST
	UNIQUE_MONSTER_ID_ZAMPHIR                  = 91, ///< MONSTER_ID_REALITY_WEAVER
	UNIQUE_MONSTER_ID_BLOODLUST                = 92, ///< MONSTER_ID_HELL_SPAWN
	UNIQUE_MONSTER_ID_WEBWIDOW                 = 93, ///< MONSTER_ID_HELL_SPAWN
	UNIQUE_MONSTER_ID_FLESHDANCER              = 94, ///< MONSTER_ID_SOUL_BURNER
	UNIQUE_MONSTER_ID_GRIMSPIKE                = 95, ///< MONSTER_ID_OBSIDIAN_LORD
	UNIQUE_MONSTER_ID_DOOMLOCK                 = 96, ///< MONSTER_ID_STORM_LORD
	UNIQUE_MONSTER_ID_NULL                     = 97, ///< MONSTER_ID_NONE
} unique_monster_id;

#endif // ENUMS_H
