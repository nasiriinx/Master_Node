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
    char temp_text1[10];
    char temp_text2[10];
    char temp_text3[10];
    char temp_text4[10];
    char temp_text5[10];
    char temp_text6[10];
    char temp_text7[10];
    char temp_text8[10];
    char temp_text9[10];
    char temp_text10[10];

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

Temperature temp;
TempText t_text;
Devicename name;
PosName pos_n;

#endif