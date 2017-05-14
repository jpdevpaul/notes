// address: 0x4498EC
//
// j_pfile_cpp_init initializes the C++ runtime of pfile.cpp.
void j_pfile_cpp_init();

// address: 0x4498F1
//
// pfile_cpp_init initializes the C++ runtime of pfile.cpp.
void pfile_cpp_init();

// address: 0x4498FC
//
// pfile_init_save_directory initializes the save directory.
void pfile_init_save_directory();

// address: 0x44995B
//
// pfile_check_free_space validates that the hard drive of the given directory
// has at least 10 MB free space available.
void __fastcall pfile_check_available_space(char *dir);

// address: 0x4499C3
//
// TODO: add documentation.

// address: 0x449A33
//
// pfile_get_save_num_from_name returns the save number for the given character
// name.
int __fastcall pfile_get_save_num_from_name(char *name);

// address: 0x449A5B
//
// TODO: add documentation.

// address: 0x449ADF
//
// TODO: add documentation.

// address: 0x449B30
//
// pfile_get_save_path retrieves the save path for the given save number.
void __fastcall pfile_get_save_path(char *save_path, int size, int save_num);

// address: 0x449BB2
//
// TODO: add documentation.

// address: 0x449BE4
//
// TODO: add documentation.

// address: 0x449C5A
//
// TODO: add documentation.

// address: 0x449D22
//
// TODO: add documentation.

// address: 0x449D43
//
// TODO: add documentation.

// address: 0x449DD0
//
// TODO: add documentation.

// address: 0x449DE3
//
// TODO: add documentation.

// address: 0x449FAA
//
// TODO: add documentation.

// address: 0x44A036
//
// TODO: add documentation.

// address: 0x44A158
//
// TODO: add documentation.

// address: 0x44A192
//
// TODO: add documentation.

// address: 0x44A199
//
// TODO: add documentation.

// address: 0x44A1CC
//
// TODO: add documentation.

// address: 0x44A210
//
// TODO: add documentation.

// address: 0x44A220
//
// TODO: add documentation.

// address: 0x44A2FF
//
// TODO: add documentation.

// address: 0x44A356
//
// pfile_delete_save deletes the save file of the given character.
bool32_t __stdcall pfile_delete_save(HeroInfo *hero_info);

// address: 0x44A3A0
//
// TODO: add documentation.

// address: 0x44A419
//
// TODO: add documentation.

// address: 0x44A463
//
// TODO: add documentation.

// address: 0x44A4E9
//
// TODO: add documentation.

// address: 0x44A512
//
// TODO: add documentation.

// address: 0x44A563
//
// TODO: add documentation.

// address: 0x44A598
//
// TODO: add documentation.

// address: 0x44A644
//
// TODO: add documentation.

// address: 0x44A679
//
// TODO: add documentation.

// address: 0x44A727
//
// pfile_strcpy copies the source string to the destination buffer.
void __fastcall pfile_strcpy(char *dst, char *src);

// address: 0x44A731
//
// TODO: add documentation.

// address: 0x44A8B3
//
// TODO: add documentation.

