#include "types.h"

/// address: 0x52B968
///
/// +Infinity after initialization of engine.cpp.
extern float engine_cpp_init_value;

/// address: 0x52B974
///
/// initial_seed represents the initial global seed of the game.
extern int32_t initial_seed;

/// address: 0x52B97C
///
/// seed represents the global seed of the game.
///
/// PSX ref: 0x8011C7C4
/// PSX def: long sglGameSeed
extern int32_t seed;

/* TODO: uncomment when the CRITICAL_SECTION struct has been added. Include
   windows.h from types.h? Or create a minimal windows.h locally for the
   specific types which are used in Diablo.

/// address: 0x52B980
///
/// mem_mutex is a mutex which protects memory operations from race conditions.
extern CRITICAL_SECTION mem_mutex;

*/

/// address: 0x52B998
///
/// seed_count specifies the number of invokations to engine_rand.
///
/// PSX ref: 0x8011B85C
/// PSX def: int SeedCount
extern int32_t seed_count;
