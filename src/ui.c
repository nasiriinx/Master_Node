#include "Arduino.h"
#include "ui.h"
#include "ui_helpers.h"
#include "screens/object.h"

/********************************************** NORMAL FUNCTION **********************************************/
void create_ui_header(lv_obj_t *screen, int page)
{

    ui_header_panel = lv_obj_create(screen);

    // Set header panel style
    lv_obj_set_style_bg_color(ui_header_panel, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_header_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_header_panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_header_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    if (page == GET_START_PAGE)
    {
        // Set width and height of headerpanel
        lv_obj_set_width(ui_header_panel, 783);
        lv_obj_set_height(ui_header_panel, 56);

        // Set header panel position
        lv_obj_set_x(ui_header_panel, -9);
        lv_obj_set_y(ui_header_panel, -133);
        lv_obj_set_align(ui_header_panel, LV_ALIGN_CENTER);

        ui_header_panel_t = lv_label_create(screen);
        lv_obj_set_width(ui_header_panel_t, LV_SIZE_CONTENT);  /// 1
        lv_obj_set_height(ui_header_panel_t, LV_SIZE_CONTENT); /// 1
        lv_obj_set_x(ui_header_panel_t, 0);
        lv_obj_set_y(ui_header_panel_t, -131);
        lv_obj_set_align(ui_header_panel_t, LV_ALIGN_CENTER);
        lv_label_set_text(ui_header_panel_t, "Getting start");
        lv_obj_set_style_text_color(ui_header_panel_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_header_panel_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(ui_header_panel_t, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    else if (page == GET_MONITOR_PAGE || page == GET_INFOR_PAGE)
    {
        // Set width and height of headerpanel
        lv_obj_set_width(ui_header_panel, 783);
        lv_obj_set_height(ui_header_panel, 37);

        // Set header panel position
        lv_obj_set_x(ui_header_panel, 0);
        lv_obj_set_y(ui_header_panel, -143);
        lv_obj_set_align(ui_header_panel, LV_ALIGN_CENTER);

        ui_label_sys_name_header = lv_label_create(screen);
        lv_obj_set_width(ui_label_sys_name_header, LV_SIZE_CONTENT);  /// 1
        lv_obj_set_height(ui_label_sys_name_header, LV_SIZE_CONTENT); /// 1
        lv_obj_set_x(ui_label_sys_name_header, -181);
        lv_obj_set_y(ui_label_sys_name_header, -141);
        lv_obj_set_align(ui_label_sys_name_header, LV_ALIGN_CENTER);
        lv_label_set_text(ui_label_sys_name_header, "Project name");
        lv_obj_set_style_text_color(ui_label_sys_name_header, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_label_sys_name_header, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(ui_label_sys_name_header, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

        ui_label_time_header = lv_label_create(screen);
        lv_obj_set_width(ui_label_time_header, LV_SIZE_CONTENT);  /// 1
        lv_obj_set_height(ui_label_time_header, LV_SIZE_CONTENT); /// 1
        lv_obj_set_x(ui_label_time_header, 110);
        lv_obj_set_y(ui_label_time_header, -141);
        lv_obj_set_align(ui_label_time_header, LV_ALIGN_CENTER);
        lv_label_set_text(ui_label_time_header, "Wed, January 31 2023, 3:30 PM");
        lv_obj_set_style_text_color(ui_label_time_header, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_label_time_header, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(ui_label_time_header, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

        ui_icon_header_WiFi = lv_label_create(screen);
        lv_obj_set_width(ui_icon_header_WiFi, LV_SIZE_CONTENT);  /// 1
        lv_obj_set_height(ui_icon_header_WiFi, LV_SIZE_CONTENT); /// 1
        lv_obj_set_x(ui_icon_header_WiFi, 220);
        lv_obj_set_y(ui_icon_header_WiFi, -141);
        lv_obj_set_align(ui_icon_header_WiFi, LV_ALIGN_CENTER);
        lv_label_set_text(ui_icon_header_WiFi, "D");
        lv_obj_set_style_text_color(ui_icon_header_WiFi, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_icon_header_WiFi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(ui_icon_header_WiFi, &ui_font_WiFi20, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}

void hide_submit_setting_btn()
{
    _ui_flag_modify(ui_submit_setting_btn, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}

void unhide_submit_setting_btn()
{
    _ui_flag_modify(ui_submit_setting_btn, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
}

void normal_state_pos()
{
    _ui_basic_set_property(ui_wifi_card, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_WIFI_CARD);
    _ui_basic_set_property(ui_wifi_setting_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_WIFI_SET_T);
    _ui_basic_set_property(ui_ssid_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_SSID_T);
    _ui_basic_set_property(ui_ssid_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_SSID_T_AREA);
    _ui_basic_set_property(ui_pwd_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_PWD_T);
    _ui_basic_set_property(ui_pwd_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_PWD_T_AREA);
    _ui_basic_set_property(ui_name_sys_card, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_NAME_SYS_CARD);
    _ui_basic_set_property(ui_name_setting_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_NAME_SET_T);
    _ui_basic_set_property(ui_name_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_NAME_T);
    _ui_basic_set_property(ui_name_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_NAME_T_AREA);
    unhide_submit_setting_btn();
}

void create_ui_card_infor(lv_obj_t *screen)
{
    ui_infor_card = lv_obj_create(screen);
    lv_obj_set_width(ui_infor_card, WIDTH_CARD1_INFO);
    lv_obj_set_height(ui_infor_card, HEIGHT_CARD_INFO);
    lv_obj_set_x(ui_infor_card, POS_X_CARD1_INFO);
    lv_obj_set_y(ui_infor_card, POS_Y_CARD_INFO);
    lv_obj_set_align(ui_infor_card, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_infor_card, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_infor_card, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_infor_card, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_infor_card, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_infor_card, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_infor_card, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_infor_card, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_infor_card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_infor_card = lv_obj_create(screen);
    lv_obj_set_width(ui_infor_card, WIDTH_CARD2_INFO);
    lv_obj_set_height(ui_infor_card, HEIGHT_CARD_INFO);
    lv_obj_set_x(ui_infor_card, POS_X_CARD2_INFO);
    lv_obj_set_y(ui_infor_card, POS_Y_CARD_INFO);
    lv_obj_set_align(ui_infor_card, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_infor_card, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_infor_card, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_infor_card, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_infor_card, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_infor_card, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_infor_card, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_infor_card, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_infor_card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void create_ui_back_btn(lv_obj_t *screen, int num)
{
    ui_btn_back = lv_btn_create(screen);
    lv_obj_set_width(ui_btn_back, SIZE_WIDTH_BACK_BTN);
    lv_obj_set_height(ui_btn_back, SIZE_HEIGHT_BACK_BTN);
    lv_obj_set_x(ui_btn_back, POS_X_BACK_BTN);
    lv_obj_set_y(ui_btn_back, POS_Y_BACK_BTN);
    lv_obj_set_align(ui_btn_back, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btn_back, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_btn_back, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_btn_back, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btn_back, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btn_back, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_btn_back, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_btn_back, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_btn_back, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_btn_back, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *label_sym_btn;
    label_sym_btn = lv_label_create(ui_btn_back);
    lv_label_set_text(label_sym_btn, "< Back");
    lv_obj_set_style_text_font(label_sym_btn, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_sym_btn);

    if (num == GET_INFOR_PAGE_123456)
    {
        lv_obj_add_event_cb(ui_btn_back, ui_event_back_btn1, LV_EVENT_ALL, NULL);
    }
    else if (num == GET_INFOR_PAGE_78910)
    {
        lv_obj_add_event_cb(ui_btn_back, ui_event_back_btn2, LV_EVENT_ALL, NULL);
    }
}


void normal_pos_t_area_info_scr(int num){
    switch(num){
        case 1:
            _ui_basic_set_property(ui_name_t_area_device1, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device1, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device1, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device1, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;

        case 2:
            _ui_basic_set_property(ui_name_t_area_device2, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device2, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device2, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device2, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;

        case 3:
            _ui_basic_set_property(ui_name_t_area_device3, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device3, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device3, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device3, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;

        case 4:
            _ui_basic_set_property(ui_name_t_area_device4, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device4, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device4, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device4, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;

        case 5:
            _ui_basic_set_property(ui_name_t_area_device5, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device5, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device5, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device5, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;

        case 6:
            _ui_basic_set_property(ui_name_t_area_device6, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device6, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device6, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device6, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;

        case 7:
            _ui_basic_set_property(ui_name_t_area_device7, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device7, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device7, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device7, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;

        case 8:
            _ui_basic_set_property(ui_name_t_area_device8, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device8, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device8, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device8, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;

        case 9:
            _ui_basic_set_property(ui_name_t_area_device9, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device9, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device9, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device9, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;

        case 10:
            _ui_basic_set_property(ui_name_t_area_device10, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_NAME_INFO);
            _ui_basic_set_property(ui_name_t_area_device10, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device10, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_T_AREA_POS_INFO);
            _ui_basic_set_property(ui_pos_name_t_area_device10, _UI_BASIC_PROPERTY_POSITION_X, POS_X_T_AREA_INFO);
        break;
    }
}

void delete_obj_getstart(){
    lv_obj_del(ui_wifi_card);
    lv_obj_del(ui_wifi_setting_t);
    lv_obj_del(ui_ssid_t);
    lv_obj_del(ui_ssid_t_area);
    lv_obj_del(ui_pwd_t);
    lv_obj_del(ui_pwd_t_area);
    lv_obj_del(ui_name_sys_card);
    lv_obj_del(ui_name_setting_t);
    lv_obj_del(ui_name_t_area);
    lv_obj_del(ui_keyboard_get_st);
    lv_obj_del(ui_submit_setting_btn);
}



void ui_init(void)
{

    get_start_screen_init();
    ui_monitor_screen_1_init();
    ui_monitor_screen_2_init();
    //ui_infor_screen_1_init(); 
    //ui_infor_screen_2_init();
    //ui_infor_screen_3_init();
    // ui_infor_screen_4_init();
    // ui_infor_screen_5_init();
    // ui_infor_screen_6_init();
    // ui_infor_screen_7_init();
    // ui_infor_screen_8_init();
    // ui_infor_screen_9_init();
    // ui_infor_screen_10_init();
    // ui____initial_actions0 = lv_obj_create(NULL);
    // lv_disp_load_scr(ui_get_start_screen);
    lv_disp_load_scr(ui_get_start_screen);

}
