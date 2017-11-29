#include "types.h"

// address: 0x4B2724
//
// towner_anim_seq specifies the animation frame sequence of a given NPC.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#towner_anim_seq_id
int8_t towner_anim_seq[148][6];

// address: 0x4B2A9C
//
// cow_start_col specifies the start columns of the cows in Tristram.
int cow_start_col[3];

// address: 0x4B2AA8
//
// cow_start_row specifies the start rows of the cows in Tristram.
int cow_start_row[3];

// address: 0x4B2AB4
//
// cow_start_direction specifies the start directions of the cows in Tristram.
direction cow_start_direction[3];

// address: 0x4B2AC0
//
// cow_col_delta_from_direction maps from direction to column delta, which is
// used when placing cows in Tristram. A single cow may require space of up to
// three tiles when being placed on the map.
int cow_col_delta_from_direction[8];

// address: 0x4B2AE0
//
// cow_row_delta_from_direction maps from direction to row delta, which is used
// when placing cows in Tristram. A single cow may require space of up to three
// tiles when being placed on the map.
int cow_row_delta_from_direction[8];

// address: 0x4B2B00
//
// gossip_data contains the data related to quest gossip for each towner ID.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#towner_id
//    * https://github.com/sanctuary/notes/blob/master/structs.h#gossipdata
GossipData gossip_data[10];

// address: 0x4B2DC0
//
// cow_active_sfx_id specifies the active sound effect ID for interacting with
// cows.
//
// PSX ref: 0x8011B814
// PSX def: unsigned long CowPlaying
sfx_id cow_active_sfx_id;

// address: 0x4B2DC4
//
// "Griswold the Blacksmith"
const char str_4B2DC4[24] = {};

// address: 0x4B2DDC
//
// `Towners\Smith\SmithN.CEL`
const char str_4B2DDC[25] = {};

// address: 0x4B2DF8
//
// "Ogden the Tavern owner"
const char str_4B2DF8[23] = {};

// address: 0x4B2E10
//
// `Towners\TwnF\TwnFN.CEL`
const char str_4B2E10[23] = {};

// address: 0x4B2E28
//
// "Wounded Townsman"
const char str_4B2E28[17] = {};

// address: 0x4B2E3C
//
// `Towners\Butch\Deadguy.CEL`
const char str_4B2E3C[26] = {};

// address: 0x4B2E58
//
// "Adria the Witch"
const char str_4B2E58[16] = {};

// address: 0x4B2E68
//
// `Towners\TownWmn1\Witch.CEL`
const char str_4B2E68[27] = {};

// address: 0x4B2E84
//
// "Gillian the Barmaid"
const char str_4B2E84[20] = {};

// address: 0x4B2E98
//
// `Towners\TownWmn1\WmnN.CEL`
const char str_4B2E98[26] = {};

// address: 0x4B2EB4
//
// `Towners\TownBoy\PegKid1.CEL`
const char str_4B2EB4[28] = {};

// address: 0x4B2ED0
//
// "Pepin the Healer"
const char str_4B2ED0[17] = {};

// address: 0x4B2EE4
//
// `Towners\Healer\Healer.CEL`
const char str_4B2EE4[26] = {};

// address: 0x4B2F00
//
// "Cain the Elder"
const char str_4B2F00[15] = {};

// address: 0x4B2F10
//
// `Towners\Strytell\Strytell.CEL`
const char str_4B2F10[30] = {};

// address: 0x4B2F30
//
// `Towners\Drunk\TwnDrunk.CEL`
const char str_4B2F30[27] = {};

// address: 0x4B2F4C
//
// "Cow"
const char str_4B2F4C[4] = {};

// address: 0x4B2F50
//
// `Towners\Animals\Cow.CEL`
const char str_4B2F50[24] = {};

// address: 0x4B2F68
//
// "Slain Townsman"
const char str_4B2F68[15] = {};
