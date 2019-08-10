#include "types.h"

/// address: 0x4A0EF8
///
/// plrxoff specifies the X-coordinate delta from the player start location in
/// Tristram.
///
/// PSX ref (SLPS-01416): 0x800DA348
/// PSX def: int plrxoff[9]
extern int32_t plrxoff[9]; // alias: x_delta_from_start_location_tristram

/// address: 0x4A0F1C
///
/// plryoff specifies the Y-coordinate delta from the player start location in
/// Tristram.
///
/// PSX ref (SLPS-01416): 0x800DA36C
/// PSX def: int plryoff[9]
extern int32_t plryoff[9]; // alias: y_delta_from_start_location_tristram

/// address: 0x4A0F40
///
/// plrxoff2 specifies the X-coordinate delta from a player, used for instanced
/// when casting resurrect.
///
/// PSX ref (SLPS-01416): 0x800DA390
/// PSX def: int plrxoff2[9]
extern int32_t plrxoff2[9]; // alias: x_delta_from_player

/// address: 0x4A0F64
///
/// plryoff2 specifies the Y-coordinate delta from a player, used for instanced
/// when casting resurrect.
///
/// PSX ref (SLPS-01416): 0x800DA3B4
/// PSX def: int plryoff2[9]
extern int32_t plryoff2[9]; // alias: y_delta_from_player

/// address: 0x4A0F88
///
/// PlrGFXAnimLens specifies the frame of each animation for which an action is
/// triggered, for each player class.
///
/// PSX ref (SLPS-01416): 0x800DA3D8
/// PSX def: char PlrGFXAnimLens[3][11]
extern ActionFrame PlrGFXAnimLens[3]; // alias: action_frame_from_player_class

/// address: 0x4A0FAC
///
/// PWVel maps from player class to player velocity.
extern int32_t PWVel[3][3];

/// address: 0x4A0FAC
///
/// AnimLenFromClass maps from player class to total number of frames in player
/// walk animation.
extern int32_t AnimLenFromClass[3];

/// address: 0x4A0FDC
///
/// StrengthTbl maps from player_class to starting stat in strength.
///
/// PSX ref (SLPS-01416): 0x800DA3FC
/// PSX def: int StrengthTbl[3]
extern int32_t StrengthTbl[3]; // alias: start_str_from_player_class

/// address: 0x4A0FE8
///
/// MagicTbl maps from player_class to starting stat in magic.
///
/// PSX ref (SLPS-01416): 0x800DA408
/// PSX def: int MagicTbl[3]
extern int32_t MagicTbl[3]; // alias: start_mag_from_player_class

/// address: 0x4A0FF4
///
/// DexterityTbl maps from player_class to starting stat in dexterity.
///
/// PSX ref (SLPS-01416): 0x800DA414
/// PSX def: int DexterityTbl[3]
extern int32_t DexterityTbl[3]; // alias: start_dex_from_player_class

/// address: 0x4A1000
///
/// VitalityTbl maps from player_class to starting stat in vitality.
///
/// PSX ref (SLPS-01416): 0x800DA420
/// PSX def: int VitalityTbl[3]
extern int32_t VitalityTbl[3]; // alias: start_vit_from_player_class

/// address: 0x4A100C
///
/// ToBlkTbl specifies the chance to block bonus of each player class.
///
/// PSX ref (SLPS-01416): 0x800DA42C
/// PSX def: int ToBlkTbl[3]
extern int32_t ToBlkTbl[3]; // alias: start_chance_to_block_bonus_from_player_class

/// address: 0x4A1018
///
/// ClassNameTblUnused specifies the name of each player class.
extern char *ClassNameTblUnused[3]; // alias: player_class_names2

/// address: 0x4A1024
///
/// MaxStats maps from player_class to maximum stats.
///
/// PSX ref (SLPS-01416): 0x800DA438
/// PSX def: int MaxStats[3][4]
extern Stats MaxStats[3]; // alias: max_stat_from_player_class

/// address: 0x4A1054
///
/// ExpLvlsTbl specifies the experience point limit of each level.
///
/// PSX ref (SLPS-01416): 0x800DA468
/// PSX def: long ExpLvlsTbl[51]
extern int32_t ExpLvlsTbl[51]; // alias: exp_limit

/// address: 0x4A1120
///
/// ClassNameTbl specifies the name of each player class.
extern char *ClassNameTbl[3]; // alias: player_class_names

/// address: 0x4A112C
///
/// fix is an unused variable of PM_ChangeLightOff to compute light radius.
///
/// PSX def: static unsigned char fix[9]; // static local variable of PM_ChangeLightOff in PSX
extern uint8_t fix[9];

/// address: 0x4A1138
///
/// `PlrGFX\%s\%s\%s%s.CL2`
extern char str_4A1138[22];

