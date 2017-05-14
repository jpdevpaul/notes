// GossipData specifies the speech IDs for the gossip related to each quest.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#speech_id
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
