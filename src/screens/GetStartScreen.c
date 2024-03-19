#include "object.h"
#include "ui_events.h"
#include "data_struct.h"

void get_start_screen_init(void){

    /********************************************** SCREEN **********************************************/
    ui_get_start_screen = lv_obj_create(NULL);                                                                  //Create screen object
    lv_obj_clear_flag(ui_get_start_screen, LV_OBJ_FLAG_SCROLLABLE);                                             //Remove flag scrollable
    lv_obj_set_style_bg_color(ui_get_start_screen, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);    //Set background color
    lv_obj_set_style_bg_opa(ui_get_start_screen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);                         //Set background opacity

    /********************************************** HEADER PANEL **********************************************/
    create_ui_header(ui_get_start_screen,GET_START_PAGE);

    /********************************************** WIFI setting **********************************************/
    ui_wifi_card = lv_obj_create(ui_get_start_screen);
    lv_obj_set_width(ui_wifi_card, SIZE_WIDTH_WIFI_CARD);
    lv_obj_set_height(ui_wifi_card, SIZE_HEIGHT_WIFI_CARD);
    lv_obj_set_x(ui_wifi_card, POS_X_WIFI_CARD);
    lv_obj_set_y(ui_wifi_card, POS_Y_WIFI_CARD);
    lv_obj_set_align(ui_wifi_card, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_wifi_card, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_wifi_card, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wifi_card, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wifi_card, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_wifi_card, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_wifi_card, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_wifi_card, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_wifi_card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifi_setting_t = lv_label_create(ui_get_start_screen);
    lv_obj_set_width(ui_wifi_setting_t, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_wifi_setting_t, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_wifi_setting_t, POS_X_WIFI_SET_T);
    lv_obj_set_y(ui_wifi_setting_t, POS_Y_WIFI_SET_T);
    lv_obj_set_align(ui_wifi_setting_t, LV_ALIGN_CENTER);
    lv_label_set_text(ui_wifi_setting_t, "WiFi Setup");
    lv_obj_set_style_text_color(ui_wifi_setting_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifi_setting_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_wifi_setting_t, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_wifi_setting_t, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_wifi_setting_t, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifi_setting_t, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ssid_t = lv_label_create(ui_get_start_screen);
    lv_obj_set_width(ui_ssid_t, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ssid_t, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ssid_t, POS_X_SSID_T);
    lv_obj_set_y(ui_ssid_t, POS_Y_SSID_T);
    lv_obj_set_align(ui_ssid_t, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ssid_t, "WiFi name :");
    lv_obj_set_style_text_color(ui_ssid_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ssid_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ssid_t, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ssid_t_area = lv_textarea_create(ui_get_start_screen);
    lv_obj_set_width(ui_ssid_t_area, SIZE_WIDTH_T_AREA);
    lv_obj_set_height(ui_ssid_t_area, SIZE_HEIGHT_T_AREA);
    lv_obj_set_x(ui_ssid_t_area, POS_X_T_AREA);
    lv_obj_set_y(ui_ssid_t_area, POS_Y_SSID_T);
    lv_obj_set_align(ui_ssid_t_area, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_ssid_t_area, "Wifi Name");
    lv_obj_set_style_text_font(ui_ssid_t_area, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(ui_ssid_t_area,true);

    lv_obj_add_event_cb(ui_ssid_t_area, ui_event_ssid_t_area, LV_EVENT_ALL, NULL);

    ui_pwd_t = lv_label_create(ui_get_start_screen);
    lv_obj_set_width(ui_pwd_t, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pwd_t, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_pwd_t, POS_X_PWD_T);
    lv_obj_set_y(ui_pwd_t, POS_Y_PWD_T);
    lv_obj_set_align(ui_pwd_t, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pwd_t, "Password :");
    lv_obj_set_style_text_color(ui_pwd_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pwd_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_pwd_t, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pwd_t_area = lv_textarea_create(ui_get_start_screen);
    lv_obj_set_width(ui_pwd_t_area, SIZE_WIDTH_T_AREA);
    lv_obj_set_height(ui_pwd_t_area, SIZE_HEIGHT_T_AREA);
    lv_obj_set_x(ui_pwd_t_area, POS_X_T_AREA);
    lv_obj_set_y(ui_pwd_t_area, POS_Y_PWD_T);
    lv_obj_set_align(ui_pwd_t_area, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_pwd_t_area, "Password");
    lv_obj_set_style_text_font(ui_pwd_t_area, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(ui_pwd_t_area,true);

    lv_obj_add_event_cb(ui_pwd_t_area, ui_event_pwd_t_area, LV_EVENT_ALL, NULL);
    /********************************************** Name setting **********************************************/
    ui_name_sys_card = lv_obj_create(ui_get_start_screen);
    lv_obj_set_width(ui_name_sys_card, SIZE_WIDTH_SYS_CARD);
    lv_obj_set_height(ui_name_sys_card, SIZE_HEIGHT_SYS_CARD);
    lv_obj_set_x(ui_name_sys_card, POS_X_NAME_SYS_CARD);
    lv_obj_set_y(ui_name_sys_card, POS_Y_NAME_SYS_CARD);
    lv_obj_set_align(ui_name_sys_card, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_name_sys_card, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_name_sys_card, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_name_sys_card, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_name_sys_card, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_name_sys_card, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_name_sys_card, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_name_sys_card, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_name_sys_card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_name_setting_t = lv_label_create(ui_get_start_screen);
    lv_obj_set_width(ui_name_setting_t, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_setting_t, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_name_setting_t, POS_X_NAME_SET_T);
    lv_obj_set_y(ui_name_setting_t, POS_Y_NAME_SET_T);
    lv_obj_set_align(ui_name_setting_t, LV_ALIGN_CENTER);
    lv_label_set_text(ui_name_setting_t, "System setup");
    lv_obj_set_style_text_color(ui_name_setting_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_setting_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_name_setting_t, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_setting_t, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_name_t = lv_label_create(ui_get_start_screen);
    lv_obj_set_width(ui_name_t, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_t, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_x(ui_name_t, POS_X_NAME_T);
    lv_obj_set_y(ui_name_t, POS_Y_NAME_SYS);
    lv_obj_set_align(ui_name_t, LV_ALIGN_CENTER);
    lv_label_set_text(ui_name_t, "Name :");
    lv_obj_set_style_text_color(ui_name_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_t, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_name_t_area = lv_textarea_create(ui_get_start_screen);
    lv_obj_set_width(ui_name_t_area, SIZE_WIDTH_T_AREA);
    lv_obj_set_height(ui_name_t_area, SIZE_HEIGHT_T_AREA);
    lv_obj_set_x(ui_name_t_area, POS_X_NAME_T_AREA);
    lv_obj_set_y(ui_name_t_area, POS_Y_NAME_SYS);
    lv_obj_set_align(ui_name_t_area, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_name_t_area,getstart.pj_name);
    lv_obj_set_style_text_font(ui_name_t_area, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(ui_name_t_area,true);

    lv_obj_add_event_cb(ui_name_t_area, ui_event_name_t_area, LV_EVENT_ALL, NULL);

    /********************************************** Keyboard **********************************************/
    ui_keyboard_get_st = lv_keyboard_create(ui_get_start_screen);
    lv_obj_set_width(ui_keyboard_get_st, SIZE_WIDTH_KEYBOARD);
    lv_obj_set_height(ui_keyboard_get_st, SIZE_HEIGHT_KEYBOARD);
    lv_obj_set_x(ui_keyboard_get_st, POS_X_KEYBOARD);
    lv_obj_set_y(ui_keyboard_get_st, POS_Y_KEYBOARD);
    lv_obj_set_align(ui_keyboard_get_st, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_keyboard_get_st, LV_OBJ_FLAG_HIDDEN); /// Flags675
    lv_obj_add_event_cb(ui_keyboard_get_st,ui_event_keyboard,LV_EVENT_ALL,NULL);

    /********************************************** SUBMIT Button **********************************************/
    ui_submit_setting_btn = lv_btn_create(ui_get_start_screen);
    lv_obj_set_width(ui_submit_setting_btn, SIZE_WIDTH_SUB_BTN);
    lv_obj_set_height(ui_submit_setting_btn, SIZE_HEIGHT_SUB_BTN);
    lv_obj_set_x(ui_submit_setting_btn, POS_X_SUB_BTN);
    lv_obj_set_y(ui_submit_setting_btn, POS_Y_SUB_BTN);
    lv_obj_set_align(ui_submit_setting_btn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_submit_setting_btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_submit_setting_btn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_submit_setting_btn, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_submit_setting_btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_submit_setting_btn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_submit_setting_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_submit_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_submit_setting_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_submit_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * ui_label_t_btn = lv_label_create(ui_submit_setting_btn);
    lv_label_set_text(ui_label_t_btn,"Submit");
    lv_obj_set_style_text_font(ui_label_t_btn, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(ui_label_t_btn);

    lv_obj_add_event_cb(ui_submit_setting_btn, ui_event_submit_setting_btn, LV_EVENT_ALL, NULL);
}