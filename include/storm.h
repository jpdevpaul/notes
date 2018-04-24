#ifndef STORM_H
#define STORM_H

/// storm.h documents the function signatures of Storm.dll, and maps them to the
/// ordinal numbers used in Diablo.exe.

#include "types.h"

/// === [ SNet ] ================================================================

/// address: 0x4698A0
/// ordinal: 101
///
/// SNetCreateGame creates a network game with the given multi player seed.
bool32_t __stdcall SNetCreateGame(char *local_1, char *local_2, char *local_3, int a4, int *multi_seed, int a6, int a7, char *local_4, char *local_5, int *player_num);

/// address: 0x4697C8
/// ordinal: 102
///
/// SNetDestroy terminates the network provider.
void SNetDestroy();

/// address: 0x46986A
/// ordinal: 106
///
/// SNetDropPlayer drops the given player from the current game.
bool32_t __stdcall SNetDropPlayer(int player_num, uint32_t flags);

/// address: 0x46988E
/// ordinal: 107
///
/// SNetGetGameInfo retrieves game information of the given type.
bool32_t __stdcall SNetGetGameInfo(game_info type, char *dst, int size, int *len);

/// address: 0x469864
/// ordinal: 110
///
/// SNetGetOwnerTurnsWaiting retrieves the number of anticipated turns.
bool32_t __stdcall SNetGetOwnerTurnsWaiting(int *turns);

/// address: 0x4698C4
/// ordinal: 114
///
/// SNetGetProviderCaps retrieves network provider capacity information.
bool32_t __stdcall SNetGetProviderCaps(Caps *caps);

/// address: 0x4698B8
/// ordinal: 115
///
/// SNetGetTurnsInTransit retrives the number of turns queued for sending over
/// the network.
bool32_t __stdcall SNetGetTurnsInTransit(int *turns);

/// address: 0x4698A6
/// ordinal: 117
///
/// SNetInitializeProvider initializes the network provider.
bool32_t __stdcall SNetInitializeProvider(uint32_t id, ClientInfo *client_info, UserInfo *user_info, UiInfo *ui_info, FileInfo *file_info);

/// address: 0x4697CE
/// ordinal: 119
///
/// SNetLeaveGame notifies all connected peers that the client has left the game.
bool32_t __stdcall SNetLeaveGame(uint32_t flags);

/// address: 0x4698AC
/// ordinal: 120
///
/// SNetPerformUpgrade performs a network upgrade of the game.
bool32_t __stdcall SNetPerformUpgrade(int *status);

/// address: 0x46987C
/// ordinal: 121
///
/// SNetReceiveMessage receives a network message from a connected peer.
bool32_t __stdcall SNetReceiveMessage(int *sender_player_num, Packet **pkt, int *len);

/// address: 0x4698BE
/// ordinal: 122
///
/// SNetReceiveTurns receives turns and player states from all connected peers.
bool32_t __stdcall SNetReceiveTurns(int player_num, int nplayers, void *turn_table, int *turn_table_len, uint32_t *player_state);

/// address: 0x469888
/// ordinal: 123
///
/// SNetRegisterEventHandler registers the event handler for the given event
/// type.
bool32_t __stdcall SNetRegisterEventHandler(event_type event_type, void (__stdcall *event_handler)(Event *event));

/// address: 0x469876
/// ordinal: 127
///
/// SNetSendMessage sends a network message to the given player.
bool32_t __stdcall SNetSendMessage(int player_num, Packet *pkt, int len);

/// address: 0x4698B2
/// ordinal: 128
///
/// SNetSendTurn sends the given turn to all connected peers.
bool32_t __stdcall SNetSendTurn(uint32_t *turn, int len);

/// address: 0x469894
/// ordinal: 129
///
/// SNetSetBasePlayer sets the base player number of the network provider.
bool32_t __stdcall SNetSetBasePlayer(int base_player_num);

/// address: 0x469882
/// ordinal: 131
///
/// SNetUnregisterEventHandler unregisters the event handler of the given event
/// type.
bool32_t __stdcall SNetUnregisterEventHandler(event_type event_type, void (__stdcall *event_handler)(Event *event));

/// address: 0x469870
/// ordinal: 134
///
/// SNetSendServerChatCommand sends a chat command to the server.
int __stdcall SNetSendServerChatCommand(char *command);


/// === [ SFile ] ===============================================================

/// address: 0x469816
/// ordinal: 252
///
/// SFileCloseArchive closes the given MPQ archive.
bool32_t __stdcall SFileCloseArchive(void *archive);

