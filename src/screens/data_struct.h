#ifndef data_struct_H_
#define data_struct

#include "stdio.h"

typedef struct Temperature
{
    float Node1;
    float Node2;
    float Node3;
    float Node4;
    float Node5;
    float Node6;
    float Node7;
    float Node8;
    float Node9;
    float Node10;
} Temperature;

typedef struct TempText
{
    char temp_text1[8];
    char temp_text2[8];
    char temp_text3[8];
    char temp_text4[8];
    char temp_text5[8];
    char temp_text6[8];
    char temp_text7[8];
    char temp_text8[8];
    char temp_text9[8];
    char temp_text10[8];

}TempText;

typedef struct Devicename
{
    char device1[32];
    char device2[32];
    char device3[32];
    char device4[32];
    char device5[32];
    char device6[32];
    char device7[32];
    char device8[32];
    char device9[32];
    char device10[32];
}Devicename;

typedef struct PosName
{
    char device1[32];
    char device2[32];
    char device3[32];
    char device4[32];
    char device5[32];
    char device6[32];
    char device7[32];
    char device8[32];
    char device9[32];
    char device10[32];
}PosName;

typedef struct GetStart
{
    char ssid[16];
    char password[16];
    char pj_name[15];
}GetStart;

typedef struct DateandTime{
    char date_time_header[18];
    char time_update[18];
}DateandTime;

typedef struct dev_time_up{
    char dev1[18];
    char dev2[18];
    char dev3[18];
    char dev4[18];
    char dev5[18];
    char dev6[18];
    char dev7[18];
    char dev8[18];
    char dev9[18];
    char dev10[18];
}dev_time_up;

Temperature temp;
TempText t_text;
Devicename name;
PosName pos_n;
GetStart getstart;
DateandTime dt;
dev_time_up dev_uptime;

#endif