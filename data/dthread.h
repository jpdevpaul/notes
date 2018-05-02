#include "types.h"

/// address: 0x4862B0
///
/// delta_thread is a handle to the thread sending game state delta information
/// to connected peers.
HANDLE delta_thread;

/// address: 0x4862B4
///
/// "dthread2:\n%s"
char str_4862B4[13];

/// address: 0x4862C4
///
/// "dthread:1\n%s"
char str_4862C4[13];

/// address: 0x4862D4
///
/// "dthread4:\n%s"
char str_4862D4[13];

/// address: 0x4862E4
///
/// "dthread3:\n(%s)"
char str_4862E4[15];
