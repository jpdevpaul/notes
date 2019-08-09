#include "types.h"

/// address: 0x484364
///
/// fullscreen specifies whether to give the game exclusive access to the
/// screen, as needed for efficient rendering in fullscreen mode.
///
/// PSX ref (SLPS-01416): 0x8011B78C
/// PSX def: unsigned char fullscreen
extern bool32_t fullscreen; // alias: exclusive

/// address: 0x484368
///
/// FriendlyMode specifies whether players are in non-PvP mode.
///
/// PSX ref (SLPS-01416): 0x8011B7A5
/// PSX def: unsigned char FriendlyMode
extern bool32_t FriendlyMode; // alias: player_friendly

/// address: 0x48436C
///
/// spszMsgTbl maps from net_msg_id to hotkey network message.
///
/// assert name: spszMsgTbl
extern char *spszMsgTbl[4]; // alias: net_msg_texts

/// address: 0x48437C
///
/// spszMsgHotKeyTbl maps from net_msg_id to hotkey name.
extern char *spszMsgHotKeyTbl[4]; // alias: net_msg_hotkeys

/// address: 0x48438C
///
/// "F12"
extern char str_48438C[4];

/// address: 0x484390
///
/// "F11"
extern char str_484390[4];

/// address: 0x484394
///
/// "F10"
extern char str_484394[4];

/// address: 0x484398
///
/// "F9"
extern char str_484398[3];

/// address: 0x48439C
///
/// "Now you DIE!"
extern char str_48439C[13];

/// address: 0x4843AC
///
/// "Here's something for you."
extern char str_4843AC[26];

/// address: 0x4843C8
///
/// "Follow me."
extern char str_4843C8[11];

/// address: 0x4843D4
///
/// "I need help! Come Here!"
extern char str_4843D4[24];

/// address: 0x4843EC
///
/// "DiabloEvent"
extern char str_4843EC[12];

/// address: 0x4843F8
///
/// `gendata\diablo1.smk`
extern char str_4843F8[20];

/// address: 0x48440C
///
/// "Intro"
extern char str_48440C[6];

/// address: 0x484414
///
/// `gendata\logo.smk`
extern char str_484414[17];

/// address: 0x484428
///
/// `C:\Src\Diablo\Source\DIABLO.CPP`
extern char str_484428[32];

/// address: 0x484448
///
/// "Reload-%s"
extern char str_484448[10];

/// address: 0x484454
///
/// "NetMsg"
extern char str_484454[7];

/// address: 0x48445C
///
/// `\Diablo.ini`
extern char str_48445C[12];

/// address: 0x484468
///
/// "Can't get program name"
extern char str_484468[23];

/// address: 0x484480
///
/// "while in stores"
extern char str_484480[16];

/// address: 0x484490
///
/// "No help available"
extern char str_484490[18];

/// address: 0x4844A4
///
/// `Levels\TownData\TownS.CEL`
extern char str_4844A4[26];

/// address: 0x4844C0
///
/// `Levels\TownData\Town.MIN`
extern char str_4844C0[25];

/// address: 0x4844DC
///
/// `Levels\TownData\Town.TIL`
extern char str_4844DC[25];

/// address: 0x4844F8
///
/// `Levels\TownData\Town.CEL`
extern char str_4844F8[25];

/// address: 0x484514
///
/// `Levels\L1Data\L1S.CEL`
extern char str_484514[22];

/// address: 0x48452C
///
/// `Levels\L1Data\L1.MIN`
extern char str_48452C[21];

/// address: 0x484544
///
/// `Levels\L1Data\L1.TIL`
extern char str_484544[21];

/// address: 0x48455C
///
/// `Levels\L1Data\L1.CEL`
extern char str_48455C[21];

/// address: 0x484574
///
/// `Levels\L2Data\L2S.CEL`
extern char str_484574[22];

/// address: 0x48458C
///
/// `Levels\L2Data\L2.MIN`
extern char str_48458C[21];

/// address: 0x4845A4
///
/// `Levels\L2Data\L2.TIL`
extern char str_4845A4[21];

/// address: 0x4845BC
///
/// `Levels\L2Data\L2.CEL`
extern char str_4845BC[21];

/// address: 0x4845D4
///
/// `Levels\L3Data\L3.MIN`
extern char str_4845D4[21];

/// address: 0x4845EC
///
/// `Levels\L3Data\L3.TIL`
extern char str_4845EC[21];

/// address: 0x484604
///
/// `Levels\L3Data\L3.CEL`
extern char str_484604[21];

/// address: 0x48461C
///
/// `Levels\L4Data\L4.MIN`
extern char str_48461C[21];

/// address: 0x484634
///
/// `Levels\L4Data\L4.TIL`
extern char str_484634[21];

/// address: 0x48464C
///
/// `Levels\L4Data\L4.CEL`
extern char str_48464C[21];

/// address: 0x484664
///
/// "LoadLvlGFX"
extern char str_484664[11];

/// address: 0x484670
///
/// "CreateLevel"
extern char str_484670[12];

/// address: 0x48467C
///
/// "-- Waiting for players --"
extern char str_48467C[26];

/// address: 0x484698
///
/// "-- Network timeout --"
extern char str_484698[22];
