#ifndef ui_Screen1_H_
#define ui_Screen1_H_

// #include <stdio.h>

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

void ui_Screen1_screen_init();

#endif