#include "types.h"

// address: 0x415098
//
// j_dthread_cpp_init_1 initializes the C++ runtime of dthread.cpp.
void j_dthread_cpp_init_1();

// address: 0x41509D
//
// dthread_cpp_init_1 initializes the C++ runtime of dthread.cpp.
void dthread_cpp_init_1();

// address: 0x4150A8
//
// dthread_cpp_init_2 initializes the C++ runtime of dthread.cpp.
void dthread_cpp_init_2();

// address: 0x4150B2
//
// dthread_init_mutex initializes the delta thread mutex.
void dthread_init_mutex();

// address: 0x4150BE
//
// dthread_cleanup_mutex_atexit terminates the delta thread mutex at exit.
void dthread_cleanup_mutex_atexit();

// address: 0x4150CA
//
// dthread_cleanup_mutex terminates the delta thread mutex.
void dthread_cleanup_mutex();

// address: 0x4150D6
//
// dthread_remove_player removes the given player from the list of connected
// peers.
void __fastcall dthread_remove_player(int player_num);

// address: 0x415109
//
// dthread_send_delta sends the given delta packet to connected peers.
void __fastcall dthread_send_delta(int player_num, cmd cmd, void *src, int len);

// address: 0x415186
//
// dthread_start starts the delta thread.
void dthread_start();

// address: 0x4151F3
//
// dthread_handler is the delta thread which synchronizes delta messages with
// connected peers.
int __stdcall dthread_handler(void *a1);

// address: 0x4152C0
//
// dthread_cleanup terminates the delta thread.
void dthread_cleanup();
