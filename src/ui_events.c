#include "ui_helpers.h"
#include "ui.h"
#include "screens/object.h"
#include "screens/data_struct.h"

/********************************************** CO-EVENT **********************************************/
void ui_event_keyboard(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        _ui_flag_modify(ui_keyboard_get_st, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        unhide_submit_setting_btn();
        normal_state_pos();
    }
}
/********************************************** EVENT GET START SCREEN **********************************************/

void ui_event_ssid_t_area(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED)
    {
        _ui_basic_set_property(ui_wifi_card, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_WIFI_CARD);
        _ui_basic_set_property(ui_wifi_setting_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_WIFI_SET_T);
        _ui_basic_set_property(ui_ssid_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_SSID_T);
        _ui_basic_set_property(ui_ssid_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_SSID_T_A);
        _ui_basic_set_property(ui_pwd_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_PWD_T);
        _ui_basic_set_property(ui_pwd_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_PWD_T_A);
        _ui_flag_modify(ui_keyboard_get_st, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        hide_submit_setting_btn();
        lv_keyboard_set_textarea(ui_keyboard_get_st, ui_ssid_t_area);
    }
    else if (event_code == LV_EVENT_DEFOCUSED)
    {
        normal_state_pos();
        unhide_submit_setting_btn();
        _ui_flag_modify(ui_keyboard_get_st, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_pwd_t_area(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED)
    {
        _ui_basic_set_property(ui_wifi_card, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_WIFI_CARD_2);
        _ui_basic_set_property(ui_wifi_setting_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_WIFI_SET_T_2);
        _ui_basic_set_property(ui_ssid_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_SSID_T_2);
        _ui_basic_set_property(ui_ssid_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_SSID_T_A_2);
        _ui_basic_set_property(ui_pwd_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_PWD_T_2);
        _ui_basic_set_property(ui_pwd_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_PWD_T_A_2);
        _ui_flag_modify(ui_keyboard_get_st, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        hide_submit_setting_btn();
        lv_keyboard_set_textarea(ui_keyboard_get_st, ui_pwd_t_area);
    }
    else if (event_code == LV_EVENT_DEFOCUSED)
    {
        normal_state_pos();
        unhide_submit_setting_btn();
        _ui_flag_modify(ui_keyboard_get_st, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_name_t_area(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED)
    {
        _ui_basic_set_property(ui_wifi_card, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_WIFI_CARD_3);
        _ui_basic_set_property(ui_wifi_setting_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_WIFI_SET_T_3);
        _ui_basic_set_property(ui_ssid_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_SSID_T_3);
        _ui_basic_set_property(ui_ssid_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_SSID_T_A_3);
        _ui_basic_set_property(ui_pwd_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_PWD_T_3);
        _ui_basic_set_property(ui_pwd_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_PWD_T_A_3);
        _ui_basic_set_property(ui_name_sys_card, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_SYS_CARD);
        _ui_basic_set_property(ui_name_setting_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_SYS_SET_T);
        _ui_basic_set_property(ui_name_t, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T);
        _ui_basic_set_property(ui_name_t_area, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_A);
        _ui_flag_modify(ui_keyboard_get_st, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        hide_submit_setting_btn();
        lv_keyboard_set_textarea(ui_keyboard_get_st, ui_name_t_area);
    }
    else if (event_code == LV_EVENT_DEFOCUSED)
    {
        normal_state_pos();
        unhide_submit_setting_btn();
        _ui_flag_modify(ui_keyboard_get_st, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_submit_setting_btn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        strcpy(getstart.pj_name, lv_textarea_get_text(ui_name_t_area));
        strcpy(getstart.ssid, lv_textarea_get_text(ui_ssid_t_area));
        strcpy(getstart.password, lv_textarea_get_text(ui_pwd_t_area));
        lv_label_set_text(ui_submit_t_btn,"Connecting");
        setup_wifi();
    }
}

/********************************************** EVENT MONITOR SCREEN 1 **********************************************/
void ui_event_next_page_btn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_2_init();
        lv_scr_load(ui_monitor_screen_2);
    }
}

void ui_event_card1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_infor_screen_1_init();
        lv_scr_load(ui_infor_screen_1);
        // lv_obj_del(ui_monitor_screen_1);
    }
}

void ui_event_card2(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e); 
    if(event_code == LV_EVENT_CLICKED){
        ui_infor_screen_2_init();
        lv_scr_load(ui_infor_screen_2);
    }
}

void ui_event_card3(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e); 
    if(event_code == LV_EVENT_CLICKED){
        ui_infor_screen_3_init();
        lv_scr_load(ui_infor_screen_3);
    }
}


void ui_event_card4(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e); 
    if(event_code == LV_EVENT_CLICKED){
        ui_infor_screen_4_init();
        lv_scr_load(ui_infor_screen_4);
    }
}


