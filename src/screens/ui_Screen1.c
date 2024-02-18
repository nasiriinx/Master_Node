/* INCLUDE*/
#include "../ui.h"
#include "stdio.h"
#include "data_struct.h"
#include "Arduino.h"

/* GLOBAL */
extern Temperature temp;
extern TempText t_text;
extern Devicename name;


void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);/// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HeaderPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_HeaderPanel, 783);
    lv_obj_set_height(ui_HeaderPanel, 37);
    lv_obj_set_x(ui_HeaderPanel, 0);
    lv_obj_set_y(ui_HeaderPanel, -143);
    lv_obj_set_align(ui_HeaderPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_HeaderPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_HeaderPanel, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HeaderPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_HeaderPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_HeaderPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DateHeader = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_DateHeader, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DateHeader, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DateHeader, 141);
    lv_obj_set_y(ui_DateHeader, -141);
    lv_obj_set_align(ui_DateHeader, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DateHeader, "Wed, January 31 2023, 3:30 PM");
    lv_obj_set_style_text_color(ui_DateHeader, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DateHeader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DateHeader, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Card1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Card1, 143);
    lv_obj_set_height(ui_Card1, 135);
    lv_obj_set_x(ui_Card1, -159);
    lv_obj_set_y(ui_Card1, -54);
    lv_obj_set_align(ui_Card1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Card1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Card1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Card1, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Card1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Card1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Card1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Card1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Card1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArcTemp1 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_ArcTemp1, 90);
    lv_obj_set_height(ui_ArcTemp1, 90);
    lv_obj_set_x(ui_ArcTemp1, -156);
    lv_obj_set_y(ui_ArcTemp1, -52);
    lv_obj_set_align(ui_ArcTemp1, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_ArcTemp1, -30, 30);
    lv_arc_set_value(ui_ArcTemp1, temp.Node1);
    lv_arc_set_bg_angles(ui_ArcTemp1, 100, 99);
    lv_obj_set_style_radius(ui_ArcTemp1, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp1, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ArcTemp1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ArcTemp1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ArcTemp1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ArcTemp1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_ArcTemp1, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_ArcTemp1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_ArcTemp1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp1, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_ArcTemp1, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp1, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_ArcTemp1, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_ArcTemp1, LV_OBJ_FLAG_CLICKABLE);

    ui_ArcBg1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_ArcBg1, 60);
    lv_obj_set_height(ui_ArcBg1, 60);
    lv_obj_set_x(ui_ArcBg1, -155);
    lv_obj_set_y(ui_ArcBg1, -51);
    lv_obj_set_align(ui_ArcBg1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ArcBg1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArcBg1, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcBg1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcBg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_ArcBg1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_ArcBg1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ArcBg1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ArcBg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ArcBg1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1inner1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Arc1inner1, 50);
    lv_obj_set_height(ui_Arc1inner1, 50);
    lv_obj_set_x(ui_Arc1inner1, -155);
    lv_obj_set_y(ui_Arc1inner1, -51);
    lv_obj_set_align(ui_Arc1inner1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc1inner1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Arc1inner1, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc1inner1, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1inner1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Arc1inner1, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc1inner1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc1inner1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc1inner1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempCard1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_TempCard1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempCard1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempCard1, -154);
    lv_obj_set_y(ui_TempCard1, -50);
    lv_obj_set_align(ui_TempCard1, LV_ALIGN_CENTER);
    sprintf(t_text.temp_text1, "%.1f", temp.Node1);
    lv_label_set_text(ui_TempCard1, t_text.temp_text1);
    lv_obj_set_style_text_color(ui_TempCard1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TempCard1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempCard1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_TempCard1, LV_OBJ_FLAG_CLICKABLE);      /// Flags

    ui_DeviceName1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_DeviceName1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DeviceName1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DeviceName1, -158);
    lv_obj_set_y(ui_DeviceName1, -107);
    lv_obj_set_align(ui_DeviceName1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_DeviceName1, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_DeviceName1,"Device1"); 
    lv_obj_set_style_text_color(ui_DeviceName1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DeviceName1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_DeviceName1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DeviceName1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LastUp1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LastUp1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LastUp1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LastUp1, -155);
    lv_obj_set_y(ui_LastUp1, 2);
    lv_obj_set_align(ui_LastUp1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LastUp1, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_LastUp1, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LastUp1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LastUp1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_LastUp1, LV_OBJ_FLAG_CLICKABLE);

    ui_Card2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Card2, 143);
    lv_obj_set_height(ui_Card2, 135);
    lv_obj_set_x(ui_Card2, -12);
    lv_obj_set_y(ui_Card2, -54);
    lv_obj_set_align(ui_Card2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Card2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Card2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Card2, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Card2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Card2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Card2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Card2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Card2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);


    ui_DeviceName2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_DeviceName2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DeviceName2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DeviceName2, -9);
    lv_obj_set_y(ui_DeviceName2, -107);
    lv_obj_set_align(ui_DeviceName2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DeviceName2, "Device2");
    lv_obj_set_style_text_color(ui_DeviceName2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DeviceName2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_DeviceName2, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DeviceName2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArcTemp2 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_ArcTemp2, 90);
    lv_obj_set_height(ui_ArcTemp2, 90);
    lv_obj_set_x(ui_ArcTemp2, -12);
    lv_obj_set_y(ui_ArcTemp2, -51);
    lv_obj_set_align(ui_ArcTemp2, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_ArcTemp2, -30, 30);
    lv_arc_set_value(ui_ArcTemp2, 0);
    lv_arc_set_bg_angles(ui_ArcTemp2, 100, 99);
    lv_obj_set_style_radius(ui_ArcTemp2, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp2, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ArcTemp2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ArcTemp2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ArcTemp2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ArcTemp2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_ArcTemp2, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_ArcTemp2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_ArcTemp2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp2, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_ArcTemp2, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp2, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_ArcTemp2, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_ArcTemp2, LV_OBJ_FLAG_CLICKABLE);

    ui_ArcBg2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_ArcBg2, 60);
    lv_obj_set_height(ui_ArcBg2, 60);
    lv_obj_set_x(ui_ArcBg2, -11);
    lv_obj_set_y(ui_ArcBg2, -51);
    lv_obj_set_align(ui_ArcBg2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ArcBg2, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArcBg2, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcBg2, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcBg2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_ArcBg2, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_ArcBg2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ArcBg2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ArcBg2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ArcBg2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1inner2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Arc1inner2, 50);
    lv_obj_set_height(ui_Arc1inner2, 50);
    lv_obj_set_x(ui_Arc1inner2, -11);
    lv_obj_set_y(ui_Arc1inner2, -51);
    lv_obj_set_align(ui_Arc1inner2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc1inner2, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Arc1inner2, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc1inner2, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1inner2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Arc1inner2, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc1inner2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc1inner2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc1inner2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempCard2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_TempCard2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempCard2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempCard2, -11);
    lv_obj_set_y(ui_TempCard2, -51);
    lv_obj_set_align(ui_TempCard2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TempCard2, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    sprintf(t_text.temp_text2, "%.1f", temp.Node2);
    lv_label_set_text(ui_TempCard2, t_text.temp_text2);
    lv_obj_set_style_text_color(ui_TempCard2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TempCard2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempCard2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LastUp2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LastUp2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LastUp2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LastUp2, -10);
    lv_obj_set_y(ui_LastUp2, 2);
    lv_obj_set_align(ui_LastUp2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LastUp2, "Last update : 3:50PM");
    lv_obj_set_style_text_color(ui_LastUp2, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LastUp2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LastUp2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Card3 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Card3, 143);
    lv_obj_set_height(ui_Card3, 135);
    lv_obj_set_x(ui_Card3, 134);
    lv_obj_set_y(ui_Card3, -54);
    lv_obj_set_align(ui_Card3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Card3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Card3, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Card3, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Card3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Card3, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Card3, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Card3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Card3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DeviceName3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_DeviceName3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DeviceName3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DeviceName3, 136);
    lv_obj_set_y(ui_DeviceName3, -107);
    lv_obj_set_align(ui_DeviceName3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DeviceName3, "Device3");
    lv_obj_set_style_text_color(ui_DeviceName3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DeviceName3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_DeviceName3, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DeviceName3, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArcTemp3 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_ArcTemp3, 90);
    lv_obj_set_height(ui_ArcTemp3, 90);
    lv_obj_set_x(ui_ArcTemp3, 136);
    lv_obj_set_y(ui_ArcTemp3, -51);
    lv_obj_set_align(ui_ArcTemp3, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_ArcTemp3,  -30, 30);
    lv_arc_set_value(ui_ArcTemp3, temp.Node3);
    lv_arc_set_bg_angles(ui_ArcTemp3, 100, 99);
    lv_obj_set_style_radius(ui_ArcTemp3, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp3, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ArcTemp3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ArcTemp3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ArcTemp3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ArcTemp3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_ArcTemp3, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_ArcTemp3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_ArcTemp3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp3, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_ArcTemp3, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp3, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_ArcTemp3, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp3, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_ArcTemp3, LV_OBJ_FLAG_CLICKABLE);

    ui_ArcBg3 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_ArcBg3, 60);
    lv_obj_set_height(ui_ArcBg3, 60);
    lv_obj_set_x(ui_ArcBg3, 136);
    lv_obj_set_y(ui_ArcBg3, -52);
    lv_obj_set_align(ui_ArcBg3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ArcBg3, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArcBg3, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcBg3, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcBg3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_ArcBg3, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_ArcBg3, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ArcBg3, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ArcBg3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ArcBg3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1inner3 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Arc1inner3, 50);
    lv_obj_set_height(ui_Arc1inner3, 50);
    lv_obj_set_x(ui_Arc1inner3, 136);
    lv_obj_set_y(ui_Arc1inner3, -52);
    lv_obj_set_align(ui_Arc1inner3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc1inner3, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Arc1inner3, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc1inner3, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1inner3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Arc1inner3, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc1inner3, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc1inner3, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc1inner3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempCard3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_TempCard3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempCard3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempCard3, 136);
    lv_obj_set_y(ui_TempCard3, -51);
    lv_obj_set_align(ui_TempCard3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TempCard3, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    sprintf(t_text.temp_text3, "%.1f", temp.Node3);
    lv_label_set_text(ui_TempCard3, t_text.temp_text3);
    lv_obj_set_style_text_color(ui_TempCard3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TempCard3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempCard3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LastUp3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LastUp3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LastUp3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LastUp3, 136);
    lv_obj_set_y(ui_LastUp3, 2);
    lv_obj_set_align(ui_LastUp3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LastUp3, "Last update : 3:50PM");
    lv_obj_set_style_text_color(ui_LastUp3, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LastUp3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LastUp3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Card4 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Card4, 143);
    lv_obj_set_height(ui_Card4, 135);
    lv_obj_set_x(ui_Card4, -159);
    lv_obj_set_y(ui_Card4, 83);
    lv_obj_set_align(ui_Card4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Card4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Card4, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Card4, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Card4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Card4, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Card4, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Card4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Card4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DeviceName4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_DeviceName4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DeviceName4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DeviceName4, -158);
    lv_obj_set_y(ui_DeviceName4, 30);
    lv_obj_set_align(ui_DeviceName4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DeviceName4, "Device4");
    lv_obj_set_style_text_color(ui_DeviceName4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DeviceName4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_DeviceName4, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DeviceName4, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArcTemp4 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_ArcTemp4, 90);
    lv_obj_set_height(ui_ArcTemp4, 90);
    lv_obj_set_x(ui_ArcTemp4, -158);
    lv_obj_set_y(ui_ArcTemp4, 88);
    lv_obj_set_align(ui_ArcTemp4, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_ArcTemp4,  -30, 30);
    lv_arc_set_value(ui_ArcTemp4, temp.Node2);
    lv_arc_set_bg_angles(ui_ArcTemp4, 100, 99);
    lv_obj_set_style_radius(ui_ArcTemp4, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp4, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ArcTemp4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ArcTemp4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ArcTemp4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ArcTemp4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_ArcTemp4, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_ArcTemp4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_ArcTemp4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp4, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_ArcTemp4, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp4, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_ArcTemp4, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp4, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp4, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_ArcTemp4, LV_OBJ_FLAG_CLICKABLE);

    ui_ArcBg4 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_ArcBg4, 60);
    lv_obj_set_height(ui_ArcBg4, 60);
    lv_obj_set_x(ui_ArcBg4, -158);
    lv_obj_set_y(ui_ArcBg4, 88);
    lv_obj_set_align(ui_ArcBg4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ArcBg4, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArcBg4, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcBg4, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcBg4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_ArcBg4, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_ArcBg4, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ArcBg4, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ArcBg4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ArcBg4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1inner4 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Arc1inner4, 50);
    lv_obj_set_height(ui_Arc1inner4, 50);
    lv_obj_set_x(ui_Arc1inner4, -158);
    lv_obj_set_y(ui_Arc1inner4, 88);
    lv_obj_set_align(ui_Arc1inner4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc1inner4, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Arc1inner4, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc1inner4, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1inner4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Arc1inner4, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc1inner4, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc1inner4, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc1inner4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempCard4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_TempCard4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempCard4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempCard4, -158);
    lv_obj_set_y(ui_TempCard4, 88);
    lv_obj_set_align(ui_TempCard4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TempCard4, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    sprintf(t_text.temp_text4, "%.1f", temp.Node4);
    lv_label_set_text(ui_TempCard4, t_text.temp_text4);
    lv_obj_set_style_text_color(ui_TempCard4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TempCard4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempCard4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LastUp4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LastUp4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LastUp4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LastUp4, -158);
    lv_obj_set_y(ui_LastUp4, 141);
    lv_obj_set_align(ui_LastUp4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LastUp4, "Last update : 3:50PM");
    lv_obj_set_style_text_color(ui_LastUp4, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LastUp4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LastUp4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Card5 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Card5, 143);
    lv_obj_set_height(ui_Card5, 135);
    lv_obj_set_x(ui_Card5, -12);
    lv_obj_set_y(ui_Card5, 83);
    lv_obj_set_align(ui_Card5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Card5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Card5, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Card5, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Card5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Card5, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Card5, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Card5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Card5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DeviceName5 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_DeviceName5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DeviceName5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DeviceName5, -9);
    lv_obj_set_y(ui_DeviceName5, 30);
    lv_obj_set_align(ui_DeviceName5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DeviceName5, "Device5");
    lv_obj_set_style_text_color(ui_DeviceName5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DeviceName5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_DeviceName5, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DeviceName5, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArcTemp5 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_ArcTemp5, 90);
    lv_obj_set_height(ui_ArcTemp5, 90);
    lv_obj_set_x(ui_ArcTemp5, -9);
    lv_obj_set_y(ui_ArcTemp5, 88);
    lv_obj_set_align(ui_ArcTemp5, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_ArcTemp5,  -30, 30);
    lv_arc_set_value(ui_ArcTemp5, temp.Node2);
    lv_arc_set_bg_angles(ui_ArcTemp5, 100, 99);
    lv_obj_set_style_radius(ui_ArcTemp5, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp5, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ArcTemp5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ArcTemp5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ArcTemp5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ArcTemp5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_ArcTemp5, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_ArcTemp5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_ArcTemp5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp5, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_ArcTemp5, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp5, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_ArcTemp5, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp5, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp5, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_ArcTemp5, LV_OBJ_FLAG_CLICKABLE);

    ui_ArcBg5 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_ArcBg5, 60);
    lv_obj_set_height(ui_ArcBg5, 60);
    lv_obj_set_x(ui_ArcBg5, -9);
    lv_obj_set_y(ui_ArcBg5, 88);
    lv_obj_set_align(ui_ArcBg5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ArcBg5, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArcBg5, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcBg5, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcBg5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_ArcBg5, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_ArcBg5, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ArcBg5, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ArcBg5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ArcBg5, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1inner5 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Arc1inner5, 50);
    lv_obj_set_height(ui_Arc1inner5, 50);
    lv_obj_set_x(ui_Arc1inner5, -9);
    lv_obj_set_y(ui_Arc1inner5, 88);
    lv_obj_set_align(ui_Arc1inner5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc1inner5, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Arc1inner5, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc1inner5, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1inner5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Arc1inner5, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc1inner5, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc1inner5, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc1inner5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempCard5 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_TempCard5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempCard5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempCard5, -9);
    lv_obj_set_y(ui_TempCard5, 88);
    lv_obj_set_align(ui_TempCard5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TempCard5, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    sprintf(t_text.temp_text5, "%.1f", temp.Node5);
    lv_label_set_text(ui_TempCard5, t_text.temp_text5);
    lv_obj_set_style_text_color(ui_TempCard5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TempCard5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempCard5, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LastUp5 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LastUp5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LastUp5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LastUp5, -9);
    lv_obj_set_y(ui_LastUp5, 141);
    lv_obj_set_align(ui_LastUp5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LastUp5, "Last update : 3:50PM");
    lv_obj_set_style_text_color(ui_LastUp5, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LastUp5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LastUp5, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Card6 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Card6, 143);
    lv_obj_set_height(ui_Card6, 135);
    lv_obj_set_x(ui_Card6, 135);
    lv_obj_set_y(ui_Card6, 83);
    lv_obj_set_align(ui_Card6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Card6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Card6, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Card6, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Card6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Card6, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Card6, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Card6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Card6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DeviceName6 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_DeviceName6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DeviceName6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DeviceName6, 136);
    lv_obj_set_y(ui_DeviceName6, 30);
    lv_obj_set_align(ui_DeviceName6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DeviceName6, "Device6");
    lv_obj_set_style_text_color(ui_DeviceName6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DeviceName6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_DeviceName6, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DeviceName6, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArcTemp6 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_ArcTemp6, 90);
    lv_obj_set_height(ui_ArcTemp6, 90);
    lv_obj_set_x(ui_ArcTemp6, 136);
    lv_obj_set_y(ui_ArcTemp6, 88);
    lv_obj_set_align(ui_ArcTemp6, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_ArcTemp6,  -30, 30);
    lv_arc_set_value(ui_ArcTemp6, temp.Node2);
    lv_arc_set_bg_angles(ui_ArcTemp6, 100, 99);
    lv_obj_set_style_radius(ui_ArcTemp6, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp6, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ArcTemp6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ArcTemp6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ArcTemp6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ArcTemp6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_ArcTemp6, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_ArcTemp6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_ArcTemp6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp6, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_ArcTemp6, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_ArcTemp6, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_ArcTemp6, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcTemp6, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcTemp6, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_ArcTemp6, LV_OBJ_FLAG_CLICKABLE);

    ui_ArcBg6 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_ArcBg6, 60);
    lv_obj_set_height(ui_ArcBg6, 60);
    lv_obj_set_x(ui_ArcBg6, 136);
    lv_obj_set_y(ui_ArcBg6, 88);
    lv_obj_set_align(ui_ArcBg6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ArcBg6, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArcBg6, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArcBg6, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArcBg6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_ArcBg6, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_ArcBg6, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ArcBg6, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ArcBg6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ArcBg6, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1inner6 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Arc1inner6, 50);
    lv_obj_set_height(ui_Arc1inner6, 50);
    lv_obj_set_x(ui_Arc1inner6, 136);
    lv_obj_set_y(ui_Arc1inner6, 88);
    lv_obj_set_align(ui_Arc1inner6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc1inner6, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Arc1inner6, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc1inner6, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1inner6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Arc1inner6, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc1inner6, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc1inner6, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc1inner6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempCard6 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_TempCard6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempCard6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempCard6, 136);
    lv_obj_set_y(ui_TempCard6, 88);
    lv_obj_set_align(ui_TempCard6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TempCard6, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    sprintf(t_text.temp_text6, "%.1f", temp.Node6);
    lv_label_set_text(ui_TempCard6, t_text.temp_text6);
    lv_obj_set_style_text_color(ui_TempCard6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TempCard6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempCard6, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LastUp6 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LastUp6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LastUp6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LastUp6, 136);
    lv_obj_set_y(ui_LastUp6, 141);
    lv_obj_set_align(ui_LastUp6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LastUp6, "Last update : 3:50PM");
    lv_obj_set_style_text_color(ui_LastUp6, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LastUp6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LastUp6, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_changetoScr2btn = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_changetoScr2btn, 22);
    lv_obj_set_height(ui_changetoScr2btn, 30);
    lv_obj_set_x(ui_changetoScr2btn, 222);
    lv_obj_set_y(ui_changetoScr2btn, 16);
    lv_obj_set_align(ui_changetoScr2btn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_changetoScr2btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_changetoScr2btn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_changetoScr2btn, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_changetoScr2btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_changetoScr2btn, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_changetoScr2btn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_changetoScr2btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_changetoScr2btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_changetoScr2btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_changetoScr2btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_t * label_sym_btn;
    label_sym_btn = lv_label_create(ui_changetoScr2btn);
    lv_label_set_text(label_sym_btn,">");
    lv_obj_set_style_text_font(label_sym_btn, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_sym_btn);
    
    lv_obj_add_event_cb(ui_changetoScr2btn, ui_event_changetoScr2btn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Card1,ui_Card1_event,LV_EVENT_ALL,NULL);
    lv_obj_add_event_cb(ui_Card2,ui_Card2_event,LV_EVENT_ALL,NULL);
    lv_obj_add_event_cb(ui_Card3,ui_Card3_event,LV_EVENT_ALL,NULL);
    lv_obj_add_event_cb(ui_Card4,ui_Card4_event,LV_EVENT_ALL,NULL);
    lv_obj_add_event_cb(ui_Card5,ui_Card5_event,LV_EVENT_ALL,NULL);
    lv_obj_add_event_cb(ui_Card6,ui_Card6_event,LV_EVENT_ALL,NULL);

}
