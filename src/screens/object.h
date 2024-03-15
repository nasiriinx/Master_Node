#ifndef object_H_
#define object_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Arduino.h"
#include "../ui.h"
// #include "string.h"

/***************** DEFINE PAGE NUMBER *****************/
#define GET_START_PAGE      0
#define GET_MONITOR_PAGE    1
#define GET_INFOR_PAGE      2

/***************** DEFINE INFORMATION PAGE NUMBER *****************/
#define GET_INFOR_PAGE_123456   1
#define GET_INFOR_PAGE_78910    2

/***************** DEFINE INFORMATION SCREEN *****************/
#define INFOR_DEVICE1   1
#define INFOR_DEVICE2   2
#define INFOR_DEVICE3   3
#define INFOR_DEVICE4   4
#define INFOR_DEVICE5   5
#define INFOR_DEVICE6   6
#define INFOR_DEVICE7   7
#define INFOR_DEVICE8   8
#define INFOR_DEVICE9   9
#define INFOR_DEVICE10  10

/***************** DEFINE GET START PAGE *****************/
#define POS_X_WIFI_CARD         0
#define POS_Y_WIFI_CARD         -35
#define POS_X_WIFI_SET_T        -134
#define POS_Y_WIFI_SET_T        -75
#define POS_X_SSID_T            -138
#define POS_Y_SSID_T            -42
#define SIZE_WIDTH_T_AREA       256
#define SIZE_HEIGHT_T_AREA      25
#define POS_X_T_AREA            68 
#define POS_Y_SSID_T_AREA       -42
#define POS_X_PWD_T             -141
#define POS_Y_PWD_T             0
#define POS_Y_PWD_T_AREA        0
#define POS_Y_NAME_SYS_CARD     73
#define POS_Y_NAME_SET_T        52
#define POS_Y_NAME_T            85
#define POS_Y_NAME_T_AREA       85
#define SIZE_WIDTH_SYS_CARD     414
#define SIZE_HEIGHT_SYS_CARD    79
#define POS_X_NAME_SYS_CARD     0
#define POS_Y_NAME_SYS_CARD     73
#define POS_X_NAME_SET_T        -126
#define POS_Y_NAME_SET_T        52
#define POS_X_NAME_T            -154
#define POS_Y_NAME_SYS          85
#define POS_X_NAME_T_AREA       75
#define SIZE_WIDTH_SUB_BTN      100
#define SIZE_HEIGHT_SUB_BTN     36
#define POS_X_SUB_BTN           0
#define POS_Y_SUB_BTN           136

#define POS_Y_EVENT_WIFI_CARD   -90
#define POS_Y_EVENT_WIFI_SET_T  -130
#define POS_Y_EVENT_SSID_T      -97
#define POS_Y_EVENT_SSID_T_A    -97
#define POS_Y_EVENT_PWD_T       -55
#define POS_Y_EVENT_PWD_T_A     -55

#define POS_Y_EVENT_WIFI_CARD_2   -120
#define POS_Y_EVENT_WIFI_SET_T_2  -160
#define POS_Y_EVENT_SSID_T_2      -127
#define POS_Y_EVENT_SSID_T_A_2    -127
#define POS_Y_EVENT_PWD_T_2       -85
#define POS_Y_EVENT_PWD_T_A_2     -85

#define POS_Y_EVENT_WIFI_CARD_3     35
#define POS_Y_EVENT_WIFI_SET_T_3    75
#define POS_Y_EVENT_SSID_T_3        42
#define POS_Y_EVENT_SSID_T_A_3      42
#define POS_Y_EVENT_PWD_T_3         0
#define POS_Y_EVENT_PWD_T_A_3       0
#define POS_Y_EVENT_NAME_SYS_CARD   -95
#define POS_Y_EVENT_NAME_SYS_SET_T  -115
#define POS_Y_EVENT_NAME_T          -83
#define POS_Y_EVENT_NAME_T_A        -83

/***************** DEFINE MONITOR SCREEN 1 and 2 *****************/
#define SIZE_WIDTH_CARD_DEVICE      143    
#define SIZE_HEIGHT_CARD_DEVICE     135
#define RAD_CARD                    10

