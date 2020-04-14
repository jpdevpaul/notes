#include "types.h"

/// strGetError returns a formatted error message based on the given error code.
///
///    HF def: const TCHAR * strGetError(DWORD dwErr)
///
/// Address in diablo.exe (v1.09b): 0x40102A
const char * __fastcall strGetError(DWORD dwErr); // alias: GetErrorStr

/// get_ddraw_error retrieves a formatted error message based on the given
/// DirectDraw error code.
///
///    HF def: void get_ddraw_error(HRESULT ddrval, TCHAR *pszBuf, DWORD dwMaxChars)
///
/// Address in diablo.exe (v1.09b): 0x4010CE
void __fastcall get_ddraw_error(HRESULT ddrval, char *pszBuf, DWORD dwMaxChars); // alias: GetDDError

/// get_dsound_error retrieves a formatted error message based on the given
/// DirectSound error code.
///
///    HF def: void get_dsound_error(HRESULT dsrval, TCHAR *pszBuf, DWORD dwMaxChars)
///
/// Address in diablo.exe (v1.09b): 0x401831
void __fastcall get_dsound_error(HRESULT dsrval, char *pszBuf, DWORD dwMaxChars); // alias: GetDSError

/// strGetLastError returns a formatted error message of the last error.
///
///    HF def: TCHAR * strGetLastError()
///
/// Address in diablo.exe (v1.09b): 0x40193A
char * strGetLastError(); // alias: GetLastErrorStr

/// app_fatal terminates the game and displays an error message box.
///
///    HF def: void __cdecl app_fatal(const char *pszFmt,...)
///
/// Address in diablo.exe (v1.09b): 0x401947
void __cdecl app_fatal(const char *pszFmt, ...); // alias: Fatalf

/// app_debug_msg displays an error message box based on the given format string
/// and variable argument list.
///
///    HF def: void app_debug_msg(const char *pszFmt, va_list args)
///
/// Address in diablo.exe (v1.09b): 0x401975
void __fastcall app_debug_msg(const char *pszFmt, va_list args); // alias: MsgBox

/// pre_fatal_cleanup cleans up after a fatal application error.
///
///    HF def: void pre_fatal_cleanup()
///
/// Address in diablo.exe (v1.09b): 0x4019C7
void pre_fatal_cleanup(); // alias: FreeDlg

/// app_warning renders an in-game message box with the given text on screen.
///
///    HF def: void __cdecl app_warning(const char *pszFmt,...)
///
/// Address in diablo.exe (v1.09b): 0x401A30
void __cdecl app_warning(const char *pszFmt, ...); // alias: Warnf

/// ddraw_assert_fail terminates the game with a DirectDraw assertion message
/// box.
///
///    HF def: void ddraw_assert_fail(HRESULT ddrval, int nLineNo, const char *pszFile)
///
/// Address in diablo.exe (v1.09b): 0x401A65
void __fastcall ddraw_assert_fail(HRESULT ddrval, int nLineNo, const char *pszFile); // alias: DDErrMsg

/// dsound_assert_fail terminates the game with a DirectSound assertion message
/// box.
///
///    HS def: void dsound_assert_fail(HRESULT dsrval, int nLineNo, const char *pszFile)
///
/// Address in diablo.exe (v1.09b): 0x401A88
void __fastcall dsound_assert_fail(HRESULT dsrval, int nLineNo, const char *pszFile); // alias: DSErrMsg

/// center_window centres the given dialog box.
///
///    HF def: void center_window(HWND hWnd)
///
/// Address in diablo.exe (v1.09b): 0x401AAB
void __fastcall center_window(HWND hWnd); // alias: CenterDlg

/// ErrorDlg terminates the game and displays an error dialog box based on the
/// given dialog_id.
///
///    HF def: void ErrorDlg(int nDlgId, DWORD dwErr, const char *pszFile, int nLine)
///
/// Address in diablo.exe (v1.09b): 0x401B3D
void __fastcall ErrorDlg(int nDlgId, DWORD dwErr, const char *pszFile, int nLine);

/// ErrorDlgProc is a callback function which processes messages sent to the
/// given dialog box.
///
///    HF def: BOOL CALLBACK ErrorDlgProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
///
/// Address in diablo.exe (v1.09b): 0x401BCA
BOOL __stdcall ErrorDlgProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM text);

/// ErrorDlgInit sets the text of the given dialog.
///
///    HF def: void ErrorDlgInit(HWND hWnd, LPARAM lParam)
///
/// Address in diablo.exe (v1.09b): 0x401C0F
void __fastcall ErrorDlgInit(HWND hWnd, LPARAM text); // alias: SetDlgText

/// WarnDlg displays a warning dialog box based on the given dialog_id and error
/// code.
///
/// Address in diablo.exe (v1.09b): 0x401C2E
void __fastcall WarnDlg(int nDlgId, DWORD dwErr, const char *pszFile, int nLine);

/// FileErrorDlg terminates the game with a file not found error dialog.
///
///    HF def: void FileErrorDlg(const char *pszName)
///
/// Address in diablo.exe (v1.09b): 0x401C9C
void __fastcall FileErrorDlg(const char *pszName);

/// DiskFreeErrorDlg terminates the game with an out of disk space error dialog.
///
///    HF def: void DiskFreeErrorDlg(const char *pszDir)
///
/// Address in diablo.exe (v1.09b): 0x401CE1
void __fastcall DiskFreeErrorDlg(const char *pszDir);

/// InsertCDDlg terminates the game with an insert CD error dialog.
///
///    HF def: BOOL InsertCDDlg(void)
///
/// Address in diablo.exe (v1.09b): 0x401D1D
BOOL InsertCDDlg();

/// DirErrorDlg terminates the game with a read-only directory error dialog.
///
///    assert: DirErrorDlg
///
/// Address in diablo.exe (v1.09b): 0x401D68
void __fastcall DirErrorDlg(const char *pszExe);
