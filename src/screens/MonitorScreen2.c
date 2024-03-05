#include "object.h"
#include "ui_events.h"

void ui_monitor_screen_2_init(void){

    // ui_infor_screen_7_init();
    // ui_infor_screen_8_init();
    // ui_infor_screen_9_init();
    // ui_infor_screen_10_init();

    /*********************** MONITOR 1 SCREEN ***********************/
    ui_monitor_screen_2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_monitor_screen_2, LV_OBJ_FLAG_SCROLLABLE);/// Flags
    lv_obj_set_style_bg_color(ui_monitor_screen_2, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_monitor_screen_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_monitor_screen_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_monitor_screen_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    /*********************** HEADER ***********************/
    create_ui_header(ui_monitor_screen_2,GET_MONITOR_PAGE);

    /*********************** DEVICE 1 ***********************/
    ui_card_device7 = lv_obj_create(ui_monitor_screen_2); 
    lv_obj_set_width(ui_card_device7, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device7, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device7, X_MID_710);
    lv_obj_set_y(ui_card_device7, Y_POS_CARD_123);
    lv_obj_set_align(ui_card_device7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device7, RAD_CARD, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device7, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device7, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device7, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_card_device7, ui_event_card7, LV_EVENT_ALL, NULL);

    ui_name_t_device7 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_name_t_device7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device7, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device7, X_MID_710);  
    lv_obj_set_y(ui_name_t_device7, Y_POS_NAMEDEVICE_123);
    lv_obj_set_align(ui_name_t_device7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device7, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device7,"Device 7"); 
    lv_obj_set_style_text_color(ui_name_t_device7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device7, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device7, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_7 = lv_arc_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_temp_7, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_7, SIZE_WIDTH_ARC);
    lv_obj_set_x(ui_arc_temp_7, X_MID_710);
    lv_obj_set_y(ui_arc_temp_7, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_arc_temp_7, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_7, MIN_RANGE_ARC,MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_7, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_7, START_ANGLE_ARC,END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_7,RAD_ARC,LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_7, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_7, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_7, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_7, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_7, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_7, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_7, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_7, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_7, LV_OBJ_FLAG_CLICKABLE);

    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_inner_1,SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1,SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_710);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_123);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1,RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_inner_2,SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2,SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_710);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_ARCTEMP_123);
    lv_obj_set_align(ui_arc_inner_2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_2, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_style_radius(ui_arc_inner_2, RAD_INNER2_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_2, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_2, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_temp_t_device7 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_temp_t_device7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device7, X_MID_710);          
    lv_obj_set_y(ui_temp_t_device7, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_temp_t_device7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device7, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device7, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device7, LV_OBJ_FLAG_CLICKABLE);

    ui_last_up_t_device7 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_last_up_t_device7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device7, X_MID_710); 
    lv_obj_set_y(ui_last_up_t_device7, Y_POS_LASTUP_123);
    lv_obj_set_align(ui_last_up_t_device7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device7, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device7, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device7, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device7, LV_OBJ_FLAG_CLICKABLE);

    /*********************** DEVICE 8 ***********************/
    ui_card_device8 = lv_obj_create(ui_monitor_screen_2); 
    lv_obj_set_width(ui_card_device8, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device8, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device8, X_MID_8);
    lv_obj_set_y(ui_card_device8, Y_POS_CARD_123);
    lv_obj_set_align(ui_card_device8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device8, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device8, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device8, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device8, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_card_device8, ui_event_card8, LV_EVENT_ALL, NULL);

    ui_name_t_device8 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_name_t_device8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device8, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device8, X_MID_8);  
    lv_obj_set_y(ui_name_t_device8, Y_POS_NAMEDEVICE_123);
    lv_obj_set_align(ui_name_t_device8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device8, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device8,"Device 8"); 
    lv_obj_set_style_text_color(ui_name_t_device8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device8, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device8, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_8 = lv_arc_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_temp_8, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_8, SIZE_WIDTH_ARC);
    lv_obj_set_x(ui_arc_temp_8, X_MID_8);
    lv_obj_set_y(ui_arc_temp_8, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_arc_temp_8, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_8, MIN_RANGE_ARC,MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_8, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_8, START_ANGLE_ARC,END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_8,RAD_ARC,LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_8, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_8, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_8, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_8, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_8, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_8, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_8, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_8, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_8, LV_OBJ_FLAG_CLICKABLE);

    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_inner_1,SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1,SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_8);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_123);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1,RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_inner_2,SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2,SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_8);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_ARCTEMP_123);
    lv_obj_set_align(ui_arc_inner_2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_2, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_style_radius(ui_arc_inner_2, RAD_INNER2_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_2, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_2, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_temp_t_device8 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_temp_t_device8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device8, X_MID_8);          
    lv_obj_set_y(ui_temp_t_device8, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_temp_t_device8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device8, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device8, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device8, LV_OBJ_FLAG_CLICKABLE);

    ui_last_up_t_device8 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_last_up_t_device8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device8, X_MID_8); 
    lv_obj_set_y(ui_last_up_t_device8, Y_POS_LASTUP_123);
    lv_obj_set_align(ui_last_up_t_device8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device8, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device8, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device8, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device8, LV_OBJ_FLAG_CLICKABLE);

    /*********************** DEVICE 9 ***********************/
    ui_card_device9 = lv_obj_create(ui_monitor_screen_2); 
    lv_obj_set_width(ui_card_device9, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device9, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device9, X_MID_9);
    lv_obj_set_y(ui_card_device9, Y_POS_CARD_123);
    lv_obj_set_align(ui_card_device9, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device9, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device9, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device9, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device9, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_card_device9, ui_event_card9, LV_EVENT_ALL, NULL);

    ui_name_t_device9 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_name_t_device9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device9, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device9, X_MID_9);  
    lv_obj_set_y(ui_name_t_device9, Y_POS_NAMEDEVICE_123);
    lv_obj_set_align(ui_name_t_device9, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device9, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device9,"Device 9"); 
    lv_obj_set_style_text_color(ui_name_t_device9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device9, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device9, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_9 = lv_arc_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_temp_9, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_9, SIZE_WIDTH_ARC);
    lv_obj_set_x(ui_arc_temp_9, X_MID_9);
    lv_obj_set_y(ui_arc_temp_9, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_arc_temp_9, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_9, MIN_RANGE_ARC,MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_9, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_9, START_ANGLE_ARC,END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_9,RAD_ARC,LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_9, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_9, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_9, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_9, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_9, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_9, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_9, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_9, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_9, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_9, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_9, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_9, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_9, LV_OBJ_FLAG_CLICKABLE);

    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_inner_1,SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1,SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_9);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_123);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1,RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_inner_2,SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2,SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_9);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_ARCTEMP_123);
    lv_obj_set_align(ui_arc_inner_2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_2, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_style_radius(ui_arc_inner_2, RAD_INNER2_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_2, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_2, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_temp_t_device9 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_temp_t_device9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device9, X_MID_9);          
    lv_obj_set_y(ui_temp_t_device9, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_temp_t_device9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device9, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device9, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device9, LV_OBJ_FLAG_CLICKABLE);

    ui_last_up_t_device9 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_last_up_t_device9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device9, X_MID_9); 
    lv_obj_set_y(ui_last_up_t_device9, Y_POS_LASTUP_123);
    lv_obj_set_align(ui_last_up_t_device9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device9, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device9, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device9, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device9, LV_OBJ_FLAG_CLICKABLE);

    /*********************** DEVICE 10 ***********************/
    ui_card_device10 = lv_obj_create(ui_monitor_screen_2); 
    lv_obj_set_width(ui_card_device10, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device10, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device10, X_MID_710);
    lv_obj_set_y(ui_card_device10, Y_POS_CARD_456);
    lv_obj_set_align(ui_card_device10, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device10, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device10, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device10, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device10, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_card_device10, ui_event_card10, LV_EVENT_ALL, NULL);

    ui_name_t_device10 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_name_t_device10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device10, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device10, X_MID_710);  
    lv_obj_set_y(ui_name_t_device10, Y_POS_NAMEDEVICE_456);
    lv_obj_set_align(ui_name_t_device10, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device10, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device10,"Device 10"); 
    lv_obj_set_style_text_color(ui_name_t_device10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device10, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device10, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_10 = lv_arc_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_temp_10, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_10, SIZE_WIDTH_ARC);
    lv_obj_set_x(ui_arc_temp_10, X_MID_710);
    lv_obj_set_y(ui_arc_temp_10, Y_POS_ARCTEMP_456);  
    lv_obj_set_align(ui_arc_temp_10, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_10,MIN_RANGE_ARC,MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_10, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_10, START_ANGLE_ARC,END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_10,RAD_ARC,LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_10, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_10, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_10, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_10, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_10, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_10, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_10, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_10, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_10, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_10, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_10, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_10, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_10, LV_OBJ_FLAG_CLICKABLE);

    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_inner_1,SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1,SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_710);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_456);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1,RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_arc_inner_2,SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2,SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_710);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_ARCTEMP_456);
    lv_obj_set_align(ui_arc_inner_2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_2, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_style_radius(ui_arc_inner_2, RAD_INNER2_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_2, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_2, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_temp_t_device10 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_temp_t_device10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device10, X_MID_710);          
    lv_obj_set_y(ui_temp_t_device10, Y_POS_ARCTEMP_456);  
    lv_obj_set_align(ui_temp_t_device10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device10, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device10, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device10, LV_OBJ_FLAG_CLICKABLE);

    ui_last_up_t_device10 = lv_label_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_last_up_t_device10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device10, X_MID_710); 
    lv_obj_set_y(ui_last_up_t_device10, Y_POS_LASTUP_456);
    lv_obj_set_align(ui_last_up_t_device10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device10, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device10, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device10, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device10, LV_OBJ_FLAG_CLICKABLE);

    /*********************** Next page button ***********************/
    ui_prev_page_btn = lv_btn_create(ui_monitor_screen_2);
    lv_obj_set_width(ui_prev_page_btn, 22);
    lv_obj_set_height(ui_prev_page_btn, 100);
    lv_obj_set_x(ui_prev_page_btn, 222);
    lv_obj_set_y(ui_prev_page_btn, 16);
    lv_obj_set_align(ui_prev_page_btn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_prev_page_btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_prev_page_btn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_prev_page_btn, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_prev_page_btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_prev_page_btn, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_prev_page_btn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_prev_page_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_prev_page_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_prev_page_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_prev_page_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * ui_label_t_btn = lv_label_create(ui_prev_page_btn);
    lv_label_set_text(ui_label_t_btn,"R");
    lv_obj_set_style_text_font(ui_label_t_btn, &ui_font_Arrow24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(ui_label_t_btn);

    lv_obj_add_event_cb(ui_prev_page_btn, ui_event_prev_page_btn, LV_EVENT_ALL, NULL);

}