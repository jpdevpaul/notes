#include "types.h"

// address: 0x401DA4
//
// automap_init initializes the automap.
//
// PSX ref: 0x8015F6BC
// PSX def: void InitAutomapOnce__Fv()
void automap_init();

// address: 0x401DE8
//
// automap_init_types loads the mapping between tile IDs and automap types.
//
// PSX ref: 0x8015F4C4
// PSX def: void InitAutomap__Fv()
void automap_init_types();

// address: 0x401EF4
//
// automap_show displays the automap.
//
// PSX ref: 0x80161F58
// PSX def: void StartAutomap__Fv()
void automap_show();

// address: 0x401F0D
//
// automap_scroll_up scrolls the automap upwards.
//
// PSX ref: 0x80161F68
// PSX def: void AutomapUp__Fv()
void automap_scroll_up();

// address: 0x401F1A
//
// automap_scroll_down scrolls the automap downwards.
//
// PSX ref: 0x80161F88
// PSX def: void AutomapDown__Fv()
void automap_scroll_down();

// address: 0x401F27
//
// automap_scroll_left scrolls the automap to the left.
//
// PSX ref: 0x80161FA8
// PSX def: void AutomapLeft__Fv()
void automap_scroll_left();

// address: 0x401F34
//
// automap_scroll_right scrolls the automap to the right.
//
// PSX ref: 0x80161FC8
// PSX def: void AutomapRight__Fv()
void automap_scroll_right();

// address: 0x401F41
//
// automap_zoom_in increases the zoom level of the automap.
void automap_zoom_in();

// address: 0x401F80
//
// automap_zoom_out decreases the zoom level of the automap.
void automap_zoom_out();

// address: 0x401FBD
//
// automap_draw renders the automap on screen.
//
// PSX ref: 0x80162E50
// PSX def: void DrawAutomap__Fv()
void automap_draw();

// address: 0x402233
//
// automap_draw_type renders the given automap type at the specified screen
// coordinates.
//
//    x = screen_x - 64
//    y = screen_y - 160
void __fastcall automap_draw_type(int screen_x, int screen_y, uint16_t automap_type);

// address: 0x4029A8
//
// automap_draw_player_arrow renders an arrow on the automap, centered on and facing the direction of the player.
//
// PSX ref: 0x80162124
// PSX def: void DrawAutomapPlr__Fv()
void automap_draw_player_arrow();

// TODO: define automap_type enum, and update signature of automap_get_type.

// address: 0x402D83
//
// automap_get_type returns the automap type at the given coordinate.
//
// PSX ref: 0x800809D4
// PSX def: unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view)
uint16_t __fastcall automap_get_type(int tx, int ty, bool32_t view);

// address: 0x402E4A
//
// automap_draw_game_info renders game info, such as the name of the current
// level, and in multi player, the name of the game and the game password.
void automap_draw_game_info();

// address: 0x402F27
//
// automap_set_view marks the given coordinate as within view on the automap.
//
// PSX ref: 0x80080AA8
// PSX def: void SetAutomapView__Fii(int x, int y)
void __fastcall automap_set_view(int x, int y);

// address: 0x4030DD
//
// automap_reset_zoom resets the zoom level of the automap.
void automap_reset_zoom();
