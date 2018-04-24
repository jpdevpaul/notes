#include "types.h"

/// address: 0x49F288
///
/// object_id_from_dun_object_id maps from dun_object_id to object_id.
object_id object_id_from_dun_object_id[114];

/// address: 0x49F450
///
/// object_data contains the data related to each object ID.
///
/// PSX ref: 0x800D84B0
/// PSX def: ObjDataStruct AllObjects[99]
ObjectData object_data[99];

/// address: 0x4A0554
///
/// object_cel_name_from_object_graphic_id maps from object_graphic_id to object
/// CEL name.
char *object_cel_name_from_object_graphic_id[56];

/// address: 0x4A0634
///
/// "LzStand"
char str_4A0634[8];

/// address: 0x4A063C
///
/// "Mushptch"
char str_4A063C[9];

/// address: 0x4A0648
///
/// "Bkslbrnt"
char str_4A0648[9];

/// address: 0x4A0654
///
/// "Mcirl"
char str_4A0654[6];

/// address: 0x4A065C
///
/// "Altboy"
char str_4A065C[7];

/// address: 0x4A0664
///
/// "TFountn"
char str_4A0664[8];

/// address: 0x4A066C
///
/// "MFountn"
char str_4A066C[8];

/// address: 0x4A0674
///
/// "Cauldren"
char str_4A0674[9];

/// address: 0x4A0680
///
/// "Goatshrn"
char str_4A0680[9];

/// address: 0x4A068C
///
/// "Armstand"
char str_4A068C[9];

/// address: 0x4A0698
///
/// "PFountn"
char str_4A0698[8];

/// address: 0x4A06A0
///
/// "L3Doors"
char str_4A06A0[8];

/// address: 0x4A06A8
///
/// "Pedistl"
char str_4A06A8[8];

/// address: 0x4A06B0
///
/// "Decap"
char str_4A06B0[6];

/// address: 0x4A06B8
///
/// "Bloodfnt"
char str_4A06B8[9];

/// address: 0x4A06C4
///
/// "RShrineG"
char str_4A06C4[9];

/// address: 0x4A06D0
///
/// "LShrineG"
char str_4A06D0[9];

/// address: 0x4A06DC
///
/// "Barrelex"
char str_4A06DC[9];

/// address: 0x4A06E8
///
/// "Barrel"
char str_4A06E8[7];

/// address: 0x4A06F0
///
/// "WeapStnd"
char str_4A06F0[9];

/// address: 0x4A06FC
///
/// "BShelf"
char str_4A06FC[7];

/// address: 0x4A0704
///
/// "BCase"
char str_4A0704[6];

/// address: 0x4A070C
///
/// "WTorch1"
char str_4A070C[8];

/// address: 0x4A0714
///
/// "WTorch2"
char str_4A0714[8];

/// address: 0x4A071C
///
/// "MiniWatr"
char str_4A071C[9];

/// address: 0x4A0728
///
/// "Traphole"
char str_4A0728[9];

/// address: 0x4A0734
///
/// "Prsrplt1"
char str_4A0734[9];

/// address: 0x4A0740
///
/// "Flame1"
char str_4A0740[7];

/// address: 0x4A0748
///
/// "Sarc"
char str_4A0748[5];

/// address: 0x4A0750
///
/// "WTorch3"
char str_4A0750[8];

/// address: 0x4A0758
///
/// "WTorch4"
char str_4A0758[8];

/// address: 0x4A0760
///
/// "L2Doors"
char str_4A0760[8];

/// address: 0x4A0768
///
/// "TSoul"
char str_4A0768[6];

/// address: 0x4A0770
///
/// "TNudeW"
char str_4A0770[7];

/// address: 0x4A0778
///
/// "TNudeM"
char str_4A0778[7];

/// address: 0x4A0780
///
/// "Switch4"
char str_4A0780[8];

/// address: 0x4A0788
///
/// "Nude2"
char str_4A0788[6];

/// address: 0x4A0790
///
/// "Candle2"
char str_4A0790[8];

/// address: 0x4A0798
///
/// "Burncros"
char str_4A0798[9];

/// address: 0x4A07A4
///
/// "Chest3"
char str_4A07A4[7];

/// address: 0x4A07AC
///
/// "Angel"
char str_4A07AC[6];

/// address: 0x4A07B4
///
/// "Rockstan"
char str_4A07B4[9];

/// address: 0x4A07C0
///
/// "Book2"
char str_4A07C0[6];

/// address: 0x4A07C8
///
/// "Book1"
char str_4A07C8[6];

/// address: 0x4A07D0
///
/// "CruxSk3"
char str_4A07D0[8];