/// address: 0x4697F2
/// ordinal: 253
///
/// SFileCloseFile closes the given file.
bool32_t __stdcall SFileCloseFile(void *file);

/// address: 0x4697FE
/// ordinal: 255
///
/// SFileDdaBeginEx starts playback of the given audio stream.
bool32_t __stdcall SFileDdaBeginEx(void * sfx_stream, uint32_t flags, int mask, int offset, int volume, int pan, int a7);

/// address: 0x4698FA
/// ordinal: 256
///
/// SFileDdaDestroy terminates the sound subsystem.
bool32_t SFileDdaDestroy();

/// address: 0x4697F8
/// ordinal: 257
///
/// SFileDdaEnd stops playback of the given audio stream.
bool32_t __stdcall SFileDdaEnd(void *file);

/// address: 0x46980A
/// ordinal: 258
///
/// SFileDdaGetPos retrieves the current and the end position of the data stream.
bool32_t __stdcall SFileDdaGetPos(void *stream, int *cur_pos, int *end_pos);

/// address: 0x4698EE
/// ordinal: 260
///
/// SFileDdaInitialize initializes the sound subsystem.
bool32_t __stdcall SFileDdaInitialize(IDirectSound *DS);

/// address: 0x469906
/// ordinal: 261
///
/// SFileDdaSetVolume sets the playback volume of the given audio stream.
bool32_t __stdcall SFileDdaSetVolume(void *file, int volume, int a3);

/// address: 0x46990C
/// ordinal: 264
///
/// SFileGetFileArchive retrieves a handle to the MPQ archive of the given file.
bool32_t __stdcall SFileGetFileArchive(int file, int *archive);

/// address: 0x4698E2
/// ordinal: 265
///
/// SFileGetFileSize returns the size of the given file.
int __stdcall SFileGetFileSize(int *file1, int *file2);

/// address: 0x469822
/// ordinal: 266
///
/// SFileOpenArchive opens the named MPQ archive and retrieves its file
/// descriptor.
bool32_t __stdcall SFileOpenArchive(char *mpq_path, uint32_t flags, int a3, void **archive);

/// address: 0x469804
/// ordinal: 267
///
/// SFileOpenFile opens the named file and retrieves its file descriptor.
bool32_t __stdcall SFileOpenFile(char *rel_path, void *file);

/// address: 0x4698E8
/// ordinal: 268
///
/// SFileOpenFileEx opens the named file of the given MPQ archive, and retrieves
/// its file descriptor.
bool32_t __stdcall SFileOpenFileEx(void *archive, char *rel_path, uint32_t flags, void *file);

/// address: 0x4698DC
/// ordinal: 269
///
/// SFileReadFile reads the specifies number of bytes from the given file.
bool32_t __stdcall SFileReadFile(void *file, uint8_t *buf, int len, int *nread, uint32_t flags);

/// address: 0x469828
/// ordinal: 270
///
/// SFileSetBasePath sets the base directory for relative file operations. In
/// practice, it is set to the game directory.
bool32_t __stdcall SFileSetBasePath(char *base_dir);

/// address: 0x4698D6
/// ordinal: 271
///
/// SFileSetFilePointer seeks to the given offset within file. If whence is set
/// to SEEK_SET, SEEK_CUR, or SEEK_END, the offset is relative to the start of
/// the file, the current position indicator, or end-of-file, respectively.
int __stdcall SFileSetFilePointer(int file1, int offset, int file2, int whence);


/// === [ Storm ] ===============================================================

/// address: 0x469810
/// ordinal: 301
///
/// StormDestroy terminates the Storm library.
bool32_t StormDestroy();


/// === [ SDraw ] ===============================================================

/// address: 0x4697EC
/// ordinal: 344
///
/// SDrawDestroy terminates the renderer.
void SDrawDestroy();

/// address: 0x46989A
/// ordinal: 346
///
/// SDrawGetFrameWindow retrieves the active frame window of the renderer.
HWND __stdcall SDrawGetFrameWindow(HWND *hFrameWnd);

/// address: 0x4697E6
/// ordinal: 351
///
/// SDrawManualInitialize initializes the renderer.
bool32_t __stdcall SDrawManualInitialize(HWND hWnd, IDirectDraw *DD, IDirectDrawSurface *DDS_primary, IDirectDrawSurface *DDS_2, IDirectDrawSurface *DDS_3, IDirectDrawSurface *DDS_back, IDirectDrawPalette *DDP, HPALETTE hPalette);

