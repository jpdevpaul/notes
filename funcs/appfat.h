#include "types.h"

/// address: 0x40102A
///
/// GetErrorStr returns a formatted error message based on the given error
/// code.
char * __fastcall GetErrorStr(DWORD error_code);

/// address: 0x4010CE
///
/// TraceErrorDD stores a formatted error message in error_buf based on the
/// given DirectDraw error code.
void __fastcall TraceErrorDD(HRESULT hError, char *pszBuffer, DWORD dwMaxChars);

/// address: 0x401831
///
/// TraceErrorDS stores a formatted error message in error_buf based on the
/// given DirectSound error code.
void __fastcall TraceErrorDS(HRESULT hError, char *pszBuffer, DWORD dwMaxChars);

/// address: 0x40193A
///
/// TraceLastError returns a formatted error message of the last error.
char * TraceLastError();

/// address: 0x401947
///
/// app_fatal terminates the game and displays an error message box.
void __cdecl app_fatal(const char *pszFmt, ...);

/// address: 0x401975
///
/// MsgBox displays an error message box based on the given format string and
/// variable argument list.
void __fastcall MsgBox(const char *pszFmt, va_list va);

/// address: 0x4019C7
///
/// FreeDlg cleans up after a fatal application error.
void FreeDlg();

/// address: 0x401A30
///
/// DrawDlg renders an in-game message box with the given text on screen.
void __cdecl DrawDlg(char *pszFmt, ...);

/// address: 0x401A65
///
/// DDErrMsg terminates the game with a DirectDraw assertion message box.
void __fastcall DDErrMsg(DWORD error_code, int log_line_nr, char *log_file_path);

/// address: 0x401A88
///
/// DSErrMsg terminates the game with a DirectSound assertion message box.
void __fastcall DSErrMsg(DWORD error_code, int log_line_nr, char *log_file_path);

/// address: 0x401AAB
///
/// center_window centres the given dialog box.
void __fastcall center_window(HWND hDlg);

/// address: 0x401B3D
///
/// ErrDlg terminates the game and displays an error dialog box based on the
/// given template id.
void __fastcall ErrDlg(int template_id, DWORD error_code, char *log_file_path, int log_line_nr);

/// address: 0x401BCA
///
/// FuncDlg is a callback function which processes messages sent to the given
/// dialog box.
BOOL __stdcall FuncDlg(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM text);

/// address: 0x401C0F
///
/// TextDlg sets the text of the given dialog.
void __fastcall TextDlg(HWND hDlg, char *text);

/// address: 0x401C2E
///
/// ErrOkDlg displays an error dialog box based on the given template id and
/// error code.
void __fastcall ErrOkDlg(int template_id, DWORD error_code, char *log_file_path, int log_line_nr);

/// address: 0x401C9C
///
/// FileErrDlg terminates the game with a file not found error dialog.
void __fastcall FileErrDlg(const char *error);

/// address: 0x401CE1
///
/// DiskFreeDlg terminates the game with an out of disk space error dialog.
void __fastcall DiskFreeDlg(char *error);

/// address: 0x401D1D
///
/// InsertCDDlg terminates the game with an insert CD
/// error dialog.
BOOL InsertCDDlg();

/// address: 0x401D68
///
/// DirErrorDlg terminates the game with a read-only directory error dialog.
void __fastcall DirErrorDlg(char *error);
