#include "types.h"

/// address: 0x48E1B8
///
/// single_menu contains the game menu items of the single player menu.
MenuItem single_menu[6];

/// address: 0x48E200
///
/// multi_menu contains the game menu items of the multi player menu.
MenuItem multi_menu[5];

/// address: 0x48E240
///
/// options_menu contains the game menu items of the options menu.
MenuItem options_menu[6];

/// address: 0x48E288
///
/// music_toggle_names specifies the menu names for music enabled and disabled.
char *music_toggle_names[2];

/// address: 0x48E290
///
/// sound_toggle_names specifies the menu names for sound enabled and disabled.
char *sound_toggle_names[2];

/// address: 0x48E298
///
/// colour_cycling_toggle_names specifies the menu names for colour cycling
/// enabled and disabled.
char *colour_cycling_toggle_names[2];

/// address: 0x48E2A0
///
/// "Color Cycling On"
char str_48E2A0[17];

/// address: 0x48E2B4
///
/// "Color Cycling Off"
char str_48E2B4[18];

/// address: 0x48E2C8
///
/// "Sound Disabled"
char str_48E2C8[15];

/// address: 0x48E2D8
///
/// "Sound"
char str_48E2D8[6];

/// address: 0x48E2E0
///
/// "Music Disabled"
char str_48E2E0[15];

/// address: 0x48E2F0
///
/// "Music"
char str_48E2F0[6];

/// address: 0x48E2F8
///
/// "Previous Menu"
char str_48E2F8[14];

/// address: 0x48E308
///
/// "Gamma"
char str_48E308[6];

/// address: 0x48E310
///
/// "Restart In Town"
char str_48E310[16];

/// address: 0x48E320
///
/// "Quit Diablo"
char str_48E320[12];

/// address: 0x48E32C
///
/// "Load Game"
char str_48E32C[10];

/// address: 0x48E338
///
/// "New Game"
char str_48E338[9];

/// address: 0x48E344
///
/// "Options"
char str_48E344[8];

/// address: 0x48E34C
///
/// "Save Game"
char str_48E34C[10];