/// address: 0x4697D4
/// ordinal: 352
///
/// SDrawMessageBox draws a message box with the given text and caption.
void __stdcall SDrawMessageBox(char *text, char *caption, uint32_t type);

/// address: 0x46982E
/// ordinal: 354
///
/// SDrawRealizePalette updates the system palette.
void SDrawRealizePalette();

/// address: 0x4698CA
/// ordinal: 357
///
/// SDrawUpdatePalette replaces the palette entries of the system palette.
bool32_t __stdcall SDrawUpdatePalette(int first_entry, int nentries, PALETTEENTRY *entries, uint32_t flags);


/// === [ SMem ] ================================================================

/// address: 0x4697BC
/// ordinal: 401
///
/// SMemAlloc allocates a memory region of the given size and returns a pointer
/// to the allocated memory.
void * __stdcall SMemAlloc(int size, char *log_file_path, int log_line_nr, uint32_t flags);

/// address: 0x4697B6
/// ordinal: 403
///
/// SMemFree frees the allocated memory of the given pointer.
bool32_t __stdcall SMemFree(void *ptr, char *log_file_path, int log_line_nr, uint32_t flags);


/// === [ SReg ] ================================================================

/// address: 0x469852
/// ordinal: 421
///
/// SRegLoadData loads data from the given registry key.
bool32_t __stdcall SRegLoadData(char *sub_key, char *value_name, uint32_t flags, uint8_t *dst, int size, int *nbytes_read);

/// address: 0x46981C
/// ordinal: 422
///
/// SRegLoadString loads a string from the given registry key.
bool32_t __stdcall SRegLoadString(int sub_key, int value_name, int flags, uint8_t *dst, int size);

/// address: 0x4697E0
/// ordinal: 423
///
/// SRegLoadValue loads an integer value from the given registry key.
bool32_t __stdcall SRegLoadValue(char *subkey, char *value_name, uint32_t flags, int *value);

/// address: 0x469858
/// ordinal: 424
///
/// SRegSaveData saves data to the given registry key.
bool32_t __stdcall SRegSaveData(char *sub_key, char *value_name, uint32_t flags, uint8_t *src, int size);

/// address: 0x4698D0
/// ordinal: 425
///
/// SRegSaveString saves a string to the given registry key.
bool32_t __stdcall SRegSaveString(char *sub_key, char *value_name, uint32_t flags, char *src);

/// address: 0x4697DA
/// ordinal: 426
///
/// SRegSaveValue saves an integer value to the given registry key.
bool32_t __stdcall SRegSaveValue(char *subkey, char *value_name, uint32_t flags, int value);


/// === [ SVid ] ================================================================

/// address: 0x469900
/// ordinal: 451
///
/// SVidDestroy terminates the video subsystem.
bool32_t SVidDestroy();

/// address: 0x4698F4
/// ordinal: 453
///
/// SVidInitialize initializes the video subsystem.
bool32_t __stdcall SVidInitialize(IDirectSound *DS);

/// address: 0x46984C
/// ordinal: 454
///
/// SVidPlayBegin starts playback of the given video file.
bool32_t __stdcall SVidPlayBegin(char *smk_path, int a2, void *a3, void *a4, void *a5, uint32_t flags, void *video_stream);

/// address: 0x469846
/// ordinal: 456
///
/// SVidPlayContinue resumes video playback.
bool32_t SVidPlayContinue();

/// address: 0x469840
/// ordinal: 458
///
/// SVidPlayEnd stops playback of the given video stream.
bool32_t __stdcall SVidPlayEnd(void *video_stream);


/// === [ SErr ] ================================================================

/// address: 0x4697C2
/// ordinal: 462
///
/// SErrGetErrorStr retrives the error string of the given error code.
bool32_t __stdcall SErrGetErrorStr(uint32_t error_code, char *dst, int size);

/// address: 0x46985E
/// ordinal: 463
///
/// SErrGetLastError returns the last error code.
uint32_t SErrGetLastError();

/// address: 0x46983A
/// ordinal: 465
///
/// SErrSetLastError sets the last error.
void __stdcall SErrSetLastError(uint32_t error_code);


/// === [ SStr ] ================================================================

/// address: 0x469834
/// ordinal: 501
///
/// SStrCopy copies the source string into the destination string.
int __stdcall SStrCopy(char *dst, char *src, int len);

#endif STORM_H
