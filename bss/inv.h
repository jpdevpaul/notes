#include "types.h"

/// address: 0x634CB8
///
/// inv_is_open specifies whether the inventory is open.
///
/// PSX ref: 0x8011C32C
/// PSX def: unsigned char invflag
extern bool32_t inv_is_open;

/// address: 0x634CBC
///
/// inv_graphics points to the contents of the inventory graphics CEL file (e.g.
/// "data/inv/inv.cel", "data/inv/inv_rog.cel" or "data/inv/inv_sor.cel").
extern uint8_t *inv_graphics;

/// address: 0x634CC0
///
/// update_belt specifies whether the belt should be re-rendered.
extern bool32_t update_belt;
