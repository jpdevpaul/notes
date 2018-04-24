#include "types.h"

/// address: 0x4947D4
///
/// log_not_created specifies whether the log file has not yet been created.
bool32_t log_not_created;

/// address: 0x4947D8
///
/// log_file is a handle to the log file.
HANDLE log_file;

/// address: 0x4947DC
///
/// `c:\`
char str_4947DC[4];

/// address: 0x4947E0
///
/// "%s%s%02u%02u%02u.ERR"
char str_4947E0[21];

/// address: 0x4947F8
///
/// "\r\n------------------------------------------------------\r\nPROGRAM VERSION: %d.%d.%d.%d\r\nCOMPUTER NAME: %s\r\nTIME: %02u/%02u/%02u %02u:%02u:%02u\r\nINFO: %s\r\n\r\n"
char str_4947F8[157];
