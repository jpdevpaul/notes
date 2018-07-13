#include "types.h"

/// address: 0x4A0D08
///
/// gamma_correction specifies the gamma correction level.
extern int gamma_correction;

/// address: 0x4A0D0C
///
/// coluor_cycling_enabled specifies whether colour cycling is enabled.
extern bool32_t coluor_cycling_enabled;

/// address: 0x4A0D10
///
/// palette_bright specifies whether the palette has max brightness.
extern bool8_t palette_bright;

/// address: 0x4A0D14
///
/// `C:\Src\Diablo\Source\PALETTE.CPP`
extern char str_4A0D14[33];

/// address: 0x4A0D38
///
/// `Levels\L%iData\L%i_%i.PAL`
extern char str_4A0D38[26];

/// address: 0x4A0D54
///
/// `Levels\TownData\Town.pal`
extern char str_4A0D54[25];
