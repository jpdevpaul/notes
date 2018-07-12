#ifndef SHA1_H
#define SHA1_H

#include "typedefs.h"

/// SHA1Context holds the context of a SHA-1 running hashsum.
typedef struct {
	uint32_t state[5];
	uint64_t count;
	uint8_t buffer[64];
} SHA1Context;

#endif // SHA1_H
