#ifndef __DRLG_L1_H__
#define __DRLG_L1_H__

#include "types.h"

/// address (1.00dbg): 0x46E69D
/// address (1.09b):   0x40ADD6
///
/// PSX ref: 0x8013CEAC
/// PSX def: void DRLG_Init_Globals__Fv()
///
/// DRLG_Init_Globals resets the dungeon flag, player, NPC, dead, object, item,
/// missile and arch maps.
void DRLG_Init_Globals();

/// address (1.00dbg): 0x46E752
/// address (1.09b):   0x40AE79
///
/// PSX ref: 0x8013CF64
/// PSX def: void LoadL1Dungeon__FPcii(char *sFileName, int vx, int vy)
///
/// LoadL1Dungeon loads tile IDs, monsters and objects from the given DUN file at
/// the specified view coordinate.
///
/// Parameters:
///    - sFileName: path to DUN file.
///    - vx:        view X-coordinate (112x112 grid).
///    - vy:        view Y-coordinate (112x112 grid).
void __fastcall LoadL1Dungeon(char *sFileName, int vx, int vy);

/// address (1.00dbg): 0x46E86D
/// address (1.09b):   0x40AF65
///
/// PSX ref: 0x8013CAC4
/// PSX def: void DRLG_L1Floor__Fv()
///
/// DRLG_L1Floor randomizes floor tiles.
void DRLG_L1Floor();

/// address (1.00dbg): 0x46E8C1
/// address (1.09b):   0x40AFB3
///
/// PSX ref: 0x8013CBA8
/// PSX def: void DRLG_L1Pass3__Fv()
///
/// DRLG_L1Pass3 initializes the dungeon piece ID map.
void DRLG_L1Pass3();

/// address (1.00dbg): 0x46E9E2
/// address (1.09b):   0x40B0A5
///
/// PSX ref: 0x8013CF5C
/// PSX def: void DRLG_InitL1Vals__Fv()
///
/// DRLG_InitL1Vals initializes arches.
void DRLG_InitL1Vals();

/// address (1.00dbg): 0x46EAB9
/// address (1.09b):   0x40B160
///
/// PSX ref: 0x8013D138
/// PSX def: void LoadPreL1Dungeon__FPcii(char *sFileName, int vx, int vy)
///
/// LoadPreL1Dungeon loads tile IDs from the given DUN file at the specified view
/// coordinate.
///
/// Parameters:
///    - sFileName: path to DUN file.
///    - vx:        view X-coordinate (112x112 grid).
///    - vy:        view Y-coordinate (112x112 grid).
void __fastcall LoadPreL1Dungeon(char *sFileName, int vx, int vy);

/// address (1.00dbg): 0x46EBB5
/// address (1.09b):   0x40B229
///
/// PSX ref: 0x80140E64
/// PSX def: void CreateL5Dungeon__FUii(unsigned int rseed, int entry)
///
/// CreateL5Dungeon creates a random cathedral dungeon based on the given seed
/// and level entry.
///
/// Parameters:
///    - rseed: random seed for dungeon.
///    - entry: level entry.
void __fastcall CreateL5Dungeon(uint32_t rseed, int entry); // TODO: create enum for entry.

/// address (1.00dbg): 0x46EC07
/// address (1.09b):   0x40B276
///
/// PSX ref: 0x8013CDA0
/// PSX def: void DRLG_LoadL1SP__Fv()
///
/// DRLG_LoadL1SP loads tile IDs from the dungeon file of the active quest level.
void DRLG_LoadL1SP();

/// address (1.00dbg): 0x46ECC3
/// address (1.09b):   0x40B2F4
///
/// PSX ref: 0x8013CE7C
/// PSX def: void DRLG_FreeL1SP__Fv()
///
/// DRLG_FreeL1SP frees the dungeon file of the active quest level.
void DRLG_FreeL1SP();

/// address (1.00dbg): 0x46ECE3
/// address (1.09b):   0x40B306
///
/// PSX ref: 0x80140930
/// PSX def: void DRLG_L5__Fi(int entry)
///
/// DRLG_L5 generates a cathedral dungeon based on the given level entry.
///
/// Parameters:
///    - entry: level entry.
void __fastcall DRLG_L5(int entry); // TODO: create enum for entry.

