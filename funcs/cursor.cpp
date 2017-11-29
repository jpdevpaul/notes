#include "types.h"

// address: 0x40740A
//
// cursor_init_graphics initializes the cursor graphics.
//
// PSX ref: 0x80037734
// PSX def: void InitCursor__Fv()
void cursor_init_graphics();

// address: 0x407420
//
// cursor_cleanup releases the resources used by the cursor.
//
// PSX ref: 0x8003773C
// PSX def: void FreeCursor__Fv()
void cursor_cleanup();

// address: 0x407437
//
// cursor_set_item_cursor_id sets the item cursor ID.
//
// PSX ref: 0x80037744
// PSX def: void SetICursor__Fi(int i)
void __fastcall cursor_set_item_cursor_id(cursor_id cursor_id);

// address: 0x40746B
//
// cursor_set sets the cursor to the specified cursor ID.
//
// PSX ref: 0x800377A0
// PSX def: void SetCursor__Fi(int i)
void __fastcall cursor_set(cursor_id cursor_id);

// address: 0x40748E
//
// j_cursor_set sets the cursor to the specified cursor ID.
//
// PSX ref: 0x80037804
// PSX def: void NewCursor__Fi(int i)
void __fastcall j_cursor_set(cursor_id cursor_id);

// address: 0x407493
//
// cursor_init_cursor_targets initializes the game state of the cursor targets.
//
// PSX ref: 0x80037824
// PSX def: void InitLevelCursor__Fv()
void cursor_init_cursor_targets();

// address: 0x4074D0
//
// cursor_print_town_portal_text_on_hover prints a description of town portals
// on mouse hover.
//
// PSX ref: 0x80037884
// PSX def: void CheckTown__Fv()
void cursor_print_town_portal_text_on_hover();

// address: 0x4075FD
//
// cursor_print_red_portal_text_on_hover prints a description of red portals on
// mouse hover.
//
// PSX ref: 0x80037B18
// PSX def: void CheckRportal__Fv()
void cursor_print_red_portal_text_on_hover();

// address: 0x407729
//
// cursor_process processes any cursor movements, since the last game tick.
//
// PSX ref: 0x80037D80
// PSX def: void CheckCursMove__Fv()
void cursor_process();
