#include "types.h"

/// address: 0x415F43
///
/// DecryptBlock decrypts the given block.
///
/// Parameters:
///    * block: block of data to decrypt
///    * size:  size of data
///    * key:   key used for decryption
void __fastcall DecryptBlock(DWORD *block, DWORD size, DWORD key);

/// address: 0x415F8F
///
/// EncryptBlock encrypts the given block.
///
/// Parameters:
///    * block: block of data to encrypt
///    * size:  size of data
///    * key:   key used for encryption
void __fastcall EncryptBlock(DWORD *block, DWORD size, DWORD key);

/// address: 0x415FDF
///
/// HashString returns the hash of the given string.
///
/// Parameters:
///    * s:    string to hash
///    * type: hash algorithm type
///
/// Return value:
///    * ret: 32-bit hash value of the string
uint32_t __fastcall HashString(const char *s, int type);

/// address: 0x41602E
///
/// InitCryptTable initializes the lookup table used for encryption, decryption
/// and hashing.
void InitCryptTable();

/// address: 0x41609D
///
/// PkwareCompress compresses the given buffer using the PKWARE Data Compression
/// Library.
///
/// Parameters:
///    * buf:  buffer to compress (used for both input and output)
///    * size: size of buffer
///
/// Return value:
///    * ret: size of compressed data
int __fastcall PkwareCompress(void *buf, int size);

// TODO: uncomment once TDataInfo is defined.
/*
/// address: 0x416133
///
/// PkwareRead reads data from the source buffer, writing to the destination
/// buffer.
///
/// Parameters:
///    * dst:  destination buffer
///    * size: pointer to number of bytes to read
///    * info: information used by the PKWARE Data Compression Library (src)
///
/// Return value:
///    * ret: number of bytes read
int __cdecl PkwareRead(void *dst, int *size, TDataInfo *info);
*/

// TODO: uncomment once TDataInfo is defined.
/*
/// address: 0x416167
///
/// PkwareWrite writes data to the destination buffer, reading from the source
/// buffer.
///
/// Parameters:
///    * src:  source buffer
///    * size: pointer to number of bytes to write
///    * info: information used by the PKWARE Data Compression Library (dst)
///
/// Return value:
///    * ret: number of bytes written
int __cdecl PkwareWrite(void *src, int *size, TDataInfo *info);
*/

/// address: 0x41618E
///
/// PkwareDecompress decompresses the given buffer using the PKWARE Data
/// Compression Library.
///
/// Parameters:
///    * buf:        buffer to decompress
///    * recv_size:  maximum number of bytes to receive per read operation
///    * dwMaxBytes: maximum size of decompressed data
void __fastcall PkwareDecompress(void *buf, int recv_size, int dwMaxBytes);
