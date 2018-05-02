#include "types.h"

/// address 0x659B00
///
/// +Infinity after initialization of mpqapi.cpp.
float mpqapi_cpp_init_value;

/// address: 0x659B04
///
/// mpq_offset specifies the offset into the open MPQ archive.
int32_t mpq_offset;

/// address: 0x659B08
///
/// mpqapi_buf is a pre-allocated buffer for handling file contents written to MPQ archives.
char mpqapi_buf[4096];

/// address: 0x65AB08
///
/// mpq_hash_table contains the MPQ hash table entries.
HashEntry *mpq_hash_table;

/// address: 0x65AB0C
///
/// save_archive_modified specifies whether the save MPQ archive has been modified.
bool32_t save_archive_modified;

/// address: 0x65AB10
///
/// mpq_block_table contains the MPQ block table entries.
BlockEntry *mpq_block_table;

/// address: 0x65AB14
///
/// save_archive_open specifies whether the save MPQ archive is open.
bool8_t save_archive_open;
