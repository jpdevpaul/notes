#include "types.h"

/// address: 0x4619A7
///
/// trigs_init_archbishop_lazarus_lair initializers triggers on Archbishop
/// Lazarus' Lair.
///
/// PSX ref: 0x801621AC
/// PSX def: void InitNoTriggers__Fv()
void trigs_init_archbishop_lazarus_lair();

/// address: 0x4619B6
///
/// trigs_init_warps_town initializes opened entrances from Tristram to the
/// various dungeon types of the Cathedral.
void trigs_init_warps_town();

/// address: 0x461B45
///
/// trigs_init_warps_cathedral initializes entrances from the Cathedral to
/// Tristram.
void trigs_init_warps_cathedral();

/// address: 0x461BEE
///
/// trigs_init_warps_catacombs initializes entrances from the Catacombs to
/// Tristram.
void trigs_init_warps_catacombs();

/// address: 0x461CF6
///
/// trigs_init_warps_caves initializes entrances from the Caves to Tristram.
void trigs_init_warps_caves();

/// address: 0x461DC6
///
/// trigs_init_warps_hell initializes entrances from Hell to Tristram.
void trigs_init_warps_hell();

/// address: 0x461F0A
///
/// trigs_init_skeleton_kings_lair initializers triggers on Skeleton King's Lair.
///
/// PSX ref: 0x80162BF8
/// PSX def: void InitSKingTriggers__Fv()
void trigs_init_skeleton_kings_lair();

/// address: 0x461F3A
///
/// trigs_init_bone_chamber initializers triggers on the Bone Chamber.
///
/// PSX ref: 0x80162C44
/// PSX def: void InitSChambTriggers__Fv()
void trigs_init_bone_chamber();

/// address: 0x461F6A
///
/// trigs_init_poisoned_water_supply initializers triggers on the Poisoned Water
/// Supply.
///
/// PSX ref: 0x80162C90
/// PSX def: void InitPWaterTriggers__Fv()
void trigs_init_poisoned_water_supply();

/// address: 0x461F9A
///
/// trigs_init_warps_archbishop_lazarus_lair initializers triggers on the
/// Archbishop Lazarus' Lair.
void trigs_init_warps_archbishop_lazarus_lair();

/// address: 0x461FCA
///
/// trigs_set_stairway_text_town sets the description text of stairways in
/// Tristram.
bool32_t trigs_set_stairway_text_town();

/// address: 0x462130
///
/// trigs_set_stairway_text_cathedral sets the description text of stairways in
/// the Cathedral.
bool32_t trigs_set_stairway_text_cathedral();

/// address: 0x46224C
///
/// trigs_set_stairway_text_catacombs sets the description text of stairways in
/// the Catacombs.
bool32_t trigs_set_stairway_text_catacombs();

/// address: 0x46244F
///
/// trigs_set_stairway_text_caves sets the description text of stairways in the
/// Caves.
bool32_t trigs_set_stairway_text_caves();

/// address: 0x46262D
///
/// trigs_set_stairway_text_hell sets the description text of stairways in the
/// Hell.
bool32_t trigs_set_stairway_text_hell();

/// address: 0x462876
///
/// trigs_init_stairways_collision initializes the collision properties of
/// stairways.
void trigs_init_stairways_collision();

/// address: 0x4628B7
///
/// trigs_set_stairway_text_skeleton_kings_lair sets the description text of
/// stairways in Skeleton King's Lair.
bool32_t trigs_set_stairway_text_skeleton_kings_lair();

/// address: 0x46291F
///
/// trigs_set_stairway_text_bone_chamber sets the description text of stairways
/// in the Bone Chamber.
bool32_t trigs_set_stairway_text_bone_chamber();

/// address: 0x462987
///
/// trigs_set_stairway_text_poisoned_water_supply sets the description text of
/// stairways in the Poisoned Water Supply.
bool32_t trigs_set_stairway_text_poisoned_water_supply();

/// address: 0x4629EF
///
/// trigs_print_stairway_text_on_hover prints a description of stairways on
/// mouse hover.
void trigs_print_stairway_text_on_hover();

/// address: 0x462A9D
///
/// trigs_process processes any game state changes of the triggers, since the
/// last game tick.
///
/// PSX ref: 0x80076AC8
/// PSX def: void CheckTriggers__Fi(int pnum)
void trigs_process();
