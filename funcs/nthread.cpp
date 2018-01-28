#include "types.h"

// address: 0x440DAE
//
// j_nthread_cpp_init_1 initializes the C++ runtime of nthread.cpp.
void j_nthread_cpp_init_1();

// address: 0x440DB3
//
// nthread_cpp_init_1 initializes the C++ runtime of nthread.cpp.
void nthread_cpp_init_1();

// address: 0x440DBE
//
// nthread_cpp_init_2 initializes the C++ runtime of nthread.cpp.
void nthread_cpp_init_2();

// address: 0x440DC8
//
// nthread_init_mutex initializes the networking thread mutex.
void nthread_init_mutex();

// address: 0x440DD4
//
// nthread_cleanup_mutex_atexit terminates the networking thread mutex at exit.
void nthread_cleanup_mutex_atexit();

// address: 0x440DE0
//
// nthread_cleanup_mutex terminates the networking thread mutex.
void nthread_cleanup_mutex();

// address: 0x440DEC
//
// nthread_terminate_game terminates the current game.
void __fastcall nthread_terminate_game(char *func_name);

// address: 0x440E28
//
// nthread_send_and_recv_turn synchronizes turns with connected peers.
int __fastcall nthread_send_and_recv_turn(int cur_turn, int turn_delta);

// address: 0x440EAA
//
// nthread_recv_turns recieves turns from connected peers.
void __fastcall nthread_recv_turns(bool32_t *recieved);

// address: 0x440F56
//
// nthread_set_turn_upper_bit sets the upper bit of the turn.
void nthread_set_turn_upper_bit();

// address: 0x440F61
//
// nthread_start_thread starts the networking thread.
void __fastcall nthread_start_thread(bool32_t set_turn_upper_bit);

// address: 0x4410CF
//
// nthread_handler runs the networking thread which synchronizes turns of connected peers.
int __stdcall nthread_handler(void *a1);

// address: 0x441145
//
// nthread_cleanup terminates the networking thread.
void nthread_cleanup();

// address: 0x4411C4
//
// nthread_ignore_mutex specifies whether to ignore the networking thread mutex.
void __fastcall nthread_ignore_mutex(bool32_t ignore_mutex);

// address: 0x4411EF
//
// nthread_has_500ms_passed reports whether 500ms has passed for retrieving turns.
bool32_t nthread_has_500ms_passed();
