#include "types.h"

/// address: 0x479658
///
/// objcurs_frame_width_from_frame maps from objcurs.cel frame number to frame
/// width.
///
/// PSX ref: 0x8010D518
/// PSX def: unsigned char InvItemWidth[180]
int32_t objcurs_frame_width_from_frame[180];

/// address: 0x479928
///
/// objcurs_frame_height_from_frame maps from objcurs.cel frame number to frame
/// height.
///
/// PSX ref: 0x8010D5CC
/// PSX def: unsigned char InvItemHeight[180]
int32_t objcurs_frame_height_from_frame[180];
