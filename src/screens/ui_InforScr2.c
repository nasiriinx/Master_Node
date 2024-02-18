#include "ui.h"
#include "data_struct.h"

extern Temperature temp;
extern TempText t_text;
extern Devicename name;

void ui_InforScr2_screen_init(void){
    ui_InfoScr2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_InfoScr2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_InfoScr2, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_InfoScr2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_InfoScr2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_InfoScr2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HeaderPanel = lv_obj_create(ui_InfoScr2);
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

    ui_HeaderPanel = lv_label_create(ui_InfoScr2);
    lv_obj_set_width(ui_HeaderPanel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HeaderPanel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HeaderPanel, 141);
    lv_obj_set_y(ui_HeaderPanel, -141);
    lv_obj_set_align(ui_HeaderPanel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_HeaderPanel, "Wed, January 31 2023, 3:30 PM");
    lv_obj_set_style_text_color(ui_HeaderPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HeaderPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HeaderPanel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    CardInfo = lv_obj_create(ui_InfoScr2);
    lv_obj_set_width(CardInfo, 470);
    lv_obj_set_height(CardInfo, 268);
    lv_obj_set_x(CardInfo, 0);
    lv_obj_set_y(CardInfo, 18);
    lv_obj_set_align(CardInfo, LV_ALIGN_CENTER);
    lv_obj_clear_flag(CardInfo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(CardInfo, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(CardInfo, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(CardInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(CardInfo, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(CardInfo, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(CardInfo, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(CardInfo, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // CardInfo2 = lv_label_create(ui_InfoScr2);
    // lv_obj_set_width(CardInfo2, LV_SIZE_CONTENT);   /// 1
    // lv_obj_set_height(CardInfo2, LV_SIZE_CONTENT);    /// 1
    // lv_obj_set_x(CardInfo2, 153);
    // lv_obj_set_y(CardInfo2, 142);
    // lv_obj_set_align(CardInfo2, LV_ALIGN_CENTER);
    // lv_label_set_text(CardInfo2, "Last update : 3:50PM");
    // lv_obj_set_style_text_color(CardInfo2, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_text_opa(CardInfo2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_text_font(CardInfo2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    TextAreaInfo2 = lv_textarea_create(ui_InfoScr2);
    lv_obj_set_width(TextAreaInfo2, 300);
    lv_obj_set_height(TextAreaInfo2, 38);
    lv_obj_set_x(TextAreaInfo2, -71);
    lv_obj_set_y(TextAreaInfo2, -83);
    lv_obj_set_align(TextAreaInfo2, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(TextAreaInfo2, "Device name");
    lv_obj_set_style_text_font(TextAreaInfo2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(TextAreaInfo2,true);

    SaveNamebtn2 = lv_btn_create(ui_InfoScr2);
    lv_obj_set_width(SaveNamebtn2, 70);
    lv_obj_set_height(SaveNamebtn2, 38);
    lv_obj_set_x(SaveNamebtn2,118);
    lv_obj_set_y(SaveNamebtn2,-83);
    lv_obj_set_align(SaveNamebtn2, LV_ALIGN_CENTER);
    lv_obj_add_flag(SaveNamebtn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(SaveNamebtn2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_align(SaveNamebtn2, LV_ALIGN_CENTER);
    lv_obj_add_flag(SaveNamebtn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(SaveNamebtn2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(SaveNamebtn2, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(SaveNamebtn2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(SaveNamebtn2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(SaveNamebtn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(SaveNamebtn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(SaveNamebtn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(SaveNamebtn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_t * label_save_btn;
    label_save_btn = lv_label_create(SaveNamebtn2);
    lv_label_set_text(label_save_btn,"Save");
    lv_obj_set_style_text_font(label_save_btn, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_save_btn);

    CancleNamebtn2 = lv_btn_create(ui_InfoScr2);
    lv_obj_set_width(CancleNamebtn2, 70);
    lv_obj_set_height(CancleNamebtn2, 38);
    lv_obj_set_x(CancleNamebtn2, 193);
    lv_obj_set_y(CancleNamebtn2, -83);
    lv_obj_set_align(CancleNamebtn2, LV_ALIGN_CENTER);
    lv_obj_add_flag(CancleNamebtn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(CancleNamebtn2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_align(CancleNamebtn2, LV_ALIGN_CENTER);
    lv_obj_add_flag(CancleNamebtn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(CancleNamebtn2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(CancleNamebtn2, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(CancleNamebtn2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_bg_grad_color(CancleNamebtn2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(CancleNamebtn2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(CancleNamebtn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(CancleNamebtn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(CancleNamebtn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(CancleNamebtn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_t * label_cancle_btn;
    label_cancle_btn = lv_label_create(CancleNamebtn2);
    lv_label_set_text(label_cancle_btn,"Discard");
    lv_obj_set_style_text_font(label_cancle_btn, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_cancle_btn);

    ChartTempInfo2 = lv_chart_create(ui_InfoScr2);
    lv_obj_set_width(ChartTempInfo2, 400);
    lv_obj_set_height(ChartTempInfo2, 167);
    lv_obj_set_x(ChartTempInfo2, 15);
    lv_obj_set_y(ChartTempInfo2, 31);
    lv_obj_set_align(ChartTempInfo2, LV_ALIGN_CENTER);
    lv_chart_set_type(ChartTempInfo2, LV_CHART_TYPE_LINE);
    lv_chart_set_point_count(ChartTempInfo2, 20);
    lv_chart_set_range(ChartTempInfo2, LV_CHART_AXIS_PRIMARY_Y, -20, 10);
    lv_chart_set_div_line_count(ChartTempInfo2, 10, 10);
    lv_chart_set_zoom_x(ChartTempInfo2, 250);
    lv_chart_set_zoom_y(ChartTempInfo2, 250);
    lv_chart_set_axis_tick(ChartTempInfo2, LV_CHART_AXIS_PRIMARY_X, 2, 1, 10, 10, true, 10);
    lv_chart_set_axis_tick(ChartTempInfo2, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 20);
    lv_chart_set_axis_tick(ChartTempInfo2, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 5, 2, false, 25);
    
    lv_chart_series_t * ChartTempInfo2_series_1 = lv_chart_add_series(ChartTempInfo2, lv_color_hex(0x464B55),LV_CHART_AXIS_PRIMARY_Y);

    //receive value                                                             
    static lv_coord_t ChartTempInfo2_series_1_array[] = { -2, -5, -3, -8, -10, -15, 1, 5, 2, -4 };
    lv_chart_set_ext_y_array(ChartTempInfo2, ChartTempInfo2_series_1, ChartTempInfo2_series_1_array);

    lv_obj_set_style_bg_color(ChartTempInfo2, lv_color_hex(0x464B55), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ChartTempInfo2, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ChartTempInfo2, lv_color_hex(0x464B55), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ChartTempInfo2, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ChartTempInfo2, 2, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ChartTempInfo2, true, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ChartTempInfo2, lv_color_hex(0x464B55), LV_PART_TICKS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ChartTempInfo2, 0, LV_PART_TICKS | LV_STATE_DEFAULT);

    KeyboardInfo2 = lv_keyboard_create(ui_InfoScr2);
    lv_obj_set_width(KeyboardInfo2, 478);
    lv_obj_set_height(KeyboardInfo2, 214);
    lv_obj_set_x(KeyboardInfo2, 0);
    lv_obj_set_y(KeyboardInfo2, 51);
    lv_obj_set_align(KeyboardInfo2, LV_ALIGN_CENTER);
    lv_obj_add_flag(KeyboardInfo2, LV_OBJ_FLAG_HIDDEN);/// Flags

    BacktoMainBtn = lv_btn_create(ui_InfoScr2);
    lv_obj_set_width(BacktoMainBtn, 28);
    lv_obj_set_height(BacktoMainBtn, 25);
    lv_obj_set_x(BacktoMainBtn, -215);
    lv_obj_set_y(BacktoMainBtn, 130);
    lv_obj_set_align(BacktoMainBtn, LV_ALIGN_CENTER);
    lv_obj_add_flag(BacktoMainBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(BacktoMainBtn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(BacktoMainBtn, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(BacktoMainBtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(BacktoMainBtn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(BacktoMainBtn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(BacktoMainBtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(BacktoMainBtn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(BacktoMainBtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_t * label_sym_btn;
    label_sym_btn = lv_label_create(BacktoMainBtn);
    lv_label_set_text(label_sym_btn,"<");
    lv_obj_set_style_text_font(label_sym_btn, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_sym_btn);

    /* EVENT */
    lv_obj_add_event_cb(TextAreaInfo2, ui_event_TextAreaInfo2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(SaveNamebtn2, ui_event_SaveNamebtn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(BacktoMainBtn,ui_event_BacktoMain1btn,LV_EVENT_ALL,NULL);
    lv_obj_add_event_cb(KeyboardInfo2,ui_event_KeyboardInfo2,LV_EVENT_ALL,NULL);
    lv_obj_add_event_cb(CancleNamebtn2, ui_event_CancleNamebtn2, LV_EVENT_ALL, NULL);
}