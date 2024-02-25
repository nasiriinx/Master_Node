#include "../ui.h"

void ui_Getstart_screen_init(void)
{
    ui_Getstart = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Getstart, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Getstart, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Getstart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Getstart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Getstart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    /**************************** HEADER ****************************/

    ui_HeaderPanel = lv_obj_create(ui_Getstart);
    lv_obj_set_width(ui_HeaderPanel, 783);
    lv_obj_set_height(ui_HeaderPanel, 56);
    lv_obj_set_x(ui_HeaderPanel, -9);
    lv_obj_set_y(ui_HeaderPanel, -133);
    lv_obj_set_align(ui_HeaderPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_HeaderPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_HeaderPanel, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HeaderPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_HeaderPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_HeaderPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_getstart_text = lv_label_create(ui_Getstart);
    lv_obj_set_width(ui_getstart_text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_getstart_text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_getstart_text, 0);
    lv_obj_set_y(ui_getstart_text, -131);
    lv_obj_set_align(ui_getstart_text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_getstart_text, "Getting start");
    lv_obj_set_style_text_color(ui_getstart_text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_getstart_text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_getstart_text, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    /**************************** WIFI setting ****************************/

    ui_Wifi_card = lv_obj_create(ui_Getstart);
    lv_obj_set_width(ui_Wifi_card, 414);
    lv_obj_set_height(ui_Wifi_card, 126);
    lv_obj_set_x(ui_Wifi_card, 0);
    lv_obj_set_y(ui_Wifi_card, -35);
    lv_obj_set_align(ui_Wifi_card, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Wifi_card, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Wifi_card, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Wifi_card, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Wifi_card, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Wifi_card, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Wifi_card, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Wifi_card, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Wifi_card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wifi_setup_text = lv_label_create(ui_Getstart);
    lv_obj_set_width(ui_Wifi_setup_text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Wifi_setup_text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Wifi_setup_text, -134);
    lv_obj_set_y(ui_Wifi_setup_text, -75);
    lv_obj_set_align(ui_Wifi_setup_text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Wifi_setup_text, "WiFi Setup");
    lv_obj_set_style_text_color(ui_Wifi_setup_text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Wifi_setup_text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Wifi_setup_text, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Wifi_setup_text, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Wifi_setup_text, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Wifi_setup_text, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifi_ssid_text = lv_label_create(ui_Getstart);
    lv_obj_set_width(ui_wifi_ssid_text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_wifi_ssid_text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_wifi_ssid_text, -138);
    lv_obj_set_y(ui_wifi_ssid_text, -42);
    lv_obj_set_align(ui_wifi_ssid_text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_wifi_ssid_text, "WiFi name :");
    lv_obj_set_style_text_color(ui_wifi_ssid_text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifi_ssid_text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifi_ssid_text, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifi_ssid_textarea = lv_textarea_create(ui_Getstart);
    lv_obj_set_width(ui_wifi_ssid_textarea, 256);
    lv_obj_set_height(ui_wifi_ssid_textarea, 25);
    lv_obj_set_x(ui_wifi_ssid_textarea, 68);
    lv_obj_set_y(ui_wifi_ssid_textarea, -42);
    lv_obj_set_align(ui_wifi_ssid_textarea, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_wifi_ssid_textarea, "Wifi Name");
    lv_obj_set_style_text_font(ui_wifi_ssid_textarea, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(ui_wifi_ssid_textarea,true);

    ui_wifi_pwd_text = lv_label_create(ui_Getstart);
    lv_obj_set_width(ui_wifi_pwd_text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_wifi_pwd_text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_wifi_pwd_text, -141);
    lv_obj_set_y(ui_wifi_pwd_text, 0);
    lv_obj_set_align(ui_wifi_pwd_text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_wifi_pwd_text, "Password :");
    lv_obj_set_style_text_color(ui_wifi_pwd_text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifi_pwd_text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifi_pwd_text, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifi_pwd_textarea = lv_textarea_create(ui_Getstart);
    lv_obj_set_width(ui_wifi_pwd_textarea, 256);
    lv_obj_set_height(ui_wifi_pwd_textarea, 15);
    lv_obj_set_x(ui_wifi_pwd_textarea, 68);
    lv_obj_set_y(ui_wifi_pwd_textarea, 0);
    lv_obj_set_align(ui_wifi_pwd_textarea, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_wifi_pwd_textarea, "Password");
    lv_obj_set_style_text_font(ui_wifi_pwd_textarea, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(ui_wifi_pwd_textarea,true);

    /**************************** Name setting ****************************/
    ui_sys_name_card = lv_obj_create(ui_Getstart);
    lv_obj_set_width(ui_sys_name_card, 414);
    lv_obj_set_height(ui_sys_name_card, 79);
    lv_obj_set_x(ui_sys_name_card, 0);
    lv_obj_set_y(ui_sys_name_card, 73);
    lv_obj_set_align(ui_sys_name_card, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_sys_name_card, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_sys_name_card, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sys_name_card, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sys_name_card, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_sys_name_card, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_sys_name_card, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sys_name_card, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_sys_name_card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sys_name_text = lv_label_create(ui_Getstart);
    lv_obj_set_width(ui_sys_name_text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sys_name_text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_sys_name_text, -126);
    lv_obj_set_y(ui_sys_name_text, 52);
    lv_obj_set_align(ui_sys_name_text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_sys_name_text, "System setup");
    lv_obj_set_style_text_color(ui_sys_name_text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sys_name_text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_sys_name_text, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sys_name_text, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_name_text = lv_label_create(ui_Getstart);
    lv_obj_set_width(ui_name_text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_name_text, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_x(ui_name_text, -154);
    lv_obj_set_y(ui_name_text, 85);
    lv_obj_set_align(ui_name_text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_name_text, "Name :");
    lv_obj_set_style_text_color(ui_name_text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_name_text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_name_text, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sys_name_textarea = lv_textarea_create(ui_Getstart);
    lv_obj_set_width(ui_sys_name_textarea, 256);
    lv_obj_set_height(ui_sys_name_textarea, 35);
    lv_obj_set_x(ui_sys_name_textarea, 68);
    lv_obj_set_y(ui_sys_name_textarea, 85);
    lv_obj_set_align(ui_sys_name_textarea, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_sys_name_textarea, "Display name");
    lv_obj_set_style_text_font(ui_sys_name_textarea, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(ui_sys_name_textarea,true);

    /**************************** Keyboard ****************************/
    ui_kb_setting = lv_keyboard_create(ui_Getstart);
    lv_obj_set_width(ui_kb_setting, 478);
    lv_obj_set_height(ui_kb_setting, 214);
    lv_obj_set_x(ui_kb_setting, 0);
    lv_obj_set_y(ui_kb_setting, 51);
    lv_obj_set_align(ui_kb_setting, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_kb_setting, LV_OBJ_FLAG_HIDDEN);/// Flags

    /**************************** SUBMIT Button ****************************/
    ui_submit_setting_btn = lv_btn_create(ui_Getstart);
    lv_obj_set_width(ui_submit_setting_btn, 100);
    lv_obj_set_height(ui_submit_setting_btn, 36);
    lv_obj_set_x(ui_submit_setting_btn, 0);
    lv_obj_set_y(ui_submit_setting_btn, 135);
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

    lv_obj_t * label_submit_btn;
    label_submit_btn = lv_label_create(ui_submit_setting_btn);
    lv_label_set_text(label_submit_btn,"Submit");
    lv_obj_set_style_text_font(label_submit_btn, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_submit_btn);

    /* EVENT */
    lv_obj_add_event_cb(ui_submit_setting_btn, ui_event_SubmitSettingbtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wifi_ssid_textarea, ui_event_SSIDTextarea, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_kb_setting, ui_event_kb_getstart, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wifi_pwd_textarea,ui_event_PWDTextarea, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sys_name_textarea,ui_event_SYSName_textarea,LV_EVENT_ALL, NULL);
}
