#include "types.h"

/// address: 0x47AE40
///
/// +Infinity
extern float interfac_inf;

/// address: 0x47AE44
///
/// BarColor specifies the colour used for the progress bar as an index into the
/// palette.
// TODO: add colour enum.
extern uint8_t BarColor[3]; // alias: progress_bar_colours

/// address: 0x47AE48
///
/// BarPos specifies the screen position of the top left corner of the progress
/// bar.
extern Point BarPos[3]; // alias: progress_bar_screen_pos
