#ifndef __CURSOR_H__
#define __CURSOR_H__

#include "types.h"

// address (1.00dbg): 0x45D812
// address (1.09b):   0x40740A
//
// PSX ref: 0x80037734
// PSX def: void InitCursor__Fv()
//
// InitCursor initializes the cursor graphics.
void InitCursor();

// address (1.00dbg): 0x45D851
// address (1.09b):   0x407420
//
// PSX ref: 0x8003773C
// PSX def: void FreeCursor__Fv()
//
// FreeCursor releases the resources used by the cursor.
void FreeCursor();

// address (1.00dbg): 0x45D875
// address (1.09b):   0x407437
//
// PSX ref: 0x80037744
// PSX def: void SetICursor__Fi(int i)
//
// SetICursor sets the item cursor ID.
//
// Parameters:
//    - i: cursor ID.
void __fastcall SetICursor(enum cursor_id i);

// address (1.00dbg): 0x45D8A8
// address (1.09b):   0x40746B
//
// PSX ref: 0x800377A0
// PSX def: void SetCursor__Fi(int i)
//
// SetCursor sets the cursor to the specified cursor ID.
//
// Parameters:
//    - i: cursor ID.
void __fastcall SetCursor(enum cursor_id i);

// address (1.00dbg): 0x45D8CC
// address (1.09b):   0x40748E
//
// PSX ref: 0x80037804
// PSX def: void NewCursor__Fi(int i)
//
// NewCursor sets the cursor to the specified cursor ID.
//
// Parameters:
//    - i: cursor ID.
void __fastcall NewCursor(enum cursor_id i);

// address (1.00dbg): 0x45D8D1
// address (1.09b):   0x407493
//
// PSX ref: 0x80037824
// PSX def: void InitLevelCursor__Fv()
//
// InitLevelCursor initializes the game state of the cursor targets.
void InitLevelCursor();

// address (1.00dbg): 0x45D914
// address (1.09b):   0x4074D0
//
// PSX ref: 0x80037884
// PSX def: void CheckTown__Fv()
//
// CheckTown prints a description of town portals on mouse hover.
void CheckTown();

// address (1.00dbg): 0x45DA77
// address (1.09b):   0x4075FD
//
// PSX ref: 0x80037B18
// PSX def: void CheckRportal__Fv()
//
// CheckRportal prints a description of red portals on mouse hover.
void CheckRportal();

// address (1.00dbg): 0x45DBEB
// address (1.09b):   0x407729
//
// PSX ref: 0x80037D80
// PSX def: void CheckCursMove__Fv()
//
// CheckCursMove processes any cursor movements, since the last game tick.
void CheckCursMove();

#endif // __CURSOR_H__
