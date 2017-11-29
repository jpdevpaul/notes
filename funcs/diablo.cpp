#include "types.h"

// address: 0x4087B1
//
// j_diablo_cpp_init_1 initializes the C++ runtime of diablo.cpp.
void j_diablo_cpp_init();

// address: 0x4087B6
//
// diablo_cpp_init_1 initializes the C++ runtime of diablo.cpp.
void diablo_cpp_init();

// address: 0x4087C1
//
// diablo_cleanup_current_level releases the resources of the current level.
//
// PSX ref: 0x80037FAC
// PSX def: void FreeGameMem__Fv()
void diablo_cleanup_current_level();

// address: 0x408838
//
// TODO: add documentation.

/* TODO: uncomment once interface_mode enum has been defined.

// address: 0x4088E2
//
// diablo_run_game_loop runs the game loop, dispatching events, and processing game state changes.
//
// PSX ref: 0x8003840C
// PSX def: void run_game_loop__FUi(unsigned int uMsg)
void __fastcall diablo_run_game_loop(interface_mode interface_mode);

*/

/* TODO: uncomment once interface_mode enum has been defined.

// address: 0x408A8C
//
// diablo_init_game initializes the resources used for the game.
//
// PSX ref: 0x80037FE4
// PSX def: void start_game__FUi(unsigned int uMsg)
void __fastcall diablo_init_game(interface_mode interface_mode);

*/

// address: 0x408ADB
//
// diablo_cleanup releases the resoures used by the game.
//
// PSX ref: 0x800380D4
// PSX def: void free_game__Fv()
void diablo_cleanup();

// address: 0x408B1E
//
// diablo_get_not_running reports whether the game is not running already.
bool32_t diablo_get_not_running();

// address: 0x408B4A
//
// TODO: add documentation.

// address: 0x408CB1
//
// diablo_parse_flags parses command-line flags from the given command line arguments.
void __fastcall diablo_parse_flags(char *args);

// address: 0x408D61
//
// TODO: add documentation.

// address: 0x408DB1
//
// TODO: add documentation.


/* TODO: uncomment when the HMODULE struct has been added. Include windows.h
   from types.h? Or create a minimal windows.h locally for the specific types
   which are used in Diablo.

// address: 0x408DF4
//
// diablo_reload_process reloads the diablo.exe process in order to obstruct
// debugging attempts.
void __fastcall diablo_reload_process(HMODULE hModule);

*/

// address: 0x408FCF
//
// TODO: add documentation.

// address: 0x40905E
//
// TODO: add documentation.

// address: 0x409131
//
// TODO: add documentation.

// address: 0x4093B2
//
// TODO: add documentation.

// address: 0x4097EC
//
// TODO: add documentation.

// address: 0x409963
//
// TODO: add documentation.

// address: 0x4099A8
//
// TODO: add documentation.

// address: 0x409A89
//
// TODO: add documentation.

// address: 0x409A8E
//
// TODO: add documentation.

// address: 0x409AB0
//
// TODO: add documentation.

// address: 0x409B51
//
// TODO: add documentation.

// address: 0x409B5C
//
// TODO: add documentation.

// address: 0x409F43
//
// TODO: add documentation.

// address: 0x409F7F
//
// TODO: add documentation.

// address: 0x40A391
//
// diablo_load_level_graphics loads the tile graphics of the active dungeon
// type.
void diablo_load_level_graphics();

// address: 0x40A4B4
//
// TODO: add documentation.

// address: 0x40A4E1
//
// diablo_create_level creates the level, either Tristram or a random dungeon
// based on the dungeon type and level entry.
//
// PSX ref: 0x80038A98
// PSX def: void CreateLevel__Fi(int lvldir)
void __fastcall diablo_create_level(int entry);

// address: 0x40A5A4
//
// diablo_load_game_level loads the game level.
//
// PSX ref: 0x80039270
// PSX def: void LoadGameLevel__FUci(unsigned char firstflag, int lvldir)
void __fastcall diablo_load_game_level(bool32_t from_save, int entry);

// address: 0x40AAE3
//
// diablo_game_loop runs the game loop.
//
// PSX ref: 0x80039E58
// PSX def: void game_loop__FUc(unsigned char bStartup)
void __fastcall diablo_game_loop(bool32_t startup);

// address: 0x40AB33
//
// diablo_process_game_logic processes any game state changes, since the last
// game tick.
//
// PSX ref: 0x80039BC8
// PSX def: void game_logic__Fv()
void diablo_process_game_logic();

// address: 0x40ABE7
//
// diablo_set_timeout_cursor sets the cursor to an hourglass on network timeout.
//
// PSX ref: 0x80039DB0
// PSX def: void timeout_cursor__FUc(unsigned char bTimeout)
void __fastcall diablo_set_timeout_cursor(bool32_t timeout);

// address: 0x40AC6B
//
// TODO: add documentation.