#define SIZE_WIDTH_METER              85
#define SIZE_HEIGHT_METER             85
#define MIN_RANGE_METER              -20
#define MIDDLE_RANGE_METER          10
#define MAX_RANGE_METER              40
#define METER_ANGLE                 270
#define METER_ROTATION              135

#define SIZE_WIDTH_ARC_INNER2       55
#define SIZE_HEIGHT_ARC_INNER2      55
#define RAD_INNER2_ARC              50

#define POS_X_METER14               37
#define POS_Y_METER123              65
#define X_MID_14                    -161
#define Y_POS_METER_123             -53

#define POS_X_METER25               184
#define X_MID_25                    -14

#define POS_X_METER36               332
#define X_MID_36                    135

#define X_MID_710                   -160
#define X_MID_8                     -13
#define X_MID_9                     134
#define Y_POS_CARD_123              -54
#define Y_POS_NAMEDEVICE_123        -109

#define Y_POS_METER_456             207
#define Y_POS_TEMPT_123             -52 
#define Y_POS_LASTUP_123            0
#define Y_POS_CARD_456              88
#define Y_POS_NAMEDEVICE_456        33
#define Y_POS_ARCTEMP_456           88
#define Y_POS_TEMPT_456             88
#define Y_POS_LASTUP_456            140
#define SIZE_WIDTH_NEXT_BTN         22
#define SIZE_HEIGHT_NEXT_BTN        100
#define POS_X_NEXT_BTN              222
#define POS_Y_NEXT_BTN              16

/***************** DEFINE INFORMATION SCREEN 1-10 *****************/
#define WIDTH_CARD1_INFO            180
#define WIDTH_CARD2_INFO            280
#define WIDTH_OPTION_CARD           460
#define HEIGHT_CARD_INFO            275
#define POS_X_CARD1_INFO            -142
#define POS_X_OPTION_CARD           0
#define POS_X_CARD2_INFO            92
#define POS_Y_CARD_INFO             16
#define SIZE_ARCTEMP_INFOR          150
#define POS_X_ARC_INFOR             -135
#define POS_Y_ARC_INFOR             -18
#define SIZE_INNER1_ARCTEMP_INFOR   100
#define SIZE_INNER2_ARCTEMP_INFOR   80
#define POS_Y_DEVICENAME_INFO       79
#define POS_Y_DEVICE_POS_INFO       107
#define POS_Y_LASTUP_T_INFO         133
#define POS_X_CHART_T               82
#define POS_Y_CHART_T               -100
#define SIZE_WIDTH_CHART            240
#define SIZE_HEIGHT_CHART           220
#define POS_X_CHART                 90
#define POS_Y_CHART                 30
#define MIN_RANGE_CHART             -20
#define MAX_RANGE_CHART             40
#define LEN_Y_MAJOR_SEC_AXIS        2 
#define LEN_Y_MINOR_SEC_AXIS        0
#define NUM_Y_MAJOR_SEC_AXIS        5
#define NUM_Y_MINOR_SEC_AXIS        10   
#define DRAW_SIZE_CHART             20                   
#define SIZE_WIDTH_BACK_BTN         60
#define SIZE_HEIGHT_BACK_BTN        32
#define POS_X_BACK_BTN              -198
#define POS_Y_BACK_BTN              -105
#define CHART_ARR_BUF               1000
#define SIZE_WIDTH_T_AREA_INFO      260
#define SIZE_HEIGHT_T_AREA_INFO     35
#define POS_X_NAME_OP_T             25 
#define POS_Y_NAME_OP_T             -80
#define POS_X_POS_OP_T              28
#define POS_Y_POS_OP_T              10
#define POS_X_T_AREA_INFO           90
#define POS_Y_T_AREA_NAME_INFO      -40
#define POS_Y_T_AREA_POS_INFO       50
#define POS_X_SAVE_BTN              110
#define POS_Y_INFO_OP_BTN           100
#define POS_X_CANCEL_BTN            180

