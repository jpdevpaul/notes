// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/aa383751(v=vs.85).aspx
typedef uint8_t BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef int32_t LONG;
typedef void * HANDLE;
typedef HANDLE HWND;
typedef HANDLE HINSTANCE;
typedef HINSTANCE HMODULE;

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

// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/gg426103(v=vs.85).aspx
typedef struct {
	DWORD dwColorSpaceLowValue;
	DWORD dwColorSpaceHighValue;
} DDCOLORKEY;

// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/gg426109(v=vs.85).aspx
typedef struct {
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwFourCC;
	union {
		DWORD dwRGBBitCount;
		DWORD dwYUVBitCount;
		DWORD dwZBufferBitDepth;
		DWORD dwAlphaBitDepth;
		DWORD dwLuminanceBitCount;
		DWORD dwBumpBitCount;
		DWORD dwPrivateFormatBitCount;
	};
	union {
		DWORD dwRBitMask;
		DWORD dwYBitMask;
		DWORD dwStencilBitDepth;
		DWORD dwLuminanceBitMask;
		DWORD dwBumpDuBitMask;
		DWORD dwOperations;
	};
	union {
		DWORD dwGBitMask;
		DWORD dwUBitMask;
		DWORD dwZBitMask;
		DWORD dwBumpDvBitMask;
		struct {
			WORD wFlipMSTypes;
			WORD wBltMSTypes;
		} MultiSampleCaps;
	};
	union {
		DWORD dwBBitMask;
		DWORD dwVBitMask;
		DWORD dwStencilBitMask;
		DWORD dwBumpLuminanceBitMask;
	};
	union {
		DWORD dwRGBAlphaBitMask;
		DWORD dwYUVAlphaBitMask;
		DWORD dwLuminanceAlphaBitMask;
		DWORD dwRGBZBitMask;
		DWORD dwYUVZBitMask;
	};
} DDPIXELFORMAT;

// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/gg426110(v=vs.85).aspx
typedef struct {
	DWORD dwCaps;
} DDSCAPS;

// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/gg426113(v=vs.85).aspx
typedef struct {
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwHeight;
	DWORD dwWidth;
	union {
		LONG  lPitch;
		DWORD dwLinearSize;
	};
	DWORD dwBackBufferCount;
	union {
		DWORD dwMipMapCount;
		DWORD dwZBufferBitDepth;
		DWORD dwRefreshRate;
	};
	DWORD  dwAlphaBitDepth;
	DWORD  dwReserved;
	void *lpSurface;
	DDCOLORKEY    ddckCKDestOverlay;
	DDCOLORKEY    ddckCKDestBlt;
	DDCOLORKEY    ddckCKSrcOverlay;
	DDCOLORKEY    ddckCKSrcBlt;
	DDPIXELFORMAT ddpfPixelFormat;
	DDSCAPS       ddsCaps;
} DDSURFACEDESC;

// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/dd162769(v=vs.85).aspx
typedef struct {
	BYTE peRed;
	BYTE peGreen;
	BYTE peBlue;
	BYTE peFlags;
} PALETTEENTRY;
