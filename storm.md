# Storm Ordinals

## 101

### SNetCreateGame

```c
// Diablo.exe, Storm.dll
bool32_t __stdcall SNetCreateGame(char *a1, char *a2, char *a3, int a4, const void *a5, unsigned int a6, int a7, char *a8, char *a9, int *a10);
```

## 102

### SNetDestroy

```c
// Diablo.exe, Storm.dll
// SNetDestroy terminates the network provider.
void SNetDestroy();
```

## 103

### SNetEnumProviders

```c
// Storm.dll
bool32_t __stdcall SNetEnumProviders(void *(__stdcall *a1)(int, int, int));
```

## 104

### SNetEnumDevices

```c
// Storm.dll
bool32_t __stdcall SNetEnumDevices(int unused1, int unused2, bool32_t (__stdcall *a3)(int, char*, char*), int *a4);
```

## 105

### SNetEnumGames

```c
// Storm.dll
bool32_t __stdcall SNetEnumGames(void *a1, bool32_t (__stdcall *a2)(int, char*, char*, void*));
```

## 106

### SNetDropPlayer

```c
// Diablo.exe
// SNetDropPlayer drops the given player from the current game.
bool32_t __stdcall SNetDropPlayer(int player_num, uint32_t flags);
```

## 107

### SNetGetGameInfo

```c
// Diablo.exe
// SNetGameInfo retrieves game information of the given type.
bool32_t __stdcall SNetGetGameInfo(game_info type, char *dst, int size, int *len);
```

## 110

### SNetGetOwnerTurnsWaiting

```c
// Diablo.exe
// SNetGetOwnerTurnsWaiting retrieves the number of anticipated turns.
bool32_t __stdcall SNetGetOwnerTurnsWaiting(int *turns);
```

## 114

### SNetGetProviderCaps

```c
// Diablo.exe
// SNetGetProviderCaps retrieves network provider capacity information.
bool32_t __stdcall SNetGetProviderCaps(Caps *caps);
```

## 115

### SNetGetTurnsInTransit

```c
// Diablo.exe
// SNetGetTurnsInTransit retrives the number of turns queued for sending over
// the network.
bool32_t __stdcall SNetGetTurnsInTransit(int *turns);
```

## 116

### SNetInitializeDevice

```c
// Storm.dll
// TODO
```

## 117

### SNetInitializeProvider

```c
// Diablo.exe, Storm.dll
// SNetInitializeProvider initializes the network provider.
bool32_t __stdcall SNetInitializeProvider(uint32_t id, ClientInfo *client_info, UserInfo *user_info, UiInfo *ui_info, FileInfo *file_info);
```

## 118

### SNetJoinGame

```c
// Storm.dll
// TODO
```

## 119

### SNetLeaveGame

```c
// Diablo.exe
// SNetLeaveGame notifies all connected peers that the client has left the game.
bool __stdcall SNetLeaveGame(uint32_t flags);
```

## 120

### SNetPerformUpgrade

```c
// Diablo.exe
// SNetPerformUpgrade performs a network upgrade of the game.
bool32_t __stdcall SNetPerformUpgrade(int *status);
```

## 121

### SNetReceiveMessage

```c
// Diablo.exe
// SNetReceiveMessage receives a network message from a connected peer.
bool32_t __stdcall SNetReceiveMessage(int *sender_player_num, Packet **pkt, int *len);
```

## 122

### SNetReceiveTurns

```c
// Diablo.exe
// SNetReceiveTurns receives turns and player states from all connected peers.
bool32_t __stdcall SNetReceiveTurns(int player_num, int nplayers, void *turn_table, int *turn_table_len, uint32_t *player_state);
```

## 123

### SNetRegisterEventHandler

```c
// Diablo.exe
// SNetRegisterEventHandler registers the event handler for the given event
// type.
bool32_t __stdcall SNetRegisterEventHandler(event_type event_type, void (__stdcall *event_handler)(Event *event));
```

## 125

### SNetSelectGame

```c
// Storm.dll
// TODO
```

## 127

### SNetSendMessage

```c
// Diablo.exe
// SNetSendMessage sends a network message to the given player.
bool32_t __stdcall SNetSendMessage(int player_num, Packet *pkt, int len);
```

## 128

### SNetSendTurn

```c
// Diablo.exe
// SNetSendTurn sends the given turn to all connected peers.
bool32_t __stdcall SNetSendTurn(uint32_t *turn, int len);
```

## 129

### SNetSetBasePlayer

```c
// Diablo.exe
// SNetSetBasePlayer sets the base player number of the network provider.
bool32_t __stdcall SNetSetBasePlayer(int base_player_num);
```

## 131

### SNetUnregisterEventHandler

```c
// Diablo.exe
// SNetUnregisterEventHandler unregisters the event handler of the given event
// type.
bool32_t __stdcall SNetUnregisterEventHandler(event_type event_type, void (__stdcall *event_handler)(Event *event));
```

