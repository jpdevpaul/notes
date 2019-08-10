#include "types.h"

/// address: 0x49F288
///
/// ObjTypeConv maps from dun_object_id to object_id.
///
/// PSX ref (SLPS-01416): 0x800D82EC
/// PSX def: int ObjTypeConv[113]
extern object_id ObjTypeConv[114]; // alias: object_id_from_dun_object_id

/// address: 0x49F450
///
/// AllObjects contains the data related to each object ID.
///
/// PSX ref (SLPS-01416): 0x800D84B0
/// PSX def: struct ObjDataStruct AllObjects[99]
extern ObjectData AllObjects[99]; // alias: object_data

/// address: 0x4A0554
///
/// ObjMasterLoadList maps from object_graphic_id to object CEL name.
///
/// PSX ref (SLPS-01416): 0x801169F0
/// PSX def: struct OBJ_LOAD_INFO ObjMasterLoadList[56]
extern char *ObjMasterLoadList[56]; // alias: object_cel_name_from_object_graphic_id

/// address: 0x4A0634
///
/// "LzStand"
extern char str_4A0634[8];

/// address: 0x4A063C
///
/// "Mushptch"
extern char str_4A063C[9];

/// address: 0x4A0648
///
/// "Bkslbrnt"
extern char str_4A0648[9];

/// address: 0x4A0654
///
/// "Mcirl"
extern char str_4A0654[6];

/// address: 0x4A065C
///
/// "Altboy"
extern char str_4A065C[7];

/// address: 0x4A0664
///
/// "TFountn"
extern char str_4A0664[8];

/// address: 0x4A066C
///
/// "MFountn"
extern char str_4A066C[8];

/// address: 0x4A0674
///
/// "Cauldren"
extern char str_4A0674[9];

/// address: 0x4A0680
///
/// "Goatshrn"
extern char str_4A0680[9];

/// address: 0x4A068C
///
/// "Armstand"
extern char str_4A068C[9];

/// address: 0x4A0698
///
/// "PFountn"
extern char str_4A0698[8];

/// address: 0x4A06A0
///
/// "L3Doors"
extern char str_4A06A0[8];

/// address: 0x4A06A8
///
/// "Pedistl"
extern char str_4A06A8[8];

/// address: 0x4A06B0
///
/// "Decap"
extern char str_4A06B0[6];

/// address: 0x4A06B8
///
/// "Bloodfnt"
extern char str_4A06B8[9];

/// address: 0x4A06C4
///
/// "RShrineG"
extern char str_4A06C4[9];

/// address: 0x4A06D0
///
/// "LShrineG"
extern char str_4A06D0[9];

/// address: 0x4A06DC
///
/// "Barrelex"
extern char str_4A06DC[9];

/// address: 0x4A06E8
///
/// "Barrel"
extern char str_4A06E8[7];

/// address: 0x4A06F0
///
/// "WeapStnd"
extern char str_4A06F0[9];

/// address: 0x4A06FC
///
/// "BShelf"
extern char str_4A06FC[7];

/// address: 0x4A0704
///
/// "BCase"
extern char str_4A0704[6];

/// address: 0x4A070C
///
/// "WTorch1"
extern char str_4A070C[8];

/// address: 0x4A0714
///
/// "WTorch2"
extern char str_4A0714[8];

/// address: 0x4A071C
///
/// "MiniWatr"
extern char str_4A071C[9];

/// address: 0x4A0728
///
/// "Traphole"
extern char str_4A0728[9];

/// address: 0x4A0734
///
/// "Prsrplt1"
extern char str_4A0734[9];

/// address: 0x4A0740
///
/// "Flame1"
extern char str_4A0740[7];

/// address: 0x4A0748
///
/// "Sarc"
extern char str_4A0748[5];

/// address: 0x4A0750
///
/// "WTorch3"
extern char str_4A0750[8];

/// address: 0x4A0758
///
/// "WTorch4"
extern char str_4A0758[8];

/// address: 0x4A0760
///
/// "L2Doors"
extern char str_4A0760[8];

/// address: 0x4A0768
///
/// "TSoul"
extern char str_4A0768[6];

/// address: 0x4A0770
///
/// "TNudeW"
extern char str_4A0770[7];

/// address: 0x4A0778
///
/// "TNudeM"
extern char str_4A0778[7];

/// address: 0x4A0780
///
/// "Switch4"
extern char str_4A0780[8];

/// address: 0x4A0788
///
/// "Nude2"
extern char str_4A0788[6];

/// address: 0x4A0790
///
/// "Candle2"
extern char str_4A0790[8];

/// address: 0x4A0798
///
/// "Burncros"
extern char str_4A0798[9];

/// address: 0x4A07A4
///
/// "Chest3"
extern char str_4A07A4[7];

/// address: 0x4A07AC
///
/// "Angel"
extern char str_4A07AC[6];

/// address: 0x4A07B4
///
/// "Rockstan"
extern char str_4A07B4[9];

/// address: 0x4A07C0
///
/// "Book2"
extern char str_4A07C0[6];

