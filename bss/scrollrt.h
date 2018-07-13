#include "types.h"

/// address: 0x69BEF8
///
/// light_table_index specifies the current light entry.
extern int32_t light_table_index;

/// address: 0x69BEFC
///
/// screen_y_times_768 is a pre-computed table for y*768; 0, 768, 1536, ...
extern int screen_y_times_768[1024];

/// address 0x69CEFC
///
/// +Infinity after initialization of scrollrt.cpp.
extern float scrollrt_cpp_init_value;

/// address: 0x69CF00
///
/// cursor_draw_width_prev specifies the width of the cursor being rendered on
/// the previous frame.
extern int cursor_draw_width_prev;

/// address: 0x69CF04
///
/// cursor_draw_x specifies the X-coordinate of the cursor being rendered.
extern int cursor_draw_x;

/// address: 0x69CF08
///
/// cursor_draw_y specifies the Y-coordinate of the cursor being rendered.
extern int cursor_draw_y;

/// address: 0x69CF0C
///
/// screen_buf_end point to the end of the screen buffer used for rendering.
extern void *screen_buf_end;

/// address: 0x69CF10
///
/// cursor_draw_height specifies the height of the cursor being rendered.
extern int cursor_draw_height;

/// address: 0x69CF14
///
/// level_cel_block specifies the current MIN block of the level CEL file, as
/// used during rendering of the level tiles.
///
///    frameNum  := block&0x0FFF
///    frameType := block&0x7000 >> 12
extern uint32_t level_cel_block;

/// address: 0x69CF18
///
/// cursor_draw_x_prev specifies the X-coordinate of the cursor being rendered on
/// the previous frame.
extern int cursor_draw_x_prev;

/// address: 0x69CF1C
///
/// cursor_draw_y_prev specifies the Y-coordinate of the cursor being rendered on
/// the previous frame.
extern int cursor_draw_y_prev;

/// address: 0x69CF20
///
/// arch_draw_type specifies the type of arches to render.
extern int arch_draw_type;

/// address: 0x69CF28
///
/// DDS_desc describes the surface being rendered.
extern DDSURFACEDESC DDS_desc;

/// address: 0x69CF94
///
/// cel_transparency_active specifies whether transparency is active for the
/// current CEL file being decoded.
extern int cel_transparency_active;

/// address: 0x69CF98
///
/// level_piece_id specifies the current dungeon piece ID of the level, as used
/// during rendering of the level tiles.
extern int level_piece_id;

/// address: 0x69CF9C
///
/// cursor_draw_width specifies the width of the cursor being rendered.
extern int cursor_draw_width;

/// address: 0x69CFA0
///
/// draw_player specifies a function used to render player graphics.
extern int (__fastcall *draw_player)(int player_num, int x, int y, int screen_x, int screen_y, void *cl2_buf, int frame, int frame_width, int a9, int a10);

/// address: 0x69CFA4
///
/// cursor_draw_back_buffer is an in-memory surface for the cursor graphics.
extern uint8_t cursor_draw_back_buffer[8192];

/// address: 0x69EFA4
///
/// draw_monster_num specifies the monster_num to render.
extern int draw_monster_num;

/// address: 0x69EFA8
///
/// cursor_draw_height_prev specifies the height of the cursor being rendered on
/// the previous frame.
extern int cursor_draw_height_prev;
