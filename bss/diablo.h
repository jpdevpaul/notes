#include "types.h"

/// address: 0x525514
///
/// +Infinity after initialization of diablo.cpp.
extern float diablo_cpp_init_value;

/// address: 0x525518
///
/// hWndParent is the window handle of the game.
extern HWND hWndParent;

/// address: 0x5255BC
///
/// gnLevelTypeTbl maps from dungeon level to dungeon type.
///
/// PSX ref: 0x800CF7A0
/// PSX def: int gnLevelTypeTbl[17]
extern int32_t gnLevelTypeTbl[17]; // alias: dtype_from_dlvl

/// address: 0x525600
///
/// MouseY specifies the current Y screen coordinate of the mouse cursor.
///
/// PSX ref: 0x8011B7E8
/// PSX def: int MouseY
extern int32_t MouseY;

/// address: 0x525604
///
/// MouseX specifies the current X screen coordinate of the mouse cursor.
///
/// PSX ref: 0x8011B7E4
/// PSX def: int MouseX
extern int32_t MouseX;

/// address: 0x52560C
///
/// glSeedTbl maps from dungeon level to dungeon level seed.
///
/// PSX ref: 0x800CF75C
/// PSX def: unsigned long glSeedTbl[17]
extern int32_t glSeedTbl[17]; // alias: seed_from_dlvl

/// address: 0x5256EC
///
/// hInstance is the instance of the main process.
extern HINSTANCE hInstance;

/// address: 0x52571C
///
/// drawpanflag specifies what parts of the panel to render. To force a full
/// re-render, 0xFF is used.
extern uint8_t drawpanflag;

/// address: 0x525720
///
/// visible_tile_squares specifies whether tile squares are visible. In the
/// debug release of Diablo 1, this setting was configurable through the command
/// line flag "-v".
///
/// References:
///    * http://diablo1.se/notes/debug.html
extern bool32_t visible_tile_squares;

/// address: 0x525728
///
/// lighting_flag4 specifies flags used for light effects.
///
/// PSX ref: 0x8011B797
/// PSX def: unsigned char light4flag
extern uint32_t lighting_flag4;

/// address: 0x525738
///
/// flag_r_seed specifies the seed used for dungeon generation through the -r
/// command line flag.
extern int32_t flag_r_seed;
