# drlg_l1.cpp

## 0x40ADD6

## 0x40AE79

### drlg_l1_load_dun

```c
// drlg_l1_load_dun loads tile IDs, monsters and objects from the given
// dungeon file.
//
// PSX ref: 0x8013CF64
// PSX sig: void LoadL1Dungeon__FPcii(char *sFileName, int vx, int vy)
void __fastcall drlg_l1_load_dun(char *dun_path, int view_col, int view_row);
```

## 0x40AF65

## 0x40AFB3

## 0x40B0A5

## 0x40B160

### drlg_l1_preload_dun

```c
// drlg_l1_preload_dun loads tile IDs from the given dungeon file.
//
// PSX ref: 0x8013D138
// PSX sig: void LoadPreL1Dungeon__FPcii(char *sFileName, int vx, int vy)
void __fastcall drlg_l1_preload_dun(char *dun_path, int view_col, int view_row);
```

## 0x40B229

### drlg_l1_create_dungeon

```c
// drlg_l1_create_dungeon creates a random cathedral dungeon based on the
// given seed and level entry.
//
// PSX ref: 0x80140E64
// PSX sig: void CreateL5Dungeon__FUii(unsigned int rseed, int entry)
void __fastcall drlg_l1_create_dungeon(uint32_t seed, int entry);
```

## 0x40B276

### drlg_l1_load_quest_dun

```c
// drlg_l1_load_quest_dun loads tile IDs from the dungeon file of the active
// quest level.
//
// PSX ref: 0x8013CDA0
// PSX sig: void DRLG_LoadL1SP__Fv()
void drlg_l1_load_quest_dun();
```

## 0x40B2F4

### drlg_l1_free_quest_dun

```c
// drlg_l1_free_quest_dun frees the dungeon file of the active quest level.
//
// PSX ref: 0x8013CE7C
// PSX sig: void DRLG_FreeL1SP__Fv()
void drlg_l1_free_quest_dun();
```

## 0x40B306

### drlg_l1_generate_dungeon

```c
// drlg_l1_generate_dungeon generates a cathedral dungeon based on the given
// level entry.
//
// PSX ref: 0x80140930
// PSX sig: void DRLG_L5__Fi(int entry)
void __fastcall drlg_l1_generate_dungeon(int entry);
```

## 0x40B56F

### drlg_l1_place_door

```c
// drlg_l1_place_door places a door at the given coordinate.
//
// PSX ref: 0x8013BCB0
// PSX sig: void DRLG_PlaceDoor__Fii(int x, int y)
void __fastcall drlg_l1_place_door(int qcol, int qrow);
```

## 0x40B699

### drlg_l1_init_shadows

```c
// drlg_l1_init_shadows initializes arch and bar shadows.
//
// PSX ref: 0x8013C190
// PSX sig: void DRLG_L1Shadows__Fv()
void drlg_l1_init_shadows();
```

## 0x40B881

### drlg_l1_place_miniset

```c
// drlg_l1_place_miniset places the given miniset of tile IDs.
//
// PSX ref: 0x8013C5A0
// PSX sig: int DRLG_PlaceMiniSet__FPCUciiiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int noquad, int ldir)
int __fastcall drlg_l1_place_miniset(uint8_t *miniset, int tmin, int tmax, int cx, int cy, bool32_t set_view, int noquad, int ldir);
```

## 0x40BAF6

## 0x40BB18

## 0x40BB33

## 0x40BD66

## 0x40BD9D

### drlg_l1_generate_room

```c
// drlg_l1_generate_room generates a room of the given dimensions at the
// spcified coordinates.
//
// PSX ref: 0x8013D4CC
// PSX sig: void L5roomGen__Fiiiii(int x, int y, int w, int h, int dir)
void __fastcall drlg_l1_generate_room(int qcol_start, int qrow_start, int qcol_count, int qrow_count, int dir);
```

## 0x40BFA4

## 0x40C008

## 0x40C02A

## 0x40C06E

## 0x40C0E0

## 0x40C23C

### drlg_l1_get_horiz_wall_space

```c
// drlg_l1_get_horiz_wall_space returns the number of horizontal wall tiles
// that fit at the given coordinate.
//
// PSX ref: 0x8013DD70
// PSX sig: int L5HWallOk__Fii(int i, int j)
int __fastcall drlg_l1_get_horiz_wall_space(int qcol, int qrow);
```

## 0x40C2DC

### drlg_l1_get_vert_wall_space

```c
// drlg_l1_get_vert_wall_space returns the number of vertical wall tiles that
// fit at the given coordinate.
//
// PSX ref: 0x8013DEAC
// PSX sig: int L5VWallOk__Fii(int i, int j)
int __fastcall drlg_l1_get_vert_wall_space(int qcol, int qrow);
```

## 0x40C35B

### drlg_l1_add_horiz_wall

```c
// drlg_l1_add_horiz_wall adds a horizontal wall based on the given tile ID.
//
// PSX ref: 0x8013DFF4
// PSX sig: void L5HorizWall__Fiici(int i, int j, char p, int dx)
void __fastcall drlg_l1_add_horiz_wall(int qcol, int qrow, l1_tile_id tile_id, int qcol_count);
```

## 0x40C449

### drlg_l1_add_vert_wall

```c
// drlg_l1_add_vert_wall adds a vertical wall based on the given tile ID.
//
// PSX ref: 0x8013E22C
// PSX sig: void L5VertWall__Fiici(int i, int j, char p, int dy)
void __fastcall drlg_l1_add_vert_wall(int qcol, int qrow, l1_tile_id tile_id, int qrow_count);
```

## 0x40C551

## 0x40C8C0

## 0x40C99D

## 0x40CD86

### drlg_l1_generate_chamber

```c
// drlg_l1_generate_chamber generates a chamber at the given coordiates with
// columns on the specified sides.
//
// PSX ref: 0x8013E6B4
// PSX sig: void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag)
void __fastcall drlg_l1_generate_chamber(int qcol_start, int qrow_start, bool32_t top_right, bool32_t bottom_left, bool32_t top_left, bool32_t bottom_right);
```

## 0x40CEC7

### drlg_l1_generate_hall

```c
// drlg_l1_generate_hall generates a hall of columns and arches.
//
// PSX ref: 0x8013E974
// PSX sig: void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2)
void __fastcall drlg_l1_generate_hall(int qcol_start, int qrow_start, int qcol_end, int qrow_end);
```

## 0x40CF17

### drlg_l1_init_quest_dun

```c
// drlg_l1_init_quest_dun initializes tile IDs based on the loaded quest
// dungeon file.
//
// PSX ref: 0x8013F4F8
// PSX sig: void DRLG_L5SetRoom__Fii(int rx1, int ry1)
void __fastcall drlg_l1_init_quest_dun(int qcol_start, int qrow_start);
```

## 0x40CF9C

## 0x40D00B

### drlg_l1_init_FTVR

```c
// drlg_l1_init_FTVR initiates fish tank virtual reality by adding transparency
// to concealing walls.
//
// PSX ref: 0x8013FCE4
// PSX sig: void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d)
void __fastcall drlg_l1_init_FTVR(int qcol, int qrow, int col, int row, int direction);
```

## 0x40D1FB

## 0x40D283

### drlg_l1_fix_dirt

```c
// drlg_l1_fix_dirt fixes dirt tile IDs after dungeon generation.
//
// PSX ref: 0x801406A8
// PSX sig: void DRLG_L5DirtFix__Fv()
void drlg_l1_fix_dirt();
```

## 0x40D2EF
