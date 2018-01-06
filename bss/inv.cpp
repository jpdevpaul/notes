#include "types.h"

// address: 0x634CB8
//
// inventory_open specifies whether the inventory is open.
//
// PSX ref: 0x8011C32C
// PSX def: unsigned char invflag
bool32_t inventory_open;

// address: 0x634CBC
//
// inv_cel points to the contents of "data/inv/inv.cel", "data/inv/inv_rog.cel"
// or "data/inv/inv_sor.cel".
uint8_t *inv_cel;

// address: 0x634CC0
//
// update_belt specifies whether the belt should be re-rendered.
bool32_t update_belt;