/// address: 0x4A07D8
///
/// "CruxSk2"
char str_4A07D8[8];

/// address: 0x4A07E0
///
/// "CruxSk1"
char str_4A07E0[8];

/// address: 0x4A07E8
///
/// "SkulStik"
char str_4A07E8[9];

/// address: 0x4A07F4
///
/// "SkulFire"
char str_4A07F4[9];

/// address: 0x4A0800
///
/// "SkulPile"
char str_4A0800[9];

/// address: 0x4A080C
///
/// "Banner"
char str_4A080C[7];

/// address: 0x4A0814
///
/// "Chest2"
char str_4A0814[7];

/// address: 0x4A081C
///
/// "Chest1"
char str_4A081C[7];

/// address: 0x4A0824
///
/// "Lever"
char str_4A0824[6];

/// address: 0x4A082C
///
/// "L1Doors"
char str_4A082C[8];

/// address: 0x4A0834
///
/// "L1Braz"
char str_4A0834[7];

/// address: 0x4A083C
///
/// barrel_x_delta specifies the X-coordinate delta between barrels.
///
/// PSX ref: 0x800D8BA8
/// PSX def: int bxadd[8]
int barrel_x_delta[8];

/// address: 0x4A085C
///
/// barrel_y_delta specifies the Y-coordinate delta between barrels.
///
/// PSX ref: 0x800D8BC8
/// PSX def: int byadd[8]
int barrel_y_delta[8];

/// address: 0x4A087C
///
/// shrine_name_from_shrine_id maps from shrine_id to shrine name.
///
/// PSX ref: 0x800D8BE8
/// PSX def: unsigned short shrinestrs[26]
char *shrine_name_from_shrine_id[26];

/// address: 0x4A08E4
///
/// dlvl_min_from_shrine_id specifies the minimum dungeon level on which each
/// shrine will appear.
int8_t dlvl_min_from_shrine_id[26];

/// address: 0x4A0900
///
/// dlvl_max_from_shrine_id specifies the maximum dungeon level on which each
/// shrine will appear.
int8_t dlvl_max_from_shrine_id[26];

/// address: 0x4A091C
///
/// shrine_game_type_from_shrine_id specifies the game type for which each shrine
/// may appear.
///
/// PSX ref: 0x800D8C1C
/// PSX def: char shrineavail[26]
int8_t shrine_game_type_from_shrine_id[26]; // TODO: define game_type enum

/// address: 0x4A0938
///
/// book_name_from_book_id maps from book_id to book name.
///
/// PSX ref: 0x800D8C38
/// PSX def: unsigned short StoryBookName[9]
char *book_name_from_book_id[9];

/// address: 0x4A095C
///
/// narrator_book_from_player_class specifies the speech IDs of each dungeon type
/// narrator book, for each player class.
NarratorBook narrator_book_from_player_class[3];

/// address: 0x4A0980
///
/// "The Black King"
char str_4A0980[15];

/// address: 0x4A0990
///
/// "Tale of the Three"
char str_4A0990[18];

/// address: 0x4A09A4
///
/// "The Realms Beyond"
char str_4A09A4[18];

/// address: 0x4A09B8
///
/// "The Binding of the Three"
char str_4A09B8[25];

/// address: 0x4A09D4
///
/// "The Sin War"
char str_4A09D4[12];

/// address: 0x4A09E0
///
/// "The Dark Exile"
char str_4A09E0[15];

/// address: 0x4A09F0
///
/// "The Tale of the Horadrim"
char str_4A09F0[25];

/// address: 0x4A0A0C
///
/// "The Wages of Sin are War"
char str_4A0A0C[25];

/// address: 0x4A0A28
///
/// "The Great Conflict"
char str_4A0A28[19];

/// address: 0x4A0A3C
///
/// "Tainted"
char str_4A0A3C[8];

/// address: 0x4A0A44
///
/// "Glimmering"
char str_4A0A44[11];

/// address: 0x4A0A50
///
/// "Ornate"
char str_4A0A50[7];

/// address: 0x4A0A58
///
/// "Secluded"
char str_4A0A58[9];

/// address: 0x4A0A64
///
/// "Quiet"
char str_4A0A64[6];

/// address: 0x4A0A6C
///
/// "Creepy"
char str_4A0A6C[7];

/// address: 0x4A0A74
///
/// "Abandoned"
char str_4A0A74[10];

/// address: 0x4A0A80
///
/// "Spooky"
char str_4A0A80[7];

/// address: 0x4A0A88
///
/// "Spiritual"
char str_4A0A88[10];

