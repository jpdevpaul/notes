#include "types.h"

// address: 0x415F43
//
// TODO: add documentation.

// address: 0x415F8F
//
// TODO: add documentation.

// address: 0x415FDF
//
// encrypt_hash returns the hash of the given string.
uint32_t __fastcall encrypt_hash(char *s, int type);

// address: 0x41602E
//
// encrypt_init_lookup_table initializes the lookup table used for hashing with
// pseudo-random numbers based on an LCG with a=125, c=3 and m=0x2AAAAB.
//
// References:
//    * https://en.wikipedia.org/wiki/Linear_congruential_generator
void encrypt_init_lookup_table();

// address: 0x41609D
//
// TODO: add documentation.

// address: 0x416133
//
// TODO: add documentation.

// address: 0x416167
//
// TODO: add documentation.

// address: 0x41618E
//
// TODO: add documentation.
