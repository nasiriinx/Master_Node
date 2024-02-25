/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\nsiri\OneDrive\Desktop\assets\FCTahoMai-Bold.ttf -o C:\Users\nsiri\OneDrive\Desktop\assets\ui_font_TahoMaiBold16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_TAHOMAIBOLD16
#define UI_FONT_TAHOMAIBOLD16 1
#endif

#if UI_FONT_TAHOMAIBOLD16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xdb, 0x6d, 0xb6, 0x1f, 0xf0,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0xd, 0xc3, 0x30, 0x66, 0x3f, 0xf7, 0xfe, 0x33,
    0xc, 0xc7, 0xfe, 0xff, 0xc6, 0x60, 0xcc, 0x3b,
    0x0,

    /* U+0024 "$" */
    0x18, 0xc, 0x1f, 0xdc, 0x7c, 0x1e, 0x3, 0xf0,
    0xfe, 0x1f, 0x80, 0xf0, 0x7c, 0x77, 0xf0, 0xc0,
    0x60,

    /* U+0025 "%" */
    0x70, 0x9f, 0x33, 0x64, 0x6d, 0x8f, 0xa0, 0xe8,
    0x1, 0x70, 0x5f, 0x1b, 0x62, 0x6c, 0xcf, 0x90,
    0xe0,

    /* U+0026 "&" */
    0x3c, 0x1f, 0x86, 0x61, 0x98, 0x66, 0xf, 0x7,
    0x83, 0xb6, 0xc7, 0xb1, 0xcf, 0xf9, 0xf3,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x76, 0x6c, 0xcc, 0xcc, 0xcc, 0xc6, 0x67,

    /* U+0029 ")" */
    0xc6, 0x63, 0x33, 0x33, 0x33, 0x36, 0x6c,

    /* U+002A "*" */
    0x32, 0xdf, 0xde, 0x78, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x6f, 0xe0,

    /* U+002D "-" */
    0xff, 0xf0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xe, 0x18, 0x30, 0xe1, 0x83, 0xe, 0x18, 0x30,
    0xe1, 0x83, 0x0,

    /* U+0030 "0" */
    0x1e, 0x3f, 0x98, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xb1, 0x9f, 0xc3, 0xc0,

    /* U+0031 "1" */
    0x3f, 0xf6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x30,

    /* U+0032 "2" */
    0x3c, 0x7e, 0xe3, 0xc3, 0x3, 0x6, 0xe, 0x1c,
    0x38, 0x70, 0xff, 0xff,

    /* U+0033 "3" */
    0x3c, 0x7f, 0xe3, 0xc3, 0x3, 0x1e, 0x1e, 0x3,
    0xc3, 0xe3, 0x7e, 0x3c,

    /* U+0034 "4" */
    0x3, 0x1, 0xc0, 0xf0, 0x3c, 0x1b, 0xe, 0xc3,
    0x31, 0x8c, 0xff, 0xff, 0xf0, 0x30, 0xc,

    /* U+0035 "5" */
    0x7f, 0x3f, 0x98, 0xc, 0x6, 0xe3, 0xf9, 0x8e,
    0x3, 0x61, 0xb1, 0xdf, 0xc7, 0xc0,

    /* U+0036 "6" */
    0x1e, 0x3f, 0x98, 0xf8, 0x3d, 0xe7, 0xfb, 0x8f,
    0x83, 0xc1, 0xb1, 0xdf, 0xc3, 0xc0,

    /* U+0037 "7" */
    0xff, 0xff, 0x7, 0x6, 0xe, 0xe, 0xc, 0x1c,
    0x18, 0x38, 0x38, 0x30,

    /* U+0038 "8" */
    0x3c, 0x3f, 0x39, 0xd8, 0x6c, 0x33, 0xf9, 0xfd,
    0xc7, 0xc1, 0xf1, 0xdf, 0xc7, 0xc0,

    /* U+0039 "9" */
    0x3e, 0x3f, 0xb8, 0xd8, 0x3c, 0x1f, 0x1d, 0xfe,
    0x7b, 0xc1, 0xf1, 0x9f, 0xc7, 0x80,

    /* U+003A ":" */
    0xff, 0x80, 0x3f, 0xe0,

    /* U+003B ";" */
    0xff, 0x80, 0x7, 0xdb, 0x0,

    /* U+003C "<" */
    0x2, 0xc, 0x79, 0xe7, 0x18, 0x3c, 0x1c, 0x1e,
    0xc, 0x8,

    /* U+003D "=" */
    0xff, 0xfc, 0x7, 0xff, 0xe0,

    /* U+003E ">" */
    0x81, 0x83, 0xc3, 0xc1, 0xe0, 0xc7, 0x9c, 0xf1,
    0x82, 0x0,

    /* U+003F "?" */
    0x3e, 0x7f, 0xe3, 0xc3, 0x7, 0xc, 0x18, 0x18,
    0x0, 0x18, 0x18, 0x18,

    /* U+0040 "@" */
    0xf, 0x81, 0xff, 0x1c, 0x1c, 0xdf, 0x7d, 0xf9,
    0xec, 0xcf, 0x66, 0x7b, 0x33, 0xdf, 0xf3, 0x77,
    0x9c, 0x0, 0x7e, 0x1, 0xf0, 0x0,

    /* U+0041 "A" */
    0xe, 0x1, 0xe0, 0x7c, 0xd, 0x81, 0x98, 0x73,
    0xc, 0x61, 0xfe, 0x7f, 0xcc, 0x19, 0x83, 0xf0,
    0x70,

    /* U+0042 "B" */
    0xfe, 0x7f, 0xb0, 0xd8, 0x6c, 0x37, 0xf3, 0xfd,
    0x83, 0xc1, 0xe0, 0xff, 0xff, 0xc0,

    /* U+0043 "C" */
    0x1e, 0x1f, 0xe6, 0x3b, 0x87, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc1, 0xd8, 0xe7, 0xf8, 0x78,

    /* U+0044 "D" */
    0xfc, 0x7f, 0xb1, 0xd8, 0x7c, 0x1e, 0xf, 0x7,
    0x83, 0xc3, 0xe3, 0xbf, 0x9f, 0x80,

    /* U+0045 "E" */
    0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0,
    0xc0, 0xc0, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0047 "G" */
    0x1f, 0x1f, 0xe6, 0x1f, 0x87, 0xc0, 0x31, 0xfc,
    0x7f, 0x7, 0xe1, 0xd8, 0xe7, 0xf8, 0x7c,

    /* U+0048 "H" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xff, 0xff,
    0xff, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+0049 "I" */
    0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0xc3, 0xe7, 0x7e, 0x3c,

    /* U+004B "K" */
    0xc3, 0xe3, 0xb3, 0x9b, 0x8f, 0x87, 0xc3, 0xf1,
    0x9c, 0xc6, 0x63, 0xb0, 0xf8, 0x70,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xff, 0xff,

    /* U+004D "M" */
    0xe0, 0x7e, 0x7, 0xf0, 0xff, 0xf, 0xf9, 0xfd,
    0x9b, 0xd9, 0xbc, 0xf3, 0xcf, 0x3c, 0xf3, 0xc6,
    0x3c, 0x63,

    /* U+004E "N" */
    0xc1, 0xf0, 0xf8, 0x7e, 0x3f, 0x9e, 0xcf, 0x37,
    0x9f, 0xc7, 0xe1, 0xf0, 0xf8, 0x30,

    /* U+004F "O" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xe0, 0xee, 0x38, 0xfe, 0xf,
    0x80,

    /* U+0050 "P" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xfe, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xe0, 0xee, 0x38, 0xff, 0xf,
    0xe0, 0x1e, 0x0, 0x0,

    /* U+0052 "R" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xff, 0xfc, 0xcc,
    0xce, 0xc6, 0xc7, 0xc3,

    /* U+0053 "S" */
    0x3e, 0x3f, 0xb8, 0xf8, 0x3e, 0x3, 0xf0, 0x7c,
    0x7, 0xc1, 0xf1, 0xdf, 0xc7, 0xc0,

    /* U+0054 "T" */
    0xff, 0xff, 0xc6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x0,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xf1, 0xdf, 0xc7, 0xc0,

    /* U+0056 "V" */
    0xe0, 0xec, 0x1d, 0xc3, 0x38, 0x63, 0x1c, 0x63,
    0xe, 0x60, 0xdc, 0x1b, 0x3, 0xe0, 0x3c, 0x7,
    0x0,

    /* U+0057 "W" */
    0x61, 0x86, 0xc7, 0x1d, 0x8e, 0x3b, 0x9e, 0x67,
    0x3c, 0xc6, 0xd9, 0x8d, 0x97, 0x1b, 0x3c, 0x3e,
    0x78, 0x38, 0xf0, 0x70, 0xe0, 0xe1, 0x80,

    /* U+0058 "X" */
    0x70, 0xce, 0x38, 0xe6, 0x1d, 0xc1, 0xf0, 0x1e,
    0x3, 0xc0, 0xf8, 0x3b, 0x87, 0x31, 0xc7, 0x38,
    0x60,

    /* U+0059 "Y" */
    0xe1, 0xdc, 0xe7, 0x38, 0xfc, 0x1e, 0x7, 0x80,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+005A "Z" */
    0xff, 0xff, 0x6, 0xe, 0xc, 0x1c, 0x38, 0x30,
    0x70, 0x60, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8f,
    0xfc,

    /* U+005C "\\" */
    0x60, 0xc1, 0xc1, 0x83, 0x7, 0x6, 0xc, 0x1c,
    0x18, 0x30, 0x70,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0xff,

    /* U+005E "^" */
    0x31, 0xcd, 0xb3,

    /* U+005F "_" */
    0xff, 0xff, 0xc0,

    /* U+0060 "`" */
    0x66, 0x33,

    /* U+0061 "a" */
    0x3c, 0x7f, 0xc3, 0x7f, 0xff, 0xc3, 0xc7, 0xff,
    0x7b,

    /* U+0062 "b" */
    0xc0, 0xc0, 0xc0, 0xdc, 0xfe, 0xe7, 0xc3, 0xc3,
    0xc3, 0xe7, 0xfe, 0xdc,

    /* U+0063 "c" */
    0x3c, 0x7e, 0xe6, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e,
    0x3c,

    /* U+0064 "d" */
    0x3, 0x3, 0x3, 0x3b, 0x7f, 0xe7, 0xc3, 0xc3,
    0xc3, 0xe7, 0x7f, 0x3b,

    /* U+0065 "e" */
    0x3c, 0x7e, 0xc7, 0xff, 0xff, 0xc0, 0xe7, 0x7e,
    0x3c,

    /* U+0066 "f" */
    0x3b, 0xd9, 0xff, 0xb1, 0x8c, 0x63, 0x18, 0xc0,

    /* U+0067 "g" */
    0x3b, 0x7f, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7f,
    0x3b, 0xc3, 0x7e, 0x3c,

    /* U+0068 "h" */
    0xc0, 0xc0, 0xc0, 0xde, 0xff, 0xe7, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0069 "i" */
    0xf3, 0xff, 0xff,

    /* U+006A "j" */
    0x33, 0x3, 0x33, 0x33, 0x33, 0x33, 0x3f, 0xe0,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc6, 0xcc, 0xd8, 0xf0, 0xf8,
    0xdc, 0xce, 0xc6, 0xc7,

    /* U+006C "l" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xf7,

    /* U+006D "m" */
    0xdc, 0xef, 0xff, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x30,

    /* U+006E "n" */
    0xde, 0xff, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3,

    /* U+006F "o" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e,
    0x3c,

    /* U+0070 "p" */
    0xdc, 0xfe, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0xfe,
    0xdc, 0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0x3b, 0x7f, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7f,
    0x3b, 0x3, 0x3, 0x3,

    /* U+0072 "r" */
    0xdf, 0xf9, 0x8c, 0x63, 0x18, 0xc0,

    /* U+0073 "s" */
    0x79, 0xfb, 0x1e, 0x7, 0xc1, 0xf1, 0xff, 0x7c,

    /* U+0074 "t" */
    0x63, 0x3f, 0xf6, 0x31, 0x8c, 0x63, 0xce,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7, 0xff,
    0x7b,

    /* U+0076 "v" */
    0xe3, 0xb1, 0x98, 0xce, 0x63, 0x71, 0xb0, 0xd8,
    0x3c, 0x1c, 0x0,

    /* U+0077 "w" */
    0x67, 0x3b, 0x39, 0x99, 0xcc, 0xca, 0x67, 0xdb,
    0x1e, 0xf8, 0xf3, 0x87, 0x1c, 0x38, 0xe0,

    /* U+0078 "x" */
    0xc6, 0xee, 0x6c, 0x3c, 0x38, 0x7c, 0x6c, 0xee,
    0xc6,

    /* U+0079 "y" */
    0xe3, 0x31, 0x98, 0xce, 0xe3, 0x61, 0xb0, 0xf8,
    0x38, 0x1c, 0xe, 0x1e, 0xe, 0x0,

    /* U+007A "z" */
    0xff, 0xfc, 0x30, 0xe3, 0x86, 0x18, 0x7f, 0xfe,

    /* U+007B "{" */
    0x1c, 0xf3, 0xc, 0x30, 0xc7, 0x38, 0x70, 0xc3,
    0xc, 0x30, 0xf1, 0xc0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xe3, 0xc3, 0xc, 0x30, 0xc3, 0x87, 0x38, 0xc3,
    0xc, 0x33, 0xce, 0x0,

    /* U+007E "~" */
    0x73, 0xff, 0xce
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 97, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 82, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 107, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 9, .adv_w = 187, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 169, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 43, .adv_w = 200, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 189, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 61, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 76, .adv_w = 95, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 83, .adv_w = 95, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 90, .adv_w = 105, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 95, .adv_w = 159, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 102, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 104, .adv_w = 134, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 106, .adv_w = 66, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 119, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 121, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 156, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 166, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 163, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 169, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 167, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 169, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 83, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 83, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 257, .adv_w = 148, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 143, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 272, .adv_w = 148, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 226, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 316, .adv_w = 182, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 187, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 184, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 159, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 191, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 189, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 75, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 153, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 180, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 143, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 227, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 187, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 195, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 195, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 552, .adv_w = 171, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 169, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 183, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 182, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 250, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 178, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 663, .adv_w = 173, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 166, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 109, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 699, .adv_w = 119, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 109, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 717, .adv_w = 119, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 720, .adv_w = 160, .box_w = 9, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 723, .adv_w = 81, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 725, .adv_w = 153, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 151, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 100, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 796, .adv_w = 159, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 76, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 77, .box_w = 4, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 819, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 831, .adv_w = 91, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 234, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 159, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 860, .adv_w = 156, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 881, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 893, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 141, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 907, .adv_w = 103, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 159, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 147, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 934, .adv_w = 211, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 148, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 958, .adv_w = 145, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 972, .adv_w = 140, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 980, .adv_w = 113, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 992, .adv_w = 90, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 996, .adv_w = 113, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1008, .adv_w = 159, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
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
    3, 16,
    3, 20,
    3, 34,
    3, 43,
    3, 57,
    3, 69,
    4, 91,
    5, 58,
    8, 16,
    8, 20,
    8, 34,
    8, 43,
    8, 57,
    8, 69,
    11, 16,
    11, 20,
    11, 34,
    11, 43,
    11, 57,
    11, 69,
    12, 53,
    12, 57,
    12, 58,
    12, 89,
    13, 16,
    13, 53,
    13, 55,
    13, 58,
    13, 84,
    13, 85,
    13, 87,
    14, 53,
    14, 57,
    14, 58,
    14, 89,
    15, 16,
    15, 53,
    15, 55,
    15, 58,
    15, 84,
    15, 85,
    15, 87,
    16, 3,
    16, 8,
    16, 11,
    16, 13,
    16, 15,
    16, 43,
    16, 58,
    16, 63,
    16, 65,
    17, 58,
    17, 91,
    18, 83,
    19, 21,
    19, 58,
    19, 91,
    20, 91,
    21, 58,
    21, 91,
    22, 26,
    22, 91,
    23, 24,
    23, 26,
    23, 58,
    24, 13,
    24, 15,
    24, 23,
    24, 24,
    24, 25,
    24, 34,
    24, 55,
    24, 57,
    24, 58,
    24, 59,
    25, 58,
    25, 91,
    26, 21,
    26, 58,
    26, 91,
    27, 91,
    28, 91,
    31, 53,
    31, 57,
    31, 58,
    31, 89,
    32, 13,
    32, 15,
    34, 3,
    34, 8,
    34, 11,
    34, 18,
    34, 36,
    34, 40,
    34, 43,
    34, 48,
    34, 50,
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    34, 63,
    34, 65,
    34, 85,
    34, 87,
    34, 90,
    35, 53,
    35, 55,
    35, 57,
    35, 58,
    35, 87,
    36, 58,
    37, 57,
    37, 58,
    38, 34,
    39, 3,
    39, 8,
    39, 11,
    39, 13,
    39, 15,
    39, 16,
    39, 19,
    39, 34,
    39, 43,
    39, 48,
    39, 58,
    39, 63,
    39, 65,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 71,
    39, 72,
    39, 74,
    39, 75,
    39, 78,
    39, 79,
    39, 80,
    39, 82,
    39, 83,
    39, 84,
    39, 85,
    39, 86,
    39, 87,
    39, 88,
    39, 89,
    39, 90,
    39, 91,
    40, 34,
    44, 3,
    44, 5,
    44, 8,
    44, 11,
    44, 12,
    44, 14,
    44, 17,
    44, 23,
    44, 25,
    44, 26,
    44, 29,
    44, 36,
    44, 43,
    44, 48,
    44, 50,
    44, 52,
    44, 63,
    44, 65,
    44, 66,
    44, 68,
    44, 69,
    44, 70,
    44, 71,
    44, 72,
    44, 80,
    44, 82,
    44, 84,
    44, 85,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 11,
    45, 12,
    45, 14,
    45, 18,
    45, 21,
    45, 24,
    45, 29,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 59,
    45, 63,
    45, 65,
    45, 84,
    45, 85,
    45, 87,
    45, 91,
    48, 34,
    48, 48,
    48, 53,
    48, 57,
    48, 58,
    48, 80,
    49, 13,
    49, 15,
    49, 16,
    49, 19,
    49, 20,
    49, 24,
    49, 34,
    49, 43,
    49, 57,
    49, 58,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 71,
    49, 72,
    49, 78,
    49, 79,
    49, 80,
    49, 82,
    49, 83,
    49, 84,
    50, 34,
    50, 53,
    50, 58,
    51, 3,
    51, 8,
    51, 11,
    51, 13,
    51, 15,
    51, 53,
    51, 58,
    51, 59,
    51, 63,
    51, 65,
    51, 66,
    51, 68,
    51, 69,
    51, 70,
    51, 72,
    51, 80,
    51, 82,
    51, 84,
    51, 91,
    52, 58,
    53, 12,
    53, 13,
    53, 14,
    53, 15,
    53, 19,
    53, 20,
    53, 24,
    53, 29,
    53, 34,
    53, 43,
    53, 48,
    53, 50,
    53, 53,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    55, 13,
    55, 15,
    55, 16,
    55, 19,
    55, 20,
    55, 34,
    55, 43,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 84,
    56, 34,
    56, 66,
    56, 68,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 84,
    57, 3,
    57, 8,
    57, 11,
    57, 12,
    57, 14,
    57, 29,
    57, 43,
    57, 48,
    57, 50,
    57, 63,
    57, 65,
    57, 66,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 84,
    57, 87,
    58, 5,
    58, 12,
    58, 13,
    58, 14,
    58, 15,
    58, 16,
    58, 17,
    58, 19,
    58, 20,
    58, 23,
    58, 25,
    58, 26,
    58, 29,
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
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    59, 24,
    63, 16,
    63, 20,
    63, 34,
    63, 43,
    63, 57,
    63, 69,
    65, 16,
    65, 20,
    65, 34,
    65, 43,
    65, 57,
    65, 69,
    66, 18,
    66, 53,
    66, 58,
    67, 3,
    67, 8,
    67, 11,
    67, 18,
    67, 53,
    67, 55,
    67, 57,
    67, 58,
    67, 63,
    67, 65,
    67, 66,
    67, 70,
    67, 80,
    67, 82,
    67, 84,
    68, 18,
    68, 53,
    68, 55,
    68, 57,
    68, 58,
    68, 69,
    68, 70,
    68, 80,
    70, 18,
    70, 53,
    70, 55,
    70, 57,
    70, 58,
    70, 66,
    70, 69,
    70, 82,
    70, 89,
    71, 3,
    71, 8,
    71, 11,
    71, 13,
    71, 15,
    71, 24,
    71, 53,
    71, 55,
    71, 57,
    71, 58,
    71, 63,
    71, 65,
    71, 66,
    71, 67,
    71, 68,
    71, 69,
    71, 70,
    71, 71,
    71, 73,
    71, 76,
    71, 80,
    71, 82,
    71, 84,
    71, 85,
    71, 89,
    73, 18,
    73, 53,
    73, 55,
    73, 58,
    76, 18,
    76, 58,
    76, 84,
    77, 66,
    77, 73,
    77, 76,
    77, 77,
    77, 80,
    77, 82,
    78, 18,
    78, 53,
    78, 55,
    78, 58,
    79, 18,
    79, 53,
    79, 55,
    79, 58,
    80, 18,
    80, 48,
    80, 53,
    80, 55,
    80, 57,
    80, 58,
    80, 73,
    80, 76,
    80, 77,
    80, 80,
    80, 87,
    80, 88,
    80, 89,
    80, 90,
    81, 18,
    81, 53,
    81, 55,
    81, 57,
    81, 58,
    82, 75,
    82, 80,
    82, 81,
    83, 13,
    83, 15,
    83, 21,
    83, 53,
    83, 66,
    83, 67,
    83, 68,
    83, 69,
    83, 70,
    83, 80,
    83, 82,
    83, 84,
    83, 87,
    83, 89,
    84, 68,
    85, 13,
    85, 15,
    85, 34,
    87, 13,
    87, 15,
    87, 16,
    87, 34,
    87, 57,
    87, 80,
    88, 80,
    89, 12,
    89, 14,
    89, 29,
    89, 70,
    89, 80,
    89, 91,
    90, 80,
    90, 81,
    91, 4,
    91, 17,
    91, 19,
    91, 21,
    91, 25,
    91, 26,
    91, 27,
    91, 28,
    91, 89,
    91, 91
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -5, -2, -9, -2, -2, -4, 2, -4,
    -5, -2, -9, -2, -2, -4, -5, -2,
    -9, -2, -2, -4, -2, -2, -5, -2,
    5, -11, -5, -14, -5, -4, -5, -4,
    -4, -7, -2, 5, -11, -5, -14, -5,
    -4, -5, 5, 5, 5, -13, -13, -2,
    2, 5, 5, -2, 2, 2, -3, -2,
    2, 2, -2, 2, -6, 2, -5, -12,
    -2, -9, -9, -5, 8, -1, -5, 2,
    2, 2, 2, -2, 2, -5, -2, 2,
    2, 2, -2, -4, -5, -2, -14, -14,
    -9, -9, -9, -7, -5, -5, 2, -5,
    -5, -20, -18, -10, -18, -9, -9, -2,
    -13, -8, -2, -2, -2, -5, -5, -4,
    -2, -5, 2, 4, 4, 4, -9, -9,
    -9, -2, -20, -4, -10, 2, 4, 4,
    -13, -10, -10, -10, -8, -10, -10, -10,
    -8, -8, -10, -10, -8, -10, -10, -5,
    -5, -5, -5, -5, -8, 2, -2, -2,
    -2, -2, -5, -5, -2, -2, -2, -2,
    -5, -2, -4, -2, -2, -2, -2, -2,
    -15, -15, -15, -15, -8, -10, -15, -15,
    -10, -5, -2, -13, -13, -13, -11, -11,
    -11, -4, -4, -9, -5, -4, -4, -20,
    -20, -10, -20, 2, -11, -11, -5, -4,
    -5, 2, -5, -3, -8, -5, -4, -3,
    -14, -14, -7, -2, -4, -4, -18, -15,
    -4, -2, -8, -8, -8, -8, -1, -5,
    -3, -3, -8, -8, -3, -5, -5, -8,
    -4, -2, -2, -2, -2, -2, -2, -5,
    2, -2, -2, -5, -5, -5, -5, -3,
    -5, -5, -5, 2, -4, -2, -11, -4,
    -11, -2, -2, -2, -2, -20, -5, -8,
    -8, 2, -15, -15, -15, -15, -8, -10,
    -10, -15, -10, -15, -10, -15, -10, -10,
    -10, -10, -10, -10, -5, -5, -7, -2,
    -2, -18, -8, -2, -10, -2, -10, -3,
    -10, -10, -10, -10, -10, -10, -10, -5,
    -10, -10, -10, -2, -2, -2, -2, -4,
    -4, -2, -5, -2, -2, -2, -2, -2,
    -2, -2, -2, -5, -2, -2, -2, -4,
    -5, -14, -7, -14, -13, -4, -5, -5,
    -4, -4, -4, -5, -20, -4, -2, -9,
    -4, -4, -4, -13, -13, -13, -13, -8,
    -5, -5, -13, -5, -13, -5, -13, -5,
    2, -5, -2, -9, -2, -2, -4, -5,
    -2, -9, -2, -2, -4, -4, -4, -7,
    -4, -4, -4, -4, -5, -2, -2, -7,
    -4, -4, -3, -3, -3, -3, -3, -4,
    -5, -2, -2, -7, -3, -3, -3, -4,
    -5, -2, -2, -7, -3, -3, -3, -5,
    4, 4, 4, -4, -4, 4, 5, 4,
    4, 7, 4, 4, -5, 4, -5, -5,
    -5, 2, 4, 4, -5, -5, -5, 2,
    4, -2, -4, -2, -4, -2, -2, -2,
    -5, -5, -5, -5, -5, -5, -2, -4,
    -2, -4, -2, -4, -2, -4, -4, -3,
    -5, -2, -5, -7, -5, -5, -5, -3,
    -5, -3, -5, -5, -4, -5, -2, -2,
    -7, 2, -3, 2, -9, -9, 2, 2,
    -8, 2, -8, -8, -8, -8, -8, -5,
    4, 2, -3, -4, -4, -2, -5, -5,
    -5, -5, -2, -5, -3, -2, -2, -2,
    -5, -5, 2, -5, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 519,
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
const lv_font_t ui_font_TahoMaiBold16 = {
#else
lv_font_t ui_font_TahoMaiBold16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_TAHOMAIBOLD16*/

