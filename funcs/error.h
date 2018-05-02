#include "types.h"

/// address: 0x41804E
///
/// error_add adds the given error message.
///
/// PSX ref: 0x8003DC44
/// PSX def: void InitDiabloMsg__Fc(char e)
void __fastcall error_add(error_id error_id);

/// address: 0x41808F
///
/// error_clear clears the error messages.
///
/// PSX ref: 0x8003DCD8
/// PSX def: void ClrDiabloMsg__Fv()
void error_clear();

/// address: 0x4180AA
///
/// error_draw renders the error dialogue on screen.
///
/// PSX ref: 0x8003DD04
/// PSX def: void DrawDiabloMsg__Fv()
void error_draw();
