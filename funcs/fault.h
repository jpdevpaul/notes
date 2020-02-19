#include "types.h"

/// address: 0x4182AD
///
/// fault_cpp_init initializes the C++ runtime of fault.cpp.
void fault_cpp_init();

/// address: 0x4182B7
///
/// fault_init_filter initializes the unhandled exception filter.
void fault_init_filter();

/// address: 0x4182C1
///
/// fault_cleanup_filter_atexit resets the unhandled exception filter at exit.
void fault_cleanup_filter_atexit();

/// address: 0x4182CD
///
/// fault_cleanup_filter resets the unhandled exception filter.
void fault_cleanup_filter();

/// address: 0x4182D7
///
/// TopLevelExceptionFilter is the top-level exception filter of the application.
///
/// Parameters:
///    * ep: pointer to exceptoin records
///
/// Return value:
///    * ret: EXCEPTION_CONTINUE_SEARCH or EXCEPTION_EXECUTE_HANDLER
LONG __stdcall fault_TopLevelExceptionFilter(EXCEPTION_POINTERS *ep);

/// address: 0x418455
///
/// fault_hex_format prints a hex dump of the bytes at the given address.
void __fastcall fault_hex_format(BYTE *ptr, DWORD numBytes);

/// address: 0x418518
///
/// TODO: add documentation.

/// address: 0x4185FF
///
/// TODO: add documentation.

/// address: 0x418688
///
/// TODO: add documentation.

/// address: 0x41883C
///
/// TODO: add documentation.

/// address: 0x418853
///
/// TODO: add documentation.

/// address: 0x418860
///
/// fault_get_filter returns the top level exception filter.
LPTOP_LEVEL_EXCEPTION_FILTER fault_get_filter();
