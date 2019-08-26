#include "types.h"

/// address: 0x494948
///
/// missiledata contains the data related to each missile ID.
///
/// PSX ref (SLPS-01416): 0x800D67F0
/// PSX def: struct MissileData missiledata[68]
extern MissileData missiledata[68]; // alias: missile_data

/// address: 0x4950B8
///
/// misfiledata contains the data related to each missile graphic ID.
///
/// PSX ref (SLPS-01416): 0x800D6F60
/// PSX def: struct MisFileData misfiledata[47]
extern MissileGraphicData misfiledata[47]; // alias: missile_graphic_data

/// address: 0x497C0C
///
/// "Scbsexpd"
extern char str_497C0C[9];

/// address: 0x497C18
///
/// "Scubmisd"
extern char str_497C18[9];

/// address: 0x497C24
///
/// "Scbsexpc"
extern char str_497C24[9];

/// address: 0x497C30
///
/// "Scubmisc"
extern char str_497C30[9];

/// address: 0x497C3C
///
/// "Scbsexpb"
extern char str_497C3C[9];

/// address: 0x497C48
///
/// "Scubmisb"
extern char str_497C48[9];

/// address: 0x497C54
///
/// "Fireplar"
extern char str_497C54[9];

/// address: 0x497C60
///
/// "Rportal"
extern char str_497C60[8];

/// address: 0x497C68
///
/// "Sklball"
extern char str_497C68[8];

/// address: 0x497C70
///
/// "Ressur1"
extern char str_497C70[8];

/// address: 0x497C78
///
/// "Firerun"
extern char str_497C78[8];

/// address: 0x497C80
///
/// "Ethrshld"
extern char str_497C80[9];

/// address: 0x497C8C
///
/// "Acidpud"
extern char str_497C8C[8];

/// address: 0x497C94
///
/// "Acidspla"
extern char str_497C94[9];

/// address: 0x497CA0
///
/// "Acidbf"
extern char str_497CA0[7];

/// address: 0x497CA8
///
/// "Firarwex"
extern char str_497CA8[9];

/// address: 0x497CB4
///
/// "Larrow"
extern char str_497CB4[7];

/// address: 0x497CBC
///
/// "Holyexpl"
extern char str_497CBC[9];

/// address: 0x497CC8
///
/// "Miniltng"
extern char str_497CC8[9];

/// address: 0x497CD4
///
/// "Krull"
extern char str_497CD4[6];

/// address: 0x497CDC
///
/// "Magball"
extern char str_497CDC[8];

/// address: 0x497CE4
///
/// "Flareexp"
extern char str_497CE4[9];

/// address: 0x497CF0
///
/// "Flare"
extern char str_497CF0[6];

/// address: 0x497CF8
///
/// "Thinlght"
extern char str_497CF8[9];

/// address: 0x497D04
///
/// "Bigexp"
extern char str_497D04[7];

/// address: 0x497D0C
///
/// "Shatter1"
extern char str_497D0C[9];

/// address: 0x497D18
///
/// "Newexp"
extern char str_497D18[7];

/// address: 0x497D20
///
/// "Blodbur"
extern char str_497D20[8];

/// address: 0x497D28
///
/// "Doom"
extern char str_497D28[5];

/// address: 0x497D30
///
/// "Farrow"
extern char str_497D30[7];

/// address: 0x497D38
///
/// "Metlhit"
extern char str_497D38[8];

/// address: 0x497D40
///
/// "Bone"
extern char str_497D40[5];

/// address: 0x497D48
///
/// "Blood"
extern char str_497D48[6];

/// address: 0x497D50
///
/// "Manashld"
extern char str_497D50[9];

/// address: 0x497D5C
///
/// "Bluexbk"
extern char str_497D5C[8];

/// address: 0x497D64
///
/// "Bluexfr"
extern char str_497D64[8];

/// address: 0x497D6C
///
/// "Portal"
extern char str_497D6C[7];

/// address: 0x497D74
///
/// "MagBlos"
extern char str_497D74[8];

/// address: 0x497D7C
///
/// "Firewal"
extern char str_497D7C[8];

/// address: 0x497D84
///
/// "Lghning"
extern char str_497D84[8];

/// address: 0x497D8C
///
/// "Guard"
extern char str_497D8C[6];

/// address: 0x497D94
///
/// "Fireba"
extern char str_497D94[7];

/// address: 0x497D9C
///
/// "Arrows"
extern char str_497D9C[7];

/// address: 0x497DA4
///
/// XDirAdd maps from direction to X-offset.
///
/// PSX ref (SLPS-01416): 0x801029D8
/// PSX def: int XDirAdd[8]
int32_t XDirAdd[8]; // alias: x_offset_from_dir

/// address: 0x497DC4
///
/// YDirAdd maps from direction to Y-offset.
///
/// PSX ref (SLPS-01416): 0x801029F8
/// PSX def: int YDirAdd[8]
int32_t YDirAdd[8]; // alias: y_offset_from_dir

/// address: 0x497DE4
///
/// `Missiles\%s%i.CL2`
extern char str_497DE4[18];

/// address: 0x497DF8
///
/// `Missiles\%s.CL2`
extern char str_497DF8[16];
