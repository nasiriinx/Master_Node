// #include "ui.h"
// #include "lvgl.h"
// #include "stdio.h"


// void ui_InforScr1_screen_init(void){
//     ui_InfoScr1 = lv_obj_create(NULL);
//     lv_obj_clear_flag(ui_InfoScr1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
//     lv_obj_set_style_bg_color(ui_InfoScr1, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_opa(ui_InfoScr1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_main_stop(ui_InfoScr1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_grad_stop(ui_InfoScr1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

//     ui_HeaderPanelInfo1 = lv_obj_create(ui_InfoScr1);
//     lv_obj_set_width(ui_HeaderPanelInfo1, 783);
//     lv_obj_set_height(ui_HeaderPanelInfo1, 37);
//     lv_obj_set_x(ui_HeaderPanelInfo1, 0);
//     lv_obj_set_y(ui_HeaderPanelInfo1, -143);
//     lv_obj_set_align(ui_HeaderPanelInfo1, LV_ALIGN_CENTER);
//     lv_obj_clear_flag(ui_HeaderPanelInfo1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
//     lv_obj_set_style_bg_color(ui_HeaderPanelInfo1, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_opa(ui_HeaderPanelInfo1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_border_color(ui_HeaderPanelInfo1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_border_opa(ui_HeaderPanelInfo1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

//     ui_HeaderPanelInfo1 = lv_label_create(ui_InfoScr1);
//     lv_obj_set_width(ui_HeaderPanelInfo1, LV_SIZE_CONTENT);   /// 1
//     lv_obj_set_height(ui_HeaderPanelInfo1, LV_SIZE_CONTENT);    /// 1
//     lv_obj_set_x(ui_HeaderPanelInfo1, 141);
//     lv_obj_set_y(ui_HeaderPanelInfo1, -141);
//     lv_obj_set_align(ui_HeaderPanelInfo1, LV_ALIGN_CENTER);
//     lv_label_set_text(ui_HeaderPanelInfo1, "Wed, January 31 2023, 3:30 PM");
//     lv_obj_set_style_text_color(ui_HeaderPanelInfo1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_text_opa(ui_HeaderPanelInfo1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_text_font(ui_HeaderPanelInfo1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

//     CardInfo1 = lv_obj_create(ui_InfoScr1);
//     lv_obj_set_width(CardInfo1, 448);
//     lv_obj_set_height(CardInfo1, 268);
//     lv_obj_set_x(CardInfo1, -9);
//     lv_obj_set_y(CardInfo1, 18);
//     lv_obj_set_align(CardInfo1, LV_ALIGN_CENTER);
//     lv_obj_clear_flag(CardInfo1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
//     lv_obj_set_style_radius(CardInfo1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_color(CardInfo1, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_opa(CardInfo1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_grad_color(CardInfo1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_grad_dir(CardInfo1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_border_color(CardInfo1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_border_opa(CardInfo1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

//     CardInfo1 = lv_label_create(ui_InfoScr1);
//     lv_obj_set_width(CardInfo1, LV_SIZE_CONTENT);   /// 1
//     lv_obj_set_height(CardInfo1, LV_SIZE_CONTENT);    /// 1
//     lv_obj_set_x(CardInfo1, 153);
//     lv_obj_set_y(CardInfo1, 142);
//     lv_obj_set_align(CardInfo1, LV_ALIGN_CENTER);
//     lv_label_set_text(CardInfo1, "Last update : 3:50PM");
//     lv_obj_set_style_text_color(CardInfo1, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_text_opa(CardInfo1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_text_font(CardInfo1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

//     ui_TabviewInfo1 = lv_tabview_create(ui_InfoScr1, LV_DIR_TOP, 60);
//     lv_obj_set_width(ui_TabviewInfo1, 255);
//     lv_obj_set_height(ui_TabviewInfo1, 37);
//     lv_obj_set_x(ui_TabviewInfo1, -113);
//     lv_obj_set_y(ui_TabviewInfo1, -143);
//     lv_obj_set_align(ui_TabviewInfo1, LV_ALIGN_CENTER);
//     lv_obj_clear_flag(ui_TabviewInfo1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
//     lv_obj_set_style_bg_color(ui_TabviewInfo1, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_opa(ui_TabviewInfo1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