/// address: 0x4A07C8
///
/// "Book1"
extern char str_4A07C8[6];

/// address: 0x4A07D0
///
/// "CruxSk3"
extern char str_4A07D0[8];

/// address: 0x4A07D8
///
/// "CruxSk2"
extern char str_4A07D8[8];

/// address: 0x4A07E0
///
/// "CruxSk1"
extern char str_4A07E0[8];

/// address: 0x4A07E8
///
/// "SkulStik"
extern char str_4A07E8[9];

/// address: 0x4A07F4
///
/// "SkulFire"
extern char str_4A07F4[9];

/// address: 0x4A0800
///
/// "SkulPile"
extern char str_4A0800[9];

/// address: 0x4A080C
///
/// "Banner"
extern char str_4A080C[7];

/// address: 0x4A0814
///
/// "Chest2"
extern char str_4A0814[7];

/// address: 0x4A081C
///
/// "Chest1"
extern char str_4A081C[7];

/// address: 0x4A0824
///
/// "Lever"
extern char str_4A0824[6];

/// address: 0x4A082C
///
/// "L1Doors"
extern char str_4A082C[8];

/// address: 0x4A0834
///
/// "L1Braz"
extern char str_4A0834[7];

/// address: 0x4A083C
///
/// bxadd specifies the X-coordinate delta between barrels.
///
/// PSX ref (SLPS-01416): 0x800D8BA8
/// PSX def: int bxadd[8]
extern int32_t bxadd[8]; // alias: barrel_x_delta

/// address: 0x4A085C
///
/// byadd specifies the Y-coordinate delta between barrels.
///
/// PSX ref (SLPS-01416): 0x800D8BC8
/// PSX def: int byadd[8]
extern int32_t byadd[8]; // alias: barrel_y_delta

/// address: 0x4A087C
///
/// shrinestrs maps from shrine_id to shrine name.
///
/// PSX ref (SLPS-01416): 0x800D8BE8
/// PSX def: unsigned short shrinestrs[26]
extern char *shrinestrs[26]; // alias: shrine_name_from_shrine_id

/// address: 0x4A08E4
///
/// shrinemin specifies the minimum dungeon level on which each shrine will
/// appear.
extern uint8_t shrinemin[26]; // alias: dlvl_min_from_shrine_id

/// address: 0x4A0900
///
/// shrinemax specifies the maximum dungeon level on which each shrine will
/// appear.
extern uint8_t shrinemax[26]; // alias: dlvl_max_from_shrine_id

/// address: 0x4A091C
///
/// shrineavail specifies the game type for which each shrine may appear.
///
/// PSX ref (SLPS-01416): 0x800D8C1C
/// PSX def: char shrineavail[26]
// TODO: define game_type enum
extern int8_t shrineavail[26]; // alias: shrine_game_type_from_shrine_id

/// address: 0x4A0938
///
/// StoryBookName maps from book_id to book name.
///
/// PSX ref (SLPS-01416): 0x800D8C38
/// PSX def: unsigned short StoryBookName[9]
extern char *StoryBookName[9]; // alias: book_name_from_book_id

/// address: 0x4A095C
///
/// StoryText specifies the speech IDs of each dungeon type narrator book, for
/// each player class.
///
/// PSX ref (SLPS-01416): 0x800E40B0
/// PSX def: unsigned short StoryText[3][3]
extern NarratorBook StoryText[3]; // alias: narrator_book_from_player_class

/// address: 0x4A0980
///
/// "The Black King"
extern char str_4A0980[15];

/// address: 0x4A0990
///
/// "Tale of the Three"
extern char str_4A0990[18];

/// address: 0x4A09A4
///
/// "The Realms Beyond"
extern char str_4A09A4[18];

/// address: 0x4A09B8
///
/// "The Binding of the Three"
extern char str_4A09B8[25];

/// address: 0x4A09D4
///
/// "The Sin War"
extern char str_4A09D4[12];

/// address: 0x4A09E0
///
/// "The Dark Exile"
extern char str_4A09E0[15];

/// address: 0x4A09F0
///
/// "The Tale of the Horadrim"
extern char str_4A09F0[25];

/// address: 0x4A0A0C
///
/// "The Wages of Sin are War"
extern char str_4A0A0C[25];

/// address: 0x4A0A28
///
/// "The Great Conflict"
extern char str_4A0A28[19];

/// address: 0x4A0A3C
///
/// "Tainted"
extern char str_4A0A3C[8];

/// address: 0x4A0A44
///
/// "Glimmering"
extern char str_4A0A44[11];

/// address: 0x4A0A50
///
/// "Ornate"
extern char str_4A0A50[7];

/// address: 0x4A0A58
///
/// "Secluded"
extern char str_4A0A58[9];

/// address: 0x4A0A64
///
/// "Quiet"
extern char str_4A0A64[6];

/// address: 0x4A0A6C
///
/// "Creepy"
extern char str_4A0A6C[7];

/// address: 0x4A0A74
///
/// "Abandoned"
extern char str_4A0A74[10];

