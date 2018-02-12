#include "types.h"

/// address: 0x415F43
///
/// encrypt_decrypt_block decrypts the given block.
void __fastcall encrypt_decrypt_block(void *block, int size, uint32_t key);

/// address: 0x415F8F
///
/// encrypt_encrypt_block encrypts the given block.
void __fastcall encrypt_encrypt_block(void *block, int size, uint32_t key);

/// address: 0x415FDF
///
/// encrypt_hash returns the hash of the given string.
uint32_t __fastcall encrypt_hash(char *s, int type);

/// address: 0x41602E
///
/// encrypt_init_lookup_table initializes the lookup table used for hashing with
/// pseudo-random numbers based on an LCG with a=125, c=3 and m=0x2AAAAB.
///
/// References:
///    * https://en.wikipedia.org/wiki/Linear_congruential_generator
void encrypt_init_lookup_table();

/// address: 0x41609D
///
/// encrypt_compress compresses the given buffer using the PKWARE Data
/// Compression Library.
int __fastcall encrypt_compress(void *buf, int size);

/// address: 0x416133
///
/// encrypt_pkware_read reads data from the parameter and writes it to the
/// buffer.
int __cdecl encrypt_pkware_read(void *buf, int *size, void *param);

/// address: 0x416167
///
/// encrypt_pkware_write reads data from the buffer and writes it to the given
/// parameter.
int __cdecl encrypt_pkware_write(void *buf, int *size, void *param);

/// address: 0x41618E
///
/// encrypt_compress decompresses the given buffer using the PKWARE Data
/// Compression Library.
void __fastcall encrypt_decompress(void *param, int a2, int size);