## 134

### SNetSendServerChatCommand

```c
// Diablo.exe
// SNetSendServerChatCommand sends a chat command to the server.
int __stdcall SNetSendServerChatCommand(char *command);
```

## 201

### SDlgBeginPaint

```c
// Storm.dll
// TODO
```

## 202

### SDlgBltToWindowI

```c
// Storm.dll
// TODO
```

## SDlgCheckTimers

### TODO

```c
// Storm.dll
// TODO
```

## 205

### SDlgCreateDialogParam

```c
// Storm.dll
// TODO
```

## 206

### SDlgDefDialogProc

```c
// Storm.dll
// TODO
```

## 209

### SDlgDialogBoxParam

```c
// Storm.dll
// TODO
```

## 210

### SDlgDrawBitmap

```c
// Storm.dll
// TODO
```

## 211

### SDlgEndDialog

```c
// Storm.dll
// TODO
```

## 212

### SDlgEndPaint

```c
// Storm.dll
// TODO
```

## 213

### SDlgKillTimer

```c
// Storm.dll
// TODO
```

## 215

### SDlgSetBitmapI

```c
// Storm.dll
// TODO
```

## 216

### SDlgSetControlBitmaps

```c
// Storm.dll
// TODO
```

## 217

### SDlgSetCursor

```c
// Diablo.exe, Storm.dll
// TODO
```

## 218

### SDlgSetSystemCursor

```c
// Storm.dll
// TODO
```

## 219

### SDlgSetTimer

```c
// Storm.dll
// TODO
```

## 220

### SDlgUpdateCursor

```c
// Storm.dll
// TODO
```

## 252

### SFileCloseArchive

```c
// Diablo.exe
// SFileCloseArchive closes the given MPQ archive.
bool __stdcall SFileCloseArchive(File *archive);
```

## 253

### SFileCloseFile

```c
// Diablo.exe, Storm.dll
// SFileCloseFile closes the given file.
bool32_t __stdcall SFileCloseFile(File *file);
```

## 255

### SFileDdaBeginEx

```c
// Diablo.exe
// TODO
```

## 256

### SFileDdaDestroy

```c
// Diablo.exe
// TODO
```

## 257

### SFileDdaEnd

```c
// Diablo.exe
// TODO
```

## 258

### SFileDdaGetPos

```c
// Diablo.exe
// SFileDdaGetPos retrieves the current and the end position of the data stream.
bool32_t __stdcall SFileDdaGetPos(int stream, int *cur_pos, int *end_pos);
```

## 260

### SFileDdaInitialize

```c
// Diablo.exe
// TODO
```

## 261

### SFileDdaSetVolume

```c
// Diablo.exe
// TODO
```

## 264

### SFileGetFileArchive

```c
// Diablo.exe
// SFileGetFileArchive retrieves a handle to the MPQ archive of the given file.
bool32_t __stdcall SFileGetFileArchive(File *file, File *archive);
```

## 265

### SFileGetFileSize

```c
// Diablo.exe, Storm.dll
// SFileGetFileSize returns the size of the given file.
int __stdcall SFileGetFileSize(int file1, int file2);
```

## 266

### SFileOpenArchive

```c
// Diablo.exe
// TODO
```

## 267

### SFileOpenFile

```c
// Diablo.exe, Storm.dll
// SFileOpenFile opens the named file for reading.
bool32_t __stdcall SFileOpenFile(char *rel_path, File **file);
```

## 268

### SFileOpenFileEx

```c
// Diablo.exe
// SFileOpenFileEx opens the named file of the given MPQ archive, and retrieves
// its file descriptor.
bool32_t __stdcall SFileOpenFileEx(int mpq, char *rel_path, uint32_t flags, int file);
```

## 269

### SFileReadFile

```c
// Diablo.exe, Storm.dll
// TODO
```

## 270

### SFileSetBasePath

```c
// Diablo.exe
// SFileSetBasePath sets the base directory for relative file operations. In
// practice, it is set to the game directory.
bool32_t __stdcall SFileSetBasePath(char *base_dir);
```

## 271

### SFileSetFilePointer

```c
// Diablo.exe
// TODO
```

## 279

### SFileLoadFile

```c
// Storm.dll
// TODO
```

## 301

### StormDestroy

```c
// Diablo.exe
// StormDestroy terminates the Storm library.
bool32_t __stdcall StormDestroy();
```

## 313

### SBltROP3

```c
// Storm.dll
// TODO
```

## 314

### SBltROP3Clipped

```c
// Storm.dll
// TODO
```

## 315

### SBltROP3Tiled

```c
// Storm.dll
// TODO
```

## 323

### SBmpLoadImage

```c
// Storm.dll
// TODO
```

## 343

### SDrawClearSurface

```c
// Storm.dll
// SDrawDestroy terminates the renderer.
void SDrawDestroy();
```

## 344

