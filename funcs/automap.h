#include "types.h"

/// InitAutomapOnce initializes the automap.
///
///    PSX ref (SLPS-01416): 0x8015F6BC
///    HF def: void InitAutomapOnce()
///
/// Address in diablo.exe (v1.09b): 0x401DA4
void InitAutomapOnce();

/// InitAutomap loads the mapping between tile IDs and automap shapes.
///
///    PSX ref (SLPS-01416): 0x8015F4C4
///    HF def: void InitAutomap()
///
/// Address in diablo.exe (v1.09b): 0x401DE8
void InitAutomap(); // alias: InitAutomapShapes

/// StartAutomap displays the automap.
///
///    PSX ref (SLPS-01416): 0x80161F58
///    HF def: void StartAutomap()
///
/// Address in diablo.exe (v1.09b): 0x401EF4
void StartAutomap(); // alias: ShowAutomap

/// AutomapUp scrolls the automap upwards.
///
///    PSX ref (SLPS-01416): 0x80161F68
///    HF def: void AutomapUp()
///
/// Address in diablo.exe (v1.09b): 0x401F0D
void AutomapUp(); // alias: AutomapScrollUp

/// AutomapDown scrolls the automap downwards.
///
///    PSX ref (SLPS-01416): 0x80161F88
///    HF def: void AutomapDown()
///
/// Address in diablo.exe (v1.09b): 0x401F1A
void AutomapDown(); // alias: AutomapScrollDown

/// AutomapLeft scrolls the automap leftwards.
///
///    PSX ref (SLPS-01416): 0x80161FA8
///    HF def: void AutomapLeft()
///
/// Address in diablo.exe (v1.09b): 0x401F27
void AutomapLeft(); // alias: AutomapScrollLeft

/// AutomapRight scrolls the automap rightwards.
///
///    PSX ref (SLPS-01416): 0x80161FC8
///    HF def: void AutomapRight()
///
/// Address in diablo.exe (v1.09b): 0x401F34
void AutomapRight(); // alias: AutomapScrollRight

/// AutomapZoomIn increases the zoom level of the automap.
///
///    HF def: void AutomapZoomIn()
///
/// Address in diablo.exe (v1.09b): 0x401F41
void AutomapZoomIn();

/// AutomapZoomOut decreases the zoom level of the automap.
///
///    HF def: void AutomapZoomOut()
///
/// Address in diablo.exe (v1.09b): 0x401F80
void AutomapZoomOut();

/// DrawAutomap renders the automap on screen.
///
///    PSX ref (SLPS-01416): 0x80162E50
///    HF def: void DrawAutomap()
///
/// Address in diablo.exe (v1.09b): 0x401FBD
void DrawAutomap();

/// DrawAMShape renders the given automap shape at the specified screen
/// coordinates.
///
///    x = screen_x - 64
///    y = screen_y - 160
///
///    HF def: void DrawAMShape(int x, int y, WORD shape)
///
/// Address in diablo.exe (v1.09b): 0x402233
void __fastcall DrawAMShape(int screen_x, int screen_y, uint16_t shape); // alias: DrawAutomapShape

/// DrawAutomapPlr renders an arrow on the automap, centered on and facing the
/// direction of the player.
///
///    PSX ref (SLPS-01416): 0x80162124
///    HF def: void DrawAutomapPlr()
///
/// Address in diablo.exe (v1.09b): 0x4029A8
void DrawAutomapPlr(); // alias: DrawAutomapPlayerArrow

// TODO: define automap_shape enum.

/// GetAutomapType returns the automap shape at the given coordinate.
///
///    PSX ref (SLPS-01416): 0x800809D4
///    HF def: WORD GetAutomapType(int x, int y, BOOL view)
///
/// Address in diablo.exe (v1.09b): 0x402D83
uint16_t __fastcall GetAutomapType(int x, int y, BOOL view); // alias: AutomapGetShape

/// draw_game_info renders game info, such as the name of the current level, and
/// in multi player the name of the game and the game password.
///
///    HF def: void draw_game_info()
///
/// Address in diablo.exe (v1.09b): 0x402E4A
void draw_game_info();

/// SetAutomapView marks the given coordinate as within view on the automap.
///
///    PSX ref (SLPS-01416): 0x80080AA8
///    HF def: void SetAutomapView(int x, int y)
///
/// Address in diablo.exe (v1.09b): 0x402F27
void __fastcall SetAutomapView(int x, int y);

/// SyncAutomap resets the zoom level of the automap.
///
///    HF def: void SyncAutomap()
///
/// Address in diablo.exe (v1.09b): 0x4030DD
void SyncAutomap(); // alias: ResetAutomapZoom