/// address: 0x4A0A80
///
/// "Spooky"
extern char str_4A0A80[7];

/// address: 0x4A0A88
///
/// "Spiritual"
extern char str_4A0A88[10];

/// address: 0x4A0A94
///
/// "Sacred"
extern char str_4A0A94[7];

/// address: 0x4A0A9C
///
/// "Divine"
extern char str_4A0A9C[7];

/// address: 0x4A0AA4
///
/// "Eerie"
extern char str_4A0AA4[6];

/// address: 0x4A0AAC
///
/// "Eldritch"
extern char str_4A0AAC[9];

/// address: 0x4A0AB8
///
/// "Cryptic"
extern char str_4A0AB8[8];

/// address: 0x4A0AC0
///
/// "Fascinating"
extern char str_4A0AC0[12];

/// address: 0x4A0ACC
///
/// "Thaumaturgic"
extern char str_4A0ACC[13];

/// address: 0x4A0ADC
///
/// "Enchanted"
extern char str_4A0ADC[10];

/// address: 0x4A0AE8
///
/// "Religious"
extern char str_4A0AE8[10];

/// address: 0x4A0AF4
///
/// "Stone"
extern char str_4A0AF4[6];

/// address: 0x4A0AFC
///
/// "Magical"
extern char str_4A0AFC[8];

/// address: 0x4A0B04
///
/// "Gloomy"
extern char str_4A0B04[7];

/// address: 0x4A0B0C
///
/// "Mysterious"
extern char str_4A0B0C[11];

/// address: 0x4A0B18
///
/// `Objects\%s.CEL`
extern char str_4A0B18[15];

/// address: 0x4A0B28
///
/// "Trapped %s"
extern char str_4A0B28[11];

/// address: 0x4A0B34
///
/// "Slain Hero"
extern char str_4A0B34[11];

/// address: 0x4A0B40
///
/// "Vile Stand"
extern char str_4A0B40[11];

/// address: 0x4A0B4C
///
/// "Mushroom Patch"
extern char str_4A0B4C[15];

/// address: 0x4A0B5C
///
/// "Weapon Rack"
extern char str_4A0B5C[12];

/// address: 0x4A0B68
///
/// "Pedestal of Blood"
extern char str_4A0B68[18];

/// address: 0x4A0B7C
///
/// "Fountain of Tears"
extern char str_4A0B7C[18];

/// address: 0x4A0B90
///
/// "Murky Pool"
extern char str_4A0B90[11];

/// address: 0x4A0B9C
///
/// "Cauldron"
extern char str_4A0B9C[9];

/// address: 0x4A0BA8
///
/// "Goat Shrine"
extern char str_4A0BA8[12];

/// address: 0x4A0BB4
///
/// "Purifying Spring"
extern char str_4A0BB4[17];

/// address: 0x4A0BC8
///
/// "Book of Blood"
extern char str_4A0BC8[14];

/// address: 0x4A0BD8
///
/// "Steel Tome"
extern char str_4A0BD8[11];

/// address: 0x4A0BE4
///
/// "Book of the Blind"
extern char str_4A0BE4[18];

/// address: 0x4A0BF8
///
/// "Decapitated Body"
extern char str_4A0BF8[17];

/// address: 0x4A0C0C
///
/// "Blood Fountain"
extern char str_4A0C0C[15];

/// address: 0x4A0C1C
///
/// "Library Book"
extern char str_4A0C1C[13];

/// address: 0x4A0C2C
///
/// "Skeleton Tome"
extern char str_4A0C2C[14];

/// address: 0x4A0C3C
///
/// "%s Shrine"
extern char str_4A0C3C[10];

/// address: 0x4A0C48
///
/// "Bookcase"
extern char str_4A0C48[9];

/// address: 0x4A0C54
///
/// "Bookshelf"
extern char str_4A0C54[10];

/// address: 0x4A0C60
///
/// "Sarcophagus"
extern char str_4A0C60[12];

/// address: 0x4A0C6C
///
/// "Large Chest"
extern char str_4A0C6C[12];

/// address: 0x4A0C78
///
/// "Chest"
extern char str_4A0C78[6];

/// address: 0x4A0C80
///
/// "Small Chest"
extern char str_4A0C80[12];

/// address: 0x4A0C8C
///
/// "Mythical Book"
extern char str_4A0C8C[14];

/// address: 0x4A0C9C
///
/// "Skull Lever"
extern char str_4A0C9C[12];

/// address: 0x4A0CA8
///
/// "Book of Vileness"
extern char str_4A0CA8[17];

/// address: 0x4A0CBC
///
/// "Ancient Tome"
extern char str_4A0CBC[13];

/// address: 0x4A0CCC
///
/// "Blocked Door"
extern char str_4A0CCC[13];

/// address: 0x4A0CDC
///
/// "Closed Door"
extern char str_4A0CDC[12];

/// address: 0x4A0CE8
///
/// "Open Door"
extern char str_4A0CE8[10];

/// address: 0x4A0CF4
///
/// "Crucified Skeleton"
extern char str_4A0CF4[19];
