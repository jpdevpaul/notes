#include "types.h"

/// address: 0x6ABAD8
///
/// ntrigs specifies the number of opened entrances on the current level.
///
/// PSX ref (SLPS-01416): 0x8011BB78
/// PSX def: int numtrigs
extern int ntrigs;

/// address: 0x6ABAE0
///
/// trigs holds the opened entrance which connects two levels of the map.
//
/// PSX ref (SLPS-01416): 0x800E33CC
/// PSX def: struct TriggerStruct trigs[5];
extern Trigger trigs[5];
