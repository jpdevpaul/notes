#include "types.h"

/// address: 0x67D7CC
///
/// logical_palette is an in-memory palette to which gamma corrections are
/// applied.
extern PALETTEENTRY logical_palette[256];

/// address 0x67DBCC
///
/// +Infinity after initialization of palette.cpp.
extern float palette_cpp_init_value;

/// address: 0x67DBD0
///
/// system_palette is the active palette of the system.
extern PALETTEENTRY system_palette[256];

/// address: 0x67DFD0
///
/// orig_palette is the original palette as loaded from file.
extern PALETTEENTRY orig_palette[256];

/// address: 0x67E3D0
///
/// nsystem_reserve_palette_entries specifies the number of reserved palette
/// entries.
extern int nsystem_reserve_palette_entries;
