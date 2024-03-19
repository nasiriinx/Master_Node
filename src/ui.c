#include "Arduino.h"
#include "ui.h"
#include "ui_helpers.h"
#include "screens/object.h"
#include "screens/data_struct.h"

#define SIZE_W_HEADER       783
#define SIZE_H_HEADER       56
#define SIZE_H_NOR_HEADER   37
#define POS_X_HEADER        -9
#define POS_Y_HEADER        -133
#define POS_X_HEADER_GT_T   0
#define POS_Y_HEADER_GT_T   -131
#define POS_X_HEADER_NOR    0
#define POS_Y_HEADER_NOR    -143
#define POS_X_SYS_NAME_T    -170
#define POS_Y_SYS_NAME_T    0
#define POS_X_TIME_HEAD_T   120
#define POS_Y_TIME_HEAD_T   0
#define POS_X_WIFI_HEAD     220
#define POS_Y_WIFI_HEAD     0
#define POS_X_VIEW_BTN      -85
#define SIZE_W_SAVE_BTN     110
#define SIZE_H_SAVE_BTN     100

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
        lv_obj_set_width(ui_header_panel, SIZE_W_HEADER);
        lv_obj_set_height(ui_header_panel, SIZE_H_HEADER);

        // Set header panel position
        lv_obj_set_x(ui_header_panel, POS_X_HEADER);
        lv_obj_set_y(ui_header_panel, POS_Y_HEADER);
        lv_obj_set_align(ui_header_panel, LV_ALIGN_CENTER);

        ui_header_panel_t = lv_label_create(screen);
        lv_obj_set_width(ui_header_panel_t, LV_SIZE_CONTENT);  /// 1
        lv_obj_set_height(ui_header_panel_t, LV_SIZE_CONTENT); /// 1
        lv_obj_set_x(ui_header_panel_t, POS_X_HEADER_GT_T);
        lv_obj_set_y(ui_header_panel_t, POS_Y_HEADER_GT_T);
        lv_obj_set_align(ui_header_panel_t, LV_ALIGN_CENTER);
        lv_label_set_text(ui_header_panel_t, "Getting start");
        lv_obj_set_style_text_color(ui_header_panel_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_header_panel_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(ui_header_panel_t, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    else if (page == GET_MONITOR_PAGE || page == GET_INFOR_PAGE)
    {
        // Set width and height of headerpanel
        lv_obj_set_width(ui_header_panel, SIZE_W_HEADER);
        lv_obj_set_height(ui_header_panel, SIZE_H_NOR_HEADER);

        // Set header panel position
        lv_obj_set_x(ui_header_panel, POS_X_HEADER_NOR);
        lv_obj_set_y(ui_header_panel, POS_Y_HEADER_NOR);
        lv_obj_set_align(ui_header_panel, LV_ALIGN_CENTER);

        ui_label_sys_name_header = lv_label_create(ui_header_panel);
        lv_obj_set_width(ui_label_sys_name_header, LV_SIZE_CONTENT);  /// 1
        lv_obj_set_height(ui_label_sys_name_header, LV_SIZE_CONTENT); /// 1
        lv_obj_set_x(ui_label_sys_name_header, POS_X_SYS_NAME_T);
        lv_obj_set_y(ui_label_sys_name_header, POS_Y_SYS_NAME_T);
        lv_obj_set_align(ui_label_sys_name_header, LV_ALIGN_CENTER);
        lv_label_set_text(ui_label_sys_name_header, getstart.pj_name);
        lv_obj_set_style_text_color(ui_label_sys_name_header, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_label_sys_name_header, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(ui_label_sys_name_header, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

        ui_label_time_header = lv_label_create(ui_header_panel);
        lv_obj_set_align(ui_label_time_header,LV_ALIGN_OUT_LEFT_MID);
        lv_obj_set_width(ui_label_time_header, LV_SIZE_CONTENT);  /// 1
        lv_obj_set_height(ui_label_time_header, LV_SIZE_CONTENT); /// 1
        lv_obj_set_x(ui_label_time_header, POS_X_TIME_HEAD_T);
        lv_obj_set_y(ui_label_time_header, POS_Y_TIME_HEAD_T);
        lv_obj_set_align(ui_label_time_header, LV_ALIGN_CENTER);
        lv_label_set_text(ui_label_time_header, dt.date_time_header);
        lv_obj_set_style_text_color(ui_label_time_header, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_label_time_header, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(ui_label_time_header, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

        ui_icon_header_WiFi = lv_label_create(ui_header_panel);
        lv_obj_set_width(ui_icon_header_WiFi, LV_SIZE_CONTENT);  /// 1
        lv_obj_set_height(ui_icon_header_WiFi, LV_SIZE_CONTENT); /// 1
        lv_obj_set_x(ui_icon_header_WiFi, POS_X_WIFI_HEAD);
        lv_obj_set_y(ui_icon_header_WiFi, POS_Y_WIFI_HEAD);
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
    ui_infor_card1 = lv_obj_create(screen);
    lv_obj_set_width(ui_infor_card1, WIDTH_CARD1_INFO);
    lv_obj_set_height(ui_infor_card1, HEIGHT_CARD_INFO);
    lv_obj_set_x(ui_infor_card1, POS_X_CARD1_INFO);
    lv_obj_set_y(ui_infor_card1, POS_Y_CARD_INFO);
    lv_obj_set_align(ui_infor_card1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_infor_card1, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_infor_card1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_infor_card1, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_infor_card1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_infor_card1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_infor_card1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_infor_card1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_infor_card1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_infor_card2 = lv_obj_create(screen);
    lv_obj_set_width(ui_infor_card2, WIDTH_CARD2_INFO);
    lv_obj_set_height(ui_infor_card2, HEIGHT_CARD_INFO);
    lv_obj_set_x(ui_infor_card2, POS_X_CARD2_INFO);
    lv_obj_set_y(ui_infor_card2, POS_Y_CARD_INFO);
    lv_obj_set_align(ui_infor_card2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_infor_card2, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_infor_card2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_infor_card2, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_infor_card2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_infor_card2, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_infor_card2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_infor_card2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_infor_card2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    
    ui_infor_card3 = lv_obj_create(screen);
    lv_obj_set_width(ui_infor_card3, WIDTH_CARD2_INFO);
    lv_obj_set_height(ui_infor_card3, HEIGHT_CARD_INFO);
    lv_obj_set_x(ui_infor_card3, POS_X_CARD2_INFO);
    lv_obj_set_y(ui_infor_card3, POS_Y_CARD_INFO);
    lv_obj_set_align(ui_infor_card3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_infor_card3, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_infor_card3, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_infor_card3, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_infor_card3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_infor_card3, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_infor_card3, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_infor_card3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_infor_card3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(ui_infor_card3, LV_OBJ_FLAG_HIDDEN);

}

void create_ui_view_btn(lv_obj_t * screen,lv_obj_t * view_btn_num){
    
    view_btn_num = lv_btn_create(screen);
    lv_obj_set_width(view_btn_num, SIZE_WIDTH_BACK_BTN);
    lv_obj_set_height(view_btn_num, SIZE_HEIGHT_BACK_BTN);
    lv_obj_set_x(view_btn_num, POS_X_VIEW_BTN);
    lv_obj_set_y(view_btn_num, POS_Y_BACK_BTN);
    lv_obj_set_align(view_btn_num, LV_ALIGN_CENTER);
    lv_obj_add_flag(view_btn_num, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(view_btn_num, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(view_btn_num, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(view_btn_num, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(view_btn_num, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(view_btn_num, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(view_btn_num, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(view_btn_num, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(view_btn_num, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_flag(view_btn_num, LV_OBJ_FLAG_HIDDEN);
    
    lv_obj_t * label_view_btn = lv_label_create(view_btn_num);
    lv_label_set_text(label_view_btn, "View >");
    lv_obj_set_style_text_font(label_view_btn, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_view_btn);

    if( view_btn_num == ui_view_btn1){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev1, LV_EVENT_ALL, NULL);
    }else if( view_btn_num == ui_view_btn2){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev2, LV_EVENT_ALL, NULL);
    }else if( view_btn_num == ui_view_btn3){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev3, LV_EVENT_ALL, NULL);
    }else if( view_btn_num == view_btn_num){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev4, LV_EVENT_ALL, NULL);
    }else if( view_btn_num == ui_view_btn5){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev5, LV_EVENT_ALL, NULL);
    }else if( view_btn_num == ui_view_btn6){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev6, LV_EVENT_ALL, NULL);
    }else if( view_btn_num == ui_view_btn7){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev7, LV_EVENT_ALL, NULL);
    }else if( view_btn_num == ui_view_btn8){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev8, LV_EVENT_ALL, NULL);
    }else if( view_btn_num == ui_view_btn9){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev9, LV_EVENT_ALL, NULL);
    }else if( view_btn_num == ui_view_btn10){
        lv_obj_add_event_cb(view_btn_num, ui_event_view_btn_dev10, LV_EVENT_ALL, NULL);
    }else{
        //Nothing
    }
    
}

void create_ui_chart(lv_obj_t * screen,lv_obj_t * view_chart_t_num,lv_obj_t * view_chart_num){
    /********************************************** CHART **********************************************/
    view_chart_t_num = lv_label_create(screen);
    lv_obj_set_width(view_chart_t_num, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(view_chart_t_num, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(view_chart_t_num, POS_X_CHART_T);
    lv_obj_set_y(view_chart_t_num, POS_Y_CHART_T);
    lv_obj_set_align(view_chart_t_num, LV_ALIGN_CENTER);
    lv_label_set_text(view_chart_t_num, "Temperature");
    lv_obj_set_style_text_color(view_chart_t_num, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(view_chart_t_num, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(view_chart_t_num, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(view_chart_t_num, LV_OBJ_FLAG_HIDDEN);

    view_chart_num = lv_chart_create(screen);
    lv_obj_set_width(view_chart_num, SIZE_WIDTH_CHART);
    lv_obj_set_height(view_chart_num, SIZE_HEIGHT_CHART);
    lv_obj_set_x(view_chart_num, POS_X_CHART);
    lv_obj_set_y(view_chart_num, POS_Y_CHART);
    lv_obj_set_align(view_chart_num, LV_ALIGN_CENTER);
    lv_chart_set_type(view_chart_num, LV_CHART_TYPE_LINE);
    lv_chart_set_range(view_chart_num, LV_CHART_AXIS_SECONDARY_Y, MIN_RANGE_CHART, MAX_RANGE_CHART);
    lv_chart_set_update_mode(view_chart_num, LV_CHART_UPDATE_MODE_SHIFT);
    lv_chart_set_div_line_count(view_chart_num, 20, 20);
    lv_obj_set_style_line_opa(view_chart_num, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_chart_set_axis_tick(view_chart_num, LV_CHART_AXIS_SECONDARY_Y, LEN_Y_MAJOR_SEC_AXIS, LEN_Y_MINOR_SEC_AXIS, NUM_Y_MAJOR_SEC_AXIS, NUM_Y_MINOR_SEC_AXIS, true, DRAW_SIZE_CHART);
    lv_obj_set_style_bg_color(view_chart_num, lv_color_hex(0x464B55), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(view_chart_num, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(view_chart_num, lv_color_hex(0x464B55), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(view_chart_num, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(view_chart_num, 2, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(view_chart_num, true, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(view_chart_num, lv_color_hex(0x464B55), LV_PART_TICKS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(view_chart_num, 0, LV_PART_TICKS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(view_chart_num, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(view_chart_num, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(view_chart_num, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_chart_set_axis_tick(view_chart_num, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
    lv_obj_add_flag(view_chart_num, LV_OBJ_FLAG_HIDDEN);
}

void create_ui_option_card(lv_obj_t * screen,lv_obj_t * option_card,lv_obj_t * name_op_t,lv_obj_t * pos_op_t){
    option_card = lv_obj_create(screen);
    lv_obj_set_width(option_card, WIDTH_OPTION_CARD);
    lv_obj_set_height(option_card, HEIGHT_CARD_INFO);
    lv_obj_set_x(option_card, POS_X_OPTION_CARD);
    lv_obj_set_y(option_card, POS_Y_CARD_INFO);
    lv_obj_set_align(option_card, LV_ALIGN_CENTER);
    lv_obj_clear_flag(option_card, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(option_card, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(option_card, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(option_card, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(option_card, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(option_card, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(option_card, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(option_card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(option_card, LV_OBJ_FLAG_HIDDEN);

    name_op_t = lv_label_create(screen);
    lv_obj_set_width(name_op_t, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(name_op_t, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(name_op_t, 17);
    lv_obj_set_y(name_op_t, -80);
    lv_obj_set_align(name_op_t, LV_ALIGN_CENTER);
    lv_label_set_text(name_op_t, "Device Name 1");
    lv_obj_set_style_text_color(name_op_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(name_op_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(name_op_t, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(name_op_t, LV_OBJ_FLAG_HIDDEN);

    pos_op_t = lv_label_create(screen);
    lv_obj_set_width(pos_op_t, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(pos_op_t, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(pos_op_t, 20);
    lv_obj_set_y(pos_op_t, 10);
    lv_obj_set_align(pos_op_t, LV_ALIGN_CENTER);
    lv_label_set_text(pos_op_t, "Position Name 1");
    lv_obj_set_style_text_color(pos_op_t, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(pos_op_t, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(pos_op_t, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(pos_op_t, LV_OBJ_FLAG_HIDDEN);
}

void create_ui_op_name_t_area(lv_obj_t * screen,lv_obj_t * name_t_area){
    name_t_area = lv_textarea_create(screen);
    lv_obj_set_width(name_t_area, SIZE_WIDTH_T_AREA_INFO);
    lv_obj_set_height(name_t_area, SIZE_HEIGHT_T_AREA_INFO);
    lv_obj_set_x(name_t_area, POS_X_T_AREA_INFO);
    lv_obj_set_y(name_t_area, POS_Y_T_AREA_NAME_INFO);
    lv_obj_set_align(name_t_area, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(name_t_area, "Device name");
    lv_obj_set_style_text_font(name_t_area, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(name_t_area,true);
    lv_obj_add_flag(name_t_area, LV_OBJ_FLAG_HIDDEN);

    if(name_t_area == ui_name_t_area_device1){
        lv_obj_add_event_cb(ui_name_t_area_device1, ui_event_name_t_area_dev1, LV_EVENT_ALL, NULL);
    }else if(name_t_area == ui_name_t_area_device2){
        lv_obj_add_event_cb(ui_name_t_area_device2, ui_event_name_t_area_dev2, LV_EVENT_ALL, NULL);
    }else if(name_t_area == ui_name_t_area_device3){
        lv_obj_add_event_cb(ui_name_t_area_device3, ui_event_name_t_area_dev3, LV_EVENT_ALL, NULL);
    }else if(name_t_area == ui_name_t_area_device4){
        lv_obj_add_event_cb(ui_name_t_area_device4, ui_event_name_t_area_dev4, LV_EVENT_ALL, NULL);
    }else if(name_t_area == ui_name_t_area_device5){
        lv_obj_add_event_cb(ui_name_t_area_device5, ui_event_name_t_area_dev5, LV_EVENT_ALL, NULL);
    }else if(name_t_area == ui_name_t_area_device6){
        lv_obj_add_event_cb(ui_name_t_area_device6, ui_event_name_t_area_dev6, LV_EVENT_ALL, NULL);
    }else if(name_t_area == ui_name_t_area_device7){
        lv_obj_add_event_cb(ui_name_t_area_device7, ui_event_name_t_area_dev7, LV_EVENT_ALL, NULL);
    }else if(name_t_area == ui_name_t_area_device8){
        lv_obj_add_event_cb(ui_name_t_area_device8, ui_event_name_t_area_dev8, LV_EVENT_ALL, NULL);
    }else if(name_t_area == ui_name_t_area_device9){
        lv_obj_add_event_cb(ui_name_t_area_device9, ui_event_name_t_area_dev9, LV_EVENT_ALL, NULL);
    }else if(name_t_area == ui_name_t_area_device10){
        lv_obj_add_event_cb(ui_name_t_area_device10, ui_event_name_t_area_dev10, LV_EVENT_ALL, NULL);
    }


}

void create_ui_op_pos_t_area(lv_obj_t * screen,lv_obj_t * pos_t_area){
    pos_t_area = lv_textarea_create(screen);
    lv_obj_set_width(pos_t_area, SIZE_WIDTH_T_AREA_INFO);
    lv_obj_set_height(pos_t_area, SIZE_HEIGHT_T_AREA_INFO);
    lv_obj_set_x(pos_t_area, POS_X_T_AREA_INFO);
    lv_obj_set_y(pos_t_area, POS_Y_T_AREA_NAME_INFO);
    lv_obj_set_align(pos_t_area, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(pos_t_area, "Device name");
    lv_obj_set_style_text_font(pos_t_area, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_textarea_set_one_line(pos_t_area,true);
    lv_obj_add_flag(pos_t_area, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_event_cb(pos_t_area, ui_event_pos_name_t_area_dev1, LV_EVENT_ALL, NULL);


    if(pos_t_area == ui_pos_name_t_area_device1){
        lv_obj_add_event_cb(ui_pos_name_t_area_device1, ui_event_pos_name_t_area_dev1, LV_EVENT_ALL, NULL);
    }else if(pos_t_area == ui_pos_name_t_area_device2){
        lv_obj_add_event_cb(ui_pos_name_t_area_device2, ui_event_pos_name_t_area_dev2, LV_EVENT_ALL, NULL);
    }else if(pos_t_area == ui_pos_name_t_area_device3){
        lv_obj_add_event_cb(ui_pos_name_t_area_device3, ui_event_pos_name_t_area_dev3, LV_EVENT_ALL, NULL);
    }else if(pos_t_area == ui_pos_name_t_area_device4){
        lv_obj_add_event_cb(ui_pos_name_t_area_device4, ui_event_pos_name_t_area_dev4, LV_EVENT_ALL, NULL);
    }else if(pos_t_area == ui_pos_name_t_area_device5){
        lv_obj_add_event_cb(ui_pos_name_t_area_device5, ui_event_pos_name_t_area_dev5, LV_EVENT_ALL, NULL);
    }else if(pos_t_area == ui_pos_name_t_area_device6){
        lv_obj_add_event_cb(ui_pos_name_t_area_device6, ui_event_pos_name_t_area_dev6, LV_EVENT_ALL, NULL);
    }else if(pos_t_area == ui_pos_name_t_area_device7){
        lv_obj_add_event_cb(ui_pos_name_t_area_device7, ui_event_pos_name_t_area_dev7, LV_EVENT_ALL, NULL);
    }else if(pos_t_area == ui_pos_name_t_area_device8){
        lv_obj_add_event_cb(ui_pos_name_t_area_device8, ui_event_pos_name_t_area_dev8, LV_EVENT_ALL, NULL);
    }else if(pos_t_area == ui_pos_name_t_area_device9){
        lv_obj_add_event_cb(ui_pos_name_t_area_device9, ui_event_pos_name_t_area_dev9, LV_EVENT_ALL, NULL);
    }else if(pos_t_area == ui_pos_name_t_area_device10){
        lv_obj_add_event_cb(ui_pos_name_t_area_device10, ui_event_pos_name_t_area_dev10, LV_EVENT_ALL, NULL);
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

void create_ui_save_btn(lv_obj_t * screen,lv_obj_t * save_btn){
    save_btn = lv_btn_create(screen);
    lv_obj_set_width(save_btn, SIZE_WIDTH_BACK_BTN);
    lv_obj_set_height(save_btn, SIZE_HEIGHT_BACK_BTN);
    lv_obj_set_x(save_btn, SIZE_W_SAVE_BTN);
    lv_obj_set_y(save_btn, SIZE_H_SAVE_BTN);
    lv_obj_set_align(save_btn, LV_ALIGN_CENTER);
    lv_obj_add_flag(save_btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(save_btn, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(save_btn, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(save_btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(save_btn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(save_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(save_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(save_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(save_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(save_btn, LV_OBJ_FLAG_HIDDEN);

    lv_obj_t *label_sym_btn;
    label_sym_btn = lv_label_create(save_btn);
    lv_label_set_text(label_sym_btn, "Save");
    lv_obj_set_style_text_font(label_sym_btn, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_sym_btn);

    if(save_btn == ui_save_btn_1){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev1, LV_EVENT_ALL, NULL);
    } else if(save_btn == ui_save_btn_1){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev1, LV_EVENT_ALL, NULL);
    }else if(save_btn == ui_save_btn_2){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev2, LV_EVENT_ALL, NULL);
    }else if(save_btn == ui_save_btn_3){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev3, LV_EVENT_ALL, NULL);
    }else if(save_btn == ui_save_btn_4){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev4, LV_EVENT_ALL, NULL);
    }else if(save_btn == ui_save_btn_5){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev5, LV_EVENT_ALL, NULL);
    }else if(save_btn == ui_save_btn_6){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev6, LV_EVENT_ALL, NULL);
    }else if(save_btn == ui_save_btn_7){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev7, LV_EVENT_ALL, NULL);
    }else if(save_btn == ui_save_btn_8){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev8, LV_EVENT_ALL, NULL);
    }else if(save_btn == ui_save_btn_9){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev9, LV_EVENT_ALL, NULL);
    }else if(save_btn == ui_save_btn_10){
        lv_obj_add_event_cb(save_btn, ui_event_save_dev10, LV_EVENT_ALL, NULL);
    }else{

    }
}

void create_ui_cancel_btn(lv_obj_t * screen,lv_obj_t * cancel_btn){
    cancel_btn = lv_btn_create(screen);
    lv_obj_set_width(cancel_btn, SIZE_WIDTH_BACK_BTN);
    lv_obj_set_height(cancel_btn, SIZE_HEIGHT_BACK_BTN);
    lv_obj_set_x(cancel_btn, 180);
    lv_obj_set_y(cancel_btn, 100);
    lv_obj_set_align(cancel_btn, LV_ALIGN_CENTER);
    lv_obj_add_flag(cancel_btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(cancel_btn, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(cancel_btn, lv_color_hex(0x292929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cancel_btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(cancel_btn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cancel_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(cancel_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(cancel_btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(cancel_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *label_sym_btn;
    label_sym_btn = lv_label_create(cancel_btn);
    lv_label_set_text(label_sym_btn, "Back");
    lv_obj_set_style_text_font(label_sym_btn, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label_sym_btn);

    lv_obj_add_flag(cancel_btn, LV_OBJ_FLAG_HIDDEN);

    if(cancel_btn == ui_cancel_btn_1){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev1, LV_EVENT_ALL, NULL);
    }else if(cancel_btn == ui_cancel_btn_2){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev2, LV_EVENT_ALL, NULL);
    }else if(cancel_btn == ui_cancel_btn_3){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev3, LV_EVENT_ALL, NULL);
    }else if(cancel_btn == ui_cancel_btn_4){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev4, LV_EVENT_ALL, NULL);
    }else if(cancel_btn == ui_cancel_btn_5){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev5, LV_EVENT_ALL, NULL);
    }else if(cancel_btn == ui_cancel_btn_6){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev6, LV_EVENT_ALL, NULL);
    }else if(cancel_btn == ui_cancel_btn_7){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev7, LV_EVENT_ALL, NULL);
    }else if(cancel_btn == ui_cancel_btn_8){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev8, LV_EVENT_ALL, NULL);
    }else if(cancel_btn == ui_cancel_btn_9){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev9, LV_EVENT_ALL, NULL);
    }else if(cancel_btn == ui_cancel_btn_10){
        lv_obj_add_event_cb(cancel_btn, ui_event_cancel_btn_dev10, LV_EVENT_ALL, NULL);
    }else{

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
    lv_disp_load_scr(ui_get_start_screen); 
}
