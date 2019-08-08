/// address: 0x47F204
///
/// +Infinity
extern float player_inf;

/// address: 0x47F208
///
/// ArmourChar maps from armor animation to letter used in graphic files.
///
/// PSX ref (SLPS-01416): 0x8011B008
/// PSX def: char ArmourChar[4]
// Note: char[3] is enough, though PSX details as char[4].
extern char ArmourChar[4]; // alias: player_armors

/// address: 0x47F20C
///
/// WepChar maps from weapon animation to letter used in graphic files.
///
/// PSX ref (SLPS-01416): 0x80110B68
/// PSX def: char WepChar[10]
// Note: char[9] is enough, though PSX details as char[10].
extern char WepChar[10]; // alias: player_weapons

/// address: 0x47F218
///
/// CharChar maps from player class to letter used in graphic files.
///
/// PSX ref (SLPS-01416): 0x8011B00C
/// PSX def: char CharChar[4]
// Note: char[3] is enough, though PSX details as char[4].
extern char CharChar[4]; // alias: player_classes

/// address: 0x47F220
///
/// 1.0
extern double double_1_0;

/// address: 0x47F228
///
/// 0.1
extern double double_0_1;
