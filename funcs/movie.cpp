#include "types.h"

/// address: 0x43AD33
///
/// j_movie_cpp_init initializes the C++ runtime of movie.cpp.
void j_movie_cpp_init();

/// address: 0x43AD38
///
/// movie_cpp_init initializes the C++ runtime of movie.cpp.
void movie_cpp_init();

/// address: 0x43AD43
///
/// movie_play plays the given Smacker video file.
void __fastcall movie_play(char *smk_path, bool32_t user_can_close);

/// address: 0x43AE3E
///
/// movie_proc is the default window event handler when playing videos.
LRESULT __stdcall movie_proc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