/// address: 0x4A1150
///
/// "FM"
extern char str_4A1150[3];

/// address: 0x4A1154
///
/// "QM"
extern char str_4A1154[3];

/// address: 0x4A1158
///
/// "DT"
extern char str_4A1158[3];

/// address: 0x4A115C
///
/// "BL"
extern char str_4A115C[3];

/// address: 0x4A1160
///
/// "PLR:2"
extern char str_4A1160[6];

/// address: 0x4A1168
///
/// "LM"
extern char str_4A1168[3];

/// address: 0x4A116C
///
/// "ST"
extern char str_4A116C[3];

/// address: 0x4A1170
///
/// "AS"
extern char str_4A1170[3];

/// address: 0x4A1174
///
/// "WL"
extern char str_4A1174[3];

/// address: 0x4A1178
///
/// "AW"
extern char str_4A1178[3];

/// address: 0x4A117C
///
/// "AT"
extern char str_4A117C[3];

/// address: 0x4A1180
///
/// "HT"
extern char str_4A1180[3];

/// address: 0x4A1184
///
/// "%c%c%c"
extern char str_4A1184[7];

/// address: 0x4A118C
///
/// "LoadPlrGFX: illegal player %d"
extern char str_4A118C[30];

/// address: 0x4A11AC
///
/// "InitPlayerGFX: illegal player %d"
extern char str_4A11AC[33];

/// address: 0x4A11D0
///
/// "InitPlrGFXMem: illegal player %d"
extern char str_4A11D0[33];

/// address: 0x4A11F4
///
/// "FreePlayerGFX: illegal player %d"
extern char str_4A11F4[33];

/// address: 0x4A1218
///
/// "NewPlrAnim: illegal player %d"
extern char str_4A1218[30];

/// address: 0x4A1238
///
/// "ClearPlrPVars: illegal player %d"
extern char str_4A1238[33];

/// address: 0x4A125C
///
/// "SetPlrAnims: illegal player %d"
extern char str_4A125C[31];

/// address: 0x4A127C
///
/// "CreatePlayer: illegal player %d"
extern char str_4A127C[32];

/// address: 0x4A129C
///
/// "NextPlrLevel: illegal player %d"
extern char str_4A129C[32];

/// address: 0x4A12BC
///
/// "AddPlrExperience: illegal player %d"
extern char str_4A12BC[36];

/// address: 0x4A12E0
///
/// "InitPlayer: illegal player %d"
extern char str_4A12E0[30];

/// address: 0x4A1300
///
/// "PlrDirOK: illegal player %d"
extern char str_4A1300[28];

/// address: 0x4A131C
///
/// "SetPlayerOld: illegal player %d"
extern char str_4A131C[32];

/// address: 0x4A133C
///
/// "FixPlayerLocation: illegal player %d"
extern char str_4A133C[37];

/// address: 0x4A1364
///
/// "StartStand: illegal player %d"
extern char str_4A1364[30];

/// address: 0x4A1384
///
/// "StartWalkStand: illegal player %d"
extern char str_4A1384[34];

/// address: 0x4A13A8
///
/// "PM_ChangeLightOff: illegal player %d"
extern char str_4A13A8[37];

/// address: 0x4A13D0
///
/// "PM_ChangeOffset: illegal player %d"
extern char str_4A13D0[35];

/// address: 0x4A13F4
///
/// "StartWalk: illegal player %d"
extern char str_4A13F4[29];

/// address: 0x4A1414
///
/// "StartWalk2: illegal player %d"
extern char str_4A1414[30];

/// address: 0x4A1434
///
/// "StartWalk3: illegal player %d"
extern char str_4A1434[30];

/// address: 0x4A1454
///
/// "StartAttack: illegal player %d"
extern char str_4A1454[31];

/// address: 0x4A1474
///
/// "StartRangeAttack: illegal player %d"
extern char str_4A1474[36];

/// address: 0x4A1498
///
/// "StartPlrBlock: illegal player %d"
extern char str_4A1498[33];

/// address: 0x4A14BC
///
/// "StartSpell: illegal player %d"
extern char str_4A14BC[30];

/// address: 0x4A14DC
///
/// "FixPlrWalkTags: illegal player %d"
extern char str_4A14DC[34];

/// address: 0x4A1500
///
/// "StartPlrHit: illegal player %d"
extern char str_4A1500[31];

/// address: 0x4A1520
///
/// "StartPlayerKill: illegal player %d"
extern char str_4A1520[35];

/// address: 0x4A1544
///
/// "PlrDeadItem: illegal player %d"
extern char str_4A1544[31];

/// address: 0x4A1564
///
/// "DropHalfPlayersGold: illegal player %d"
extern char str_4A1564[39];

/// address: 0x4A158C
///
/// "StartNewLvl"
extern char str_4A158C[12];

