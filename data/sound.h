#include "types.h"

/// address: 0x4A22D4
///
/// music_enabled specifies whether background music is enabled.
bool8_t music_enabled;

/// address: 0x4A22D5
///
/// sound_enabled specifies whether sound effects are enabled.
bool8_t sound_enabled;

/// address: 0x4A22D6
///
/// flag_ds_noduplicates specifies that no duplicate audio channel should be
/// used.
bool8_t flag_ds_noduplicates;

/// address: 0x4A22D8
///
/// music_track_id specifies the active background music track id.
track_id music_track_id;

/// address: 0x4A22DC
///
/// track_names maps from track ID to track name.
char *track_names[6];

/// address: 0x4A22F4
///
/// track_unused is unused.
int8_t track_unused[8];

/// address: 0x4A22FC
///
/// `Music\Dintro.wav`
char str_4A22FC[17];

/// address: 0x4A2310
///
/// `Music\DLvlD.wav`
char str_4A2310[16];

/// address: 0x4A2320
///
/// `Music\DLvlC.wav`
char str_4A2320[16];

/// address: 0x4A2330
///
/// `Music\DLvlB.wav`
char str_4A2330[16];

/// address: 0x4A2340
///
/// `Music\DLvlA.wav`
char str_4A2340[16];

/// address: 0x4A2350
///
/// `Music\DTowne.wav`
char str_4A2350[17];

/// address: 0x4A2364
///
/// `C:\Src\Diablo\Source\SOUND.CPP`
char str_4A2364[31];

/// address: 0x4A2384
///
/// "Invalid sound format on file %s"
char str_4A2384[32];

/// address: 0x4A23A4
///
/// "DirectSoundCreate"
char str_4A23A4[18];

/// address: 0x4A23B8
///
/// "dsound.dll"
char str_4A23B8[11];
