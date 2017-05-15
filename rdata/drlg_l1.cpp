#include "types.h"

// address: 0x479C24
//
// l1_shadow contains shadows for 2x2 blocks of base tile IDs on layout 1.
//
// TODO: Figure out how to fix broken link. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/shadow/README.md
Shadow l1_shadow[37];

// address: 0x479D28
//
// l1_base maps tile IDs to their corresponding base tile ID.
//
// TODO: Figure out how to fix broken links. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/README.md
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/base.md
l1_tile_id l1_base[207];

// address: 0x479DF8
//
// l1_plain maps tile IDs to their corresponding undecorated tile ID.
//
// TODO: Figure out how to fix broken link. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/README.md
l1_tile_id l1_plain[207];
