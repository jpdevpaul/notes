#include "types.h"

// address: 0x69BEF8
//
// light_table_index specifies the current light entry.
int32_t light_table_index;

// address: 0x69CF14
//
// level_cel_block specifies the current MIN block of the level CEL file, as
// used during rendering of the level tiles.
//
//    frameNum  := block&0x0FFF
//    frameType := block&0x7000 >> 12
uint32_t level_cel_block;
