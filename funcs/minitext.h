#include "types.h"

/// address: 0x428056
///
/// minitext_cleanup releases the resources of the quest textbox.
///
/// PSX ref (SLPS-01416): 0x8004D95C
/// PSX def: void FreeQuestText__Fv()
void minitext_cleanup();

/// address: 0x42807A
///
/// minitext_init loads the resources of the quest textbox.
///
/// PSX ref (SLPS-01416): 0x8004D964
/// PSX def: void InitQuestText__Fv()
void minitext_init();

/// address: 0x4280A4
///
/// minitext_start_speech starts the given quest speech.
///
/// PSX ref (SLPS-01416): 0x8004DC78
/// PSX def: void InitQTextMsg__Fi(int m)
void __fastcall minitext_start_speech(speech_id speech_id);

/// address: 0x428104
///
/// minitext_draw_textbox renders the quest textbox.
void minitext_draw_textbox();

/// address: 0x428160
///
/// minitext_draw_character renders the given medium sized text character at the
/// specified screen coordinates.
void __fastcall minitext_draw_character(int screen_x, int screen_y, int8_t *cel_buf, int frame);

/// address: 0x428202
///
/// minitext_draw renders a medium sized text quest message on screen.
void minitext_draw();
