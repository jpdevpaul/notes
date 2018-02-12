#include "types.h"

/// address: 0x484364
///
/// exclusive specifies whether to give the game exclusive access to the screen.
bool32_t exclusive;

/// address: 0x484368
///
/// player_friendly specifies whether players are in non-PvP mode.
bool32_t player_friendly;

/// address: 0x48436C
///
/// net_msg_texts maps from net_msg_id to hotkey network message.
char *net_msg_texts[4];

/// address: 0x48437C
///
/// net_msg_hotkeys maps from net_msg_id to hotkey name.
char *net_msg_hotkeys[4];

/// address: 0x48438C
///
/// "F12"
const char str_48438C[4] = {};

/// address: 0x484390
///
/// "F11"
const char str_484390[4] = {};

/// address: 0x484394
///
/// "F10"
const char str_484394[4] = {};

/// address: 0x484398
///
/// "F9"
const char str_484398[3] = {};

/// address: 0x48439C
///
/// "Now you DIE!"
const char str_48439C[13] = {};

/// address: 0x4843AC
///
/// "Here's something for you."
const char str_4843AC[26] = {};

/// address: 0x4843C8
///
/// "Follow me."
const char str_4843C8[11] = {};

/// address: 0x4843D4
///
/// "I need help! Come Here!"
const char str_4843D4[24] = {};

/// address: 0x4843EC
///
/// "DiabloEvent"
const char str_4843EC[12] = {};

/// address: 0x4843F8
///
/// `gendata\diablo1.smk`
const char str_4843F8[20] = {};

/// address: 0x48440C
///
/// "Intro"
const char str_48440C[6] = {};

/// address: 0x484414
///
/// `gendata\logo.smk`
const char str_484414[17] = {};

/// address: 0x484428
///
/// `C:\Src\Diablo\Source\DIABLO.CPP`
const char str_484428[32] = {};

/// address: 0x484448
///
/// "Reload-%s"
const char str_484448[10] = {};

/// address: 0x484454
///
/// "NetMsg"
const char str_484454[7] = {};

/// address: 0x48445C
///
/// `\Diablo.ini`
const char str_48445C[12] = {};

/// address: 0x484468
///
/// "Can't get program name"
const char str_484468[23] = {};

/// address: 0x484480
///
/// "while in stores"
const char str_484480[16] = {};

/// address: 0x484490
///
/// "No help available"
const char str_484490[18] = {};

/// address: 0x4844A4
///
/// `Levels\TownData\TownS.CEL`
const char str_4844A4[26] = {};

/// address: 0x4844C0
///
/// `Levels\TownData\Town.MIN`
const char str_4844C0[25] = {};

/// address: 0x4844DC
///
/// `Levels\TownData\Town.TIL`
const char str_4844DC[25] = {};

/// address: 0x4844F8
///
/// `Levels\TownData\Town.CEL`
const char str_4844F8[25] = {};

/// address: 0x484514
///
/// `Levels\L1Data\L1S.CEL`
const char str_484514[22] = {};

/// address: 0x48452C
///
/// `Levels\L1Data\L1.MIN`
const char str_48452C[21] = {};

/// address: 0x484544
///
/// `Levels\L1Data\L1.TIL`
const char str_484544[21] = {};

/// address: 0x48455C
///
/// `Levels\L1Data\L1.CEL`
const char str_48455C[21] = {};

/// address: 0x484574
///
/// `Levels\L2Data\L2S.CEL`
const char str_484574[22] = {};

/// address: 0x48458C
///
/// `Levels\L2Data\L2.MIN`
const char str_48458C[21] = {};

/// address: 0x4845A4
///
/// `Levels\L2Data\L2.TIL`
const char str_4845A4[21] = {};

/// address: 0x4845BC
///
/// `Levels\L2Data\L2.CEL`
const char str_4845BC[21] = {};

/// address: 0x4845D4
///
/// `Levels\L3Data\L3.MIN`
const char str_4845D4[21] = {};

/// address: 0x4845EC
///
/// `Levels\L3Data\L3.TIL`
const char str_4845EC[21] = {};

/// address: 0x484604
///
/// `Levels\L3Data\L3.CEL`
const char str_484604[21] = {};

/// address: 0x48461C
///
/// `Levels\L4Data\L4.MIN`
const char str_48461C[21] = {};

/// address: 0x484634
///
/// `Levels\L4Data\L4.TIL`
const char str_484634[21] = {};

/// address: 0x48464C
///
/// `Levels\L4Data\L4.CEL`
const char str_48464C[21] = {};

/// address: 0x484664
///
/// "LoadLvlGFX"
const char str_484664[11] = {};

/// address: 0x484670
///
/// "CreateLevel"
const char str_484670[12] = {};

/// address: 0x48467C
///
/// "-- Waiting for players --"
const char str_48467C[26] = {};

/// address: 0x484698
///
/// "-- Network timeout --"
const char str_484698[22] = {};
