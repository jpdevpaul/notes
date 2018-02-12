#include "types.h"

/// address: 0x67D7CC
///
/// logical_palette is an in-memory palette to which gamma corrections are
/// applied.
PALETTEENTRY logical_palette[256];

/// address 0x67DBCC
///
/// +Infinity after initialization of palette.cpp.
float palette_cpp_init_value;

/// address: 0x67DBD0
///
/// system_palette is the active palette of the system.
PALETTEENTRY system_palette[256];

/// address: 0x67DFD0
///
/// orig_palette is the original palette as loaded from file.
PALETTEENTRY orig_palette[256];

/// address: 0x67E3D0
///
/// nsystem_reserve_palette_entries specifies the number of reserved palette
/// entries.
int nsystem_reserve_palette_entries;