### SDrawDestroy

```c
// Diablo.exe
// SDrawDestroy terminates the renderer.
void SDrawDestroy();
```

## 346

### SDrawGetFrameWindow

```c
// Diablo.exe, Storm.dll
// SDrawGetFrameWindow retrieves the active frame window of the renderer.
HWND __stdcall SDrawGetFrameWindow(HWND *hFrameWnd);
```

## 351

### SDrawManualInitialize

```c
// Diablo.exe
// SDrawManualInitialize initializes the renderer.
bool32_t __stdcall SDrawManualInitialize(HWND hWnd, IDirectDraw *DD, IDirectDrawSurface *DDS_primary, IDirectDrawSurface *DDS_2, IDirectDrawSurface *DDS_3, IDirectDrawSurface *DDS_back, IDirectDrawPalette *DDP, HPALETTE hPalette);
```

## 352

### SDrawMessageBox

```c
// Diablo.exe
// SDrawMessageBox draws a message box with the given text and caption.
void __stdcall SDrawMessageBox(char *text, char *caption, uint32_t type);
```

## 354

### SDrawRealizePalette

```c
// Diablo.exe
// TODO
```

## 357

### SDrawUpdatePalette

```c
// Diablo.exe, Storm.dll
// TODO
```

## 383

### SGdiDeleteObject

```c
// Storm.dll
// TODO
```

## 385

### SGdiExtTextOut

```c
// Storm.dll
// TODO
```

## 386

### SGdiImportFont

```c
// Storm.dll
// TODO
```

## 389

### SGdiSelectObject

```c
// Storm.dll
// TODO
```

## 390

### SGdiSetPitch

```c
// Storm.dll
// TODO
```

## 391

### SGdiTextOut

```c
// Storm.dll
// TODO
```

## 393

### SGdiGetTextExtent

```c
// Storm.dll
// TODO
```

## 401

### SMemAlloc

```c
// Diablo.exe, Storm.dll
// SMemAlloc allocates a memory region of the given size and returns a pointer
// to the allocated memory.
void * __stdcall SMemAlloc(int size, char *log_file_path, int log_line_nr, uint32_t flags);
```

## 403

### SMemFree

```c
// Diablo.exe, Storm.dll
// SMemFree frees the allocated memory of the given pointer.
bool32_t __stdcall SMemFree(void *ptr, char *log_file_path, int log_line_nr, uint32_t flags);
```

## 421

### SRegLoadData

```c
// Diablo.exe, Storm.dll
// TODO
```

## 422

### SRegLoadString

```c
// Diablo.exe, Storm.dll
// TODO
```

## 423

### SRegLoadValue

```c
// Diablo.exe
// SRegLoadValue loads value from the given registry key.
bool32_t __stdcall SRegLoadValue(char *subkey, char *value_name, uint32_t flags, int *value);
```

## 424

### SRegSaveData

```c
// Diablo.exe, Storm.dll
// TODO
```

## 425

### SRegSaveString

```c
// Diablo.exe, Storm.dll
// TODO
```

## 426

### SRegSaveValue

```c
// Diablo.exe
// SRegSaveValue saves value to the given registry key.
bool32_t __stdcall SRegSaveValue(char *subkey, char *value_name, uint32_t flags, int32_t value);
```

## 428

### SRegDeleteValue

```c
// Storm.dll
// TODO
```

## 431

### STransBlt

```c
// Storm.dll
// TODO
```

## 433

### STransCreateI

```c
// Storm.dll
// TODO
```

## 434

### STransDelete

```c
// Storm.dll
// TODO
```

## 451

### SVidDestroy

```c
// Diablo.exe
// TODO
```

## 453

### SVidInitialize

```c
// Diablo.exe
// TODO
```

## 454

### SVidPlayBegin

```c
// Diablo.exe
// TODO
```

## 456

### SVidPlayContinue

```c
// Diablo.exe
// TODO
```

## 458

### SVidPlayEnd

```c
// Diablo.exe
// TODO
```

## 462

### SErrGetErrorStr

```c
// Diablo.exe
// SErrGetErrorStr retrives the error string of the given error code.
bool32_t __stdcall SErrGetErrorStr(uint32_t error_code, char *dst, int size);
```

## 463

### SErrGetLastError

```c
// Diablo.exe, Storm.dll
// SErrGetLastError returns the last error code.
uint32_t __stdcall SErrGetLastError();
```

## 465

### SErrSetLastError

```c
// Diablo.exe, Storm.dll
// SErrSetLastError sets the last error.
void __stdcall SErrSetLastError(uint32_t error_code);
```

## 494

### SMemZero

```c
// Storm.dll
// TODO
```

## 501

### SStrCopy

```c
// Diablo.exe, Storm.dll
// TODO
```

## 503

### SStrNCat

```c
// Storm.dll
// TODO
```

## 506

### SStrLen

```c
// Storm.dll
// TODO
```