/// address: 0x4A0A94
///
/// "Sacred"
char str_4A0A94[7];

/// address: 0x4A0A9C
///
/// "Divine"
char str_4A0A9C[7];

/// address: 0x4A0AA4
///
/// "Eerie"
char str_4A0AA4[6];

/// address: 0x4A0AAC
///
/// "Eldritch"
char str_4A0AAC[9];

/// address: 0x4A0AB8
///
/// "Cryptic"
char str_4A0AB8[8];

/// address: 0x4A0AC0
///
/// "Fascinating"
char str_4A0AC0[12];

/// address: 0x4A0ACC
///
/// "Thaumaturgic"
char str_4A0ACC[13];

/// address: 0x4A0ADC
///
/// "Enchanted"
char str_4A0ADC[10];

/// address: 0x4A0AE8
///
/// "Religious"
char str_4A0AE8[10];

/// address: 0x4A0AF4
///
/// "Stone"
char str_4A0AF4[6];

/// address: 0x4A0AFC
///
/// "Magical"
char str_4A0AFC[8];

/// address: 0x4A0B04
///
/// "Gloomy"
char str_4A0B04[7];

/// address: 0x4A0B0C
///
/// "Mysterious"
char str_4A0B0C[11];

/// address: 0x4A0B18
///
/// `Objects\%s.CEL`
char str_4A0B18[15];

/// address: 0x4A0B28
///
/// "Trapped %s"
char str_4A0B28[11];

/// address: 0x4A0B34
///
/// "Slain Hero"
char str_4A0B34[11];

/// address: 0x4A0B40
///
/// "Vile Stand"
char str_4A0B40[11];

/// address: 0x4A0B4C
///
/// "Mushroom Patch"
char str_4A0B4C[15];

/// address: 0x4A0B5C
///
/// "Weapon Rack"
char str_4A0B5C[12];

/// address: 0x4A0B68
///
/// "Pedestal of Blood"
char str_4A0B68[18];

/// address: 0x4A0B7C
///
/// "Fountain of Tears"
char str_4A0B7C[18];

/// address: 0x4A0B90
///
/// "Murky Pool"
char str_4A0B90[11];

/// address: 0x4A0B9C
///
/// "Cauldron"
char str_4A0B9C[9];

/// address: 0x4A0BA8
///
/// "Goat Shrine"
char str_4A0BA8[12];

/// address: 0x4A0BB4
///
/// "Purifying Spring"
char str_4A0BB4[17];

/// address: 0x4A0BC8
///
/// "Book of Blood"
char str_4A0BC8[14];

/// address: 0x4A0BD8
///
/// "Steel Tome"
char str_4A0BD8[11];

/// address: 0x4A0BE4
///
/// "Book of the Blind"
char str_4A0BE4[18];

/// address: 0x4A0BF8
///
/// "Decapitated Body"
char str_4A0BF8[17];

/// address: 0x4A0C0C
///
/// "Blood Fountain"
char str_4A0C0C[15];

/// address: 0x4A0C1C
///
/// "Library Book"
char str_4A0C1C[13];

/// address: 0x4A0C2C
///
/// "Skeleton Tome"
char str_4A0C2C[14];

/// address: 0x4A0C3C
///
/// "%s Shrine"
char str_4A0C3C[10];

/// address: 0x4A0C48
///
/// "Bookcase"
char str_4A0C48[9];

/// address: 0x4A0C54
///
/// "Bookshelf"
char str_4A0C54[10];

/// address: 0x4A0C60
///
/// "Sarcophagus"
char str_4A0C60[12];

/// address: 0x4A0C6C
///
/// "Large Chest"
char str_4A0C6C[12];

/// address: 0x4A0C78
///
/// "Chest"
char str_4A0C78[6];

/// address: 0x4A0C80
///
/// "Small Chest"
char str_4A0C80[12];

/// address: 0x4A0C8C
///
/// "Mythical Book"
char str_4A0C8C[14];

/// address: 0x4A0C9C
///
/// "Skull Lever"
char str_4A0C9C[12];

/// address: 0x4A0CA8
///
/// "Book of Vileness"
char str_4A0CA8[17];

/// address: 0x4A0CBC
///
/// "Ancient Tome"
char str_4A0CBC[13];

/// address: 0x4A0CCC
///
/// "Blocked Door"
char str_4A0CCC[13];

/// address: 0x4A0CDC
///
/// "Closed Door"
char str_4A0CDC[12];

/// address: 0x4A0CE8
///
/// "Open Door"
char str_4A0CE8[10];

/// address: 0x4A0CF4
///
/// "Crucified Skeleton"
char str_4A0CF4[19];
