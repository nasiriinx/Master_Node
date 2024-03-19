#include "object.h"
#include "ui_events.h"
#include "data_struct.h"

void ui_monitor_screen_1_init(void){

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
    lv_label_set_text(ui_name_t_device1,name.device1); 
    lv_obj_set_style_text_color(ui_name_t_device1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    meter = lv_meter_create(ui_monitor_screen_1);
    lv_obj_set_size(meter, SIZE_WIDTH_METER, SIZE_HEIGHT_METER);
    lv_obj_set_x(meter, POS_X_METER14);  
    lv_obj_set_y(meter, POS_Y_METER123);
    lv_obj_set_style_bg_color(meter, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    /*Add a scale first*/
    scale = lv_meter_add_scale(meter);
    lv_meter_set_scale_range(meter,scale,MIN_RANGE_METER,MAX_RANGE_METER,METER_ANGLE,METER_ROTATION);
    lv_meter_set_scale_ticks(meter, scale, 5, 2, 5, lv_color_hex(0xFFFFFF));
    
    // lv_meter_indicator_t * indic;

    /*Add a blue arc to the start*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_BLUE), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIN_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MIDDLE_RANGE_METER);

    /*Add a red arc to the end เลข Arcฝั่งสีแดง*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_RED), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIDDLE_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MAX_RANGE_METER);

    /*เข็มชี้*/
    // indic_1 = lv_meter_add_needle_line(meter_1, scale_1, 4, lv_color_hex(0x0F1215), 0);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_14);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_METER_123);
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
    lv_obj_set_y(ui_temp_t_device1, Y_POS_METER_123);  
    lv_obj_set_align(ui_temp_t_device1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device1, t_text.temp_text1);
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
    lv_label_set_text(ui_last_up_t_device1, dev_uptime.dev1);
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
    lv_label_set_text(ui_name_t_device2,name.device2); 
    lv_obj_set_style_text_color(ui_name_t_device2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device2, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    meter = lv_meter_create(ui_monitor_screen_1);
    lv_obj_set_size(meter, SIZE_WIDTH_METER, SIZE_HEIGHT_METER);
    lv_obj_set_x(meter, POS_X_METER25);  
    lv_obj_set_y(meter, POS_Y_METER123);
    lv_obj_set_style_bg_color(meter, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    /*Add a scale first*/
    scale = lv_meter_add_scale(meter);
    lv_meter_set_scale_range(meter,scale,MIN_RANGE_METER,MAX_RANGE_METER,METER_ANGLE,METER_ROTATION);
    lv_meter_set_scale_ticks(meter, scale, 5, 2, 5, lv_color_hex(0xFFFFFF));
    
    // lv_meter_indicator_t * indic;

    /*Add a blue arc to the start*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_BLUE), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIN_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MIDDLE_RANGE_METER);

    /*Add a red arc to the end เลข Arcฝั่งสีแดง*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_RED), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIDDLE_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MAX_RANGE_METER);

    /*เข็มชี้*/
    // indic_2 = lv_meter_add_needle_line(meter_2, scale_2, 4, lv_color_hex(0x0F1215), 0);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_25);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_METER_123);
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
    lv_obj_set_y(ui_temp_t_device2, Y_POS_METER_123);  
    lv_obj_set_align(ui_temp_t_device2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device2, t_text.temp_text2);
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
    lv_label_set_text(ui_last_up_t_device2, dev_uptime.dev2);
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
    lv_label_set_text(ui_name_t_device3,name.device3); 
    lv_obj_set_style_text_color(ui_name_t_device3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device3, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device3, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    meter = lv_meter_create(ui_monitor_screen_1);
    lv_obj_set_size(meter, SIZE_WIDTH_METER, SIZE_HEIGHT_METER);
    lv_obj_set_x(meter, POS_X_METER36);  
    lv_obj_set_y(meter, POS_Y_METER123);
    lv_obj_set_style_bg_color(meter, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    /*Add a scale first*/
    scale = lv_meter_add_scale(meter);
    lv_meter_set_scale_range(meter,scale,MIN_RANGE_METER,MAX_RANGE_METER,METER_ANGLE,METER_ROTATION);
    lv_meter_set_scale_ticks(meter, scale, 5, 2, 5, lv_color_hex(0xFFFFFF));
    
    // lv_meter_indicator_t * indic;

    /*Add a blue arc to the start*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_BLUE), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIN_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MIDDLE_RANGE_METER);

    /*Add a red arc to the end เลข Arcฝั่งสีแดง*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_RED), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIDDLE_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MAX_RANGE_METER);

    /*เข็มชี้*/
    // indic = lv_meter_add_needle_line(meter, scale, 4, lv_color_hex(0x0F1215), 0);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_36);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_METER_123);
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
    lv_obj_set_y(ui_temp_t_device3, Y_POS_METER_123);  
    lv_obj_set_align(ui_temp_t_device3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device3, t_text.temp_text3);
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
    lv_label_set_text(ui_last_up_t_device3, dev_uptime.dev3);
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
    lv_label_set_text(ui_name_t_device4,name.device4); 
    lv_obj_set_style_text_color(ui_name_t_device4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device4, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device4, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    meter = lv_meter_create(ui_monitor_screen_1);
    lv_obj_set_size(meter, SIZE_WIDTH_METER, SIZE_HEIGHT_METER);
    lv_obj_set_x(meter, POS_X_METER14);  
    lv_obj_set_y(meter, Y_POS_METER_456);
    lv_obj_set_style_bg_color(meter, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    /*Add a scale first*/
    scale = lv_meter_add_scale(meter);
    lv_meter_set_scale_range(meter,scale,MIN_RANGE_METER,MAX_RANGE_METER,METER_ANGLE,METER_ROTATION);
    lv_meter_set_scale_ticks(meter, scale, 5, 2, 5, lv_color_hex(0xFFFFFF));
    
    // lv_meter_indicator_t * indic_4;

    /*Add a blue arc to the start*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_BLUE), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIN_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MIDDLE_RANGE_METER);

    /*Add a red arc to the end เลข Arcฝั่งสีแดง*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_RED), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIDDLE_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MAX_RANGE_METER);

    /*เข็มชี้*/
    // indic_4 = lv_meter_add_needle_line(meter_4, scale_4, 4, lv_color_hex(0x0F1215), 0);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_14);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_TEMPT_456);
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
    lv_obj_set_y(ui_temp_t_device4, Y_POS_TEMPT_456);  
    lv_obj_set_align(ui_temp_t_device4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device4, t_text.temp_text3);
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
    lv_label_set_text(ui_last_up_t_device4, dev_uptime.dev4);
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
    lv_label_set_text(ui_name_t_device5,name.device5); 
    lv_obj_set_style_text_color(ui_name_t_device5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device5, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device5, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    meter = lv_meter_create(ui_monitor_screen_1);
    lv_obj_set_size(meter, SIZE_WIDTH_METER, SIZE_HEIGHT_METER);
    lv_obj_set_x(meter, POS_X_METER25);  
    lv_obj_set_y(meter, Y_POS_METER_456);
    lv_obj_set_style_bg_color(meter, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    /*Add a scale first*/
    scale = lv_meter_add_scale(meter);
    lv_meter_set_scale_range(meter,scale,MIN_RANGE_METER,MAX_RANGE_METER,METER_ANGLE,METER_ROTATION);
    lv_meter_set_scale_ticks(meter, scale, 5, 2, 5, lv_color_hex(0xFFFFFF));
    
    // lv_meter_indicator_t * indic;

    /*Add a blue arc to the start*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_BLUE), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIN_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MIDDLE_RANGE_METER);

    /*Add a red arc to the end เลข Arcฝั่งสีแดง*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_RED), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIDDLE_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MAX_RANGE_METER);

    /*เข็มชี้*/
    // indic = lv_meter_add_needle_line(meter, scale, 4, lv_color_hex(0x0F1215), 0);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_25);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_TEMPT_456);
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
    lv_label_set_text(ui_temp_t_device5, t_text.temp_text3);
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
    lv_label_set_text(ui_last_up_t_device5, dev_uptime.dev5);
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
    lv_label_set_text(ui_name_t_device6,name.device6); 
    lv_obj_set_style_text_color(ui_name_t_device6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_device6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_device6, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_device6, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    meter = lv_meter_create(ui_monitor_screen_1);
    lv_obj_set_size(meter, SIZE_WIDTH_METER, SIZE_HEIGHT_METER);
    lv_obj_set_x(meter, POS_X_METER36);  
    lv_obj_set_y(meter, Y_POS_METER_456);
    lv_obj_set_style_bg_color(meter, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(meter, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    /*Add a scale first*/
    scale = lv_meter_add_scale(meter);
    lv_meter_set_scale_range(meter,scale,MIN_RANGE_METER,MAX_RANGE_METER,METER_ANGLE,METER_ROTATION);
    lv_meter_set_scale_ticks(meter, scale, 5, 2, 5, lv_color_hex(0xFFFFFF));
    
    // lv_meter_indicator_t * indic;

    /*Add a blue arc to the start*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_BLUE), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIN_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MIDDLE_RANGE_METER);

    /*Add a red arc to the end เลข Arcฝั่งสีแดง*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_RED), 0);
    lv_meter_set_indicator_start_value(meter, indic, MIDDLE_RANGE_METER);
    lv_meter_set_indicator_end_value(meter, indic, MAX_RANGE_METER);

    /*เข็มชี้*/
    // indic = lv_meter_add_needle_line(meter, scale, 4, lv_color_hex(0x0F1215), 0);

    ui_arc_inner_2 = lv_obj_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_arc_inner_2, SIZE_WIDTH_ARC_INNER2);
    lv_obj_set_height(ui_arc_inner_2, SIZE_HEIGHT_ARC_INNER2);
    lv_obj_set_x(ui_arc_inner_2, X_MID_36);
    lv_obj_set_y(ui_arc_inner_2, Y_POS_TEMPT_456);
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
    lv_label_set_text(ui_last_up_t_device6, dev_uptime.dev6);
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

    ui_chart1_temp = lv_chart_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_chart1_temp, SIZE_WIDTH_CHART);
    lv_obj_set_height(ui_chart1_temp, SIZE_HEIGHT_CHART);
    lv_obj_set_x(ui_chart1_temp, POS_X_CHART);
    lv_obj_set_y(ui_chart1_temp, POS_Y_CHART);
    lv_obj_add_flag(ui_chart1_temp, LV_OBJ_FLAG_HIDDEN);

    ui_chart2_temp = lv_chart_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_chart2_temp, SIZE_WIDTH_CHART);
    lv_obj_set_height(ui_chart2_temp, SIZE_HEIGHT_CHART);
    lv_obj_set_x(ui_chart2_temp, POS_X_CHART);
    lv_obj_set_y(ui_chart2_temp, POS_Y_CHART);
    lv_obj_add_flag(ui_chart2_temp, LV_OBJ_FLAG_HIDDEN);

    ui_chart3_temp = lv_chart_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_chart3_temp, SIZE_WIDTH_CHART);
    lv_obj_set_height(ui_chart3_temp, SIZE_HEIGHT_CHART);
    lv_obj_set_x(ui_chart3_temp, POS_X_CHART);
    lv_obj_set_y(ui_chart3_temp, POS_Y_CHART);
    lv_obj_add_flag(ui_chart3_temp, LV_OBJ_FLAG_HIDDEN);

    ui_chart4_temp = lv_chart_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_chart4_temp, SIZE_WIDTH_CHART);
    lv_obj_set_height(ui_chart4_temp, SIZE_HEIGHT_CHART);
    lv_obj_set_x(ui_chart4_temp, POS_X_CHART);
    lv_obj_set_y(ui_chart4_temp, POS_Y_CHART);
    lv_obj_add_flag(ui_chart4_temp, LV_OBJ_FLAG_HIDDEN);

    ui_chart5_temp = lv_chart_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_chart5_temp, SIZE_WIDTH_CHART);
    lv_obj_set_height(ui_chart5_temp, SIZE_HEIGHT_CHART);
    lv_obj_set_x(ui_chart5_temp, POS_X_CHART);
    lv_obj_set_y(ui_chart5_temp, POS_Y_CHART);
    lv_obj_add_flag(ui_chart5_temp, LV_OBJ_FLAG_HIDDEN);

    ui_chart6_temp = lv_chart_create(ui_monitor_screen_1);
    lv_obj_set_width(ui_chart6_temp, SIZE_WIDTH_CHART);
    lv_obj_set_height(ui_chart6_temp, SIZE_HEIGHT_CHART);
    lv_obj_set_x(ui_chart6_temp, POS_X_CHART);
    lv_obj_set_y(ui_chart6_temp, POS_Y_CHART);
    lv_obj_add_flag(ui_chart6_temp, LV_OBJ_FLAG_HIDDEN);
}