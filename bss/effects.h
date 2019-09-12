#include "types.h"

/// address: 0x52A550
///
/// +Infinity after initialization of effects.cpp.
extern float effects_cpp_init_value;

/// address: 0x52A554
///
/// dungeon_message_ticks specifies the number of game ticks to player the
/// dungeon message sound.
extern int dungeon_message_ticks;

/// address: 0x52A558
///
/// dungeon_message_sfx_id specifies a dungeon message sound to play.
extern sfx_id dungeon_message_sfx_id;

/// address: 0x52A55C
///
/// sfx_stream is a handle to the current sound effect playing.
extern void *sfx_stream;

/// address: 0x52A560
///
/// sfx_data_cur specifies the sound file and the playback state of the current
/// sound effect.
extern SfxData *sfx_data_cur;