void ui_event_card5(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e); 
    if(event_code == LV_EVENT_CLICKED){
        ui_infor_screen_5_init();
        lv_scr_load(ui_infor_screen_5);
    }
}


void ui_event_card6(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e); 
    if(event_code == LV_EVENT_CLICKED){
        ui_infor_screen_6_init();
        lv_scr_load(ui_infor_screen_6);
    }
}

/********************************************** EVENT MONITOR SCREEN 2 **********************************************/

void ui_event_prev_page_btn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_1_init();
        lv_scr_load(ui_monitor_screen_1);
    }
}


void ui_event_card7(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e); 
    if(event_code == LV_EVENT_CLICKED){
        ui_infor_screen_7_init();
        lv_scr_load(ui_infor_screen_7);
    }
}


void ui_event_card8(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e); 
    if(event_code == LV_EVENT_CLICKED){
        ui_infor_screen_8_init();
        lv_scr_load(ui_infor_screen_8);
    }
}


void ui_event_card9(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e); 
    if(event_code == LV_EVENT_CLICKED){
        ui_infor_screen_9_init();
        lv_scr_load(ui_infor_screen_9);
    }
}


void ui_event_card10(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e); 
    if(event_code == LV_EVENT_CLICKED){
        ui_infor_screen_10_init();
        lv_scr_load(ui_infor_screen_10);
    }
}

/********************************************** EVENT INFORMATION SCREEN 1 **********************************************/
void ui_event_back_btn1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_1_init();
        lv_scr_load(ui_monitor_screen_1);
        lv_obj_del(ui_infor_screen_1);
    }
}

void ui_event_view_btn_dev1(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart1_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart1_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_cancel_btn_dev1(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart1_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart1_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_view_btn1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev1(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device1, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_name_t_area_device1, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_name_t_area_device1, SIZE_WIDTH_EVENT_NAME_T_AREA);
        lv_keyboard_set_textarea(ui_keyboard_info_1,ui_name_t_area_device1);
        _ui_flag_modify(ui_pos_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device1, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(1);
    }
}

void ui_event_pos_name_t_area_dev1(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device1, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device1, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device1, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_1,ui_pos_name_t_area_device1);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device1, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(1);
    }
}

void ui_event_save_dev1(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        ui_monitor_screen_1_init();
        strcpy(name.device1,lv_textarea_get_text(ui_name_t_area_device1));
        strcpy(pos_n.device1,lv_textarea_get_text(ui_pos_name_t_area_device1));
        lv_label_set_text(ui_name_t_device1,name.device1); 
        lv_label_set_text(ui_pos_t_device1,pos_n.device1); 
        lv_label_set_text(ui_name_t_info_device1,name.device1); 
    }
}

void ui_event_keyboard_info1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE1);
        lv_obj_set_width(ui_pos_name_t_area_device1, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device1, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

/********************************************** EVENT INFORMATION SCREEN 2 **********************************************/

void ui_event_view_btn_dev2(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart2_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart2_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_view_btn2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_back_btn2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_1_init();
        lv_scr_load(ui_monitor_screen_1);
        lv_obj_del(ui_infor_screen_2);
    }
}

void ui_event_cancel_btn_dev2(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart2_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart2_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev2(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device2, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_name_t_area_device2, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_name_t_area_device2, SIZE_WIDTH_EVENT_NAME_T_AREA);
        lv_keyboard_set_textarea(ui_keyboard_info_2,ui_name_t_area_device2);
        _ui_flag_modify(ui_pos_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device2, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(2);
    }
}

void ui_event_pos_name_t_area_dev2(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device2, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device2, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device2, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_2,ui_pos_name_t_area_device2);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device2, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(2);
    }
}

void ui_event_save_dev2(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        strcpy(name.device2,lv_textarea_get_text(ui_name_t_area_device2));
        strcpy(pos_n.device2,lv_textarea_get_text(ui_pos_name_t_area_device2));
        lv_label_set_text(ui_name_t_device2,name.device2); 
        lv_label_set_text(ui_pos_t_device2,pos_n.device2); 
        lv_label_set_text(ui_name_t_info_device2,name.device2); 
    }
}

