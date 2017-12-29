// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/aa383751(v=vs.85).aspx
typedef uint8_t BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef void * HANDLE;
typedef HANDLE HWND;

// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/dd390970(v=vs.85).aspx
typedef struct {
	WORD  wFormatTag;
	WORD  nChannels;
	DWORD nSamplesPerSec;
	DWORD nAvgBytesPerSec;
	WORD  nBlockAlign;
	WORD  wBitsPerSample;
	WORD  cbSize;
} WAVEFORMATEX;

// ref: https://msdn.microsoft.com/en-us/library/mt708923(v=vs.85).aspx
typedef struct {
	// TODO: Fill in the correct method signatures below.
	//void (*QueryInterface)();
	//void (*AddRef)();
	//void (*Release)();
	//void (*GetCaps)();
	//void (*GetCurrentPosition)();
	//void (*GetFormat)();
	//void (*GetVolume)();
	//void (*GetPan)();
	//void (*GetFrequency)();
	//void (*GetStatus)();
	//void (*Initialize)();
	//void (*Lock)();
	//void (*Play)();
	//void (*SetCurrentPosition)();
	//void (*SetFormat)();
	//void (*SetVolume)();
	//void (*SetPan)();
	//void (*SetFrequency)();
	//void (*Stop)();
	//void (*Unlock)();
	//void (*Restore)();
} IDirectSoundBufferVtbl;

typedef struct {
	IDirectSoundBufferVtbl *lpVtbl;
} IDirectSoundBuffer;

// ref: https://msdn.microsoft.com/en-us/library/mt708922(v=vs.85).aspx
typedef struct {
	// TODO: Fill in the correct method signatures below.
	//void (*QueryInterface)();
	//void (*AddRef)();
	//void (*Release)();
	//void (*CreateSoundBuffer)();
	//void (*GetCaps)();
	//void (*DuplicateSoundBuffer)();
	//void (*SetCooperativeLevel)();
	//void (*Compact)();
	//void (*GetSpeakerConfig)();
	//void (*SetSpeakerConfig)();
	//void (*Initialize)();
} IDirectSoundVtbl;

typedef struct {
	IDirectSoundVtbl *lpVtbl;
} IDirectSound;

// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/aa373931(v=vs.85).aspx
typedef struct {
	DWORD Data1;
	WORD Data2;
	WORD Data3;
	BYTE Data4[8];
} GUID;