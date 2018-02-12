#include "types.h"

/// address: 0x45C870
///
/// TODO: add documentation.

/// address: 0x45C993
///
/// themes_fit_object_5x5 checks if there is a 5x5 area to fit the theme object.
///
/// PSX ref: 0x8015BEFC
/// PSX def: unsigned char TFit_Obj5__Fi(int t)
bool32_t __fastcall themes_fit_object_5x5(int theme_num);

/// address: 0x45CA72
///
/// TODO: add documentation.

/// address: 0x45CAC4
///
/// TODO: add documentation.

/// address: 0x45CB09
///
/// TODO: add documentation.

/// address: 0x45CB88
///
/// themes_fit_object_3x3 checks if there is a 3x3 area to fit the theme object.
///
/// PSX ref: 0x8015C354
/// PSX def: unsigned char TFit_Obj3__Fi(int t)
bool32_t __fastcall themes_fit_object_3x3(int theme_num);

/// address: 0x45CBE4
///
/// TODO: add documentation.

/// address: 0x45CC64
///
/// TODO: add documentation.

/// address: 0x45CD9A
///
/// TODO: add documentation.

/// address: 0x45CED2
///
/// TODO: add documentation.

/// address: 0x45D087
///
/// TODO: add documentation.

/// address: 0x45D0E1
///
/// TODO: add documentation.

/// address: 0x45D1C2
///
/// themes_init_barrel initializes the barrel theme.
///
/// PSX ref: 0x8015CF34
/// PSX def: void Theme_Barrel__Fi(int t)
void __fastcall themes_init_barrel(int theme_num);

/// address: 0x45D29A
///
/// themes_init_shrine initializes the shrine theme.
///
/// PSX ref: 0x8015D090
/// PSX def: void Theme_Shrine__Fi(int t)
void __fastcall themes_init_shrine(int theme_num);

/// address: 0x45D34D
///
/// themes_init_monster_pit initializes the monster pit theme.
///
/// PSX ref: 0x8015D178
/// PSX def: void Theme_MonstPit__Fi(int t)
void __fastcall themes_init_monster_pit(int theme_num);

/// address: 0x45D3E6
///
/// themes_init_skeleton_room initializes the skeleton room theme.
///
/// PSX ref: 0x8015D2BC
/// PSX def: void Theme_SkelRoom__Fi(int t)
void __fastcall themes_init_skeleton_room(int theme_num);

/// address: 0x45D5BC
///
/// themes_init_treasure initializes the treasure theme.
///
/// PSX ref: 0x8015D5F8
/// PSX def: void Theme_Treasure__Fi(int t)
void __fastcall themes_init_treasure(int theme_num);

/// address: 0x45D707
///
/// themes_init_library initializes the library theme.
///
/// PSX ref: 0x8015D83C
/// PSX def: void Theme_Library__Fi(int t)
void __fastcall themes_init_library(int theme_num);

/// address: 0x45D88A
///
/// themes_init_torture initializes the torture theme.
///
/// PSX ref: 0x8015DAC0
/// PSX def: void Theme_Torture__Fi(int t)
void __fastcall themes_init_torture(int theme_num);

/// address: 0x45D95D
///
/// themes_init_blood_fountain initializes the blood fountain theme.
///
/// PSX ref: 0x8015DC18
/// PSX def: void Theme_BloodFountain__Fi(int t)
void __fastcall themes_init_blood_fountain(int theme_num);

/// address: 0x45D9A3
///
/// themes_init_decapitated initializes the decapitated theme.
///
/// PSX ref: 0x8015DC8C
/// PSX def: void Theme_Decap__Fi(int t)
void __fastcall themes_init_decapitated(int theme_num);

/// address: 0x45DA76
///
/// themes_init_purifying_fountain initializes the purifying fountain theme.
///
/// PSX ref: 0x8015DDE4
/// PSX def: void Theme_PurifyingFountain__Fi(int t)
void __fastcall themes_init_purifying_fountain(int theme_num);

/// address: 0x45DABC
///
/// themes_init_armor_stand initializes the armor stand theme.
///
/// PSX ref: 0x8015DE58
/// PSX def: void Theme_ArmorStand__Fi(int t)
void __fastcall themes_init_armor_stand(int theme_num);

/// address: 0x45DBAD
///
/// themes_init_goat_shrine initializes the goat shrine theme.
///
/// PSX ref: 0x8015DFD4
/// PSX def: void Theme_GoatShrine__Fi(int t)
void __fastcall themes_init_goat_shrine(int theme_num);

/// address: 0x45DC7B
///
/// themes_init_cauldron initializes the cauldron theme.
///
/// PSX ref: 0x8015E108
/// PSX def: void Theme_Cauldron__Fi(int t)
void __fastcall themes_init_cauldron(int theme_num);

/// address: 0x45DCC1
///
/// themes_init_murky_fountain initializes the murky fountain theme.
///
/// PSX ref: 0x8015E17C
/// PSX def: void Theme_MurkyFountain__Fi(int t)
void __fastcall themes_init_murky_fountain(int theme_num);

/// address: 0x45DD07
///
/// themes_init_tear_fountain initializes the tear fountain theme.
///
/// PSX ref: 0x8015E1F0
/// PSX def: void Theme_TearFountain__Fi(int t)
void __fastcall themes_init_tear_fountain(int theme_num);

/// address: 0x45DD4D
///
/// themes_init_burning_cross initializes the burning cross theme.
///
/// PSX ref: 0x8015E264
/// PSX def: void Theme_BrnCross__Fi(int t)
void __fastcall themes_init_burning_cross(int theme_num);

/// address: 0x45DE20
///
/// themes_init_weapon_rack initializes the weapon rack theme.
///
/// PSX ref: 0x8015E3C0
/// PSX def: void Theme_WeaponRack__Fi(int t)
void __fastcall themes_init_weapon_rack(int theme_num);

/// address: 0x45DF11
///
/// themes_update_transparency updates the transparency map, setting each
/// transparent value to 1.
///
/// PSX ref: 0x8015E53C
/// PSX def: void UpdateL4Trans__Fv()
void themes_update_transparency();

/// address: 0x45DF31
///
/// themes_create_theme_rooms adds thematic elements to rooms.
///
/// PSX ref: 0x8015E598
/// PSX def: void CreateThemeRooms__Fv()
void themes_create_theme_rooms();
