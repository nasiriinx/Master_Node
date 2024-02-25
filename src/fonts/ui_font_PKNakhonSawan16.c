/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\nsiri\OneDrive\Desktop\assets\PK Nakhon Sawan Demo.ttf -o C:\Users\nsiri\OneDrive\Desktop\assets\ui_font_PKNakhonSawan16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_PKNAKHONSAWAN16
#define UI_FONT_PKNAKHONSAWAN16 1
#endif

#if UI_FONT_PKNAKHONSAWAN16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x20,

    /* U+0022 "\"" */
    0x52, 0x94,

    /* U+0023 "#" */
    0x22, 0x11, 0x1f, 0xe4, 0x42, 0x21, 0x13, 0xfe,
    0x44, 0x22, 0x11, 0x0,

    /* U+0024 "$" */
    0x10, 0x20, 0xe2, 0x24, 0xe, 0x7, 0x2, 0x44,
    0x78, 0x40, 0x80,

    /* U+0025 "%" */
    0x1, 0x31, 0xa4, 0x8c, 0x80, 0xc0, 0x40, 0x6c,
    0x29, 0x24, 0x91, 0x80,

    /* U+0026 "&" */
    0x71, 0x12, 0x26, 0xc7, 0xc, 0x34, 0x46, 0x8c,
    0xec,

    /* U+0027 "'" */
    0x54,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x89, 0x10,

    /* U+0029 ")" */
    0x89, 0x12, 0x49, 0x29, 0x40,

    /* U+002A "*" */
    0x21, 0x3e, 0xe5, 0x0,

    /* U+002B "+" */
    0x10, 0x20, 0x43, 0xe1, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0x6f, 0x0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0x20, 0x84, 0x10, 0x82, 0x10, 0x43, 0x0,

    /* U+0030 "0" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81, 0xc3,
    0x42, 0x3c,

    /* U+0031 "1" */
    0x37, 0xd1, 0x11, 0x11, 0x11,

    /* U+0032 "2" */
    0x7b, 0x38, 0x41, 0x4, 0x21, 0x18, 0xc3, 0xf0,

    /* U+0033 "3" */
    0x7b, 0x18, 0x41, 0x18, 0x10, 0x61, 0x8d, 0xe0,

    /* U+0034 "4" */
    0xc, 0xc, 0x14, 0x34, 0x64, 0x44, 0x84, 0xff,
    0x4, 0x4,

    /* U+0035 "5" */
    0xfe, 0x8, 0x3e, 0x88, 0x10, 0x61, 0x8d, 0xe0,

    /* U+0036 "6" */
    0x38, 0x8a, 0x7, 0xcc, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+0037 "7" */
    0xf8, 0x30, 0x82, 0x9, 0xf1, 0x4, 0x10, 0x80,
    0x0,

    /* U+0038 "8" */
    0x7a, 0x18, 0x73, 0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+0039 "9" */
    0x79, 0x8a, 0xc, 0x1c, 0x6f, 0xc0, 0x81, 0x44,
    0x70,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0x1, 0x81, 0x80, 0x0, 0x0, 0x1, 0x81, 0x81,
    0x0,

    /* U+003C "<" */
    0x4, 0x67, 0x30, 0xc1, 0x81, 0x83,

    /* U+003D "=" */
    0xf8, 0x0, 0x3e,

    /* U+003E ">" */
    0x83, 0x83, 0x3, 0xc, 0x66, 0x20,

    /* U+003F "?" */
    0x39, 0x18, 0x51, 0x8, 0x41, 0x0, 0x10, 0x40,

    /* U+0040 "@" */
    0x3e, 0x31, 0x97, 0x56, 0x5a, 0x2d, 0x16, 0xca,
    0xbe, 0x63, 0x1f, 0x0,

    /* U+0041 "A" */
    0x18, 0x14, 0x24, 0x22, 0x22, 0x42, 0x7f, 0x41,
    0xc1, 0x81,

    /* U+0042 "B" */
    0xe1, 0xf2, 0x14, 0x28, 0xdf, 0x21, 0xc1, 0x83,
    0xb, 0xe0,

    /* U+0043 "C" */
    0x3c, 0x46, 0xc2, 0x80, 0x80, 0x80, 0x80, 0x82,
    0x42, 0x3c,

    /* U+0044 "D" */
    0xf9, 0xa, 0x1c, 0x18, 0x30, 0x60, 0xc3, 0x8d,
    0xf0,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0xfe, 0x8, 0x20, 0x81, 0xf0,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0xfe, 0x8, 0x20, 0x82, 0x0,

    /* U+0047 "G" */
    0x3c, 0x46, 0xc2, 0x80, 0x80, 0x8e, 0x81, 0xc3,
    0x42, 0x3c,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1, 0x83,
    0x4,

    /* U+0049 "I" */
    0xff, 0xc0,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x84, 0x21, 0x8b, 0x80,

    /* U+004B "K" */
    0x86, 0x29, 0x28, 0xc3, 0xe, 0x2c, 0x8a, 0x10,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x83, 0xf0,

    /* U+004D "M" */
    0xc1, 0xe0, 0xf8, 0xb4, 0xdb, 0x4c, 0xc6, 0x3,
    0x1, 0x80, 0xc0, 0x40,

    /* U+004E "N" */
    0xc1, 0xc1, 0xa1, 0xb1, 0x91, 0x89, 0x89, 0x85,
    0x87, 0x83,

    /* U+004F "O" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81, 0xc3,
    0x42, 0x3c,

    /* U+0050 "P" */
    0xf9, 0xa, 0xc, 0x18, 0x31, 0xbe, 0x40, 0x81,
    0x0,

    /* U+0051 "Q" */
    0x3c, 0x42, 0xc2, 0x81, 0x81, 0x81, 0x81, 0xc7,
    0x46, 0x3d,

    /* U+0052 "R" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa6, 0x44, 0x85,
    0xc,

    /* U+0053 "S" */
    0x79, 0x8e, 0x4, 0x7, 0x3, 0x80, 0xc1, 0x46,
    0x78,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x44,
    0x70,

    /* U+0056 "V" */
    0x80, 0xa0, 0x50, 0x48, 0x22, 0x31, 0x10, 0xc8,
    0x28, 0x1c, 0x4, 0x0,

    /* U+0057 "W" */
    0x80, 0x30, 0x5, 0x0, 0xa0, 0x14, 0x62, 0x94,
    0xd2, 0x52, 0x8a, 0x30, 0xc4, 0x18,

    /* U+0058 "X" */
    0x41, 0xb1, 0x88, 0x82, 0x80, 0x80, 0xe0, 0xd8,
    0x44, 0x41, 0x20, 0x40,

    /* U+0059 "Y" */
    0x83, 0x5, 0x13, 0x62, 0x82, 0x4, 0x8, 0x10,
    0x20,

    /* U+005A "Z" */
    0xfe, 0x2, 0x4, 0x8, 0x18, 0x30, 0x60, 0xc0,
    0x80, 0xfe,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x70,

    /* U+005C "\\" */
    0xc1, 0x2, 0x8, 0x10, 0x41, 0x82, 0xc, 0x10,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0xf0,

    /* U+005E "^" */
    0x23, 0x95, 0x18, 0x80,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x49, 0x80,

    /* U+0061 "a" */
    0x3c, 0x8e, 0xc, 0x18, 0x30, 0x51, 0x9d,

    /* U+0062 "b" */
    0x81, 0x2, 0x7, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x8a, 0xe0,

    /* U+0063 "c" */
    0x39, 0x18, 0x60, 0x82, 0x14, 0x4e,

    /* U+0064 "d" */
    0x2, 0x4, 0x9, 0xf4, 0x70, 0x60, 0xc1, 0x82,
    0x8c, 0xe8,

    /* U+0065 "e" */
    0x38, 0x8a, 0x17, 0xe8, 0x10, 0x11, 0x1c,

    /* U+0066 "f" */
    0x74, 0xa1, 0xf, 0x42, 0x10, 0x84, 0x20,

    /* U+0067 "g" */
    0x39, 0x38, 0x61, 0x86, 0x14, 0xdf, 0x5, 0x37,
    0x80,

    /* U+0068 "h" */
    0x82, 0x8, 0x2e, 0xce, 0x18, 0x61, 0x86, 0x18,
    0x40,

    /* U+0069 "i" */
    0x9f, 0xe0,

    /* U+006A "j" */
    0x20, 0x12, 0x49, 0x24, 0x93, 0x80,

    /* U+006B "k" */
    0x84, 0x21, 0x1b, 0x73, 0x18, 0xe5, 0xa2,

    /* U+006C "l" */
    0xaa, 0xaa, 0xac,

    /* U+006D "m" */
    0xfb, 0xd9, 0xce, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21,

    /* U+006E "n" */
    0xbb, 0x38, 0x61, 0x86, 0x18, 0x61,

    /* U+006F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+0070 "p" */
    0x73, 0x28, 0x61, 0x86, 0x1c, 0xbc, 0x82, 0x8,
    0x0,

    /* U+0071 "q" */
    0x39, 0x38, 0x61, 0x86, 0x14, 0xdf, 0x4, 0x10,
    0x40,

    /* U+0072 "r" */
    0xbe, 0x88, 0x88, 0x88,

    /* U+0073 "s" */
    0x72, 0x28, 0x38, 0x38, 0x28, 0x9e,

    /* U+0074 "t" */
    0x21, 0x9, 0xf2, 0x10, 0x84, 0x21, 0x8,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x86, 0x1c, 0xdd,

    /* U+0076 "v" */
    0x83, 0x42, 0x42, 0x44, 0x24, 0x2c, 0x18, 0x18,

    /* U+0077 "w" */
    0x80, 0xc0, 0x50, 0x29, 0x35, 0xd2, 0xa9, 0xcc,
    0x46,

    /* U+0078 "x" */
    0x42, 0x8c, 0xb0, 0xc1, 0x85, 0x91, 0xa1,

    /* U+0079 "y" */
    0x81, 0x42, 0x42, 0x26, 0x24, 0x14, 0x18, 0x8,
    0x10, 0x10, 0x30,

    /* U+007A "z" */
    0xfc, 0x31, 0x8c, 0x21, 0xc, 0x3f,

    /* U+007B "{" */
    0x12, 0x44, 0x44, 0x84, 0x44, 0x44, 0x30,

    /* U+007C "|" */
    0xff, 0xf0,

    /* U+007D "}" */
    0x84, 0x22, 0x22, 0x12, 0x22, 0x26, 0xc0,

    /* U+007E "~" */
    0xe4, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 65, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 48, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 81, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 5, .adv_w = 153, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 116, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 28, .adv_w = 158, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 41, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 50, .adv_w = 71, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 55, .adv_w = 71, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 60, .adv_w = 100, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 64, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 71, .adv_w = 56, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 73, .adv_w = 113, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 74, .adv_w = 56, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 93, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 125, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 121, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 150, .adv_w = 124, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 53, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 169, .adv_w = 62, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 184, .adv_w = 113, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 187, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 193, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 166, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 139, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 138, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 133, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 124, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 119, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 47, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 124, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 171, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 155, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 153, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 126, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 127, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 185, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 134, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 71, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 461, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 72, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 474, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 478, .adv_w = 124, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 481, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 85, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 124, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 537, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 48, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 58, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 554, .adv_w = 103, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 49, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 193, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 597, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 606, .adv_w = 85, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 81, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 148, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 126, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 664, .adv_w = 123, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 92, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 677, .adv_w = 47, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 679, .adv_w = 92, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 686, .adv_w = 126, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    16, 16,
    16, 34,
    23, 24,
    23, 26,
    26, 23,
    26, 24,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 61,
    34, 66,
    34, 68,
    34, 69,
    34, 70,
    34, 80,
    34, 84,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    35, 53,
    35, 55,
    36, 34,
    36, 53,
    36, 55,
    36, 58,
    36, 87,
    37, 53,
    37, 55,
    37, 58,
    37, 75,
    38, 87,
    39, 34,
    39, 43,
    39, 75,
    40, 34,
    40, 53,
    40, 55,
    40, 58,
    40, 75,
    43, 34,
    44, 87,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 66,
    45, 68,
    45, 69,
    45, 70,
    45, 72,
    45, 75,
    45, 80,
    45, 82,
    45, 85,
    45, 87,
    45, 88,
    45, 90,
    48, 34,
    48, 53,
    48, 55,
    48, 58,
    48, 75,
    48, 87,
    49, 34,
    49, 43,
    49, 53,
    49, 55,
    49, 58,
    49, 59,
    49, 75,
    49, 80,
    49, 82,
    50, 53,
    50, 55,
    50, 58,
    50, 87,
    51, 53,
    51, 55,
    51, 58,
    51, 75,
    52, 55,
    52, 58,
    52, 75,
    53, 16,
    53, 34,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 71,
    53, 72,
    53, 75,
    53, 80,
    53, 81,
    53, 82,
    53, 84,
    54, 34,
    54, 75,
    55, 16,
    55, 34,
    55, 36,
    55, 38,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 52,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 75,
    55, 80,
    55, 81,
    55, 82,
    55, 83,
    55, 84,
    55, 86,
    56, 16,
    56, 34,
    56, 75,
    58, 16,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 72,
    58, 75,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 88,
    58, 89,
    58, 90,
    58, 91,
    61, 53,
    61, 55,
    61, 56,
    61, 58,
    61, 61,
    61, 87,
    66, 53,
    66, 55,
    66, 58,
    66, 90,
    67, 34,
    67, 53,
    67, 55,
    67, 58,
    67, 85,
    67, 87,
    67, 90,
    68, 34,
    68, 53,
    68, 55,
    68, 58,
    68, 85,
    68, 87,
    68, 90,
    70, 34,
    70, 53,
    70, 55,
    70, 58,
    70, 85,
    70, 87,
    70, 90,
    71, 43,
    71, 55,
    71, 81,
    72, 53,
    72, 55,
    72, 58,
    72, 90,
    73, 53,
    73, 55,
    73, 58,
    73, 85,
    73, 87,
    76, 43,
    76, 55,
    78, 53,
    78, 55,
    78, 58,
    78, 85,
    78, 87,
    78, 90,
    79, 53,
    79, 55,
    79, 58,
    79, 85,
    79, 87,
    79, 90,
    80, 34,
    80, 53,
    80, 55,
    80, 58,
    80, 85,
    80, 87,
    80, 90,
    81, 34,
    81, 53,
    81, 55,
    81, 56,
    81, 57,
    81, 58,
    81, 75,
    81, 85,
    81, 87,
    81, 88,
    81, 90,
    82, 53,
    82, 55,
    82, 58,
    82, 90,
    83, 34,
    83, 43,
    83, 55,
    83, 57,
    83, 58,
    83, 59,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 72,
    83, 75,
    83, 80,
    83, 81,
    83, 82,
    83, 84,
    84, 34,
    84, 43,
    84, 53,
    84, 55,
    84, 58,
    84, 75,
    84, 85,
    84, 87,
    84, 90,
    85, 43,
    85, 58,
    85, 66,
    85, 68,
    85, 69,
    85, 70,
    85, 72,
    85, 80,
    85, 82,
    85, 84,
    86, 55,
    86, 58,
    87, 16,
    87, 34,
    87, 43,
    87, 58,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 72,
    87, 75,
    87, 80,
    87, 81,
    87, 82,
    87, 84,
    88, 34,
    88, 43,
    88, 58,
    88, 75,
    89, 58,
    90, 34,
    90, 43,
    90, 58,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 72,
    90, 75,
    90, 80,
    90, 81,
    90, 82,
    91, 58
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -38, -26, -9, -4, -4, -4, -2, -2,
    -2, -4, -17, -4, -21, -9, -21, -26,
    -2, -2, -2, -2, -2, -4, -2, -4,
    -9, -4, -6, -4, -9, -2, -4, -9,
    -9, -4, -4, -9, -9, -9, -4, -9,
    -21, -13, -2, -4, -9, -9, -9, -4,
    -4, -9, -9, -9, -9, -26, -4, -26,
    -13, -26, -9, -9, -9, -9, -9, -4,
    -9, -9, -9, -17, -4, -13, -2, -4,
    -9, -9, -9, -2, -13, -17, -4, -4,
    -4, -4, -13, -4, -4, -9, -9, -9,
    -4, -4, -9, -9, -9, -4, -4, -4,
    -21, -17, -4, -17, -4, -4, -13, -13,
    -13, -13, -4, -13, -9, -13, -13, -13,
    -9, -4, -9, -26, -21, -9, -4, -9,
    -17, -9, -9, -4, -17, -17, -17, -17,
    -17, -9, -13, -9, -17, -4, -13, -4,
    -13, -9, -4, -26, -21, -9, -9, -21,
    -9, -9, -4, -21, -21, -21, -17, -21,
    -9, -9, -9, -21, -13, -21, -9, -17,
    -4, -9, -4, -4, -9, -4, -4, -21,
    -26, -13, -26, -38, -17, -13, -9, -13,
    -4, -4, -13, -17, -21, -4, -4, -4,
    -2, -13, -17, -21, -4, -4, -4, -2,
    -13, -17, -17, -4, -4, -4, -4, 2,
    -9, -13, -13, -13, -4, -13, -17, -21,
    -4, -4, -4, -4, -13, -13, -21, -4,
    -4, -4, -13, -13, -21, -4, -4, -4,
    -2, -13, -13, -21, -4, -4, -4, -4,
    -13, -17, -4, -4, -21, -9, -4, -4,
    -2, -4, -13, -9, -13, -4, -13, -26,
    -4, -4, -9, -4, -9, -9, -9, -9,
    -9, -13, -9, -4, -9, -4, -4, -4,
    -9, -13, -17, -4, -4, -4, -4, -13,
    -4, -4, -4, -4, -4, -4, -4, -4,
    -4, -4, -9, -17, -9, -13, -4, -6,
    -4, -4, -4, -4, -2, -4, -2, -4,
    -4, -4, -9, -4, -2, -9, -9, -17,
    -4, -4, -4, -4, -4, -4, -2, -4,
    -2, -4, -9
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 315,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_PKNakhonSawan16 = {
#else
lv_font_t ui_font_PKNakhonSawan16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_PKNAKHONSAWAN16*/