void ui_event_keyboard_info2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE2);
        lv_obj_set_width(ui_pos_name_t_area_device2, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device2, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

/********************************************** EVENT INFORMATION SCREEN 3 **********************************************/
void ui_event_back3_btn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_1_init();
        lv_scr_load(ui_monitor_screen_1);
        lv_obj_del(ui_infor_screen_3);
    }
}

void ui_event_view_btn_dev3(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart3_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart3_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_view_btn3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_cancel_btn_dev3(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart3_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart3_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev3(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device3, _UI_BASIC_PROPERTY_POSITION_Y, -100);
        _ui_basic_set_property(ui_name_t_area_device3, _UI_BASIC_PROPERTY_POSITION_X, 0);
        lv_obj_set_width(ui_name_t_area_device3, 350);
        lv_keyboard_set_textarea(ui_keyboard_info_3,ui_name_t_area_device3);
        _ui_flag_modify(ui_pos_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device3, 260);
        _ui_flag_modify(ui_pos_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(3);
    }
}

void ui_event_pos_name_t_area_dev3(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device3, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device3, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device3, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_3,ui_pos_name_t_area_device3);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device3, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(3);
    }
}

void ui_event_save_dev3(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        strcpy(name.device3,lv_textarea_get_text(ui_name_t_area_device3));
        strcpy(pos_n.device3,lv_textarea_get_text(ui_pos_name_t_area_device3));
        lv_label_set_text(ui_name_t_device3,name.device3); 
        lv_label_set_text(ui_pos_t_device3,pos_n.device3); 
        lv_label_set_text(ui_name_t_info_device3,name.device3); 
    }
}

void ui_event_keyboard_info3(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE3);
        lv_obj_set_width(ui_pos_name_t_area_device3, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device3, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

/********************************************** EVENT INFORMATION SCREEN 4 **********************************************/
void ui_event_back4_btn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_1_init();
        lv_scr_load(ui_monitor_screen_1);
        lv_obj_del(ui_infor_screen_4);
    }
}

void ui_event_view_btn_dev4(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart4_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart4_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_cancel_btn_dev4(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart4_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart4_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev4(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device4, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_name_t_area_device4, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_name_t_area_device4, SIZE_WIDTH_EVENT_NAME_T_AREA);
        lv_keyboard_set_textarea(ui_keyboard_info_4,ui_name_t_area_device4);
        _ui_flag_modify(ui_pos_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device4, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(4);
    }
}

void ui_event_pos_name_t_area_dev4(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device4, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device4, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device4, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_4,ui_pos_name_t_area_device4);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device4, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(4);
    }
}

void ui_event_save_dev4(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        strcpy(name.device4,lv_textarea_get_text(ui_name_t_area_device4));
        strcpy(pos_n.device4,lv_textarea_get_text(ui_pos_name_t_area_device4));
        lv_label_set_text(ui_name_t_device4,name.device4); 
        lv_label_set_text(ui_pos_t_device4,pos_n.device4); 
        lv_label_set_text(ui_name_t_info_device4,name.device4); 
    }
}

void ui_event_keyboard_info4(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE4);
        lv_obj_set_width(ui_pos_name_t_area_device4, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device4, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

/********************************************** EVENT INFORMATION SCREEN 5 **********************************************/
void ui_event_back_btn5(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_1_init();
        lv_scr_load(ui_monitor_screen_1);
        lv_obj_del(ui_infor_screen_5);
    }
}

void ui_event_view_btn_dev5(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart5_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart5_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_view_btn5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_cancel_btn_dev5(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart5_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart5_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev5(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device5, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_name_t_area_device5, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_name_t_area_device5, SIZE_WIDTH_EVENT_NAME_T_AREA);
        lv_keyboard_set_textarea(ui_keyboard_info_5,ui_name_t_area_device5);
        _ui_flag_modify(ui_pos_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device5, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(5);
    }
}

void ui_event_pos_name_t_area_dev5(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device5, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device5, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device5, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_5,ui_pos_name_t_area_device5);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device5, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(5);
    }
}

void ui_event_save_dev5(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        strcpy(name.device5,lv_textarea_get_text(ui_name_t_area_device5));
        strcpy(pos_n.device5,lv_textarea_get_text(ui_pos_name_t_area_device5));
        lv_label_set_text(ui_name_t_device5,name.device5); 
        lv_label_set_text(ui_pos_t_device5,pos_n.device5); 
        lv_label_set_text(ui_name_t_info_device5,name.device5); 
    }
}

