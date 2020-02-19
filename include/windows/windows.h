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
typedef int BOOL;
typedef BYTE BOOLEAN;
/// size of pointer.
typedef uint32_t LRESULT;
typedef unsigned int UINT;
/// size of pointer.
typedef uint32_t WPARAM;
/// size of pointer.
typedef uint32_t LPARAM;
typedef char * LPSTR;

#define EXCEPTION_MAXIMUM_PARAMETERS 15

/// ref: https://docs.microsoft.com/en-us/windows/desktop/api/winnt/ns-winnt-_exception_record
typedef struct _EXCEPTION_RECORD {
	DWORD                    ExceptionCode;
	DWORD                    ExceptionFlags;
	struct _EXCEPTION_RECORD *ExceptionRecord;
	void                     *ExceptionAddress;
	DWORD                    NumberParameters;
	void                     *ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD;

/// ref: WINNT.H
#define SIZE_OF_80387_REGISTERS 80

/// ref: WINNT.H
typedef struct {
	DWORD ControlWord;
	DWORD StatusWord;
	DWORD TagWord;
	DWORD ErrorOffset;
	DWORD ErrorSelector;
	DWORD DataOffset;
	DWORD DataSelector;
	BYTE  RegisterArea[SIZE_OF_80387_REGISTERS];
	DWORD Cr0NpxState;
} FLOATING_SAVE_AREA;

/// ref: WINNT.H
typedef struct {
	DWORD              ContextFlags;
	DWORD              Dr0;
	DWORD              Dr1;
	DWORD              Dr2;
	DWORD              Dr3;
	DWORD              Dr6;
	DWORD              Dr7;
	FLOATING_SAVE_AREA FloatSave;
	DWORD              SegGs;
	DWORD              SegFs;
	DWORD              SegEs;
	DWORD              SegDs;
	DWORD              Edi;
	DWORD              Esi;
	DWORD              Ebx;
	DWORD              Edx;
	DWORD              Ecx;
	DWORD              Eax;
	DWORD              Ebp;
	DWORD              Eip;
	DWORD              SegCs;
	DWORD              EFlags;
	DWORD              Esp;
	DWORD              SegSs;
} CONTEXT;

/// ref: https://docs.microsoft.com/en-us/windows/desktop/api/winnt/ns-winnt-_exception_pointers
typedef struct {
	EXCEPTION_RECORD *ExceptionRecord;
	CONTEXT          *ContextRecord;
} EXCEPTION_POINTERS;

/// ref: WINBASE.H
typedef LONG (__stdcall *LPTOP_LEVEL_EXCEPTION_FILTER)(EXCEPTION_POINTERS *ep);

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
