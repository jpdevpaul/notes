#include "types.h"

/// address: 0x4B2724
///
/// towner_anim_seq specifies the animation frame sequence of a given NPC.
///
/// PSX ref: 0x800CF7E4
/// PSX def: char AnimOrder[6][148]
extern int8_t towner_anim_seq[148][6];

/// address: 0x4B2A9C
///
/// cow_start_x specifies the start X-coordinates of the cows in Tristram.
///
/// PSX ref: 0x800CFB5C
/// PSX def: int TownCowX[3]
extern int cow_start_x[3];

/// address: 0x4B2AA8
///
/// cow_start_y specifies the start Y-coordinates of the cows in Tristram.
///
/// PSX ref: 0x800CFB68
/// PSX def: int TownCowY[3]
extern int cow_start_y[3];

/// address: 0x4B2AB4
///
/// cow_start_direction specifies the start directions of the cows in Tristram.
///
/// PSX ref: 0x800CFB74
/// PSX def: int TownCowDir[3]
extern direction cow_start_direction[3];

/// address: 0x4B2AC0
///
/// cow_x_delta_from_direction maps from direction to X-coordinate delta, which
/// is used when placing cows in Tristram. A single cow may require space of up
/// to three tiles when being placed on the map.
///
/// PSX ref: 0x800CFB80
/// PSX def: int cowoffx[8]
extern int cow_x_delta_from_direction[8];

/// address: 0x4B2AE0
///
/// cow_y_delta_from_direction maps from direction to Y-coordinate delta, which
/// is used when placing cows in Tristram. A single cow may require space of up
/// to three tiles when being placed on the map.
///
/// PSX ref: 0x800CFBA0
/// PSX def: int cowoffy[8]
extern int cow_y_delta_from_direction[8];

/// address: 0x4B2B00
///
/// gossip_data contains the data related to quest gossip for each towner ID.
///
/// PSX ref: 0x800CFBC0
/// PSX def: int Qtalklist[11][16]
extern GossipData gossip_data[10];

/// address: 0x4B2DC0
///
/// cow_active_sfx_id specifies the active sound effect ID for interacting with
/// cows.
///
/// PSX ref: 0x8011B814
/// PSX def: unsigned long CowPlaying
extern sfx_id cow_active_sfx_id;

/// address: 0x4B2DC4
///
/// "Griswold the Blacksmith"
extern char str_4B2DC4[24];

/// address: 0x4B2DDC
///
/// `Towners\Smith\SmithN.CEL`
extern char str_4B2DDC[25];

/// address: 0x4B2DF8
///
/// "Ogden the Tavern owner"
extern char str_4B2DF8[23];

/// address: 0x4B2E10
///
/// `Towners\TwnF\TwnFN.CEL`
extern char str_4B2E10[23];

/// address: 0x4B2E28
///
/// "Wounded Townsman"
extern char str_4B2E28[17];

/// address: 0x4B2E3C
///
/// `Towners\Butch\Deadguy.CEL`
extern char str_4B2E3C[26];

/// address: 0x4B2E58
///
/// "Adria the Witch"
extern char str_4B2E58[16];

/// address: 0x4B2E68
///
/// `Towners\TownWmn1\Witch.CEL`
extern char str_4B2E68[27];

/// address: 0x4B2E84
///
/// "Gillian the Barmaid"
extern char str_4B2E84[20];

/// address: 0x4B2E98
///
/// `Towners\TownWmn1\WmnN.CEL`
extern char str_4B2E98[26];

/// address: 0x4B2EB4
///
/// `Towners\TownBoy\PegKid1.CEL`
extern char str_4B2EB4[28];

/// address: 0x4B2ED0
///
/// "Pepin the Healer"
extern char str_4B2ED0[17];

/// address: 0x4B2EE4
///
/// `Towners\Healer\Healer.CEL`
extern char str_4B2EE4[26];

/// address: 0x4B2F00
///
/// "Cain the Elder"
extern char str_4B2F00[15];

/// address: 0x4B2F10
///
/// `Towners\Strytell\Strytell.CEL`
extern char str_4B2F10[30];

/// address: 0x4B2F30
///
/// `Towners\Drunk\TwnDrunk.CEL`
extern char str_4B2F30[27];

/// address: 0x4B2F4C
///
/// "Cow"
extern char str_4B2F4C[4];

/// address: 0x4B2F50
///
/// `Towners\Animals\Cow.CEL`
extern char str_4B2F50[24];

/// address: 0x4B2F68
///
/// "Slain Townsman"
extern char str_4B2F68[15];
