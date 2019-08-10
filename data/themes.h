#include "types.h"

/// address: 0x4B2584
///
/// ThemeGood specifies the set of special theme IDs from which one will be
/// selected at random.
///
/// PSX ref (SLPS-01416): 0x80102728
/// PSX def: int ThemeGood[4]
extern theme_id ThemeGood[4]; // alias: special_theme_ids

/// address: 0x4B2594
///
/// x_delta_5x5 specifies a 5x5 area to fit theme objects.
///
/// PSX ref (SLPS-01416): 0x80102738
/// PSX def: int trm5x[25]
extern int32_t trm5x[25]; // alias: x_delta_5x5

/// address: 0x4B25F8
///
/// y_delta_5x5 specifies a 5x5 area to fit theme objects.
///
/// PSX ref (SLPS-01416): 0x8010279C
/// PSX def: int trm5y[25]
extern int32_t trm5y[25]; // alias: y_delta_5x5

/// address: 0x4B265C
///
/// x_delta_3x3 specifies a 3x3 area to fit theme objects.
///
/// PSX ref (SLPS-01416): 0x80102800
/// PSX def: int trm3x[9]
extern int32_t trm3x[9]; // alias: x_delta_3x3

/// address: 0x4B2680
///
/// y_delta_3x3 specifies a 3x3 area to fit theme objects.
///
/// PSX ref (SLPS-01416): 0x80102824
/// PSX def: int trm3y[9]
extern int32_t trm3y[9]; // alias: y_delta_3x3
