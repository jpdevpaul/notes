#include "types.h"

/// address: 0x679810
///
/// object_graphic_id_from_object_cel_num maps from object_cel_num to
/// object_graphic_id.
///
/// PSX ref: 0x800DA320
/// PSX def: char ObjFileList[40]
object_graphic_id object_graphic_id_from_object_cel_num[40];

/// address: 0x679838
///
/// active_object_nums tracks active object numbers.
///
/// PSX ref: 0x800DA220
/// PSX def: char objectactive[127]
int active_object_nums[127];

/// address: 0x679A34
///
/// nobjects specifies the number of active objects.
int nobjects;

/// address: 0x679A3C
///
/// available_object_nums tracks available object numbers.
///
/// PSX ref: 0x800DA2A0
/// PSX def: char objectavail[127]
int available_object_nums[127];

/* TODO: uncomment when the Object struct has been added to structs.h.

/// address: 0x679C38
///
/// objects contains the objects (e.g. door, chest) of the current game.
///
/// PSX ref: 0x800D8C4C
/// PSX def: ObjectStruct object[127]
Object objects[127];

*/
