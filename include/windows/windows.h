#ifndef WINDOWS_H
#define WINDOWS_H

#include "typedefs.h"

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/aa383751(v=vs.85).aspx
typedef uint8_t BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef int32_t LONG;
typedef void * HANDLE;
typedef HANDLE HWND;
typedef HANDLE HINSTANCE;
typedef HANDLE HPALETTE;
typedef HINSTANCE HMODULE;
typedef int32_t HRESULT;
/// size of pointer.
typedef uint32_t LRESULT;
typedef unsigned int UINT;
/// size of pointer.
typedef uint32_t WPARAM;
/// size of pointer.
typedef uint32_t LPARAM;
typedef char * LPSTR;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/ms646997(v=vs.85).aspx
typedef struct {
	DWORD dwSignature;
	DWORD dwStrucVersion;
	DWORD dwFileVersionMS;
	DWORD dwFileVersionLS;
	DWORD dwProductVersionMS;
	DWORD dwProductVersionLS;
	DWORD dwFileFlagsMask;
	DWORD dwFileFlags;
	DWORD dwFileOS;
	DWORD dwFileType;
	DWORD dwFileSubtype;
	DWORD dwFileDateMS;
	DWORD dwFileDateLS;
} VS_FIXEDFILEINFO;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/dd390970(v=vs.85).aspx
typedef struct {
	WORD  wFormatTag;
	WORD  nChannels;
	DWORD nSamplesPerSec;
	DWORD nAvgBytesPerSec;
	WORD  nBlockAlign;
	WORD  wBitsPerSample;
	WORD  cbSize;
} WAVEFORMATEX;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/aa373931(v=vs.85).aspx
typedef struct {
	DWORD Data1;
	WORD Data2;
	WORD Data3;
	BYTE Data4[8];
} GUID;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/dd162769(v=vs.85).aspx
typedef struct {
	BYTE peRed;
	BYTE peGreen;
	BYTE peBlue;
	BYTE peFlags;
} PALETTEENTRY;

#endif // WINDOWS_H