//     lv_obj_set_style_text_color(lv_tabview_get_tab_btns(ui_TabviewInfo1), lv_color_hex(0xB5B5B5),
//                                 LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_text_opa(lv_tabview_get_tab_btns(ui_TabviewInfo1), 255,  LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_text_font(lv_tabview_get_tab_btns(ui_TabviewInfo1), &lv_font_montserrat_14,
//                                LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_color(lv_tabview_get_tab_btns(ui_TabviewInfo1), lv_color_hex(0x292929),
//                               LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_opa(lv_tabview_get_tab_btns(ui_TabviewInfo1), 50,  LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_border_color(lv_tabview_get_tab_btns(ui_TabviewInfo1), lv_color_hex(0x000000),
//                                   LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_border_opa(lv_tabview_get_tab_btns(ui_TabviewInfo1), 0,  LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_pad_left(lv_tabview_get_tab_btns(ui_TabviewInfo1), 5,  LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_pad_right(lv_tabview_get_tab_btns(ui_TabviewInfo1), 5,  LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_pad_top(lv_tabview_get_tab_btns(ui_TabviewInfo1), 5,  LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_pad_bottom(lv_tabview_get_tab_btns(ui_TabviewInfo1), 25,  LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_pad_row(lv_tabview_get_tab_btns(ui_TabviewInfo1), 5,  LV_PART_MAIN | LV_STATE_DEFAULT);
//     lv_obj_set_style_pad_column(lv_tabview_get_tab_btns(ui_TabviewInfo1), 5,  LV_PART_MAIN | LV_STATE_DEFAULT);

//     lv_obj_set_style_text_color(lv_tabview_get_tab_btns(ui_TabviewInfo1), lv_color_hex(0xFFFFFF),
//                                 LV_PART_ITEMS | LV_STATE_DEFAULT);
//     lv_obj_set_style_text_opa(lv_tabview_get_tab_btns(ui_TabviewInfo1), 255,  LV_PART_ITEMS | LV_STATE_DEFAULT);
//     lv_obj_set_style_text_align(lv_tabview_get_tab_btns(ui_TabviewInfo1), LV_TEXT_ALIGN_CENTER,
//                                 LV_PART_ITEMS | LV_STATE_DEFAULT);
//     lv_obj_set_style_text_font(lv_tabview_get_tab_btns(ui_TabviewInfo1), &lv_font_montserrat_14,
//                                LV_PART_ITEMS | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_color(lv_tabview_get_tab_btns(ui_TabviewInfo1), lv_color_hex(0x292929),
//                               LV_PART_ITEMS | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_opa(lv_tabview_get_tab_btns(ui_TabviewInfo1), 255,  LV_PART_ITEMS | LV_STATE_DEFAULT);

//     ui_Monitoring1 = lv_tabview_add_tab(ui_TabviewInfo1, "Monitor");

//     ui_InfoScr1 = lv_tabview_add_tab(ui_TabviewInfo1, "Info");

//     ui_Add_Device1 = lv_tabview_add_tab(ui_TabviewInfo1, "Add device");

//     TextAreaInfo1 = lv_textarea_create(ui_InfoScr1);
//     lv_obj_set_width(TextAreaInfo1, 292);
//     lv_obj_set_height(TextAreaInfo1, 38);
//     lv_obj_set_x(TextAreaInfo1, -70);
//     lv_obj_set_y(TextAreaInfo1, -83);
//     lv_obj_set_align(TextAreaInfo1, LV_ALIGN_CENTER);
//     lv_textarea_set_text(TextAreaInfo1, "ESP32-Node1");
//     lv_textarea_set_placeholder_text(TextAreaInfo1, "Device name");

//     SaveNamebtn1 = lv_btn_create(ui_InfoScr1);
//     lv_obj_set_width(SaveNamebtn1, 52);
//     lv_obj_set_height(SaveNamebtn1, 38);
//     lv_obj_set_x(SaveNamebtn1, 111);
//     lv_obj_set_y(SaveNamebtn1, -83);
//     lv_obj_set_align(SaveNamebtn1, LV_ALIGN_CENTER);
//     lv_obj_add_flag(SaveNamebtn1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
//     lv_obj_clear_flag(SaveNamebtn1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

//     CancleNamebtn1 = lv_btn_create(ui_InfoScr1);
//     lv_obj_set_width(CancleNamebtn1, 52);
//     lv_obj_set_height(CancleNamebtn1, 38);
//     lv_obj_set_x(CancleNamebtn1, 173);
//     lv_obj_set_y(CancleNamebtn1, -83);
//     lv_obj_set_align(CancleNamebtn1, LV_ALIGN_CENTER);
//     lv_obj_add_flag(CancleNamebtn1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
//     lv_obj_clear_flag(CancleNamebtn1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

