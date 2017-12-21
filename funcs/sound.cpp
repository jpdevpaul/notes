#include "types.h"

// address: 0x456CBB
//
// j_sound_cpp_init initializes the C++ runtime of sound.cpp.
void j_sound_cpp_init();

// address: 0x456CC0
//
// sound_cpp_init initializes the C++ runtime of sound.cpp.
void sound_cpp_init();

// address: 0x456CCB
//
// sound_update stops finished sounds from playing on all audio channels.
//
// PSX ref: 0x80077D14
// PSX def: void snd_update__FUc(unsigned char bStopAll)
void __fastcall sound_update(bool32_t stop_all);

// address: 0x456D22
//
// sound_file_stop stops the given sound file from playing.
//
// PSX ref: 0x80077D1C
// PSX def: void snd_stop_snd__FP4TSnd(struct TSnd *pSnd)
void __fastcall sound_file_stop(SoundFile *sound_file);

// address: 0x456D34
//
// sound_file_is_playing reports whether the given sound file is playing.
//
// PSX ref: 0x80077F70
// PSX def: unsigned char snd_playing__Fi(int SFXNo)
bool32_t __fastcall sound_file_is_playing(SoundFile *sound_file);

// address: 0x456D60
//
// sound_file_play plays the given sound file.
//
// PSX ref: 0x80077D58
// PSX def: void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan)
void __fastcall sound_file_play(SoundFile *sound_file, int volume_delta, int pan);

// address: 0x456E39
//
// sound_dup_channel returns a duplicate of the given audio channel.
IDirectSoundBuffer * __fastcall sound_dup_channel(IDirectSoundBuffer *DSB);

// address: 0x456E74
//
// sound_file_reload reloads the given sound file.
bool32_t __fastcall sound_file_reload(SoundFile *sound_file, IDirectSoundBuffer *DSB);

// address: 0x456F07
//
// sound_file_load loads the given sound file.
SoundFile *__fastcall sound_file_load(char *path);

// address: 0x457003
//
// sound_CreateSoundBuffer creates a sound buffer for the given sound file.
void __fastcall sound_CreateSoundBuffer(SoundFile *sound_file);

// address: 0x457060
//
// sound_file_cleanup stops the given sound file and releases its resources.
void __fastcall sound_file_cleanup(SoundFile *sound_file);

// address: 0x45708B
//
// sound_init initializes the sound system.
//
// PSX ref: 0x80077E40
// PSX def: void snd_init__FUl(unsigned long hWnd)
void __fastcall sound_init(HWND hWnd);

// address: 0x45712B
//
// sound_load_volume loads the sound volume.
void __fastcall sound_load_volume(char *value_name, int *value);

// address: 0x45717C
//
// sound_create_primary_buffer creates a sound buffer for the given music track.
void __fastcall sound_create_primary_buffer(int music_track);

// address: 0x45727E
//
// sound_DirectSoundCreate initializes the DirectSound interface.
int __fastcall sound_DirectSoundCreate(GUID *guid, IDirectSound **DS, int always_null);

// address: 0x4572FF
//
// sound_cleanup terminates the sound system.
void sound_cleanup();

// address: 0x457358
//
// sound_store_volume stores the sound volume.
void __fastcall sound_store_volume(char *key, int value);

// address: 0x457367
//
// sound_stop_music stops the background music playback.
//
// PSX ref: 0x80077E50
// PSX def: void music_stop__Fv()
void sound_stop_music();

// address: 0x457393
//
// sound_start_music starts the background music playback.
//
// PSX ref: 0x80077ED0
// PSX def: void music_start__Fi(int nTrack)
void __fastcall sound_start_music(int music_track_id);

// address: 0x4573FE
//
// sound_disable_music disables or enables the music.
void __fastcall sound_disable_music(bool32_t disable);

// address: 0x457418
//
// sound_get_or_set_music_volume gets or sets the music volume.
int __fastcall sound_get_or_set_music_volume(int volume);

// address: 0x45743B
//
// sound_get_or_set_sound_volume gets or sets the sound volume.
int __fastcall sound_get_or_set_sound_volume(int volume);
