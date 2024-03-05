#include "object.h"
#include "ui_events.h"

void ui_monitor_screen_1_init(void){

    // ui_infor_screen_1_init(); 
    // ui_infor_screen_2_init();
    // ui_infor_screen_3_init();
    // ui_infor_screen_4_init();
    // ui_infor_screen_5_init();
    // ui_infor_screen_6_init();

    /********************************************** MONITOR 1 SCREEN **********************************************/
    ui_monitor_screen_1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_monitor_screen_1, LV_OBJ_FLAG_SCROLLABLE);/// Flags
    lv_obj_set_style_bg_color(ui_monitor_screen_1, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_monitor_screen_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_monitor_screen_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_monitor_screen_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    /********************************************** HEADER **********************************************/
    create_ui_header(ui_monitor_screen_1,GET_MONITOR_PAGE);

    /********************************************** DEVICE 1 **********************************************/
    //Card
    ui_card_device1 = lv_obj_create(ui_monitor_screen_1); 
    lv_obj_set_width(ui_card_device1, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device1, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device1, X_MID_14);
    lv_obj_set_y(ui_card_device1, Y_POS_CARD_123);
    lv_obj_set_align(ui_card_device1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device1, RAD_CARD, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device1, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    //Card event
    lv_obj_add_event_cb(ui_card_device1, ui_event_card1, LV_EVENT_ALL, NULL);

    //Device name
    ui_name_t_device1 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_name_t_device1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device1, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device1, X_MID_14);  
    lv_obj_set_y(ui_name_t_device1, Y_POS_NAMEDEVICE_123);
    lv_obj_set_align(ui_name_t_device1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device1, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device1,"Device 1"); 
    lv_obj_set_style_text_color(ui_name_t_device1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    //Arc temp device1
    ui_arc_temp_1 = lv_arc_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_temp_1, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_1, SIZE_HEIGHT_ARC);
    lv_obj_set_x(ui_arc_temp_1, X_MID_14);
    lv_obj_set_y(ui_arc_temp_1, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_arc_temp_1, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_1, MIN_RANGE_ARC, MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_1, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_1, START_ANGLE_ARC, END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_1, RAD_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_1, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_1, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_1, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_1, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_1, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_1, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_1, LV_OBJ_FLAG_CLICKABLE);

    //1st inner arc
    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_1, SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1, SIZE_HEIGHT_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_14);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_123);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1, RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    //2nd inner arc
    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_14);
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

    //Temp text in arc
    ui_temp_t_device1 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_temp_t_device1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device1, X_MID_14);          
    lv_obj_set_y(ui_temp_t_device1, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_temp_t_device1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device1, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device1, LV_OBJ_FLAG_CLICKABLE);

    //Last update text
    ui_last_up_t_device1 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_last_up_t_device1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device1, X_MID_14); 
    lv_obj_set_y(ui_last_up_t_device1, Y_POS_LASTUP_123);
    lv_obj_set_align(ui_last_up_t_device1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device1, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device1, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device1, LV_OBJ_FLAG_CLICKABLE);

    /********************************************** DEVICE 2 **********************************************/
    ui_card_device2 = lv_obj_create(ui_monitor_screen_1); 
    lv_obj_set_width(ui_card_device2, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device2, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device2, X_MID_25);
    lv_obj_set_y(ui_card_device2, Y_POS_CARD_123);
    lv_obj_set_align(ui_card_device2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device2, RAD_CARD, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device2, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_card_device2 ,ui_event_card2, LV_EVENT_ALL, NULL);

    ui_name_t_device2 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_name_t_device2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device2, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device2, X_MID_25);  
    lv_obj_set_y(ui_name_t_device2, Y_POS_NAMEDEVICE_123);
    lv_obj_set_align(ui_name_t_device2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device2, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device2,"Device 2"); 
    lv_obj_set_style_text_color(ui_name_t_device2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device2, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_2 = lv_arc_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_temp_2, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_2, SIZE_WIDTH_ARC);
    lv_obj_set_x(ui_arc_temp_2, X_MID_25);
    lv_obj_set_y(ui_arc_temp_2, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_arc_temp_2, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_2, MIN_RANGE_ARC, MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_2, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_2, START_ANGLE_ARC, END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_2, RAD_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_2, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_2, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_2, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_2, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_2, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_2, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_2, LV_OBJ_FLAG_CLICKABLE);

    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_1, SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1, SIZE_HEIGHT_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_25);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_123);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1, RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_25);
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

    ui_temp_t_device2 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_temp_t_device2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device2, X_MID_25);          
    lv_obj_set_y(ui_temp_t_device2, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_temp_t_device2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device2, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device2, LV_OBJ_FLAG_CLICKABLE);

    ui_last_up_t_device2 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_last_up_t_device2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device2, X_MID_25); 
    lv_obj_set_y(ui_last_up_t_device2, Y_POS_LASTUP_123);
    lv_obj_set_align(ui_last_up_t_device2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device2, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device2, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device2, LV_OBJ_FLAG_CLICKABLE);

    /********************************************** DEVICE 3 **********************************************/
    ui_card_device3 = lv_obj_create(ui_monitor_screen_1); 
    lv_obj_set_width(ui_card_device3, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device3, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device3, X_MID_36);
    lv_obj_set_y(ui_card_device3, Y_POS_CARD_123);
    lv_obj_set_align(ui_card_device3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device3, RAD_CARD, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device3, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device3, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device3, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    //Card event
    lv_obj_add_event_cb(ui_card_device3, ui_event_card3, LV_EVENT_ALL, NULL);

    ui_name_t_device3 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_name_t_device3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device3, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device3, X_MID_36);  
    lv_obj_set_y(ui_name_t_device3, Y_POS_NAMEDEVICE_123);
    lv_obj_set_align(ui_name_t_device3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device3, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device3,"Device 3"); 
    lv_obj_set_style_text_color(ui_name_t_device3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device3, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device3, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_3 = lv_arc_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_temp_3, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_3, SIZE_WIDTH_ARC);
    lv_obj_set_x(ui_arc_temp_3, X_MID_36);
    lv_obj_set_y(ui_arc_temp_3, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_arc_temp_3, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_3, MIN_RANGE_ARC, MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_3, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_3, START_ANGLE_ARC, END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_3, RAD_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_3, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_3, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_3, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_3, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_3, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_3, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_3, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_3, LV_OBJ_FLAG_CLICKABLE);

    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_1, SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1, SIZE_HEIGHT_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_36);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_123);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1, RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_36);
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

    ui_temp_t_device3 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_temp_t_device3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device3, X_MID_36);          
    lv_obj_set_y(ui_temp_t_device3, Y_POS_ARCTEMP_123);  
    lv_obj_set_align(ui_temp_t_device3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device3, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device3, LV_OBJ_FLAG_CLICKABLE);

    ui_last_up_t_device3 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_last_up_t_device3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device3, X_MID_36); 
    lv_obj_set_y(ui_last_up_t_device3, Y_POS_LASTUP_123);
    lv_obj_set_align(ui_last_up_t_device3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device3, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device3, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device3, LV_OBJ_FLAG_CLICKABLE);

    /********************************************** DEVICE 4 **********************************************/
    ui_card_device4 = lv_obj_create(ui_monitor_screen_1); 
    lv_obj_set_width(ui_card_device4, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device4, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device4, X_MID_14);
    lv_obj_set_y(ui_card_device4, Y_POS_CARD_456);
    lv_obj_set_align(ui_card_device4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device4, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device4, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device4, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device4, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    //Card event
    lv_obj_add_event_cb(ui_card_device4, ui_event_card4, LV_EVENT_ALL, NULL);

    ui_name_t_device4 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_name_t_device4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device4, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device4, X_MID_14);  
    lv_obj_set_y(ui_name_t_device4, Y_POS_NAMEDEVICE_456);
    lv_obj_set_align(ui_name_t_device4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device4, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device4,"Device 4"); 
    lv_obj_set_style_text_color(ui_name_t_device4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device4, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device4, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_4 = lv_arc_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_temp_4, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_4, SIZE_WIDTH_ARC);
    lv_obj_set_x(ui_arc_temp_4, X_MID_14);
    lv_obj_set_y(ui_arc_temp_4, Y_POS_ARCTEMP_456);  
    lv_obj_set_align(ui_arc_temp_4, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_4, MIN_RANGE_ARC, MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_4, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_4, START_ANGLE_ARC, END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_4, RAD_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_4, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_4, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_4, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_4, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_4, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_4, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_4, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_4, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_4, LV_OBJ_FLAG_CLICKABLE);

    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_1, SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1, SIZE_HEIGHT_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_14);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_456);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1, RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_14);
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

    ui_temp_t_device4 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_temp_t_device4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device4, X_MID_14);          
    lv_obj_set_y(ui_temp_t_device4, Y_POS_ARCTEMP_456);  
    lv_obj_set_align(ui_temp_t_device4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device4, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device4, LV_OBJ_FLAG_CLICKABLE);

    ui_last_up_t_device4 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_last_up_t_device4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device4, X_MID_14); 
    lv_obj_set_y(ui_last_up_t_device4, Y_POS_LASTUP_456);
    lv_obj_set_align(ui_last_up_t_device4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device4, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device4, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device4, LV_OBJ_FLAG_CLICKABLE);

    
    /********************************************** DEVICE 5 **********************************************/
    ui_card_device5 = lv_obj_create(ui_monitor_screen_1); 
    lv_obj_set_width(ui_card_device5, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device5, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device5, X_MID_25);
    lv_obj_set_y(ui_card_device5, Y_POS_CARD_456);
    lv_obj_set_align(ui_card_device5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device5, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device5, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device5, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device5, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    //Card event
    lv_obj_add_event_cb(ui_card_device5, ui_event_card5, LV_EVENT_ALL, NULL);

    ui_name_t_device5 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_name_t_device5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device5, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device5, X_MID_25);  
    lv_obj_set_y(ui_name_t_device5, Y_POS_NAMEDEVICE_456);
    lv_obj_set_align(ui_name_t_device5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device5, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device5,"Device 5"); 
    lv_obj_set_style_text_color(ui_name_t_device5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device5, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device5, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_5 = lv_arc_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_temp_5, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_5, SIZE_WIDTH_ARC);
    lv_obj_set_x(ui_arc_temp_5, X_MID_25);
    lv_obj_set_y(ui_arc_temp_5, Y_POS_ARCTEMP_456);  
    lv_obj_set_align(ui_arc_temp_5, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_5, MIN_RANGE_ARC, MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_5, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_5, START_ANGLE_ARC, END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_5, RAD_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_5, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_5, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_5, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_5, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_5, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_5, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_5, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_5, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_5, LV_OBJ_FLAG_CLICKABLE);

    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_1, SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1, SIZE_HEIGHT_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_25);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_456);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1, RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_25);
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

    ui_temp_t_device5 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_temp_t_device5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device5, X_MID_25);          
    lv_obj_set_y(ui_temp_t_device5, Y_POS_ARCTEMP_456);  
    lv_obj_set_align(ui_temp_t_device5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device5, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device5, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device5, LV_OBJ_FLAG_CLICKABLE);

    ui_last_up_t_device5 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_last_up_t_device5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device5, X_MID_25); 
    lv_obj_set_y(ui_last_up_t_device5, Y_POS_LASTUP_456);
    lv_obj_set_align(ui_last_up_t_device5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device5, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device5, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device5, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device5, LV_OBJ_FLAG_CLICKABLE);

    /********************************************** DEVICE 6 **********************************************/
    ui_card_device6 = lv_obj_create(ui_monitor_screen_1); 
    lv_obj_set_width(ui_card_device6, SIZE_WIDTH_CARD_DEVICE);
    lv_obj_set_height(ui_card_device6, SIZE_HEIGHT_CARD_DEVICE); 
    lv_obj_set_x(ui_card_device6, X_MID_36);
    lv_obj_set_y(ui_card_device6, Y_POS_CARD_456);
    lv_obj_set_align(ui_card_device6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_card_device6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_card_device6, RAD_CARD, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_card_device6, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_card_device6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_card_device6, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_card_device6, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_card_device6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_card_device6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    //Card event
    lv_obj_add_event_cb(ui_card_device6, ui_event_card6, LV_EVENT_ALL, NULL);

    ui_name_t_device6 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_name_t_device6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_device6, LV_SIZE_CONTENT);    /// 1 
    lv_obj_set_x(ui_name_t_device6, X_MID_36);  
    lv_obj_set_y(ui_name_t_device6, Y_POS_NAMEDEVICE_456);
    lv_obj_set_align(ui_name_t_device6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_t_device6, LV_OBJ_FLAG_CLICKABLE);
    lv_label_set_text(ui_name_t_device6,"Device 6"); 
    lv_obj_set_style_text_color(ui_name_t_device6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device6, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device6, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_temp_6 = lv_arc_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_temp_6, SIZE_WIDTH_ARC);
    lv_obj_set_height(ui_arc_temp_6, SIZE_WIDTH_ARC);
    lv_obj_set_x(ui_arc_temp_6, X_MID_36);
    lv_obj_set_y(ui_arc_temp_6, Y_POS_ARCTEMP_456);  
    lv_obj_set_align(ui_arc_temp_6, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arc_temp_6, MIN_RANGE_ARC, MAX_RANGE_ARC);
    lv_arc_set_value(ui_arc_temp_6, START_VALUE_ARC);
    lv_arc_set_bg_angles(ui_arc_temp_6, START_ANGLE_ARC, END_ANGLE_ARC);
    lv_obj_set_style_radius(ui_arc_temp_6, RAD_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_6, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_arc_temp_6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_arc_temp_6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_arc_temp_6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_arc_temp_6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_arc_temp_6, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_temp_6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_6, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_temp_6, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_temp_6, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_arc_temp_6, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_temp_6, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_temp_6, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_arc_temp_6, LV_OBJ_FLAG_CLICKABLE);

    ui_arc_inner_1 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_1, SIZE_WIDTH_ARC_INNER1);
    lv_obj_set_height(ui_arc_inner_1, SIZE_HEIGHT_ARC_INNER1);
    lv_obj_set_x(ui_arc_inner_1, X_MID_36);
    lv_obj_set_y(ui_arc_inner_1, Y_POS_ARCTEMP_456);
    lv_obj_set_align(ui_arc_inner_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_inner_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_arc_inner_1, RAD_INNER1_ARC, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_arc_inner_1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_arc_inner_1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_arc_inner_1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_arc_inner_1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_arc_inner_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_arc_inner_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_36);
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

    ui_temp_t_device6 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_temp_t_device6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device6, X_MID_36);          
    lv_obj_set_y(ui_temp_t_device6, Y_POS_ARCTEMP_456);  
    lv_obj_set_align(ui_temp_t_device6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device6, "0 °C");
    lv_obj_set_style_text_color(ui_temp_t_device6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device6, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device6, LV_OBJ_FLAG_CLICKABLE);

    ui_last_up_t_device6 = lv_label_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_last_up_t_device6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device6, X_MID_36); 
    lv_obj_set_y(ui_last_up_t_device6, Y_POS_LASTUP_456);
    lv_obj_set_align(ui_last_up_t_device6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device6, "Last update : 3:50 PM");
    lv_obj_set_style_text_color(ui_last_up_t_device6, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device6, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device6, LV_OBJ_FLAG_CLICKABLE);

    /********************************************** Next page button **********************************************/
    ui_next_page_btn = lv_btn_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_next_page_btn, SIZE_WIDTH_NEXT_BTN);
    lv_obj_set_height(ui_next_page_btn, SIZE_HEIGHT_NEXT_BTN);
    lv_obj_set_x(ui_next_page_btn, POS_X_NEXT_BTN);
    lv_obj_set_y(ui_next_page_btn, POS_Y_NEXT_BTN);
    lv_obj_set_align(ui_next_page_btn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_next_page_btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_next_page_btn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_next_page_btn, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_next_page_btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_next_page_btn, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_next_page_btn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_next_page_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_next_page_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_next_page_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_next_page_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * ui_label_t_btn = lv_label_create(ui_next_page_btn);
    lv_label_set_text(ui_label_t_btn,"Q");
    lv_obj_set_style_text_font(ui_label_t_btn, &ui_font_Arrow24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(ui_label_t_btn);

    lv_obj_add_event_cb(ui_next_page_btn, ui_event_next_page_btn, LV_EVENT_ALL, NULL);
}