#define POS_Y_EVENT_NAME_T_AREA         -100
#define POS_X_EVENT_NAME_T_AREA         0
#define SIZE_WIDTH_EVENT_NAME_T_AREA    350

#define BUFFER_OF_CHART           50

#define SIZE_WIDTH_KEYBOARD         478
#define SIZE_HEIGHT_KEYBOARD        214
#define POS_X_KEYBOARD              0
#define POS_Y_KEYBOARD              51 

extern int count_pos_array_dev1;
extern int count_pos_array_dev2;
extern int count_pos_array_dev3;
extern int count_pos_array_dev4;
extern int count_pos_array_dev5;
extern int count_pos_array_dev6;
extern int count_pos_array_dev7;
extern int count_pos_array_dev8;
extern int count_pos_array_dev9;
extern int count_pos_array_dev10;

extern char Time;
extern char DateTime;
/***************** CO-OBJECT *****************/
//Header
lv_obj_t * ui_header_panel;            
lv_obj_t * ui_label_sys_name_header;        
lv_obj_t * ui_label_time_header;  
lv_obj_t * ui_icon_header_WiFi;
                
//Arc component
lv_obj_t * ui_arc_inner_1;
lv_obj_t * ui_arc_inner_2;

//Arc device 1
lv_obj_t * ui_arc_temp_1;
lv_obj_t * ui_temp_t_device1 ;
lv_obj_t * ui_name_t_device1;
lv_obj_t * ui_last_up_t_device1;

//Arc device 2
lv_obj_t * ui_arc_temp_2;
lv_obj_t * ui_temp_t_device2;
lv_obj_t * ui_name_t_device2;
lv_obj_t * ui_last_up_t_device2;

//Arc device 3
lv_obj_t * ui_arc_temp_3;
lv_obj_t * ui_temp_t_device3;
lv_obj_t * ui_name_t_device3;
lv_obj_t * ui_last_up_t_device3;

//Arc device 4
lv_obj_t * ui_arc_temp_4;
lv_obj_t * ui_temp_t_device4;
lv_obj_t * ui_name_t_device4;
lv_obj_t * ui_last_up_t_device4;

//Arc device 5
lv_obj_t * ui_arc_temp_5;
lv_obj_t * ui_temp_t_device5;
lv_obj_t * ui_name_t_device5;
lv_obj_t * ui_last_up_t_device5;

//Arc device 6
lv_obj_t * ui_arc_temp_6;
lv_obj_t * ui_temp_t_device6;
lv_obj_t * ui_name_t_device6;
lv_obj_t * ui_last_up_t_device6;

//Arc device 7
lv_obj_t * ui_arc_temp_7;
lv_obj_t * ui_temp_t_device7;
lv_obj_t * ui_name_t_device7;
lv_obj_t * ui_last_up_t_device7;

//Arc device 8
lv_obj_t * ui_arc_temp_8;
lv_obj_t * ui_temp_t_device8;
lv_obj_t * ui_name_t_device8;
lv_obj_t * ui_last_up_t_device8;

//Arc device 9
lv_obj_t * ui_arc_temp_9;
lv_obj_t * ui_temp_t_device9;
lv_obj_t * ui_name_t_device9;
lv_obj_t * ui_last_up_t_device9;

//Arc device 10
lv_obj_t * ui_arc_temp_10;
lv_obj_t * ui_temp_t_device10;
lv_obj_t * ui_name_t_device10;
lv_obj_t * ui_last_up_t_device10;

//Information screen
lv_obj_t * ui_infor_card1;
lv_obj_t * ui_infor_card2;

/***************** GET START SCREEN *****************/
void get_start_screen_init(void);
lv_obj_t * ui_get_start_screen;
lv_obj_t * ui_header_panel_t;
lv_obj_t * ui_wifi_card;
lv_obj_t * ui_wifi_setting_t;
lv_obj_t * ui_ssid_t;
lv_obj_t * ui_ssid_t_area;
lv_obj_t * ui_pwd_t;
lv_obj_t * ui_pwd_t_area;
lv_obj_t * ui_name_sys_card;
lv_obj_t * ui_name_setting_t;
lv_obj_t * ui_name_t;
lv_obj_t * ui_name_t_area;
lv_obj_t * ui_submit_setting_btn;
lv_obj_t * ui_keyboard_get_st;

