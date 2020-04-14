#include "types.h"

/// address: 0x418C8B
///
/// TODO: add documentation.

/// address: 0x418D91
///
/// TODO: add documentation.

/// address: 0x4191BF
///
/// TODO: add documentation.

/// address: 0x4191FB
///
/// TODO: add documentation.

/// address: 0x41927A
///
/// TODO: add documentation.

/// address: 0x4192C2
///
/// TODO: add documentation.

/// address: 0x41930B
///
/// TODO: add documentation.

/// address: 0x41944A
///
/// gendung_init_transparency initializes transparency.
///
/// PSX ref (SLPS-01416): 0x8015A070
/// PSX def: void DRLG_InitTrans__Fv()
void DRLG_InitTrans(); // alias: gendung_init_transparency

/// address: 0x419477
///
/// gendung_make_rect_transparent makes the given rectangle transparent.
///
/// PSX ref: 0x800578DC
/// PSX def: void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2)
void __fastcall gendung_make_rect_transparent(int tx_start, int ty_start, int tx_end, int ty_end);

/// address: 0x4194D0
///
/// gendung_rect_transparent makes the given rectangle transparent.
///
/// PSX ref: 0x8015A0E4
/// PSX def: void DRLG_RectTrans__Fiiii(int x1, int y1, int x2, int y2)
void __fastcall gendung_rect_transparent(int x_start, int y_start, int x_end, int y_end);

/// address: 0x419515
///
/// gendung_copy_transparency copies transparency from the source to the
/// destination coordinate.
///
/// PSX ref: 0x8015A158
/// PSX def: void DRLG_CopyTrans__Fiiii(int sx, int sy, int dx, int dy)
void __fastcall gendung_copy_transparency(int src_x, int src_y, int dst_x, int dst_y);

/// address: 0x419534
///
/// DRLG_ListTrans makes the given rectangles transparent using different
/// transparency categories for each rectangle.
///
/// PSX ref (SLPS-01416): 0x8015A1A0
/// PSX def: void DRLG_ListTrans__FiPUc(int num, unsigned char *List)
void __fastcall DRLG_ListTrans(int nrects, uint8_t *rects); // alias: gendung_rects_distinct_transparenct

/// address: 0x419565
///
/// DRLG_AreaTrans makes the given rectangles transparent using the same
/// transparency category for each rectangle.
///
/// PSX ref (SLPS-01416): 0x8015A214
/// PSX def: void DRLG_AreaTrans__FiPUc(int num, unsigned char *List)
void __fastcall DRLG_AreaTrans(int nrects, uint8_t *rects); // alias: gendung_rects_transparenct

/// address: 0x4195A2
///
/// DRLG_InitSetPC initializes the placement variables of the set piece (quest
/// dungeon).
///
/// PSX ref: 0x8015A2A4
/// PSX def: void DRLG_InitSetPC__Fv()
void DRLG_InitSetPC(); // alias: gendung_init_set_piece

/// address: 0x4195B9
///
/// gendung_mark_set_piece marks the area of the set piece (quest dungeon).
///
/// PSX ref: 0x8015A2BC
/// PSX def: void DRLG_SetPC__Fv()
void gendung_mark_set_piece();

/// address: 0x41960C
///
/// TODO: add documentation.

/// address: 0x41965B
///
/// TODO: add documentation.

/// address: 0x4197F4
///
/// TODO: add documentation.

/// address: 0x419C10
///
/// gendung_place_theme_rooms places thematic rooms.
///
/// PSX ref: 0x8015B6B8
/// PSX def: void DRLG_PlaceThemeRooms__FiiiiUc(int minSize, int maxSize, int floor, int freq, int rndSize)
void __fastcall gendung_place_theme_rooms(int min_size, int max_size, int floor, int frequency, int rnd_size);

/// address: 0x419D92
///
/// TODO: add documentation.

/// address: 0x419E1F
///
/// TODO: add documentation.

/// address: 0x419E71
///
/// gendung_init_levels initializes the dungeon levels game state.
///
/// PSX ref: 0x8015BBC8
/// PSX def: void InitLevels__Fv()
void gendung_init_levels();
