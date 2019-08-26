#include "types.h"

/// address 0x69BC98
///
/// portal holds the in-game state of portals.
///
/// PSX ref (SLPS-01416): 0x800E3BEC
/// PSX def: struct PortalStruct portal[4]
extern Portal portal[4]; // alias: portals

/// address 0x69BCF8
///
/// portalindex specifies the current portal number (a portal array index).
///
/// PSX ref (SLPS-01416): 0x8011C8D0
/// PSX def: int portalindex
extern int32_t portalindex; // alias: cur_portal_num
