#include "types.h"

// address: 0x41B190
//
// j_interfac_cpp_init initializes the C++ runtime of interfac.cpp.
void j_interfac_cpp_init();

// address: 0x41B195
//
// interfac_cpp_init initializes the C++ runtime of interfac.cpp.
void interfac_cpp_init();

// address: 0x41B1A0
//
// interfac_poll_events polls events while the interface cut scene progress bar
// is displayed.
//
// PSX ref: 0x8003DE38
// PSX def: void interface_msg_pump__Fv()
void interfac_poll_events();

// address: 0x41B1DF
//
// interfac_inc_progress increments the loading progress and renders the active
// cut scene on screen.
bool32_t interfac_inc_progress();

// address: 0x41B218
//
// interfac_draw_cut_scene renders the active cut scene on screen.
void interfac_draw_cut_scene();

// address: 0x41B28D
//
// interfac_draw_progress_bar renders the progress bar on screen.
void __fastcall interfac_draw_progress_bar(int screen_x, int screen_y, int progress_id);

// address: 0x41B2B6
//
// interfac_init initializes the interface between cut scenes while displaying a
// progress bar.
//
// PSX ref: 0x8003DE40
// PSX def: void ShowProgress__FUi(unsigned int uMsg)
void __fastcall interfac_init(interface_mode interface_mode);

// address: 0x41B5F5
//
// interfac_cleanup releases resources related to the cut scene.
void interfac_cleanup();

// address: 0x41B607
//
// interfac_init_cut_scene initializes the active cut scene.
void __fastcall interfac_init_cut_scene(interface_mode interface_mode);
