#include "types.h"

/// address: 0x48E9A8
///
/// AP2x2Tbl specifies the starting inventory slots for placement of 2x2 items.
///
/// PSX ref (SLPS-01416): 0x8010D008
/// PSX def: int AP2x2Tbl[10]
extern int32_t AP2x2Tbl[10]; // alias: inv_start_slot_2x2

/// address: 0x48E9D0
///
/// `Data\Inv\Inv_Sor.CEL`
extern char str_48E9D0[21];

/// address: 0x48E9E8
///
/// `Data\Inv\Inv_rog.CEL`
extern char str_48E9E8[21];

/// address: 0x48EA00
///
/// `Data\Inv\Inv.CEL`
extern char str_48EA00[17];

/// address: 0x48EA14
///
/// "A duplicate item has been detected.  Destroying duplicate..."
extern char str_48EA14[61];

/// address: 0x48EA54
///
/// "A duplicate item has been detected from another player."
extern char str_48EA54[56];
