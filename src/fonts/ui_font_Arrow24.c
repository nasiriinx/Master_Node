/*******************************************************************************
 * Size: 24 px
 * Bpp: 1
 * Opts: --bpp 1 --size 24 --font C:\Users\nsiri\OneDrive\Desktop\assets\Arrows.otf -o C:\Users\nsiri\OneDrive\Desktop\assets\ui_font_Arrow24.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_ARROW24
#define UI_FONT_ARROW24 1
#endif

#if UI_FONT_ARROW24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0041 "A" */
    0x0, 0x8, 0x0, 0x6, 0x0, 0x3, 0x9f, 0xff,
    0xef, 0xff, 0xf0, 0x0, 0x70, 0x0, 0x30, 0x0,
    0x10,

    /* U+0042 "B" */
    0x8, 0x0, 0xc, 0x0, 0xe, 0x0, 0xf, 0xff,
    0xf7, 0xff, 0xf9, 0xc0, 0x0, 0x60, 0x0, 0x10,
    0x0,

    /* U+0043 "C" */
    0x0, 0x18, 0x3c, 0x7e, 0xff, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18,

    /* U+0044 "D" */
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0xff, 0x7e, 0x3c, 0x18,
    0x0,

    /* U+0045 "E" */
    0xfc, 0x7, 0xc0, 0x3c, 0x1, 0xf0, 0xd, 0xc0,
    0x47, 0x0, 0x1c, 0x0, 0x70, 0x1, 0xc0, 0x7,
    0x0, 0x1c, 0x0, 0x60, 0x0, 0x0,

    /* U+0046 "F" */
    0x0, 0x0, 0x1, 0x80, 0x1c, 0x1, 0xc0, 0x1c,
    0x1, 0xc0, 0x1c, 0x11, 0xc0, 0xdc, 0x7, 0xc0,
    0x3c, 0x1, 0xf0, 0xf, 0xc0, 0x0,

    /* U+0047 "G" */
    0x1, 0xf8, 0x7, 0xc0, 0x1e, 0x1, 0xf0, 0x1d,
    0x81, 0xc4, 0x1c, 0x1, 0xc0, 0x1c, 0x1, 0xc0,
    0x1c, 0x0, 0xc0, 0x0, 0x0, 0x0,

    /* U+0048 "H" */
    0x0, 0x3, 0x0, 0x1c, 0x0, 0x70, 0x1, 0xc0,
    0x7, 0x0, 0x1c, 0x0, 0x71, 0x1, 0xd8, 0x7,
    0xc0, 0x1e, 0x1, 0xf0, 0x1f, 0x80,

    /* U+0049 "I" */
    0x0, 0x8, 0x0, 0xc, 0x0, 0xe, 0xff, 0xff,
    0x0, 0xe, 0x0, 0xc, 0x0, 0x8,

    /* U+004A "J" */
    0x0, 0x0, 0x20, 0x0, 0x60, 0x0, 0xff, 0xff,
    0x60, 0x0, 0x20, 0x0, 0x0, 0x0,

    /* U+004B "K" */
    0x10, 0x71, 0xf7, 0xf1, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+004C "L" */
    0x10, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40, 0x81, 0xf, 0x8e, 0x8,

    /* U+004D "M" */
    0xf0, 0xe, 0x0, 0xe0, 0x9, 0x0, 0x8, 0x0,
    0x40, 0x2, 0x0, 0x10, 0x0, 0x80, 0x4, 0x0,
    0x20, 0x0,

    /* U+004E "N" */
    0x0, 0x0, 0x2, 0x0, 0x40, 0x8, 0x1, 0x0,
    0x20, 0x4, 0x0, 0x80, 0x90, 0xe, 0x0, 0xe0,
    0xf, 0x0,

    /* U+004F "O" */
    0x0, 0xf0, 0x7, 0x0, 0x70, 0x9, 0x1, 0x0,
    0x20, 0x4, 0x0, 0x80, 0x10, 0x2, 0x0, 0x40,
    0x0, 0x0,

    /* U+0050 "P" */
    0x0, 0x4, 0x0, 0x20, 0x1, 0x0, 0x8, 0x0,
    0x40, 0x2, 0x0, 0x10, 0x0, 0x90, 0x7, 0x0,
    0x70, 0xf,

    /* U+0051 "Q" */
    0x86, 0x39, 0xef, 0x73, 0x10, 0x0,

    /* U+0052 "R" */
    0x8, 0xce, 0xf7, 0x9c, 0x61, 0x0,

    /* U+0053 "S" */
    0x0, 0x6, 0x7, 0x87, 0xe7, 0xf8,

    /* U+0054 "T" */
    0x7f, 0x9f, 0x87, 0x81, 0x80, 0x0,

    /* U+0055 "U" */
    0xff, 0xef, 0x38, 0xc2, 0x0,

    /* U+0056 "V" */
    0x83, 0xe, 0x3c, 0xfb, 0xf0,

    /* U+0057 "W" */
    0xfd, 0xf3, 0xc7, 0xc, 0x10,

    /* U+0058 "X" */
    0x4, 0x31, 0xcf, 0x7f, 0xf0,

    /* U+0059 "Y" */
    0x0, 0x0, 0x4, 0x0, 0x1f, 0x0, 0x31, 0x80,
    0x20, 0x80, 0x0, 0x80, 0x1, 0x40, 0x1, 0x80,
    0x3, 0x0, 0x6, 0x0, 0xc, 0x0, 0x14, 0x0,
    0x48, 0x0, 0x88, 0x2, 0xc, 0x18, 0x7, 0xc0,

    /* U+005A "Z" */
    0x0, 0x0, 0x1, 0x0, 0x1f, 0x0, 0xc6, 0x2,
    0x8, 0x8, 0x0, 0x10, 0x0, 0x40, 0x1, 0x80,
    0x3, 0x0, 0x6, 0x0, 0xc, 0x0, 0x14, 0x0,
    0x48, 0x0, 0x88, 0x2, 0xc, 0x18, 0x7, 0xc0,

    /* U+0061 "a" */
    0xc0, 0x0, 0xf8, 0x0, 0xfe, 0x0, 0xff, 0xc1,
    0xff, 0xc7, 0xf8, 0xf, 0x0, 0x30, 0x0, 0x80,
    0x0,

    /* U+0062 "b" */
    0x0, 0xc, 0x1, 0xf0, 0x1f, 0xc3, 0xff, 0xf,
    0xfe, 0x1, 0xfe, 0x0, 0x3e, 0x0, 0xc, 0x0,
    0x4,

    /* U+0063 "c" */
    0x8, 0x4, 0x2, 0x1, 0x81, 0xc0, 0xe0, 0x70,
    0x7c, 0x3e, 0x1f, 0x1f, 0xce, 0xe6, 0x36, 0xa,
    0x2,

    /* U+0064 "d" */
    0x0, 0xe0, 0x98, 0xce, 0xe7, 0xf1, 0xf0, 0xf8,
    0x7c, 0x1c, 0xe, 0x7, 0x1, 0x80, 0x80, 0x40,
    0x20,

    /* U+0065 "e" */
    0x40, 0x1, 0xc0, 0x3, 0xc0, 0x7, 0xc0, 0x1f,
    0xc0, 0x3f, 0xc0, 0xff, 0x81, 0xc0, 0x7, 0x0,
    0xc, 0x0, 0x10, 0x0, 0x40, 0x0, 0x0,

    /* U+0066 "f" */
    0x0, 0x0, 0x4, 0x0, 0x30, 0x0, 0xc0, 0x7,
    0x0, 0x1c, 0x0, 0xff, 0x83, 0xfc, 0x1f, 0xc0,
    0x7c, 0x3, 0xc0, 0x1c, 0x0, 0x40, 0x0,

    /* U+0067 "g" */
    0x0, 0x8, 0x0, 0xe0, 0xf, 0x0, 0xf8, 0xf,
    0xe0, 0xff, 0x7, 0xfc, 0x0, 0xe0, 0x3, 0x80,
    0xc, 0x0, 0x20, 0x0, 0x80, 0x0, 0x0,

    /* U+0068 "h" */
    0x0, 0x0, 0x8, 0x0, 0x30, 0x0, 0xc0, 0x3,
    0x80, 0xe, 0x7, 0xfc, 0xf, 0xf0, 0xf, 0xe0,
    0xf, 0x80, 0xf, 0x0, 0xe, 0x0, 0x8,

    /* U+0069 "i" */
    0x1, 0xf0, 0x3, 0x6, 0x2, 0x0, 0x82, 0x0,
    0x21, 0x0, 0x11, 0x0, 0x4, 0x80, 0x2, 0x40,
    0x1, 0xf8, 0x0, 0x38, 0x0, 0x8, 0x0, 0x0,

    /* U+006A "j" */
    0x7, 0xc0, 0xc, 0x18, 0x8, 0x2, 0x8, 0x0,
    0x84, 0x0, 0x44, 0x0, 0x12, 0x0, 0x9, 0x0,
    0x4, 0x0, 0xf, 0x80, 0x3, 0x80, 0x0, 0x80,

    /* U+006B "k" */
    0x20, 0x0, 0x38, 0x0, 0x3e, 0x0, 0x4, 0x0,
    0x12, 0x0, 0x9, 0x0, 0x4, 0x40, 0x4, 0x20,
    0x2, 0x8, 0x2, 0x3, 0x6, 0x0, 0x7c, 0x0,

    /* U+006C "l" */
    0x0, 0x2, 0x0, 0x3, 0x80, 0x3, 0xf0, 0x0,
    0x48, 0x0, 0x24, 0x0, 0x11, 0x0, 0x10, 0x80,
    0x18, 0x20, 0x8, 0xc, 0x18, 0x1, 0xf0, 0x0,

    /* U+006D "m" */
    0x20, 0xc, 0x3, 0xf0, 0x31, 0x82, 0x18, 0x0,
    0x80, 0x10, 0x1, 0x0, 0x20, 0x4, 0x0, 0x80,
    0x10, 0x4, 0x0, 0x80, 0x60, 0x18, 0x1c, 0x0,

    /* U+006E "n" */
    0x0, 0x80, 0x18, 0x1f, 0x8c, 0x62, 0x8, 0x80,
    0x10, 0x4, 0x0, 0x80, 0x10, 0x2, 0x0, 0x40,
    0x4, 0x0, 0x80, 0x8, 0x0, 0xc0, 0x7, 0x0,

    /* U+006F "o" */
    0x1c, 0x0, 0x60, 0x6, 0x0, 0x20, 0x4, 0x0,
    0x40, 0x8, 0x1, 0x0, 0x20, 0x4, 0x1, 0x0,
    0x22, 0x18, 0xc6, 0x3f, 0x3, 0x0, 0x20, 0x0,

    /* U+0070 "p" */
    0x7, 0x3, 0x0, 0x80, 0x20, 0x4, 0x1, 0x0,
    0x20, 0x4, 0x0, 0x80, 0x10, 0x1, 0x0, 0x20,
    0x2, 0x8, 0x31, 0x81, 0xf8, 0x6, 0x0, 0x80,

    /* U+0071 "q" */
    0x0, 0x0, 0x40, 0x7, 0xc0, 0x11, 0x80, 0x2,
    0xe, 0x8, 0x80, 0x48, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x1, 0x60, 0x9, 0x0,
    0x86, 0x18, 0x1f, 0x0,

    /* U+0072 "r" */
    0x0, 0x0, 0x1, 0x0, 0x7e, 0x6, 0x10, 0x30,
    0x1, 0x7, 0x84, 0x3, 0x20, 0x2, 0x80, 0xe,
    0x0, 0x18, 0x0, 0x60, 0x1, 0x40, 0x5, 0x0,
    0x22, 0x0, 0x86, 0xc, 0x7, 0xe0,

    /* U+0073 "s" */
    0x7, 0xc0, 0x60, 0xc3, 0x0, 0x90, 0x2, 0x40,
    0x6, 0x0, 0x18, 0x0, 0x60, 0x1, 0x80, 0xe,
    0x0, 0x24, 0x3, 0x10, 0x78, 0x30, 0x0, 0x61,
    0x0, 0x7e, 0x0, 0x10, 0x0, 0x0,

    /* U+0074 "t" */
    0x1f, 0x1, 0x86, 0x10, 0x9, 0x80, 0x28, 0x1,
    0x40, 0x6, 0x0, 0x30, 0x1, 0x80, 0xa, 0x0,
    0x48, 0x4, 0x38, 0x20, 0x2, 0x4, 0x60, 0x7c,
    0x1, 0x0, 0x0, 0x0,

    /* U+0075 "u" */
    0xf, 0x81, 0xff, 0x5c, 0x3e, 0xc0, 0x7c, 0x7,
    0xe0, 0x7f, 0x0, 0x0,

    /* U+0076 "v" */
    0xf, 0x85, 0xff, 0x3e, 0x1d, 0xc0, 0x6f, 0x3,
    0xfc, 0xc, 0x0, 0x60,

    /* U+0077 "w" */
    0x0, 0x1f, 0x80, 0xfc, 0x7, 0xc0, 0x6f, 0x87,
    0x5f, 0xf0, 0x3e, 0x0,

    /* U+0078 "x" */
    0xc0, 0x6, 0x3, 0xf0, 0x1e, 0xc0, 0x77, 0xf,
    0x9f, 0xf4, 0x3e, 0x0,

    /* U+0079 "y" */
    0x7, 0xc0, 0x30, 0x60, 0x80, 0x22, 0x0, 0x24,
    0x0, 0x50, 0x0, 0x60, 0x0, 0xc0, 0x1, 0x80,
    0x3, 0x0, 0x4, 0x0, 0x10, 0x0, 0x20, 0x20,
    0x80, 0xc6, 0x1, 0xf0, 0x1, 0x0, 0x0, 0x0,

    /* U+007A "z" */
    0x7, 0xc0, 0x30, 0x60, 0x80, 0x22, 0x0, 0x24,
    0x0, 0x50, 0x0, 0x60, 0x0, 0xc0, 0x1, 0x80,
    0x3, 0x0, 0x5, 0x0, 0x2, 0x0, 0x2, 0x8,
    0x3, 0x18, 0x1, 0xf0, 0x0, 0x40, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 192, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 320, .box_w = 17, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 18, .adv_w = 320, .box_w = 17, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 35, .adv_w = 196, .box_w = 8, .box_h = 17, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 52, .adv_w = 196, .box_w = 8, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 274, .box_w = 13, .box_h = 13, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 91, .adv_w = 274, .box_w = 13, .box_h = 13, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 113, .adv_w = 274, .box_w = 13, .box_h = 13, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 135, .adv_w = 274, .box_w = 13, .box_h = 13, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 157, .adv_w = 299, .box_w = 16, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 171, .adv_w = 299, .box_w = 16, .box_h = 7, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 185, .adv_w = 138, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 199, .adv_w = 138, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 213, .adv_w = 275, .box_w = 12, .box_h = 12, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 231, .adv_w = 275, .box_w = 12, .box_h = 12, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 249, .adv_w = 275, .box_w = 12, .box_h = 12, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 267, .adv_w = 275, .box_w = 12, .box_h = 12, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 285, .adv_w = 113, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 291, .adv_w = 113, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 297, .adv_w = 184, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 303, .adv_w = 184, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 309, .adv_w = 160, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 314, .adv_w = 160, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 319, .adv_w = 160, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 324, .adv_w = 160, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 329, .adv_w = 320, .box_w = 15, .box_h = 17, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 361, .adv_w = 320, .box_w = 15, .box_h = 17, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 393, .adv_w = 284, .box_w = 15, .box_h = 9, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 410, .adv_w = 284, .box_w = 15, .box_h = 9, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 427, .adv_w = 174, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 444, .adv_w = 174, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 461, .adv_w = 265, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 484, .adv_w = 265, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 507, .adv_w = 265, .box_w = 14, .box_h = 13, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 530, .adv_w = 265, .box_w = 14, .box_h = 13, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 553, .adv_w = 320, .box_w = 17, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 577, .adv_w = 320, .box_w = 17, .box_h = 11, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 601, .adv_w = 320, .box_w = 17, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 625, .adv_w = 320, .box_w = 17, .box_h = 11, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 649, .adv_w = 224, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 673, .adv_w = 224, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 697, .adv_w = 224, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 224, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 240, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 773, .adv_w = 240, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 803, .adv_w = 240, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 240, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 278, .box_w = 13, .box_h = 7, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 873, .adv_w = 278, .box_w = 13, .box_h = 7, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 885, .adv_w = 278, .box_w = 13, .box_h = 7, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 897, .adv_w = 278, .box_w = 13, .box_h = 7, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 909, .adv_w = 320, .box_w = 15, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 320, .box_w = 15, .box_h = 17, .ofs_x = 2, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 2,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 28,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
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
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 3,
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
const lv_font_t ui_font_Arrow24 = {
#else
lv_font_t ui_font_Arrow24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_ARROW24*/

