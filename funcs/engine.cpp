#include "types.h"

// address: 0x4161FC
//
// TODO: add documentation.

// address: 0x416201
//
// TODO: add documentation.

// address: 0x41620C
//
// TODO: add documentation.

// address: 0x416274
//
// TODO: add documentation.

// address: 0x4162B8
//
// TODO: add documentation.

// address: 0x4162DE
//
// TODO: add documentation.

// address: 0x416359
//
// TODO: add documentation.

// address: 0x4163AC
//
// TODO: add documentation.

// address: 0x416423
//
// TODO: add documentation.

// address: 0x416488
//
// TODO: add documentation.

// address: 0x416565
//
// TODO: add documentation.

// address: 0x4165BD
//
// TODO: add documentation.

// address: 0x41664B
//
// TODO: add documentation.

// address: 0x4166BF
//
// TODO: add documentation.

// address: 0x4167DB
//
// TODO: add documentation.

// address: 0x41685A
//
// TODO: add documentation.

// address: 0x4168D5
//
// TODO: add documentation.

// address: 0x41692A
//
// TODO: add documentation.

// address: 0x4169BC
//
// TODO: add documentation.

// address: 0x416A21
//
// TODO: add documentation.

// address: 0x416B19
//
// TODO: add documentation.

// address: 0x416BA9
//
// TODO: add documentation.

// address: 0x416C1B
//
// TODO: add documentation.

// address: 0x416D3C
//
// TODO: add documentation.

// address: 0x416DC6
//
// TODO: add documentation.

// address: 0x416EC0
//
// TODO: add documentation.

// address: 0x416FEF
//
// TODO: add documentation.

// address: 0x417034
//
// TODO: add documentation.

// address: 0x4170BD
//
// TODO: add documentation.

// address: 0x4174B3
//
// TODO: add documentation.

// address: 0x417518
//
// engine_set_seed sets the global seed to x.
//
// PSX ref: 0x8003DACC
// PSX def: void SetRndSeed__Fl(long s)
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/bss/engine.cpp#seed
void __fastcall engine_set_seed(int32_t x);

// address: 0x41752C
//
// engine_rand returns a non-negative pseudo-random integer in [0, 2^31), using
// the Borland C/C++ pseudo-random number generator algorithm with a multiplier
// of 0x15A4E35 and an increment of 1.
//
// PSX ref: 0x8003DADC
// PSX def: long GetRndSeed__Fv()
//
// References:
//    * https://en.wikipedia.org/wiki/Linear_congruential_generator#Parameters_in_common_use
int32_t engine_rand();

// address: 0x41754B
//
// engine_rand_cap returns a capped non-negative pseudo-random integer in
// [0, max), using the Borland C/C++ pseudo-random number generator algorithm
// with a multiplier of 0x15A4E35 and an increment of 1.
//
// PSX ref: 0x8003DB24
// PSX def: long ENG_random__Fl(long v)
//
// References:
//    * https://en.wikipedia.org/wiki/Linear_congruential_generator#Parameters_in_common_use
int32_t __fastcall engine_rand_cap(int unused, int32_t max);

// address: 0x41756D
//
// TODO: add documentation.

// address: 0x417577
//
// engine_init_mem_mutex initializes the memory mutex.
void engine_init_mem_mutex();

// address: 0x417583
//
// engine_cleanup_mem_mutex_atexit terminates the memory mutex at exit.
void engine_cleanup_mem_mutex_atexit();

// address: 0x41758F
//
// engine_cleanup_mem_mutex terminates the memory mutex.
void engine_cleanup_mem_mutex();

// address: 0x41759B
//
// engine_mem_alloc allocates a memory space of the given size.
void * __fastcall engine_mem_alloc(int size);

// address: 0x4175E8
//
// engine_mem_free frees the given memory space.
void __fastcall engine_mem_free(void *ptr);

// address: 0x417618
//
// engine_mem_load_file returns the contents of the given file.
//
// PSX ref: 0x80074E9C
// PSX def: unsigned char* GRL_LoadFileInMemSig__FPCcPUl(char *Name, unsigned long *Len)
void * __fastcall engine_mem_load_file(char *file_path, int *size);

// address: 0x417673
//
// engine_mem_load_file_with loads the given file into the provided memory
// buffer.
void __fastcall engine_mem_load_file_with(char *path, void *buf);

// address: 0x4176D2
//
// TODO: add documentation.

// address: 0x417745
//
// TODO: add documentation.

// address: 0x4177BF
//
// TODO: add documentation.

// address: 0x417847
//
// TODO: add documentation.

// address: 0x4178C5
//
// TODO: add documentation.

// address: 0x417981
//
// TODO: add documentation.

// address: 0x417A44
//
// TODO: add documentation.

// address: 0x417AE9
//
// TODO: add documentation.

// address: 0x417B83
//
// TODO: add documentation.

// address: 0x417BFD
//
// TODO: add documentation.

// address: 0x417C99
//
// TODO: add documentation.

// address: 0x417D28
//
// TODO: add documentation.

// address: 0x417DF8
//
// TODO: add documentation.

// address: 0x417EBB
//
// TODO: add documentation.

// address: 0x417F78
//
// TODO: add documentation.

// address: 0x418012
//
// TODO: add documentation.

