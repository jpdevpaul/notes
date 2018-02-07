#include "types.h"

// address: 0x43AE90
//
// j_mpqapi_cpp_init initializes the C++ runtime of mpqapi.cpp.
void j_mpqapi_cpp_init();

// address: 0x43AE95
//
// mpqapi_cpp_init initializes the C++ runtime of mpqapi.cpp.
void mpqapi_cpp_init();

// address: 0x43AEA0
//
// mpqapi_set_hidden sets the visibility of the given save file.
bool32_t __fastcall mpqapi_set_hidden(char *save_path, bool32_t hidden);

// address: 0x43AEDC
//
// mpqapi_store_creation_time stores the creation time of the save file to
// registry.
void __fastcall mpqapi_store_creation_time(char *save_path, int save_num);

// address: 0x43AF4F
//
// mpqapi_reg_load_modification_time loads the save file creation times from
// registry.
bool32_t __fastcall mpqapi_reg_load_modification_time(uint8_t *dst, int size);

// address: 0x43AFA5
//
// mpqapi_xor_buf encodes or decodes the modification time buffer using XOR.
void __fastcall mpqapi_xor_buf(uint8_t *buf);

// address: 0x43AFC4
//
// mpqapi_reg_store_modification_time stores the save file creation times to
// registry.
bool32_t __fastcall mpqapi_reg_store_modification_time(uint8_t *src, int len);

// address: 0x43AFFD
//
// j_mpqapi_remove_hash_entry removes the hash entry of the give file path.
void __fastcall j_mpqapi_remove_hash_entry(char *path);

// address: 0x43B002
//
// mpqapi_remove_hash_entry removes the hash entry of the give file path.
void __fastcall mpqapi_remove_hash_entry(char *path);

// address: 0x43B054
//
// mpqapi_free_block frees the block at the specified block offset.
void __fastcall mpqapi_alloc_block(int block_offset, int block_size);

// address: 0x43B0E4
//
// mpqapi_new_block returns a new block entry and retrieves its block index.
BlockEntry * __fastcall mpqapi_new_block(int *block_index);

// address: 0x43B123
//
// mpqapi_get_hash_index_of_path returns the hash table index of the given path.
int __fastcall mpqapi_get_hash_index_of_path(char *path);

// address: 0x43B153
//
// mpqapi_get_hash_index returns the hash table index of the specified path
// hashes.
int __fastcall mpqapi_get_hash_index(int16_t index, int hash_a, int hash_b, int locale);

// address: 0x43B1BD
//
// mpqapi_remove_hash_entries removes the hash entires associated with the file
// paths returned by the get_file_name function.
void __fastcall mpqapi_remove_hash_entries(bool32_t (__stdcall *get_file_name)(int lvl, char *file_name));

// address: 0x43B1F8
//
// mpqapi_write_file creates a file of the given name with the specified file
// contents in the archive.
bool32_t __fastcall mpqapi_write_file(char *file_name, uint8_t *buf, int len);

// address: 0x43B23D
//
// mpqapi_add_file creates a block for the given file path.
BlockEntry *__fastcall mpqapi_add_file(char *path, BlockEntry *block, int block_index);

// address: 0x43B317
//
// mpqapi_write_file_contents writes the file contents to a block.
bool32_t __fastcall mpqapi_write_file_contents(char *path, uint8_t *buf, int len, BlockEntry *block);

// address: 0x43B51C
//
// mpqapi_find_free_block returns the block offset of the first free block of
// the given size.
uint32_t __fastcall mpqapi_find_free_block(int size, uint32_t *block_size);

// address: 0x43B570
//
// mpqapi_rename renames the given file to the specified name in the archive.
void __fastcall mpqapi_rename(char *old_name, char *new_name);

// address: 0x43B5AF
//
// mpqapi_has_file reports whether the MPQ archive contains a file with the
// given file path.
bool32_t __thiscall mpqapi_has_file(char *path);

// address: 0x43B5BF
//
// mpqapi_open_archive opens the given MPQ archive.
bool32_t __fastcall mpqapi_open_archive(char *save_path, bool32_t hidden, int save_num);

// address: 0x43B791
//
// mpqapi_parse_archive_header parses the MPQ archive header.
bool32_t __fastcall mpqapi_parse_archive_header(MPQHeader *header, uint32_t *mpq_offset);

// address: 0x43B882
//
// mpqapi_close_archive closes the given save archive.
void __fastcall mpqapi_close_archive(char *save_path, bool32_t free_tables, int save_num);

// address: 0x43B8FD
//
// mpqapi_store_modification_time stores the creation time of the given save
// file to registry.
void __fastcall mpqapi_store_modified_time(char *save_path, int save_num);

// address: 0x43B970
//
// mpqapi_flush_and_close flushes changes and closes the save archive.
void __fastcall mpqapi_flush_and_close(char *save_path, bool32_t is_single_player, int save_num);

// address: 0x43B9CA
//
// mpqapi_write_archive_header writes the MPQ header to the active archive.
bool32_t mpqapi_write_archive_header();

// address: 0x43BA60
//
// mpqapi_write_block_table writes the block table to the MPQ archive.
bool32_t mpqapi_write_block_table();

// address: 0x43BAEB
//
// mpqapi_write_hash_table writes the hash table to the MPQ archive.
bool32_t mpqapi_write_hash_table();

// address: 0x43BB79
//
// mpqapi_can_seek reports whether the active archive is seekable.
bool32_t mpqapi_can_seek();