/***************** MONITOR SCREEN 1 *****************/
void ui_monitor_screen_1_init(void);
lv_obj_t * ui_monitor_screen_1;
lv_obj_t * ui_card_device1;
lv_obj_t * ui_card_device2;
lv_obj_t * ui_card_device3;
lv_obj_t * ui_card_device4;
lv_obj_t * ui_card_device5;
lv_obj_t * ui_card_device6;
lv_obj_t * ui_next_page_btn;  
lv_obj_t * meter_1;
lv_obj_t * meter_2;
lv_obj_t * meter_3;
lv_obj_t * meter_4;
lv_obj_t * meter_5;
lv_obj_t * meter_6;
lv_meter_indicator_t * indic_1;
lv_meter_indicator_t * indic_2;
lv_meter_indicator_t * indic_3;
lv_meter_indicator_t * indic_4;
lv_meter_indicator_t * indic_5;
lv_meter_indicator_t * indic_6;
/***************** MONITOR SCREEN 2 *****************/
void ui_monitor_screen_2_init(void);
lv_obj_t * ui_monitor_screen_2;
lv_obj_t * ui_card_device7;
lv_obj_t * ui_card_device8;
lv_obj_t * ui_card_device9;
lv_obj_t * ui_card_device10;
lv_obj_t * ui_prev_page_btn;
lv_obj_t * meter_7;
lv_obj_t * meter_8;
lv_obj_t * meter_9;
lv_obj_t * meter_10;
/***************** INFORMATION SCREEN *****************/

void ui_infor_screen_1_init(void);
lv_obj_t * ui_keyboard_info_1;
lv_obj_t * ui_infor_screen_1;
lv_obj_t * ui_option_card_info1;
lv_obj_t * ui_name_op_t_1;
lv_obj_t * ui_pos_op_t_1;
lv_obj_t * ui_save_btn_1;
lv_obj_t * ui_cancel_btn_1;
lv_obj_t * ui_chart1_t;
lv_obj_t * ui_arc_temp_info_1;
lv_obj_t * ui_chart1_temp;
lv_obj_t * ui_temp_t_info_device1;
lv_obj_t * ui_name_t_info_device1;
lv_obj_t * ui_pos_t_device1;
lv_obj_t * ui_last_up_t_info_device1;
static lv_coord_t chart_temp_1_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_1_series;
lv_obj_t * ui_name_t_area_device1;
lv_obj_t * ui_pos_name_t_area_device1;
lv_obj_t * ui_view_btn1;
lv_obj_t * ui_btn_back1;

void ui_infor_screen_2_init(void);
lv_obj_t * ui_keyboard_info_2;
lv_obj_t * ui_infor_screen_2;
lv_obj_t * ui_option_card_info2;
lv_obj_t * ui_name_op_t_2;
lv_obj_t * ui_pos_op_t_2;
lv_obj_t * ui_save_btn_2;
lv_obj_t * ui_cancel_btn_2;
lv_obj_t * ui_chart2_t;
lv_obj_t * ui_arc_temp_info_2;
lv_obj_t * ui_chart2_temp;
lv_obj_t * ui_temp_t_info_device2;
lv_obj_t * ui_name_t_info_device2;
lv_obj_t * ui_pos_t_device2;
lv_obj_t * ui_last_up_t_info_device2;
static lv_coord_t chart_temp_2_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_2_series;
lv_obj_t * ui_name_t_area_device2;
lv_obj_t * ui_pos_name_t_area_device2;
lv_obj_t * ui_view_btn2;
lv_obj_t * ui_btn_back2;

