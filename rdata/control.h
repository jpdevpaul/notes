#include "types.h"

/// address: 0x479424
///
/// fontframe maps from font index to smaltext.cel frame number.
extern uint8_t fontframe[127]; // alias: smaltext_frame_from_font_index

/// address: 0x4794A4
///
/// fontkern maps from smaltext.cel frame number to character width. Note, the
/// character width may be distinct from the frame width, which is 13 for every
/// smaltext.cel frame.
///
/// PSX ref (easy-as-pie): 0x80120F6C
/// PSX def: unsigned char fontkern[68]
extern uint8_t fontkern[68]; // alias: smaltext_character_width_from_frame

/// address: 0x4794E8
///
/// lineoffset maps from line count and line number pairs to screen offsets
/// within the description box. The mapping is as follows:
///
///    * one line
///       * 1st line: 177x430
///    * two lines
///       * 1st line: 177x418
///       * 2nd line: 177x442
///    * three lines
///       * 1st line: 177x412
///       * 2nd line: 177x430
///       * 3rd line: 177x448
///    * four lines
///       * 1st line: 177x408
///       * 2nd line: 177x423
///       * 3rd line: 177x437
///       * 4th line: 177x452
///    * five lines
///       * 1st line: 177x406
///       * 2nd line: 177x418
///       * 3rd line: 177x430
///       * 4th line: 177x442
///       * 5th line: 177x453
extern int32_t lineoffset[5][5]; // alias: screen_offset_from_nlines_and_line_nr

/// address: 0x47954C
///
/// gbFontTransTbl maps ASCII character code to font index, as used by the
/// small, medium and large sized fonts; which corresponds to smaltext.cel,
/// medtexts.cel and bigtgold.cel respectively.
///
/// PSX ref (ID 3): 0x80116F68
/// PSX def: unsigned char gbFontTransTbl[256]
extern uint8_t gbFontTransTbl[256]; // alias: font_index_from_ascii

/// address: 0x479650
///
/// 80.0
extern double double_80_0;
