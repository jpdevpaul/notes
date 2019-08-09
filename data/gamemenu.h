#include "types.h"

/// address: 0x48E1B8
///
/// SingleMenu contains the game menu items of the single player menu.
extern MenuItem SingleMenu[6]; // alias: single_menu

/// address: 0x48E200
///
/// MultiMenu contains the game menu items of the multi player menu.
extern MenuItem MultiMenu[5]; // alias: multi_menu

/// address: 0x48E240
///
/// OptionsMenu contains the game menu items of the options menu.
extern MenuItem OptionsMenu[6]; // alias: options_menu

/// address: 0x48E288
///
/// music_toggle_names specifies the menu names for music enabled and disabled.
extern char *music_toggle_names[2];

/// address: 0x48E290
///
/// sound_toggle_names specifies the menu names for sound enabled and disabled.
extern char *sound_toggle_names[2];

/// address: 0x48E298
///
/// color_cycling_toggle_names specifies the menu names for colour cycling
/// disabled and enabled.
extern char *color_cycling_toggle_names[2];

/// address: 0x48E2A0
///
/// "Color Cycling On"
extern char str_48E2A0[17];

/// address: 0x48E2B4
///
/// "Color Cycling Off"
extern char str_48E2B4[18];

/// address: 0x48E2C8
///
/// "Sound Disabled"
extern char str_48E2C8[15];

/// address: 0x48E2D8
///
/// "Sound"
extern char str_48E2D8[6];

/// address: 0x48E2E0
///
/// "Music Disabled"
extern char str_48E2E0[15];

/// address: 0x48E2F0
///
/// "Music"
extern char str_48E2F0[6];

/// address: 0x48E2F8
///
/// "Previous Menu"
extern char str_48E2F8[14];

/// address: 0x48E308
///
/// "Gamma"
extern char str_48E308[6];

/// address: 0x48E310
///
/// "Restart In Town"
extern char str_48E310[16];

/// address: 0x48E320
///
/// "Quit Diablo"
extern char str_48E320[12];

/// address: 0x48E32C
///
/// "Load Game"
extern char str_48E32C[10];

/// address: 0x48E338
///
/// "New Game"
extern char str_48E338[9];

/// address: 0x48E344
///
/// "Options"
extern char str_48E344[8];

/// address: 0x48E34C
///
/// "Save Game"
extern char str_48E34C[10];