void ui_infor_screen_3_init(void);
lv_obj_t * ui_keyboard_info_3;
lv_obj_t * ui_infor_screen_3;
lv_obj_t * ui_option_card_info3;
lv_obj_t * ui_name_op_t_3;
lv_obj_t * ui_pos_op_t_3;
lv_obj_t * ui_save_btn_3;
lv_obj_t * ui_cancel_btn_3;
lv_obj_t * ui_chart3_t;
lv_obj_t * ui_arc_temp_info_3;
lv_obj_t * ui_chart3_temp;
lv_obj_t * ui_temp_t_info_device3;
lv_obj_t * ui_name_t_info_device3;
lv_obj_t * ui_pos_t_device3;
lv_obj_t * ui_last_up_t_info_device3;
static lv_coord_t chart_temp_3_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_3_series;
lv_obj_t * ui_name_t_area_device3;
lv_obj_t * ui_pos_name_t_area_device3;
lv_obj_t * ui_view_btn3;
lv_obj_t * ui_btn_back3;

void ui_infor_screen_4_init(void);
lv_obj_t * ui_keyboard_info_4;
lv_obj_t * ui_infor_screen_4;
lv_obj_t * ui_option_card_info4;
lv_obj_t * ui_name_op_t_4;
lv_obj_t * ui_pos_op_t_4;
lv_obj_t * ui_save_btn_4;
lv_obj_t * ui_cancel_btn_4;
lv_obj_t * ui_chart4_t;
lv_obj_t * ui_arc_temp_info_4;
lv_obj_t * ui_chart4_temp;
lv_obj_t * ui_temp_t_info_device4;
lv_obj_t * ui_name_t_info_device4;
lv_obj_t * ui_pos_t_device4;
lv_obj_t * ui_last_up_t_info_device4;
static lv_coord_t chart_temp_4_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_4_series;
lv_obj_t * ui_name_t_area_device4;
lv_obj_t * ui_pos_name_t_area_device4;
lv_obj_t * ui_view_btn4;
lv_obj_t * ui_btn_back4;

void ui_infor_screen_5_init(void);
lv_obj_t * ui_keyboard_info_5;
lv_obj_t * ui_infor_screen_5;
lv_obj_t * ui_option_card_info5;
lv_obj_t * ui_name_op_t_5;
lv_obj_t * ui_pos_op_t_5;
lv_obj_t * ui_save_btn_5;
lv_obj_t * ui_cancel_btn_5;
lv_obj_t * ui_chart5_t;
lv_obj_t * ui_arc_temp_info_5;
lv_obj_t * ui_chart5_temp;
lv_obj_t * ui_temp_t_info_device5;
lv_obj_t * ui_name_t_info_device5;
lv_obj_t * ui_pos_t_device5;
lv_obj_t * ui_last_up_t_info_device5;
static lv_coord_t chart_temp_5_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_5_series;
lv_obj_t * ui_name_t_area_device5;
lv_obj_t * ui_pos_name_t_area_device5;
lv_obj_t * ui_view_btn5;
lv_obj_t * ui_btn_back5;

void ui_infor_screen_6_init(void);
lv_obj_t * ui_keyboard_info_6;
lv_obj_t * ui_infor_screen_6;
lv_obj_t * ui_option_card_info6;
lv_obj_t * ui_name_op_t_6;
lv_obj_t * ui_pos_op_t_6;
lv_obj_t * ui_save_btn_6;
lv_obj_t * ui_cancel_btn_6;
lv_obj_t * ui_chart6_t;
lv_obj_t * ui_arc_temp_info_6;
lv_obj_t * ui_chart6_temp;
lv_obj_t * ui_temp_t_info_device6;
lv_obj_t * ui_name_t_info_device6;
lv_obj_t * ui_pos_t_device6;
lv_obj_t * ui_last_up_t_info_device6;
static lv_coord_t chart_temp_6_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_6_series;
lv_obj_t * ui_name_t_area_device6;
lv_obj_t * ui_pos_name_t_area_device6;
lv_obj_t * ui_view_btn6;
lv_obj_t * ui_btn_back6;

