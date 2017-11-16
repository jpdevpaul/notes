#include "types.h"

// address: 0x4161FC
//
// j_engine_cpp_init_1 initializes the C++ runtime of engine.cpp.
void j_engine_cpp_init_1();

// address: 0x416201
//
// engine_cpp_init_1 initializes the C++ runtime of engine.cpp.
void engine_cpp_init_1();

// address: 0x41620C
//
// engine_cel_decode_frame_content_into_buf decodes the given CEL frame into the
// specified destination buffer.
void __fastcall engine_cel_decode_frame_content_into_buf(uint8_t *dst_buf, uint8_t *frame_content, int frame_content_size, int frame_width);

// address: 0x416274
//
// engine_cel_decode_frame decodes the given CEL frame to the specified screen
// coordinate.
//
//    x = screen_x - 64
//    y = screen_y - 160
//    frameNum = frame - 1
//
// Note, the coordinates specify the bottom left corner (verified in game).
// Note, this function is only used to decode CEL images without frame headers.
void __fastcall engine_cel_decode_frame(int screen_x, int screen_y, uint8_t *cel_buf, int frame, int frame_width);

// address: 0x4162B8
//
// engine_cel_decode_frame_into_buf decodes the given CEL frame into the
// specified buffer.
//
// Note, this function is only used to decode CEL images without frame headers
// (pentspn2.cel).
void __fastcall engine_cel_decode_frame_into_buf(uint8_t *dst_buf, uint8_t *cel_buf, int frame, int frame_width);

// address: 0x4162DE
//
// engine_cel_decode_frame_with_header decodes the given CEL frame to the
// specified screen coordinate.
//
//    x = screen_x - 64
//    y = screen_y - 160
//    frameNum = frame - 1
//
// Note, the coordinates specify the bottom left corner.
//
// Note, this function is only used to decode CEL images with frame headers.
void __fastcall engine_cel_decode_frame_with_header(int screen_x, int screen_y, uint8_t *cel_buf, int frame, int frame_width, int always_0, int direction);

// address: 0x416359
//
// engine_cel_decode_frame_with_header_into_buf decodes the given CEL frame into
// the specified buffer.
//
// Note, this function is only used to decode CEL images with frame headers
// (square.cel).
void __fastcall engine_cel_decode_frame_with_header_into_buf(uint8_t *dst_buf, uint8_t *cel_buf, int frame, int frame_width, int always_0, int direction);

// address: 0x4163AC
//
// engine_cel_decode_frame_content_with_light_into_buf decodes the given CEL
// frame into the specified destination buffer, adding lighting if applicable.
void __fastcall engine_cel_decode_frame_content_with_light_into_buf(uint8_t *dst_buf, uint8_t *frame_content, int frame_content_size, int frame_width);

/* TODO: uncomment when figuring out how to specify user defined calling conventions.

// address: 0x416423
//
// engine_cel_decode_frame_content_with_light_entry_into_buf decodes the given CEL frame into the specified destination buffer with added lighting.
void __usercall engine_cel_decode_frame_content_with_light_entry_into_buf(uint8_t chunk_size@<cl>, uint8_t *light_entry@<ebx>, uint8_t *dst_buf@<edi>, uint8_t *p@<esi>);

*/

// address: 0x416488
//
// engine_cel_decode_frame_content_with_light_and_transparency_into_buf decodes
// the given CEL frame into the specified destination buffer with added lighting
// and transparency.
void __fastcall engine_cel_decode_frame_content_with_light_and_transparency_into_buf(uint8_t *dst_buf, uint8_t *frame_content, int frame_content_size, int frame_width);

// address: 0x416565
//
// engine_cel_decode_frame_with_light decodes the given CEL frame to the
// specified screen coordinate, adding lighting if applicable.
//
//    x = screen_x - 64
//    y = screen_y - 160
//    frameNum = frame - 1
//
// Note, the coordinates specify the bottom left corner.
//
// Note, this function is only used to decode CEL images without frame headers
// (bigtgold.cel).
void __fastcall engine_cel_decode_frame_with_light(int screen_x, int screen_y, uint8_t *cel_buf, int frame, int frame_width);

// address: 0x4165BD
//
// engine_cel_decode_frame_with_header_and_light decodes the given CEL frame to
// the specified screen coordinate, adding lighting if applicable.
//
//    x = screen_x - 64
//    y = screen_y - 160
//    frameNum = frame - 1
//
// Note, the coordinates specify the bottom left corner.
//
// Note, this function is only used to decode CEL images with frame headers
// (item drops, objects).
void __fastcall engine_cel_decode_frame_with_header_and_light(int screen_x, int screen_y, uint8_t *cel_buf, int frame, int frame_width, int always_0, int direction);

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
