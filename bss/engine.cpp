#include "types.h"

// address: 0x52B97C
//
// seed represents the global seed of the game.
//
// PSX ref: 0x8011C7C4
// PSX def: long sglGameSeed
int32_t seed;

/* TODO: uncomment when the CRITICAL_SECTION struct has been added. Include
   windows.h from types.h? Or create a minimal windows.h locally for the
   specific types which are used in Diablo.

// address: 0x52B980
//
// mem_mutex is a mutex which protects memory operations from race conditions.
CRITICAL_SECTION mem_mutex;

*/
