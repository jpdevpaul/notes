#include "types.h"

/// address: 0x4493D4
///
/// path_find locates a path from the start to the goal coordinates. It returns
/// the number of steps in the path, and stores the path in the steps parameter.
int __fastcall path_find(bool32_t (__fastcall *is_valid_step)(int player_or_monster_num, int x, int y), int player_or_monster_num, int start_x, int start_y, int target_x, int target_y, int8_t *steps);

/// address: 0x4494D3
///
/// path_get_h_cost returns the heuristic cost from the start to the goal; as
/// determined by:
///
///    2 * (min_dist + max_dist)
int __fastcall path_get_h_cost(int start_x, int start_y, int target_x, int target_y);

/// address: 0x449504
///
/// TODO: add documentation.

/// address: 0x44951C
///
/// TODO: add documentation.

/// address: 0x449546
///
/// TODO: add documentation.

/// address: 0x4495ED
///
/// TODO: add documentation.

/// address: 0x44966F
///
/// TODO: add documentation.

/// address: 0x44979A
///
/// path_get_node1 returns the path node for the given coordinate, starting
/// traversal from the first node.
PathNode *__fastcall path_get_node1(int x, int y);

/// address: 0x4497B3
///
/// path_get_node2 returns the path node for the given coordinate, starting
/// traversal from the second node.
PathNode *__fastcall path_get_node2(int x, int y);

/// address: 0x4497CC
///
/// TODO: add documentation.

/// address: 0x4497F7
///
/// TODO: add documentation.

/// address: 0x449890
///
/// TODO: add documentation.

/// address: 0x4498A3
///
/// TODO: add documentation.

/// address: 0x4498B6
///
/// path_new_node returns a new path node.
PathNode *__cdecl path_new_node();