/// address (1.00dbg): 0x46EF89
/// address (1.09b):   0x40B56F
///
/// PSX ref: 0x8013BCB0
/// PSX def: void DRLG_PlaceDoor__Fii(int x, int y)
///
/// DRLG_PlaceDoor places a door at the given coordinate.
///
/// Parameters:
///    - x: X-coordinate (40x40 grid).
///    - y: Y-coordinate (40x40 grid).
void __fastcall DRLG_PlaceDoor(int x, int y);

/// address (1.00dbg): 0x46F0C6
/// address (1.09b):   0x40B699
///
/// PSX ref: 0x8013C190
/// PSX def: void DRLG_L1Shadows__Fv()
///
/// DRLG_L1Shadows initializes arch and bar shadows.
void DRLG_L1Shadows();

/// address (1.00dbg): 0x46F2AC
/// address (1.09b):   0x40B881
///
/// PSX ref: 0x8013C5A0
/// PSX def: int DRLG_PlaceMiniSet__FPCUciiiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int noquad, int ldir)
///
/// DRLG_PlaceMiniSet places the given miniset of tile IDs.
///
/// Parameters:
///    - miniset: mini-DUN buffer contents.
///    - tmin:    minimum number of times to place miniset.
///    - tmax:    maximum number of times to place miniset.
///    - cx:      center X-coordinate (40x40 grid).
///    - cy:      center Y-coordinate (40x40 grid).
///    - setview: update player view coordinates.
///    - noquad:  quadrant positioning related to center.
///    - ldir:    direction.
///
/// Return:
///    - quadrant placement.
///         0: top    (x < cx && y < cy)
///         1: right  (x > cx && y < cy)
///         2: left   (x < cx && y > cy)
///         3: bottom (x > cx && y > cy)
int __fastcall DRLG_PlaceMiniSet(uint8_t *miniset, int tmin, int tmax, int cx, int cy, bool32_t setview, int noquad, int ldir); // TODO: define enum for noquad (and return value). add DIRECTION enum to ldir (most likely ldir represents something different, perhaps a boolean)?

/// address (1.00dbg): 0x46F591
/// address (1.09b):   0x40BAF6
///
/// PSX ref: 0x8013D2F8
/// PSX def: void InitL5Dungeon__Fv()
///
/// InitL5Dungeon resets the tile ID and the dungeon flag maps.
void InitL5Dungeon();

/// address (1.00dbg): 0x46F5BC
/// address (1.09b):   0x40BB18
///
/// PSX ref: 0x8013D37C
/// PSX def: void L5ClearFlags__Fv()
///
/// L5ClearFlags clears the dungeon generation flags 0x40.
void L5ClearFlags();

/// address (1.00dbg): 0x46F5D9
/// address (1.09b):   0x40BB33
///
/// PSX ref: 0x8013D7FC
/// PSX def: void L5firstRoom__Fv()
///
/// L5firstRoom generates the first room of the dungeon.
void L5firstRoom();

/// address (1.00dbg): 0x46F86A
/// address (1.09b):   0x40BD66
///
/// PSX ref: 0x8013D3CC
/// PSX def: void L5drawRoom__Fiiii(int x, int y, int w, int h)
///
/// L5drawRoom adds walls for a room at the given area.
///
/// Parameters:
///    - x: X-coordinate (40x40 grid).
///    - y: Y-coordinate (40x40 grid).
///    - w: width in number of tiles.
///    - h: height in number of tiles.
void __fastcall L5drawRoom(int x, int y, int w, int h);

/// address (1.00dbg): 0x46F8A6
/// address (1.09b):   0x40BD9D
///
/// PSX ref: 0x8013D4CC
/// PSX def: void L5roomGen__Fiiiii(int x, int y, int w, int h, int dir)
///
/// L5roomGen generates a room of the given dimensions at the specified
/// coordinates.
///
/// Parameters:
///    - x:   X-coordinate (40x40 grid).
///    - y:   Y-coordinate (40x40 grid).
///    - w:   width in number of tiles.
///    - h:   height in number of tiles.
///    - dir: horizontal direction. // TODO: verify that dir is used for horizontal direction.
void __fastcall L5roomGen(int x, int y, int w, int h, bool32_t dir);

