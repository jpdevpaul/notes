#include "types.h"

/// address: 0x6771C4
///
/// game_pass specifies the password of the network game.
extern char game_pass[128];

/// address: 0x677250
///
/// heroes specifies the essential information about a player, as used in save
/// files.
extern Hero heroes[4];

/// address: 0x678618
///
/// is_peer specifies for each player ID whether the player is a connected peer
/// of the network game (as opposed to the host of the game). Once a peer
/// disconnects from the network game their state is set to false.
bool8_t is_peer[4];

/// address: 0x678620
///
/// +Infinity after initialization of multi.cpp.
extern float multi_cpp_init_value;

/// address: 0x678638
///
/// sgGameInitInfo holds the initial state of a network game.
///
/// PSX ref (SLPS-01416): 0x8011C868,
/// PSX def: struct _gamedata sgGameInitInfo
extern GameData sgGameInitInfo; // alias: game_init_info

/// address: 0x679660
///
/// gbMaxPlayers specifies the maximum number of players in a game, where 1
/// represents a single player game and 4 represents a multi player game.
///
/// PSX ref: 0x8011B9A2
/// PSX def: unsigned char gbMaxPlayers
extern int8_t gbMaxPlayers; // alias: max_players

/// address: 0x679664
///
/// game_name specifies the name of the network game.
extern char game_name[128];
