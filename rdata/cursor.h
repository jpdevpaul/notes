#include "types.h"

/// address: 0x479658
///
/// InvItemWidth maps from objcurs.cel frame number to frame width.
///
/// PSX ref: 0x8010D518
/// PSX def: unsigned char InvItemWidth[180]
extern uint32_t InvItemWidth[180]; // alias: objcurs_frame_width_from_frame

/// address: 0x479928
///
/// InvItemHeight maps from objcurs.cel frame number to frame height.
///
/// PSX ref: 0x8010D5CC
/// PSX def: unsigned char InvItemHeight[180]
extern uint32_t InvItemHeight[180]; // alias: objcurs_frame_height_from_frame
