#include "types.h"

/// address: 0x4A22D4
///
/// gbMusicOn specifies whether background music is enabled.
///
/// PSX ref (easy-as-pie): 0x8012B572
/// PSX def: unsigned char gbMusicOn
extern bool8_t gbMusicOn; // alias: music_enabled

/// address: 0x4A22D5
///
/// gbSoundOn specifies whether sound effects are enabled.
///
/// PSX ref (easy-as-pie): 0x8012B573
/// PSX def: unsigned char gbSoundOn
extern bool8_t gbSoundOn; // alias: sound_enabled

/// address: 0x4A22D6
///
/// gbDupSounds specifies that no duplicate audio channel should be used.
///
/// PSX ref (SLPS-01416): 0x8011BB9A
/// PSX def: unsigned char gbDupSounds
extern bool8_t gbDupSounds; // alias: flag_ds_noduplicates

/// address: 0x4A22D8
///
/// sgnMusicTrack specifies the active background music track id.
///
/// PSX ref (SLPS-01416): 0x8011BBAC
/// PSX def: int sgnMusicTrack
extern track_id sgnMusicTrack; // alias: music_track_id

/// address: 0x4A22DC
///
/// sgszMusicTracks maps from track ID to track name.
///
/// PSX ref (SLPS-01416): 0x800E389C
/// PSX def: unsigned short sgszMusicTracks[6]
extern char *sgszMusicTracks[6]; // alias: track_names

// Note: unusd data at 0x4A22F4 of type Rect[2];

/// address: 0x4A22FC
///
/// `Music\Dintro.wav`
extern char str_4A22FC[17];

/// address: 0x4A2310
///
/// `Music\DLvlD.wav`
extern char str_4A2310[16];

/// address: 0x4A2320
///
/// `Music\DLvlC.wav`
extern char str_4A2320[16];

/// address: 0x4A2330
///
/// `Music\DLvlB.wav`
extern char str_4A2330[16];

/// address: 0x4A2340
///
/// `Music\DLvlA.wav`
extern char str_4A2340[16];

/// address: 0x4A2350
///
/// `Music\DTowne.wav`
extern char str_4A2350[17];

/// address: 0x4A2364
///
/// `C:\Src\Diablo\Source\SOUND.CPP`
extern char str_4A2364[31];

/// address: 0x4A2384
///
/// "Invalid sound format on file %s"
extern char str_4A2384[32];

/// address: 0x4A23A4
///
/// "DirectSoundCreate"
extern char str_4A23A4[18];

/// address: 0x4A23B8
///
/// "dsound.dll"
extern char str_4A23B8[11];