/// address (1.00dbg): 0x46FAC7
/// address (1.09b):   0x40BFA4
///
/// PSX ref: 0x8013D438
/// PSX def: unsigned char L5checkRoom__Fiiii(int x, int y, int width, int height)
///
/// L5checkRoom reports whether the given area is empty.
///
/// Parameters:
///    - x:      X-coordinate (40x40 grid).
///    - y:      Y-coordinate (40x40 grid).
///    - width:  width in number of tiles.
///    - height: height in number of tiles.
///
/// Return:
///    - ok: area is empty.
bool32_t __fastcall L5checkRoom(int x, int y, int width, int height);

/// address (1.00dbg): 0x46FB29
/// address (1.09b):   0x40C008
///
/// PSX ref: 0x8013DB9C
/// PSX def: long L5GetArea__Fv()
///
/// L5GetArea returns the number of walls on the map.
///
/// Return:
///    - n: number of walls on map.
int L5GetArea();

/// address (1.00dbg): 0x46FB4D
/// address (1.09b):   0x40C02A
///
/// PSX ref: 0x8013DBFC
/// PSX def: void L5makeDungeon__Fv()
///
/// L5makeDungeon initializes a tile ID map of twice the size, repeating each
/// tile in blocks of 4.
void L5makeDungeon();

/// address (1.00dbg): 0x46FB97
/// address (1.09b):   0x40C06E
///
/// PSX ref: 0x8013DC88
/// PSX def: void L5makeDmt__Fv()
///
/// L5makeDmt replaces tile ID patterns based on a lookup table.
void L5makeDmt();

/// address (1.00dbg): 0x46FC0D
/// address (1.09b):   0x40C0E0
///
/// PSX ref: 0x8013E458
/// PSX def: void L5AddWall__Fv()
///
/// L5AddWall adds wall, arch or bar tile IDs.
void L5AddWall();

/// address (1.00dbg): 0x46FD66
/// address (1.09b):   0x40C23C
///
/// PSX ref: 0x8013DD70
/// PSX def: int L5HWallOk__Fii(int i, int j)
///
/// L5HWallOk returns the number of horizontal wall tiles that fit at the given
/// coordinate.
///
/// Parameters:
///    - i: X-coordinate (40x40 grid).
///    - j: Y-coordinate (40x40 grid).
///
/// Return:
///    - n: number of horizontal wall tiles that fit at the given coordinate.
int __fastcall L5HWallOk(int i, int j);

/// address (1.00dbg): 0x46FDEC
/// address (1.09b):   0x40C2DC
///
/// PSX ref: 0x8013DEAC
/// PSX def: int L5VWallOk__Fii(int i, int j)
///
/// L5VWallOk returns the number of vertical wall tiles that fit at the given
/// coordinate.
///
/// Parameters:
///    - i: X-coordinate (40x40 grid).
///    - j: Y-coordinate (40x40 grid).
///
/// Return:
///    - n: number of vertical wall tiles that fit at the given coordinate.
int __fastcall L5VWallOk(int i, int j);

/// address (1.00dbg): 0x46FE6F
/// address (1.09b):   0x40C35B
///
/// PSX ref: 0x8013DFF4
/// PSX def: void L5HorizWall__Fiici(int i, int j, char p, int dx)
///
/// L5HorizWall adds a horizontal wall based on the given tile ID.
///
/// Parameters:
///    - i:  X-coordinate (40x40 grid).
///    - j:  Y-coordinate (40x40 grid).
///    - p:  Cathedral tile ID.
///    - dx: width in number of tiles.
void __fastcall L5HorizWall(int i, int j, enum l1_tile_id p, int dx);

/// address (1.00dbg): 0x46FF64
/// address (1.09b):   0x40C449
///
/// PSX ref: 0x8013E22C
/// PSX def: void L5VertWall__Fiici(int i, int j, char p, int dy)
///
/// L5VertWall adds a vertical wall based on the given tile ID.
///
/// Parameters:
///    - i:  X-coordinate (40x40 grid).
///    - j:  Y-coordinate (40x40 grid).
///    - p:  Cathedral tile ID.
///    - dy: height in number of tiles.
void __fastcall L5VertWall(int i, int j, enum l1_tile_id p, int dy);

/// address (1.00dbg): 0x47006D
/// address (1.09b):   0x40C551
///
/// PSX ref: 0x8013EA28
/// PSX def: void L5tileFix__Fv()
///
/// L5tileFix fixes tile IDs of wall edges.
void L5tileFix();

