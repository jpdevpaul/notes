#include "types.h"

/// address: 0x4279F2
///
/// j_log_cpp_init_1 initializes the C++ runtime of log.cpp.
void j_log_cpp_init_1();

/// address: 0x4279F7
///
/// log_cpp_init_1 initializes the C++ runtime of log.cpp.
void log_cpp_init_1();

/// address: 0x427A02
///
/// log_cpp_init_2 initializes the C++ runtime of log.cpp.
void log_cpp_init_2();

/// address: 0x427A0C
///
/// log_init_mutex initializes the log mutex.
void log_init_mutex();

/// address: 0x427A18
///
/// log_cleanup_mutex_atexit terminates the log mutex at exit.
void log_cleanup_mutex_atexit();

/// address: 0x427A24
///
/// log_cleanup_mutex terminates the log mutex.
void log_cleanup_mutex();

/// address: 0x427A30
///
/// log_flush flushes the log file.
void __cdecl log_flush(bool32_t force_close);

/// address: 0x427AC2
///
/// log_create creates a new log file.
void * log_create();

/// address: 0x427C18
///
/// log_get_version retrieves the file information of the game executable.
void __fastcall log_get_version(VS_FIXEDFILEINFO *file_info);

/// address: 0x427CC9
///
/// log_printf prints a formatted string to the log file.
void log_printf(char *format, ...);

/// address: 0x427D75
///
/// log_dump_computer_info writes computer information to the log file.
void log_dump_computer_info();
