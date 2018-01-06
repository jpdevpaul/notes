#include "types.h"

// address: 0x69F0C4
//
// +Infinity after initialization of sound.cpp.
float sound_cpp_init_value;

// address: 0x69F0C8
//
// DSBs contains the audio channels used for playback of sounds.
IDirectSoundBuffer *DSBs[8];

// address: 0x69F0E8
//
// DS is the sound system used for audio playback.
IDirectSound *DS;

// address: 0x69F0EC
//
// DS_inited specifies whether the sound system has been initialized.
//
// PSX ref: 0x8011BB99
// PSX def: unsigned char gbSndInited
bool8_t DS_inited;

// address: 0x69F0F0
//
// music_volume specifies the music volume in range [-1600, 0].
int music_volume;

// address: 0x69F0F4
//
// sound_volume specifies the sound volume in range [-1600, 0].
int sound_volume;

// address: 0x69F0F8
//
// hDsound_dll provides a handle to the dynamic library dsound.dll.
HMODULE hDsound_dll;

// address: 0x69F0FC
//
// music_track specifies the current music track playing.
void *music_track;

// address: 0x457278
//
// DSB is a audio channel used for playback of sounds.
IDirectSoundBuffer *DSB;