/// address: 0x4A1598
///
/// "StartNewLvl: illegal player %d"
extern char str_4A1598[31];

/// address: 0x4A15B8
///
/// "RestartTownLvl: illegal player %d"
extern char str_4A15B8[34];

/// address: 0x4A15DC
///
/// "PM_DoWalk: illegal player %d"
extern char str_4A15DC[29];

/// address: 0x4A15FC
///
/// "PM_DoWalk2: illegal player %d"
extern char str_4A15FC[30];

/// address: 0x4A161C
///
/// "PM_DoWalk3: illegal player %d"
extern char str_4A161C[30];

/// address: 0x4A163C
///
/// "WeaponDur: illegal player %d"
extern char str_4A163C[29];

/// address: 0x4A165C
///
/// "PlrHitMonst: illegal player %d"
extern char str_4A165C[31];

/// address: 0x4A167C
///
/// "PlrHitMonst: illegal monster %d"
extern char str_4A167C[32];

/// address: 0x4A169C
///
/// "PlrHitPlr: illegal attacking player %d"
extern char str_4A169C[39];

/// address: 0x4A16C4
///
/// "PlrHitPlr: illegal target player %d"
extern char str_4A16C4[36];

/// address: 0x4A16E8
///
/// "PM_DoAttack: illegal player %d"
extern char str_4A16E8[31];

/// address: 0x4A1708
///
/// "PM_DoRangeAttack: illegal player %d"
extern char str_4A1708[36];

/// address: 0x4A172C
///
/// "ShieldDur: illegal player %d"
extern char str_4A172C[29];

/// address: 0x4A174C
///
/// "PM_DoBlock: illegal player %d"
extern char str_4A174C[30];

/// address: 0x4A176C
///
/// "PM_DoSpell: illegal player %d"
extern char str_4A176C[30];

/// address: 0x4A178C
///
/// "PM_DoGotHit: illegal player %d"
extern char str_4A178C[31];

/// address: 0x4A17AC
///
/// "ArmorDur: illegal player %d"
extern char str_4A17AC[28];

/// address: 0x4A17C8
///
/// "PM_DoDeath: illegal player %d"
extern char str_4A17C8[30];

/// address: 0x4A17E8
///
/// "CheckNewPath: illegal player %d"
extern char str_4A17E8[32];

/// address: 0x4A1808
///
/// "PlrDeathModeOK: illegal player %d"
extern char str_4A1808[34];

/// address: 0x4A182C
///
/// "ValidatePlayer: illegal player %d"
extern char str_4A182C[34];

/// address: 0x4A1850
///
/// "ProcessPlayers: illegal player %d"
extern char str_4A1850[34];

/// address: 0x4A1874
///
/// "ClrPlrPath: illegal player %d"
extern char str_4A1874[30];

/// address: 0x4A1894
///
/// "MakePlrPath: illegal player %d"
extern char str_4A1894[31];

/// address: 0x4A18B4
///
/// "CheckPlrSpell: illegal player %d"
extern char str_4A18B4[33];

/// address: 0x4A18D8
///
/// "SyncPlrAnim"
extern char str_4A18D8[12];

/// address: 0x4A18E4
///
/// "SyncPlrAnim: illegal player %d"
extern char str_4A18E4[31];

/// address: 0x4A1904
///
/// "SyncInitPlr: illegal player %d"
extern char str_4A1904[31];

/// address: 0x4A1924
///
/// "CheckStats: illegal player %d"
extern char str_4A1924[30];

/// address: 0x4A1944
///
/// "ModifyPlrStr: illegal player %d"
extern char str_4A1944[32];

/// address: 0x4A1964
///
/// "ModifyPlrMag: illegal player %d"
extern char str_4A1964[32];

/// address: 0x4A1984
///
/// "ModifyPlrDex: illegal player %d"
extern char str_4A1984[32];

/// address: 0x4A19A4
///
/// "ModifyPlrVit: illegal player %d"
extern char str_4A19A4[32];

/// address: 0x4A19C4
///
/// "SetPlayerHitPoints: illegal player %d"
extern char str_4A19C4[38];

/// address: 0x4A19EC
///
/// "SetPlrStr: illegal player %d"
extern char str_4A19EC[29];

/// address: 0x4A1A0C
///
/// "SetPlrMag: illegal player %d"
extern char str_4A1A0C[29];

/// address: 0x4A1A2C
///
/// "SetPlrDex: illegal player %d"
extern char str_4A1A2C[29];

/// address: 0x4A1A4C
///
/// "SetPlrVit: illegal player %d"
extern char str_4A1A4C[29];

/// address: 0x4A1A6C
///
/// "InitDungMsgs: illegal player %d"
extern char str_4A1A6C[32];

/// address: 0x4A1A8C
///
/// "PlayDungMsgs: illegal player %d"
extern char str_4A1A8C[32];
