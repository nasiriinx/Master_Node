/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:\Users\nsiri\OneDrive\Desktop\assets\Arrows.otf -o C:\Users\nsiri\OneDrive\Desktop\assets\ui_font_Arrow18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_ARROW18
#define UI_FONT_ARROW18 1
#endif

#if UI_FONT_ARROW18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0x4, 0x0, 0x6f, 0xff, 0x0, 0x60,
    0x4, 0x0, 0x0,

    /* U+0042 "B" */
    0x0, 0x2, 0x0, 0x60, 0xf, 0xff, 0x60, 0x2,
    0x0, 0x0, 0x0,

    /* U+0043 "C" */
    0x10, 0x71, 0xf0, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40, 0x80,

    /* U+0044 "D" */
    0x10, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0xf8, 0xe0, 0x80,

    /* U+0045 "E" */
    0xf0, 0x70, 0x3c, 0x17, 0x1, 0xc0, 0x70, 0x1c,
    0x7, 0x1, 0x80,

    /* U+0046 "F" */
    0x1, 0x81, 0xc1, 0xc1, 0xc1, 0xc5, 0xc3, 0xc1,
    0xc0, 0xf0, 0x0,

    /* U+0047 "G" */
    0x7, 0x81, 0xc1, 0xe1, 0xd1, 0xc1, 0xc1, 0xc1,
    0xc0, 0xc0, 0x0,

    /* U+0048 "H" */
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x74, 0x1e,
    0x7, 0x7, 0x80,

    /* U+0049 "I" */
    0x0, 0x0, 0xb, 0xff, 0x80, 0x30, 0x4,

    /* U+004A "J" */
    0x0, 0x8, 0x3, 0xff, 0xe0, 0x4, 0x0,

    /* U+004B "K" */
    0x37, 0xc8, 0x42, 0x10, 0x84, 0x21, 0x8,

    /* U+004C "L" */
    0x21, 0x8, 0x42, 0x10, 0x84, 0x27, 0xc8,

    /* U+004D "M" */
    0xe0, 0x60, 0x28, 0x2, 0x0, 0x80, 0x20, 0x8,
    0x2, 0x0, 0x0,

    /* U+004E "N" */
    0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x82, 0x81,
    0x80, 0xe0, 0x0,

    /* U+004F "O" */
    0x3, 0x80, 0xc0, 0xa0, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x0, 0x0,

    /* U+0050 "P" */
    0x0, 0x20, 0x8, 0x2, 0x0, 0x80, 0x20, 0xa,
    0x3, 0x3, 0x80,

    /* U+0051 "Q" */
    0x13, 0x7d, 0x0,

    /* U+0052 "R" */
    0x5, 0xf6, 0x40,

    /* U+0053 "S" */
    0x30, 0xf3, 0xf0,

    /* U+0054 "T" */
    0xfc, 0xf0, 0xc0,

    /* U+0055 "U" */
    0xf7, 0x31, 0x0, 0x0,

    /* U+0056 "V" */
    0x4, 0x31, 0xcf, 0x0,

    /* U+0057 "W" */
    0x79, 0xc6, 0x10, 0x0,

    /* U+0058 "X" */
    0x0, 0x46, 0x77, 0x80,

    /* U+0059 "Y" */
    0x4, 0x0, 0xf8, 0x4, 0xc0, 0x2, 0x0, 0x38,
    0x1, 0x80, 0x18, 0x1, 0xc0, 0x34, 0x2, 0x30,
    0xc1, 0xf8,

    /* U+005A "Z" */
    0x2, 0x1, 0xf0, 0x32, 0x4, 0x0, 0xc0, 0x8,
    0x1, 0x80, 0x18, 0x1, 0xc0, 0x34, 0x2, 0x30,
    0xc1, 0xf0,

    /* U+0061 "a" */
    0x80, 0xf, 0x0, 0xfc, 0xf, 0xf3, 0xf0, 0xf0,
    0x20, 0x0,

    /* U+0062 "b" */
    0x0, 0x0, 0x3c, 0x7e, 0x3f, 0x80, 0xf8, 0x3,
    0x80, 0x8,

    /* U+0063 "c" */
    0x0, 0x41, 0xc, 0x30, 0xe7, 0x9e, 0x6f, 0x18,
    0x40,

    /* U+0064 "d" */
    0x2, 0x1c, 0xde, 0x79, 0xe3, 0x8c, 0x30, 0x42,
    0x0,

    /* U+0065 "e" */
    0x40, 0xe, 0x0, 0xf0, 0xf, 0x81, 0xfc, 0x18,
    0x3, 0x0, 0x20, 0x4, 0x0, 0x0,

    /* U+0066 "f" */
    0x0, 0x0, 0x80, 0x10, 0x6, 0x0, 0xc0, 0x3f,
    0x87, 0xc1, 0xe0, 0x70, 0x8, 0x0,

    /* U+0067 "g" */
    0x0, 0x40, 0x38, 0x1e, 0xf, 0x87, 0xf0, 0xc,
    0x1, 0x80, 0x20, 0x4, 0x0, 0x0,

    /* U+0068 "h" */
    0x0, 0x0, 0x80, 0x10, 0x3, 0x0, 0x60, 0xfe,
    0x7, 0xc0, 0x3c, 0x1, 0xc0, 0x8,

    /* U+0069 "i" */
    0x7, 0x80, 0xc3, 0x8, 0x4, 0x40, 0x24, 0x0,
    0xa0, 0x7, 0x80, 0x8, 0x0,

    /* U+006A "j" */
    0xf, 0x1, 0x86, 0x10, 0x8, 0x80, 0x48, 0x1,
    0x40, 0x8, 0x0, 0xe0, 0x2,

    /* U+006B "k" */
    0x40, 0x7, 0x0, 0x10, 0x2, 0x80, 0x16, 0x1,
    0x90, 0x8, 0x61, 0x81, 0xf8,

    /* U+006C "l" */
    0x0, 0x10, 0x1, 0xe0, 0x5, 0x0, 0x2c, 0x3,
    0x20, 0x10, 0xc3, 0x1, 0xf0,

    /* U+006D "m" */
    0x40, 0xf8, 0x4c, 0x2, 0x3, 0x1, 0x1, 0x1,
    0x3, 0x2, 0xc, 0x38,

    /* U+006E "n" */
    0x2, 0x1f, 0x32, 0x40, 0xc0, 0x80, 0x80, 0x80,
    0xc0, 0x40, 0x30, 0x1c,

    /* U+006F "o" */
    0x30, 0xc, 0x2, 0x3, 0x1, 0x1, 0x1, 0x3,
    0x2, 0x4c, 0xf8, 0x40,

    /* U+0070 "p" */
    0x1c, 0x30, 0x40, 0xc0, 0x80, 0x80, 0x80, 0xc0,
    0x40, 0x32, 0x1f, 0x2,

    /* U+0071 "q" */
    0x10, 0xf, 0x80, 0x30, 0xe2, 0x60, 0xe0, 0x18,
    0x6, 0x1, 0x80, 0xf0, 0x26, 0x30, 0xf8,

    /* U+0072 "r" */
    0x2, 0x7, 0xc3, 0x1, 0x1c, 0x81, 0xa0, 0x38,
    0x6, 0x1, 0xc0, 0x50, 0x32, 0x18, 0x7c,

    /* U+0073 "s" */
    0x1f, 0xc, 0x64, 0xe, 0x1, 0x80, 0x60, 0x18,
    0xf, 0x6, 0x47, 0xc, 0x1, 0xf0, 0x8,

    /* U+0074 "t" */
    0x3e, 0x18, 0xcc, 0xa, 0x1, 0x80, 0x60, 0x1c,
    0x5, 0x3, 0x38, 0x80, 0xc3, 0xe0, 0x40,

    /* U+0075 "u" */
    0x1f, 0x18, 0xfc, 0x1e, 0xf,

    /* U+0076 "v" */
    0x3e, 0x70, 0xb0, 0x3e, 0x10,

    /* U+0077 "w" */
    0xf0, 0xf0, 0x70, 0x5c, 0x63, 0xc0,

    /* U+0078 "x" */
    0x83, 0xe0, 0x74, 0x1d, 0x8f, 0x1e, 0x0,

    /* U+0079 "y" */
    0x1f, 0x3, 0xc, 0x40, 0x2c, 0x3, 0x80, 0x18,
    0x1, 0x80, 0x10, 0x3, 0x0, 0x20, 0x4c, 0xf,
    0x80, 0x40,

    /* U+007A "z" */
    0x1f, 0x3, 0xc, 0x40, 0x2c, 0x3, 0x80, 0x18,
    0x1, 0x80, 0x1c, 0x0, 0x40, 0x3, 0x20, 0x1f,
    0x0, 0x20
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 240, .box_w = 12, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 12, .adv_w = 240, .box_w = 12, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 23, .adv_w = 147, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 147, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 206, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 56, .adv_w = 206, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 67, .adv_w = 206, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 78, .adv_w = 206, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 89, .adv_w = 224, .box_w = 11, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 96, .adv_w = 224, .box_w = 11, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 103, .adv_w = 103, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 103, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 117, .adv_w = 206, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 128, .adv_w = 206, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 139, .adv_w = 206, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 150, .adv_w = 206, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 161, .adv_w = 84, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 164, .adv_w = 84, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 167, .adv_w = 138, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 170, .adv_w = 138, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 173, .adv_w = 120, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 177, .adv_w = 120, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 181, .adv_w = 120, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 185, .adv_w = 120, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 189, .adv_w = 240, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 240, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 213, .box_w = 11, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 235, .adv_w = 213, .box_w = 11, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 245, .adv_w = 130, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 254, .adv_w = 130, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 263, .adv_w = 199, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 199, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 291, .adv_w = 199, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 199, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 319, .adv_w = 240, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 332, .adv_w = 240, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 345, .adv_w = 240, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 358, .adv_w = 240, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 371, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 407, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 419, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 464, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 479, .adv_w = 208, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 484, .adv_w = 208, .box_w = 9, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 489, .adv_w = 208, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 495, .adv_w = 208, .box_w = 10, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 502, .adv_w = 240, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 520, .adv_w = 240, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 1}
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
const lv_font_t ui_font_Arrow18 = {
#else
lv_font_t ui_font_Arrow18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_ARROW18*/

