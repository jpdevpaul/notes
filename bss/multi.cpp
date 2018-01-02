#include "types.h"

// address 0x678620
//
// +Infinity after initialization of multi.cpp.
float multi_cpp_init_value;

// address: 0x679660
//
// max_players specifies the maximum number of players in a game, where 1
// represents a single player game and 4 represents a multi player game.
//
// PSX ref: 0x8011B9A2
// PSX def: unsigned char gbMaxPlayers
int8_t max_players;
