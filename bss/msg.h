#include "types.h"

/// address 0x65AB1C
///
/// +Infinity after initialization of msg.cpp.
extern float msg_cpp_init_value;

/// address: 0x65AB28
///
/// delta_levels contains delta information about items, objects and monsters for
/// each dungeon level to be synchronized with connected peers.
extern DeltaLevel delta_levels[17];

/// address: 0x66E4B0
///
/// msg_buf is a pre-allocated buffer for receiving network messages.
extern uint8_t msg_recv_buf[4722];

/// address: 0x66F728
///
/// automap_discovered_from_dlvl maps tracks the explored areas of the map for
/// each dungeon level.
extern bool8_t automap_discovered_from_dlvl[17][40][40];

/// address: 0x676168
///
/// delta_portals contains the town portals of the current game.
///
/// PSX ref: 0x8012EDD8
/// PSX def: DJunk sgJunk
extern DeltaPortal delta_portals[4];
