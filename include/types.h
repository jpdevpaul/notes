#include "typedefs.h"

#ifdef _WIN32
#include <windows.h>
#include <ddraw.h>
#include <dsound.h>
#else
#include "windows/windows.h"
#include "windows/ddraw.h"
#include "windows/dsound.h"
#endif // _WIN32

#include "sha1.h"

#include "enums.h"
#include "structs.h"
