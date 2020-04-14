/// address: 0x456625
///
/// setmaps_get_object_num returns the active object numer at the given
/// coordinate.
///
/// PSX ref: 0x801552D8
/// PSX def: int ObjIndex__Fii(int x, int y)
int __fastcall setmaps_get_object_num(int x, int y);

/// address: 0x45666B
///
/// setmaps_add_objects_on_skeleton_kings_lair adds objects to Skeleton King's
/// Lair.
///
/// PSX ref: 0x8015538C
/// PSX def: void AddSKingObjs__Fv()
void setmaps_add_objects_on_skeleton_kings_lair();

/// address: 0x45671A
///
/// setmaps_add_objects_bone_chamber adds objects to the Bone Chamber.
///
/// PSX ref: 0x801554BC
/// PSX def: void AddSChamObjs__Fv()
void setmaps_add_objects_bone_chamber();

/// address: 0x456755
///
/// setmaps_add_objects_archbishop_lazarus_lair adds objects to Archbishop
/// Lazarus' Lair.
///
/// PSX ref: 0x80155538
/// PSX def: void AddVileObjs__Fv()
void setmaps_add_objects_archbishop_lazarus_lair();

/// address: 0x4567AD
///
/// setmaps_load_transparency loads transparency of the map from the given DUN
/// file.
///
/// PSX ref: 0x801555E4
/// PSX def: void DRLG_SetMapTrans__FPc(char *sFileName)
void __fastcall setmaps_load_transparency(char *dun_path);

/// address: 0x456819
///
/// LoadSetMap loads the set map of the current set level from the corresponding
/// DUN file.
///
/// PSX ref: 0x801556A8
/// PSX def: void LoadSetMap__Fv()
void LoadSetMap(); // alias: setmaps_load_quest_level
