#include "types.h"

/// address: 0x41A553
///
/// help_init initializes the help dialogue.
void help_init();

/// address: 0x41A565
///
/// help_draw renders the help dialogue on screen.
///
/// PSX ref: 0x800AECD0
/// PSX def: void DrawHelp__Fv()
void help_draw();

/// address: 0x41A6FA
///
/// help_draw_line draws a line of help text in the given colour.
///
/// PSX ref: 0x800AE73C
/// PSX def: int DrawHelpLine__FiiPccccP10HelpStruct(int x, int y, char *txt, char R, int G, int B, struct HelpStruct *hp)
void __fastcall help_draw_line(int always_0, int help_line_nr, char *text, text_color color);

/// address: 0x41A773
///
/// help_dialogue_show displays the help dialogue.
void help_dialogue_show();

/// address: 0x41A78F
///
/// help_dialogue_scroll_up scrolls the help text dialogue up one line.
void help_dialogue_scroll_up();

/// address: 0x41A79F
///
/// help_dialogue_scroll_down scrolls the help text dialogue down one line.
void help_dialogue_scroll_down();
