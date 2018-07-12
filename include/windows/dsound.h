#ifndef DSOUND_H
#define DSOUND_H

/// ref: https://msdn.microsoft.com/en-us/library/mt708922(v=vs.85).aspx
///
/// size = 0x2C
typedef struct {
	/// TODO: Fill in the correct method signatures below.
	/// offset: 0000 (4 bytes)
	void (*QueryInterface)();
	/// offset: 0004 (4 bytes)
	void (*AddRef)();
	/// offset: 0008 (4 bytes)
	void (*Release)();
	/// offset: 000C (4 bytes)
	void (*CreateSoundBuffer)();
	/// offset: 0010 (4 bytes)
	void (*GetCaps)();
	/// offset: 0014 (4 bytes)
	void (*DuplicateSoundBuffer)();
	/// offset: 0018 (4 bytes)
	void (*SetCooperativeLevel)();
	/// offset: 001C (4 bytes)
	void (*Compact)();
	/// offset: 0020 (4 bytes)
	void (*GetSpeakerConfig)();
	/// offset: 0024 (4 bytes)
	void (*SetSpeakerConfig)();
	/// offset: 0028 (4 bytes)
	void (*Initialize)();
} IDirectSoundVtbl;

typedef struct {
	IDirectSoundVtbl *lpVtbl;
} IDirectSound;

/// ref: https://msdn.microsoft.com/en-us/library/mt708923(v=vs.85).aspx
typedef struct {
	/// TODO: Fill in the correct method signatures below.
	/// offset: 0000 (4 bytes)
	void (*QueryInterface)();
	/// offset: 0004 (4 bytes)
	void (*AddRef)();
	/// offset: 0008 (4 bytes)
	void (*Release)();
	/// offset: 000C (4 bytes)
	void (*GetCaps)();
	/// offset: 0010 (4 bytes)
	void (*GetCurrentPosition)();
	/// offset: 0014 (4 bytes)
	void (*GetFormat)();
	/// offset: 0018 (4 bytes)
	void (*GetVolume)();
	/// offset: 001C (4 bytes)
	void (*GetPan)();
	/// offset: 0020 (4 bytes)
	void (*GetFrequency)();
	/// offset: 0024 (4 bytes)
	void (*GetStatus)();
	/// offset: 0028 (4 bytes)
	void (*Initialize)();
	/// offset: 002C (4 bytes)
	void (*Lock)();
	/// offset: 0030 (4 bytes)
	void (*Play)();
	/// offset: 0034 (4 bytes)
	void (*SetCurrentPosition)();
	/// offset: 0038 (4 bytes)
	void (*SetFormat)();
	/// offset: 003C (4 bytes)
	void (*SetVolume)();
	/// offset: 0040 (4 bytes)
	void (*SetPan)();
	/// offset: 0044 (4 bytes)
	void (*SetFrequency)();
	/// offset: 0048 (4 bytes)
	void (*Stop)();
	/// offset: 004C (4 bytes)
	void (*Unlock)();
	/// offset: 0050 (4 bytes)
	void (*Restore)();
} IDirectSoundBufferVtbl;

typedef struct {
	IDirectSoundBufferVtbl *lpVtbl;
} IDirectSoundBuffer;

#endif // DSOUND_H
