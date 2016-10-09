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
void __fastcall drlg_l1_load_dun(char *dun_path, int player_col, int player_row);
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
void __fastcall drlg_l1_preload_dun(char *dun_path, int unused_player_col, int unused_player_row);
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

## 0x40BAF6

## 0x40BB18

## 0x40BB33

## 0x40BD66

## 0x40BD9D

## 0x40BFA4

## 0x40C008

## 0x40C02A

## 0x40C06E

## 0x40C0E0

## 0x40C23C

## 0x40C2DC

## 0x40C35B

## 0x40C449

## 0x40C551

## 0x40C8C0

## 0x40C99D

## 0x40CD86

## 0x40CEC7

## 0x40CF17

## 0x40CF9C

## 0x40D00B

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
