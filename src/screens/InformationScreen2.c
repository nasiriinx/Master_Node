#include "object.h"
#include "data_struct.h"
#include "ui_events.h"

void ui_infor_screen_2_init(void){

/********************************************** INFORMATION SCREEN **********************************************/
    ui_infor_screen_2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_infor_screen_2, LV_OBJ_FLAG_SCROLLABLE);/// Flags
    lv_obj_set_style_bg_color(ui_infor_screen_2, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_infor_screen_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_infor_screen_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_infor_screen_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

/********************************************** HEADER PANEL **********************************************/
    create_ui_header(ui_infor_screen_2,GET_INFOR_PAGE);

/********************************************** CARD **********************************************/
    create_ui_card_infor(ui_infor_screen_2);


 /********************************************** VIEW BUTTON **********************************************/   
    ui_view_btn2 = lv_btn_create(ui_infor_screen_2);
    lv_obj_set_width(ui_view_btn2, SIZE_WIDTH_BACK_BTN);
    lv_obj_set_height(ui_view_btn2, SIZE_HEIGHT_BACK_BTN);
    lv_obj_set_x(ui_view_btn2, POS_X_VIEW_BTN);
    lv_obj_set_y(ui_view_btn2, POS_Y_BACK_BTN);
    lv_obj_set_align(ui_view_btn2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_view_btn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_view_btn2, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_view_btn2, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_view_btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_view_btn2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_view_btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_view_btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_view_btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_view_btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_t * label_view_btn2 = lv_label_create(ui_view_btn2);
    lv_label_set_text(label_view_btn2, "View >");
    lv_obj_set_style_text_font(label_view_btn2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_view_btn2);

    lv_obj_add_event_cb(ui_view_btn2, ui_event_view_btn_dev2, LV_EVENT_ALL, NULL);

/********************************************** CHART **********************************************/
    ui_chart2_t = lv_label_create(ui_infor_screen_2);
    lv_obj_set_width(ui_chart2_t, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_chart2_t, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_chart2_t, POS_X_CHART_T);
    lv_obj_set_y(ui_chart2_t, POS_Y_CHART_T);
    lv_obj_set_align(ui_chart2_t, LV_ALIGN_CENTER);
    lv_label_set_text(ui_chart2_t, "Temperature");
    lv_obj_set_style_text_color(ui_chart2_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_chart2_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_chart2_t, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_chart2_t, LV_OBJ_FLAG_CLICKABLE);

    ui_chart2_temp = lv_chart_create(ui_infor_screen_2);
    lv_obj_set_width(ui_chart2_temp, SIZE_WIDTH_CHART);
    lv_obj_set_height(ui_chart2_temp, SIZE_HEIGHT_CHART);
    lv_obj_set_x(ui_chart2_temp, POS_X_CHART);
    lv_obj_set_y(ui_chart2_temp, POS_Y_CHART);
    lv_obj_set_align(ui_chart2_temp, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_chart2_temp, LV_CHART_TYPE_LINE);
    lv_chart_set_range(ui_chart2_temp, LV_CHART_AXIS_SECONDARY_Y, MIN_RANGE_CHART, MAX_RANGE_CHART);
    lv_chart_set_update_mode(ui_chart2_temp, LV_CHART_UPDATE_MODE_SHIFT);
    lv_chart_set_div_line_count(ui_chart2_temp, 20, 20);
    lv_obj_set_style_line_opa(ui_chart2_temp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_chart_set_axis_tick(ui_chart2_temp, LV_CHART_AXIS_SECONDARY_Y, LEN_Y_MAJOR_SEC_AXIS, LEN_Y_MINOR_SEC_AXIS, NUM_Y_MAJOR_SEC_AXIS, NUM_Y_MINOR_SEC_AXIS, true, DRAW_SIZE_CHART);
    lv_obj_set_style_bg_color(ui_chart2_temp, lv_color_hex(0x464B55), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chart2_temp, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_chart2_temp, lv_color_hex(0x464B55), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_chart2_temp, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_chart2_temp, 2, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui_chart2_temp, true, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_chart2_temp, lv_color_hex(0x464B55), LV_PART_TICKS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_chart2_temp, 0, LV_PART_TICKS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_chart2_temp, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_chart2_temp, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chart2_temp, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);

/********************************************** OPTION COMPONENT **********************************************/
    ui_btn_back2 = lv_btn_create(ui_infor_screen_2);
    lv_obj_set_width(ui_btn_back2, SIZE_WIDTH_BACK_BTN);
    lv_obj_set_height(ui_btn_back2, SIZE_HEIGHT_BACK_BTN);
    lv_obj_set_x(ui_btn_back2, POS_X_BACK_BTN);
    lv_obj_set_y(ui_btn_back2, POS_Y_BACK_BTN);
    lv_obj_set_align(ui_btn_back2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btn_back2, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_btn_back2, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_btn_back2, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btn_back2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btn_back2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_btn_back2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_btn_back2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btn_back2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btn_back2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *label_sym_btn;
    label_sym_btn = lv_label_create(ui_btn_back2);
    lv_label_set_text(label_sym_btn, "< Back");
    lv_obj_set_style_text_font(label_sym_btn, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_sym_btn);
    lv_obj_add_event_cb(ui_btn_back2, ui_event_back_btn2, LV_EVENT_ALL, NULL);

    ui_name_op_t_2 = lv_label_create(ui_infor_screen_2);
    lv_obj_set_width(ui_name_op_t_2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_name_op_t_2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_name_op_t_2, POS_X_NAME_OP_T);
    lv_obj_set_y(ui_name_op_t_2, POS_Y_NAME_OP_T);
    lv_obj_set_align(ui_name_op_t_2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_name_op_t_2, "Device Name");
    lv_obj_set_style_text_color(ui_name_op_t_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_op_t_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_op_t_2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(ui_name_op_t_2, LV_OBJ_FLAG_HIDDEN);

    ui_pos_op_t_2 = lv_label_create(ui_infor_screen_2);
    lv_obj_set_width(ui_pos_op_t_2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_pos_op_t_2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_pos_op_t_2, POS_X_POS_OP_T);
    lv_obj_set_y(ui_pos_op_t_2, POS_Y_POS_OP_T);
    lv_obj_set_align(ui_pos_op_t_2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pos_op_t_2, "Position Name");
    lv_obj_set_style_text_color(ui_pos_op_t_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pos_op_t_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_pos_op_t_2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(ui_pos_op_t_2, LV_OBJ_FLAG_HIDDEN);

    ui_save_btn_2 = lv_btn_create(ui_infor_screen_2);
    lv_obj_set_width(ui_save_btn_2, SIZE_WIDTH_BACK_BTN);
    lv_obj_set_height(ui_save_btn_2, SIZE_HEIGHT_BACK_BTN);
    lv_obj_set_x(ui_save_btn_2, POS_X_SAVE_BTN);
    lv_obj_set_y(ui_save_btn_2, POS_Y_INFO_OP_BTN);
    lv_obj_set_align(ui_save_btn_2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_save_btn_2, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_save_btn_2, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_save_btn_2, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_save_btn_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_save_btn_2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_save_btn_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_save_btn_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_save_btn_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_save_btn_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(ui_save_btn_2, LV_OBJ_FLAG_HIDDEN);

    lv_obj_t *label_sym_btn1;
    label_sym_btn1 = lv_label_create(ui_save_btn_2);
    lv_label_set_text(label_sym_btn1, "Save");
    lv_obj_set_style_text_font(label_sym_btn1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_sym_btn1);

    lv_obj_add_event_cb(ui_save_btn_2, ui_event_save_dev2, LV_EVENT_ALL, NULL);

    ui_cancel_btn_2 = lv_btn_create(ui_infor_screen_2);
    lv_obj_set_width(ui_cancel_btn_2, SIZE_WIDTH_BACK_BTN);
    lv_obj_set_height(ui_cancel_btn_2, SIZE_HEIGHT_BACK_BTN);
    lv_obj_set_x(ui_cancel_btn_2, POS_X_CANCEL_BTN);
    lv_obj_set_y(ui_cancel_btn_2, POS_Y_INFO_OP_BTN);
    lv_obj_set_align(ui_cancel_btn_2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_cancel_btn_2, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_cancel_btn_2, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_cancel_btn_2, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cancel_btn_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_cancel_btn_2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_cancel_btn_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_cancel_btn_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_cancel_btn_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_cancel_btn_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *label_sym_btn6;
    label_sym_btn6 = lv_label_create(ui_cancel_btn_2);
    lv_label_set_text(label_sym_btn6, "Back");
    lv_obj_set_style_text_font(label_sym_btn6, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_sym_btn6);

    lv_obj_add_flag(ui_cancel_btn_2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_event_cb(ui_cancel_btn_2, ui_event_cancel_btn_dev2, LV_EVENT_ALL, NULL);
 
 /********************************************** ARC TEMP **********************************************/
    ui_temp_t_device2 = lv_label_create(ui_infor_screen_2);
    lv_obj_set_width(ui_temp_t_device2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp_t_device2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp_t_device2, POS_X_ARC_INFOR);          
    lv_obj_set_y(ui_temp_t_device2, POS_Y_ARC_INFOR);  
    lv_obj_set_align(ui_temp_t_device2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp_t_device2, t_text.temp_text2);
    lv_obj_set_style_text_color(ui_temp_t_device2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp_t_device2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_temp_t_device2, &lv_font_montserrat_42, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_temp_t_device2, LV_OBJ_FLAG_CLICKABLE);

    ui_name_t_info_device2 = lv_label_create(ui_infor_screen_2);
    lv_obj_set_width(ui_name_t_info_device2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t_info_device2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_name_t_info_device2, POS_X_ARC_INFOR);
    lv_obj_set_y(ui_name_t_info_device2, POS_Y_DEVICENAME_INFO);
    lv_obj_set_align(ui_name_t_info_device2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_name_t_info_device2,name.device2); 
    lv_obj_set_style_text_color(ui_name_t_info_device2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t_info_device2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_t_info_device2, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t_info_device2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pos_t_device2 = lv_label_create(ui_infor_screen_2);
    lv_obj_set_width(ui_pos_t_device2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pos_t_device2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_pos_t_device2, POS_X_ARC_INFOR);
    lv_obj_set_y(ui_pos_t_device2, POS_Y_DEVICE_POS_INFO);
    lv_obj_set_align(ui_pos_t_device2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pos_t_device2,pos_n.device2); 
    lv_obj_set_style_text_color(ui_pos_t_device2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pos_t_device2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_pos_t_device2, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_pos_t_device2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_last_up_t_device2 = lv_label_create(ui_infor_screen_2);
    lv_obj_set_width(ui_last_up_t_device2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_last_up_t_device2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_last_up_t_device2, POS_X_ARC_INFOR); 
    lv_obj_set_y(ui_last_up_t_device2, POS_Y_LASTUP_T_INFO);
    lv_obj_set_align(ui_last_up_t_device2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_last_up_t_device2, dev_uptime.dev2);
    lv_obj_set_style_text_color(ui_last_up_t_device2, lv_color_hex(0xB3B3B3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_last_up_t_device2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_last_up_t_device2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_last_up_t_device2, LV_OBJ_FLAG_CLICKABLE);

/********************************************** KEYBOARD **********************************************/
    ui_keyboard_info_2 = lv_keyboard_create(ui_infor_screen_2);
    lv_obj_set_width(ui_keyboard_info_2, SIZE_WIDTH_KEYBOARD);
    lv_obj_set_height(ui_keyboard_info_2, SIZE_HEIGHT_KEYBOARD);
    lv_obj_set_x(ui_keyboard_info_2, POS_X_KEYBOARD);
    lv_obj_set_y(ui_keyboard_info_2, POS_Y_KEYBOARD);
    lv_obj_set_align(ui_keyboard_info_2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_keyboard_info_2, LV_OBJ_FLAG_HIDDEN); /// Flags675  
    lv_obj_add_event_cb(ui_keyboard_info_2, ui_event_keyboard_info2, LV_EVENT_ALL, NULL);

    ui_name_t_area_device2 = lv_textarea_create(ui_infor_screen_2);
    lv_obj_set_width(ui_name_t_area_device2, SIZE_WIDTH_T_AREA_INFO);
    lv_obj_set_height(ui_name_t_area_device2, SIZE_HEIGHT_T_AREA_INFO);
    lv_obj_set_x(ui_name_t_area_device2, POS_X_T_AREA_INFO);
    lv_obj_set_y(ui_name_t_area_device2, POS_Y_T_AREA_NAME_INFO);
    lv_obj_set_align(ui_name_t_area_device2, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_name_t_area_device2, name.device2);
    lv_obj_set_style_text_font(ui_name_t_area_device2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(ui_name_t_area_device2,true);
    lv_obj_add_flag(ui_name_t_area_device2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_event_cb(ui_name_t_area_device2, ui_event_name_t_area_dev2, LV_EVENT_ALL, NULL);

    ui_pos_name_t_area_device2 = lv_textarea_create(ui_infor_screen_2);
    lv_obj_set_width(ui_pos_name_t_area_device2, SIZE_WIDTH_T_AREA_INFO);
    lv_obj_set_height(ui_pos_name_t_area_device2, SIZE_HEIGHT_T_AREA_INFO);
    lv_obj_set_x(ui_pos_name_t_area_device2, POS_X_T_AREA_INFO);
    lv_obj_set_y(ui_pos_name_t_area_device2, POS_Y_T_AREA_POS_INFO);
    lv_obj_set_align(ui_pos_name_t_area_device2, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_pos_name_t_area_device2, pos_n.device2);
    lv_obj_set_style_text_font(ui_pos_name_t_area_device2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(ui_pos_name_t_area_device2,true);
    lv_obj_add_flag(ui_pos_name_t_area_device2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_event_cb(ui_pos_name_t_area_device2, ui_event_pos_name_t_area_dev2, LV_EVENT_ALL, NULL);
}