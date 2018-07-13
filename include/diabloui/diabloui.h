#ifndef DIABLOUI_H
#define DIABLOUI_H

#include "types.h"

/// address: 0x10005C73
void UiInitialize();

/// address: 0x10005C96
void UiDestroy();

/// address: 0x100100FA
bool32_t __stdcall UiTitleDialog(int a1);

#endif // DIABLOUI_H