/// address (1.00dbg): 0x470360
/// address (1.09b):   0x40C8C0
///
/// PSX ref: 0x8013F2EC
/// PSX def: void DRLG_L5Subs__Fv()
///
/// DRLG_L5Subs decorates the dungeon with tapestry tile IDs.
void DRLG_L5Subs();

/// address (1.00dbg): 0x47043C
/// address (1.09b):   0x40C99D
///
/// PSX ref: 0x8013F5F8
/// PSX def: void L5FillChambers__Fv()
///
/// L5FillChambers generates chambers.
void L5FillChambers();

/// address (1.00dbg): 0x4708E3
/// address (1.09b):   0x40CD86
///
/// PSX ref: 0x8013E6B4
/// PSX def: void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag)
///
/// DRLG_L5GChamber generates a chamber at the given coordiates with columns on
/// the specified sides.
///
/// Parameters:
///    - sx:         X-coordinate (40x40 grid).
///    - sy:         Y-coordinate (40x40 grid).
///    - topflag:    place column at top.
///    - bottomflag: place column at bottom.
///    - leftflag:   place column at left.
///    - rightflag:  place column at right.
void __fastcall DRLG_L5GChamber(int sx, int sy, bool32_t topflag, bool32_t bottomflag, bool32_t leftflag, bool32_t rightflag);

/// address (1.00dbg): 0x470A36
/// address (1.09b):   0x40CEC7
///
/// PSX ref: 0x8013E974
/// PSX def: void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2)
///
/// DRLG_L5GHall generates a hall of columns and arches.
///
/// Parameters:
///    - x1: start X-coordinate (40x40 grid).
///    - y1: start Y-coordinate (40x40 grid).
///    - x2: end X-coordinate (40x40 grid).
///    - y2: end Y-coordinate (40x40 grid).
void __fastcall DRLG_L5GHall(int x1, int y1, int x2, int y2);

/// address (1.00dbg): 0x470A82
/// address (1.09b):   0x40CF17
///
/// PSX ref: 0x8013F4F8
/// PSX def: void DRLG_L5SetRoom__Fii(int rx1, int ry1)
///
/// DRLG_L5SetRoom initializes tile IDs based on the loaded quest dungeon file.
///
/// Parameters:
///    - rx1: X-coordinate (40x40 grid).
///    - ry1: Y-coordinate (40x40 grid).
void __fastcall DRLG_L5SetRoom(int rx1, int ry1);

/// address (1.00dbg): 0x470B16
/// address (1.09b):   0x40CF9C
///
/// PSX ref: 0x8014016C
/// PSX def: void DRLG_L5FloodTVal__Fv()
///
/// DRLG_L5FloodTVal adds transparency to concealing walls.
void DRLG_L5FloodTVal();

/// address (1.00dbg): 0x470B8E
/// address (1.09b):   0x40D00B
///
/// PSX ref: 0x8013FCE4
/// PSX def: void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d)
///
/// DRLG_L5FTVR recursively adds transparency to concealing walls.
///
/// Parameters:
///    - i: X-coordinate (40x40 grid).
///    - j: Y-coordinate (40x40 grid).
///    - x: X-coordinate (112x112 grid).
///    - y: Y-coordinate (112x112 grid).
///    - d: direction.
void __fastcall DRLG_L5FTVR(int i, int j, int x, int y, int d); // TODO: add enum for d, is DIRECTION correct, or some other enum?

/// address (1.00dbg): 0x470D6F
/// address (1.09b):   0x40D1FB
///
/// PSX ref: 0x80140264
/// PSX def: void DRLG_L5TransFix__Fv()
///
/// DRLG_L5TransFix fixes transparency close to dirt tile IDs after dungeon
/// generation.
void DRLG_L5TransFix();

/// address (1.00dbg): 0x470E0C
/// address (1.09b):   0x40D283
///
/// PSX ref: 0x801406A8
/// PSX def: void DRLG_L5DirtFix__Fv()
///
/// DRLG_L5DirtFix fixes dirt tile IDs after dungeon generation.
void DRLG_L5DirtFix();

/// address (1.00dbg): 0x470E7A
/// address (1.09b):   0x40D2EF
///
/// PSX ref: 0x80140824
/// PSX def: void DRLG_L5CornerFix__Fv()
///
/// DRLG_L5CornerFix fixes corner and arch tile IDs after dungeon generation.
void DRLG_L5CornerFix();

#endif // __DRLG_L1_H__