void ui_event_keyboard_info5(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE5);
        lv_obj_set_width(ui_pos_name_t_area_device5, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device5, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

/********************************************** EVENT INFORMATION SCREEN 6 **********************************************/
void ui_event_back_btn6(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_1_init();
        lv_scr_load(ui_monitor_screen_1);
        lv_obj_del(ui_infor_screen_6);
    }
}

void ui_event_view_btn_dev6(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart6_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart6_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_view_btn6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_cancel_btn_dev6(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart6_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart6_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev6(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device6, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_name_t_area_device6, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_name_t_area_device6, SIZE_WIDTH_EVENT_NAME_T_AREA);
        lv_keyboard_set_textarea(ui_keyboard_info_6,ui_name_t_area_device6);
        _ui_flag_modify(ui_pos_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device6, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(6);
    }
}

void ui_event_pos_name_t_area_dev6(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device6, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device6, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device6, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_6,ui_pos_name_t_area_device6);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device6, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(6);
    }
}

void ui_event_save_dev6(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        strcpy(name.device6,lv_textarea_get_text(ui_name_t_area_device6));
        strcpy(pos_n.device6,lv_textarea_get_text(ui_pos_name_t_area_device6));
        lv_label_set_text(ui_name_t_device6,name.device6); 
        lv_label_set_text(ui_pos_t_device6,pos_n.device6); 
        lv_label_set_text(ui_name_t_info_device6,name.device6); 
    }
}

void ui_event_keyboard_info6(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE6);
        lv_obj_set_width(ui_pos_name_t_area_device6, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device6, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

/********************************************** EVENT INFORMATION SCREEN 7 **********************************************/

void ui_event_back_btn7(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_2_init();
        lv_scr_load(ui_monitor_screen_2);
        lv_obj_del(ui_infor_screen_7);
    }
}

void ui_event_view_btn_dev7(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart7_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart7_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_view_btn7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_cancel_btn_dev7(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart7_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart7_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev7(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device7, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_name_t_area_device7, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_name_t_area_device7, SIZE_WIDTH_EVENT_NAME_T_AREA);
        lv_keyboard_set_textarea(ui_keyboard_info_7,ui_name_t_area_device7);
        _ui_flag_modify(ui_pos_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device7, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(7);
    }
}

void ui_event_pos_name_t_area_dev7(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device7, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device7, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device7, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_7,ui_pos_name_t_area_device7);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device7, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(7);
    }
}

void ui_event_save_dev7(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        strcpy(name.device7,lv_textarea_get_text(ui_name_t_area_device7));
        strcpy(pos_n.device7,lv_textarea_get_text(ui_pos_name_t_area_device7));
        lv_label_set_text(ui_name_t_device7,name.device7); 
        lv_label_set_text(ui_pos_t_device7,pos_n.device7); 
        lv_label_set_text(ui_name_t_info_device7,name.device7); 
    }
}

void ui_event_keyboard_info7(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE7);
        lv_obj_set_width(ui_pos_name_t_area_device7, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device7, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_7, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

/********************************************** EVENT INFORMATION SCREEN 8 **********************************************/
void ui_event_back_btn8(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_2_init();
        lv_scr_load(ui_monitor_screen_2);
        lv_obj_del(ui_infor_screen_8);
    }
}

void ui_event_view_btn_dev8(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart8_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart8_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_view_btn8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_cancel_btn_dev8(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart8_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart8_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev8(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device8, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_name_t_area_device8, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_name_t_area_device8, SIZE_WIDTH_EVENT_NAME_T_AREA);
        lv_keyboard_set_textarea(ui_keyboard_info_8,ui_name_t_area_device8);
        _ui_flag_modify(ui_pos_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device8, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(8);
    }
}

void ui_event_pos_name_t_area_dev8(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device8, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device8, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device8, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_8,ui_pos_name_t_area_device8);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device8, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(8);
    }
}

void ui_event_save_dev8(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        strcpy(name.device8,lv_textarea_get_text(ui_name_t_area_device8));
        strcpy(pos_n.device8,lv_textarea_get_text(ui_pos_name_t_area_device8));
        lv_label_set_text(ui_name_t_device8,name.device8); 
        lv_label_set_text(ui_pos_t_device8,pos_n.device8); 
        lv_label_set_text(ui_name_t_info_device8,name.device8); 
    }
}

void ui_event_keyboard_info8(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE8);
        lv_obj_set_width(ui_pos_name_t_area_device8, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device8, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

/********************************************** EVENT INFORMATION SCREEN 9 **********************************************/
void ui_event_back_btn9(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_2_init();
        lv_scr_load(ui_monitor_screen_2);
        lv_obj_del(ui_infor_screen_9);
    }
}

void ui_event_view_btn_dev9(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart8_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart8_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_view_btn8, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_cancel_btn_dev9(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart9_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart9_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev9(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device9, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_name_t_area_device9, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_name_t_area_device9, SIZE_WIDTH_EVENT_NAME_T_AREA);
        lv_keyboard_set_textarea(ui_keyboard_info_9,ui_name_t_area_device9);
        _ui_flag_modify(ui_pos_name_t_area_device9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device9, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(9);
    }
}

void ui_event_pos_name_t_area_dev9(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device9, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device9, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device9, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_9,ui_pos_name_t_area_device9);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device9, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(9);
    }
}

void ui_event_save_dev9(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        strcpy(name.device9,lv_textarea_get_text(ui_name_t_area_device9));
        strcpy(pos_n.device9,lv_textarea_get_text(ui_pos_name_t_area_device9));
        lv_label_set_text(ui_name_t_device9,name.device9); 
        lv_label_set_text(ui_pos_t_device9,pos_n.device9); 
        lv_label_set_text(ui_name_t_info_device9,name.device9); 
    }
}

void ui_event_keyboard_info9(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE9);
        lv_obj_set_width(ui_pos_name_t_area_device9, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device9, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_9, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

/********************************************** EVENT INFORMATION SCREEN 10 **********************************************/
void ui_event_back_btn10(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_monitor_screen_2_init();
        lv_scr_load(ui_monitor_screen_2);
        lv_obj_del(ui_infor_screen_10);
    }
}

void ui_event_view_btn_dev10(lv_event_t *e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_op_t_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_pos_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_save_btn_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_cancel_btn_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart10_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart10_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_view_btn10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_cancel_btn_dev10(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
     if (event_code == LV_EVENT_CLICKED){
        _ui_flag_modify(ui_pos_op_t_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_op_t_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_pos_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_save_btn_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_cancel_btn_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_chart10_temp, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_chart10_t, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_infor_card3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_view_btn10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
     }
}

void ui_event_name_t_area_dev10(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_flag_modify(ui_keyboard_info_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_basic_set_property(ui_name_t_area_device10, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_name_t_area_device10, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_name_t_area_device10, SIZE_WIDTH_EVENT_NAME_T_AREA);
        lv_keyboard_set_textarea(ui_keyboard_info_10,ui_name_t_area_device10);
        _ui_flag_modify(ui_pos_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_name_t_area_device10, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(10);
    }
}

void ui_event_pos_name_t_area_dev10(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_FOCUSED){
        _ui_basic_set_property(ui_pos_name_t_area_device10, _UI_BASIC_PROPERTY_POSITION_Y, POS_Y_EVENT_NAME_T_AREA);
        _ui_basic_set_property(ui_pos_name_t_area_device10, _UI_BASIC_PROPERTY_POSITION_X, POS_X_EVENT_NAME_T_AREA);
        lv_obj_set_width(ui_pos_name_t_area_device10, SIZE_WIDTH_EVENT_NAME_T_AREA);
        _ui_flag_modify(ui_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_keyboard_info_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_keyboard_set_textarea(ui_keyboard_info_10,ui_pos_name_t_area_device10);
    }else if(event_code == LV_EVENT_DEFOCUSED){
        _ui_flag_modify(ui_keyboard_info_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_obj_set_width(ui_pos_name_t_area_device10, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        normal_pos_t_area_info_scr(10);
    }
}

void ui_event_save_dev10(lv_event_t * e){
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED){
        strcpy(name.device10,lv_textarea_get_text(ui_name_t_area_device10));
        strcpy(pos_n.device10,lv_textarea_get_text(ui_pos_name_t_area_device10));
        lv_label_set_text(ui_name_t_device10,name.device10); 
        lv_label_set_text(ui_pos_t_device10,pos_n.device10); 
        lv_label_set_text(ui_name_t_info_device10,name.device10); 
    }
}

void ui_event_keyboard_info10(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        normal_pos_t_area_info_scr(INFOR_DEVICE10);
        lv_obj_set_width(ui_pos_name_t_area_device10, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_pos_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_name_t_area_device10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_set_width(ui_name_t_area_device10, SIZE_WIDTH_T_AREA_INFO);
        _ui_flag_modify(ui_keyboard_info_10, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}













