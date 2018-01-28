#include "types.h"

// address: 0x40311B
//
// capture_screenshot captures a screenshot and stores it within the game
// directory as "screenXX.pcx". While the screenshot is being taken, the game is
// paused temporarily as indicated by the red screen.
void capture_screenshot();

// address: 0x403204
//
// capture_write_pcx_hdr writes a PCX header with the specified image dimensions
// to the file.
bool32_t __fastcall capture_write_pcx_hdr(HANDLE hFile, int16_t width, int height);

// address: 0x403294
//
// capture_write_pcx_palette write the given palette to the PCX file.
bool32_t __fastcall capture_write_pcx_palette(HANDLE hFile, PALETTEENTRY *palette);

// address: 0x4032FD
//
// capture_write_pcx_pixels writes the given pixels to the PCX file.
bool32_t __fastcall capture_write_pcx_pixels(HANDLE hFile, int16_t width, int16_t height, int16_t stride, uint8_t *pixels);

// address: 0x40336A
//
// capture_rle_encode RLE encodes the pixels of the source buffer.
uint8_t * __fastcall capture_rle_encode(uint8_t *src, uint8_t *dst, int width);

// address: 0x4033A8
//
// capture_create_file creates a new PCX file with the pattern "screenXX.PCX".
HANDLE __fastcall capture_create_file(char *dst_path);

// address: 0x403470
//
// capture_set_red_palette sets the palette to red-scale.
void __fastcall capture_set_red_palette(PALETTEENTRY *palette_orig);
