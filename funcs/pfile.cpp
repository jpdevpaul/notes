#include "types.h"

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
// pfile_write_hero stores the hero to a save file.
void pfile_write_hero();

// address: 0x449A33
//
// pfile_get_save_num_from_name returns the save number for the given character
// name.
int __fastcall pfile_get_save_num_from_name(char *name);

// address: 0x449A5B
//
// pfile_encode_hero encodes the hero and stores it to the 'hero' file.
void __fastcall pfile_encode_hero(Hero *hero);

// address: 0x449ADF
//
// pfile_open_archive opens the specified save archive.
bool32_t __fastcall pfile_open_archive(bool32_t a1, int save_num);

// address: 0x449B30
//
// pfile_get_save_path retrieves the save path for the given save number.
void __fastcall pfile_get_save_path(char *save_path, int size, int save_num);

// address: 0x449BB2
//
// pfile_flush flushes changes to the save archive.
void __fastcall pfile_flush(bool32_t is_single_player, int save_num);

// address: 0x449BE4
//
// pfile_create_player_description creates a player description based on the
// save file associated with the player name.
bool32_t __fastcall pfile_create_player_description(char *dst, int len);

// address: 0x449C5A
//
// pfile_create_save_file creates a save file for the given player name.
int __fastcall pfile_create_save_file(char *name_1, char *name_2);

// address: 0x449D22
//
// pfile_flush_W flushes changes to the active save archive.
void pfile_flush_W();

/* TODO: uncomment when Player is defined in structs.h

// address: 0x449D43
//
// pfile_get_hero_info_from_player retrieves hero information from the given
// player.
void __fastcall pfile_get_hero_info_from_player(Player *player, HeroInfo *hero_info, bool32_t valid_save);

*/

/* TODO: uncomment when Player is defined in structs.h

// address: 0x449DD0
//
// pfile_get_player_class_from_player returns the player class of the player.
player_class __fastcall pfile_get_player_class_from_player(Player *player);

*/

// address: 0x449DE3
//
// pfile_ui_set_hero_infos retrieves hero information from the save files.
//
// Note, the hidden and system file attributes are removed from each save file.
bool32_t __stdcall pfile_ui_set_hero_infos(void (__cdecl *ui_add_hero_info)(HeroInfo *));

// address: 0x449FAA
//
// pfile_get_archive_path returns the path to the save archive of the given save
// number.
char *__fastcall pfile_get_archive_path(char *dst, int dst_size, int save_num);

// address: 0x44A036
//
// pfile_read_hero reads the 'hero' save file of the given save archive.
bool32_t __fastcall pfile_read_hero(void *archive, Hero *hero);

// address: 0x44A158
//
// pfile_open_save_archive opens the save archive with the specified save number.
void *__fastcall pfile_open_save_archive(int *unused, int save_num);

// address: 0x44A192
//
// pfile_SFileCloseArchive closes the save archive.
void __fastcall pfile_SFileCloseArchive(void *archive);

// address: 0x44A199
//
// pfile_archive_contains_game reports whether the save archive contains the 'game' save file.
bool32_t __fastcall pfile_archive_contains_game(void *archive);

// address: 0x44A1CC
//
// pfile_ui_set_class_stats retrieves the starting stats for the given player
// class.
bool32_t __stdcall pfile_ui_set_class_stats(int player_class_nr, Stats_i16 *class_stats);

// address: 0x44A210
//
// pfile_get_player_class returns the player class of the player.
player_class __fastcall pfile_get_player_class(int player_class_nr);

// address: 0x44A220
//
// pfile_ui_save_create creates a save file based on the given hero information.
bool32_t __stdcall pfile_ui_save_create(HeroInfo *hero_info);

// address: 0x44A2FF
//
// pfile_get_file_name retrieves the name of the permanent save file of the specified level.
bool32_t __stdcall pfile_get_file_name(int lvl, char *dst);

// address: 0x44A356
//
// pfile_delete_save deletes the save file of the given character.
bool32_t __stdcall pfile_delete_save(HeroInfo *hero_info);

// address: 0x44A3A0
//
// pfile_read_player_from_save reads player information from the save file of
// the specified character name.
void pfile_read_player_from_save();

// address: 0x44A419
//
// pfile_get_temp_level_name retrieves the name of the temporary level save
// file.
void __fastcall pfile_get_temp_level_name(char *dst);

// address: 0x44A463
//
// pfile_get_perm_level_name retrieves the name of the permanent level save
// file.
void __fastcall pfile_get_perm_level_name(char *dst);

// address: 0x44A4E9
//
// pfile_get_game_name retrieves the name of the game state save file.
void __fastcall pfile_get_game_name(char *dst);

// address: 0x44A512
//
// pfile_remove_temp_files removes temporary save files.
void pfile_remove_temp_files();

// address: 0x44A563
//
// pfile_get_temp_name retrieves the name of the temporary save file of the
// specified level.
bool32_t __stdcall pfile_get_temp_name(int a1, char *dst);

// address: 0x44A598
//
// pfile_rename_temp_to_perm renames temporary save files to permanent save
// files.
void pfile_rename_temp_to_perm();

// address: 0x44A644
//
// pfile_get_perm_name retrieves the name of the permanent save file of the
// specified level.
bool32_t __stdcall pfile_get_perm_name(int lvl, char *dst);

// address: 0x44A679
//
// pfile_write_save_file stores the save file at the specific location.
void __fastcall pfile_write_save_file(char *path, void *save_ptr, int size, int size_64);

// address: 0x44A727
//
// pfile_strcpy copies the source string to the destination buffer.
void __fastcall pfile_strcpy(char *dst, char *src);

// address: 0x44A731
//
// pfile_read reads the contents of the specified save file.
uint8_t * __fastcall pfile_read(char *path, int *len);

// address: 0x44A8B3
//
// pfile_update stores a periodic update to the save file each minute.
void __fastcall pfile_update(bool32_t force_save);