void ui_infor_screen_7_init(void);
lv_obj_t * ui_keyboard_info_7;
lv_obj_t * ui_infor_screen_7;
lv_obj_t * ui_option_card_info7;
lv_obj_t * ui_name_op_t_7;
lv_obj_t * ui_pos_op_t_7;
lv_obj_t * ui_save_btn_7;
lv_obj_t * ui_cancel_btn_7;
lv_obj_t * ui_chart7_t;
lv_obj_t * ui_arc_temp_info_7;
lv_obj_t * ui_chart7_temp;
lv_obj_t * ui_temp_t_info_device7;
lv_obj_t * ui_name_t_info_device7;
lv_obj_t * ui_pos_t_device7;
lv_obj_t * ui_last_up_t_info_device7;
static lv_coord_t chart_temp_7_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_7_series;
lv_obj_t * ui_name_t_area_device7;
lv_obj_t * ui_pos_name_t_area_device7;
lv_obj_t * ui_view_btn7;
lv_obj_t * ui_btn_back7;

void ui_infor_screen_8_init(void);
lv_obj_t * ui_keyboard_info_8;
lv_obj_t * ui_infor_screen_8;
lv_obj_t * ui_option_card_info8;
lv_obj_t * ui_name_op_t_8;
lv_obj_t * ui_pos_op_t_8;
lv_obj_t * ui_save_btn_8;
lv_obj_t * ui_cancel_btn_8;
lv_obj_t * ui_chart8_t;
lv_obj_t * ui_arc_temp_info_8;
lv_obj_t * ui_chart8_temp;
lv_obj_t * ui_temp_t_info_device8;
lv_obj_t * ui_name_t_info_device8;
lv_obj_t * ui_pos_t_device8;
lv_obj_t * ui_last_up_t_info_device8;
static lv_coord_t chart_temp_8_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_8_series;
lv_obj_t * ui_name_t_area_device8;
lv_obj_t * ui_pos_name_t_area_device8;
lv_obj_t * ui_view_btn8;
lv_obj_t * ui_btn_back8;

void ui_infor_screen_9_init(void);
lv_obj_t * ui_keyboard_info_9;
lv_obj_t * ui_infor_screen_9;
lv_obj_t * ui_option_card_info9;
lv_obj_t * ui_name_op_t_9;
lv_obj_t * ui_pos_op_t_9;
lv_obj_t * ui_save_btn_9;
lv_obj_t * ui_cancel_btn_9;
lv_obj_t * ui_chart9_t;
lv_obj_t * ui_arc_temp_info_9;
lv_obj_t * ui_chart9_temp;
lv_obj_t * ui_temp_t_info_device9;
lv_obj_t * ui_name_t_info_device9;
lv_obj_t * ui_pos_t_device9;
lv_obj_t * ui_last_up_t_info_device9;
static lv_coord_t chart_temp_9_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_9_series;
lv_obj_t * ui_name_t_area_device9;
lv_obj_t * ui_pos_name_t_area_device9;
lv_obj_t * ui_view_btn9;
lv_obj_t * ui_btn_back9;

void ui_infor_screen_10_init(void);
lv_obj_t * ui_keyboard_info_10;
lv_obj_t * ui_infor_screen_10;
lv_obj_t * ui_option_card_info10;
lv_obj_t * ui_name_op_t_10;
lv_obj_t * ui_pos_op_t_10;
lv_obj_t * ui_save_btn_10;
lv_obj_t * ui_cancel_btn_10;
lv_obj_t * ui_chart10_t;
lv_obj_t * ui_arc_temp_info_10;
lv_obj_t * ui_chart10_temp;
lv_obj_t * ui_temp_t_info_device10;
lv_obj_t * ui_name_t_info_device10;
lv_obj_t * ui_pos_t_device10;
lv_obj_t * ui_last_up_t_info_device10;
static lv_coord_t chart_temp_10_array[BUFFER_OF_CHART];
lv_chart_series_t * chart_temp_10_series;
lv_obj_t * ui_name_t_area_device10;
lv_obj_t * ui_pos_name_t_area_device10;
lv_obj_t * ui_view_btn10;
lv_obj_t * ui_btn_back10;

#define TESTSCR
#ifdef TESTSCR
void testscreen_init(void);
lv_obj_t * testscreen;

#endif

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif