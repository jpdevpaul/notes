#include "types.h"

/// address: 0x448DF5
///
/// j_palette_cpp_init initializes the C++ runtime of palette.cpp.
void j_palette_cpp_init();

/// address: 0x448DFA
///
/// palette_cpp_init initializes the C++ runtime of palette.cpp.
void palette_cpp_init();

/// address: 0x448E05
///
/// palette_save_gamme stores the gamma correction and colour cycling settings.
void palette_save_gamme();

/// address: 0x448E33
///
/// palette_init initializes the palette.
void palette_init();

/// address: 0x448EAB
///
/// palette_load_gamme loads the gamma correction and colour cycling settings.
void palette_load_gamma();

/// address: 0x448F20
///
/// palette_load_system_palette loads the system palette.
void palette_load_system_palette();

/// address: 0x448FC9
///
/// palette_load loads the given palette file.
///
/// PSX ref: 0x8007EE64
/// PSX def: void LoadPalette__FPCc(char *pszFileName)
void __fastcall palette_load(char *pal_path);

/// address: 0x449025
///
/// palette_load_rand_level_palette loads a random palette for the given dungeon
/// type.
///
/// PSX ref: 0x8007EE6C
/// PSX def: void LoadRndLvlPal__Fi(int l)
void __fastcall palette_load_rand_level_palette(dungeon_type dtype);

/// address: 0x44906C
///
/// palette_realize updates the system palette.
void palette_realize();

/// address: 0x449097
///
/// palette_inc_gamma increases the gamma correction.
void palette_inc_gamma();

/// address: 0x4490D0
///
/// palette_update updates the system palette.
void palette_update();

/// address: 0x449107
///
/// palette_apply_gamma_correction copies the first n entries of the source
/// palette to the destination palette with applied gamma correction.
void __fastcall palette_apply_gamma_correction(PALETTEENTRY *dst, PALETTEENTRY *src, int n);

/// address: 0x4491D0
///
/// palette_dec_gamma decreases the gamma correction.
void palette_dec_gamma();

/// address: 0x449209
///
/// palette_update_gamma updates the gamma of the palette. A zero value returns
/// the current gamma.
int __fastcall palette_update_gamma(int gamma);

/// address: 0x44923E
///
/// palette_set_black_palette sets the active palette to black.
void palette_set_black_palette();

/// address: 0x449245
///
/// palette_set_brightness sets the brightness of the active palette.
void __fastcall palette_set_brightness(int brightness);

/// address: 0x4492B0
///
/// palette_brightness_fade_in increases the brightness of the active palette by
/// the specified increment size to create a fade in effect.
///
/// PSX ref: 0x8007F1F0
/// PSX def: unknown PaletteFadeIn__Fi(int fr)
void __fastcall palette_brightness_fade_in(int inc);

/// address: 0x449306
///
/// palette_brightness_fade_out decreases the brightness of the active palette by
/// the specified decrement size to create a fade out effect.
///
/// PSX ref: 0x8007F2F8
/// PSX def: unknown PaletteFadeOut__Fi(int fr)
void __fastcall palette_brightness_fade_out(int dec);

/// address: 0x449336
///
/// palette_update_caves updates the palettes of Caves.
void palette_update_caves();

/// address: 0x449398
///
/// palette_update_quest_palette updates palette entries related to the quest
/// level.
void __fastcall palette_update_quest_palette(int n);

/// address: 0x4493C6
///
/// palette_get_colour_cycling reports whether colour cycling is enabled.
bool32_t palette_get_colour_cycling();

/// address: 0x4493CC
///
/// palette_set_colour_cycling sets the colour cycling to enabled or disabled.
void __fastcall palette_set_color_cycling(bool32_t enabled);
