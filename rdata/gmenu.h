#include "types.h"

/// address: 0x47A48C
///
/// lfontframe maps from font index to bigtgold.cel frame number.
extern uint8_t lfontframe[127]; // alias: bigtgold_frame_from_font_index

/// address: 0x47A50C
///
/// lfontkern maps from bigtgold.cel frame number to character width. Note, the
/// character width may be distinct from the frame width, which is 46 for every
/// bigtgold.cel frame.
extern uint8_t lfontkern[56]; // alias: bigtgold_character_width_from_frame
