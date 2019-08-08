#include "types.h"

/// address: 0x47F078
///
/// mfontframe maps from font index to medtexts.cel frame number.
extern uint8_t mfontframe[127]; // alias: medtexts_frame_from_font_index

/// address: 0x47F0F8
///
/// mfontkern maps from medtexts.cel frame number to character width. Note, the
/// character width may be distinct from the frame width, which is 22 for every
/// medtexts.cel frame.
extern uint8_t mfontkern[56]; // alias: medtexts_character_width_from_frame