//     ChartTempInfo1 = lv_chart_create(ui_InfoScr1);
//     lv_obj_set_width(ChartTempInfo1, 400);
//     lv_obj_set_height(ChartTempInfo1, 167);
//     lv_obj_set_x(ChartTempInfo1, -2);
//     lv_obj_set_y(ChartTempInfo1, 31);
//     lv_obj_set_align(ChartTempInfo1, LV_ALIGN_CENTER);
//     lv_chart_set_type(ChartTempInfo1, LV_CHART_TYPE_LINE);
//     lv_chart_set_point_count(ChartTempInfo1, 20);
//     lv_chart_set_range(ChartTempInfo1, LV_CHART_AXIS_PRIMARY_Y, -20, 10);
//     lv_chart_set_div_line_count(ChartTempInfo1, 10, 10);
//     lv_chart_set_zoom_x(ChartTempInfo1, 250);
//     lv_chart_set_zoom_y(ChartTempInfo1, 250);
//     lv_chart_set_axis_tick(ChartTempInfo1, LV_CHART_AXIS_PRIMARY_X, 2, 1, 10, 10, true, 10);
//     lv_chart_set_axis_tick(ChartTempInfo1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 20);
//     lv_chart_set_axis_tick(ChartTempInfo1, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 5, 2, false, 25);
//     lv_chart_series_t * ChartTempInfo1_series_1 = lv_chart_add_series(ChartTempInfo1, lv_color_hex(0x464B55),
//                                                                  LV_CHART_AXIS_PRIMARY_Y);
//     static lv_coord_t ChartTempInfo1_series_1_array[] = { -2, -5, -3, -8, -10, -15, 1, 5, 2, -4 };
//     lv_chart_set_ext_y_array(ChartTempInfo1, ChartTempInfo1_series_1, ChartTempInfo1_series_1_array);

//     lv_obj_set_style_bg_color(ChartTempInfo1, lv_color_hex(0x464B55), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
//     lv_obj_set_style_bg_opa(ChartTempInfo1, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

//     lv_obj_set_style_line_color(ChartTempInfo1, lv_color_hex(0x464B55), LV_PART_ITEMS | LV_STATE_DEFAULT);
//     lv_obj_set_style_line_opa(ChartTempInfo1, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
//     lv_obj_set_style_line_width(ChartTempInfo1, 2, LV_PART_ITEMS | LV_STATE_DEFAULT);
//     lv_obj_set_style_line_rounded(ChartTempInfo1, true, LV_PART_ITEMS | LV_STATE_DEFAULT);

//     lv_obj_set_style_line_color(ChartTempInfo1, lv_color_hex(0x464B55), LV_PART_TICKS | LV_STATE_DEFAULT);
//     lv_obj_set_style_line_opa(ChartTempInfo1, 0, LV_PART_TICKS | LV_STATE_DEFAULT);

//     KeyboardInfo1 = lv_keyboard_create(ui_InfoScr1);
//     lv_obj_set_width(KeyboardInfo1, 478);
//     lv_obj_set_height(KeyboardInfo1, 214);
//     lv_obj_set_x(KeyboardInfo1, 0);
//     lv_obj_set_y(KeyboardInfo1, 51);
//     lv_obj_set_align(KeyboardInfo1, LV_ALIGN_CENTER);
//     lv_obj_add_flag(KeyboardInfo1, LV_OBJ_FLAG_HIDDEN);     /// Flags

//     NextPageBtnInfo1 = lv_btn_create(ui_InfoScr1);
//     lv_obj_set_width(NextPageBtnInfo1, 18);
//     lv_obj_set_height(NextPageBtnInfo1, 31);
//     lv_obj_set_x(NextPageBtnInfo1, 227);
//     lv_obj_set_y(NextPageBtnInfo1, 21);
//     lv_obj_set_align(NextPageBtnInfo1, LV_ALIGN_CENTER);
//     lv_obj_add_flag(NextPageBtnInfo1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
//     lv_obj_clear_flag(NextPageBtnInfo1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

//     // lv_obj_add_event_cb(TextAreaInfo1, ui_event_TextArea1, LV_EVENT_ALL, NULL);
//     // lv_obj_add_event_cb(SaveNamebtn1, ui_event_SaveName, LV_EVENT_ALL, NULL);

// }