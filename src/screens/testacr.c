#include "object.h"
#include "data_struct.h"
#include "ui_events.h"

#ifdef TESTSCR

void testscreen_init(void){
    testscreen = lv_obj_create(NULL);
    lv_obj_clear_flag(testscreen, LV_OBJ_FLAG_SCROLLABLE);/// Flags
    lv_obj_set_style_bg_color(testscreen, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(testscreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(testscreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(testscreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * meter = lv_meter_create(testscreen);
    lv_obj_center(meter);
    lv_obj_set_size(meter, 100, 100);
    lv_obj_set_style_bg_color(meter, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(meter, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(meter, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(meter, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(meter, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    /*Add a scale first*/
    lv_meter_scale_t * scale = lv_meter_add_scale(meter);
    lv_meter_set_scale_range(meter,scale,-20,40,270,135);
    lv_meter_set_scale_ticks(meter, scale, 5, 2, 5, lv_color_hex(0xFFFFFF));
    // lv_meter_set_scale_major_ticks(meter, scale, 4, 4, 15, lv_color_hex(0xFFFFFF), 10);

    lv_meter_indicator_t * indic;

    /*Add a blue arc to the start*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_BLUE), 0);
    lv_meter_set_indicator_start_value(meter, indic, -20);
    lv_meter_set_indicator_end_value(meter, indic, 10);

    /*Add a red arc to the end เลข Arcฝั่งสีแดง*/
    indic = lv_meter_add_arc(meter, scale, 3, lv_palette_main(LV_PALETTE_RED), 0);
    lv_meter_set_indicator_start_value(meter, indic, 10);
    lv_meter_set_indicator_end_value(meter, indic, 40);

    /*เข็มชี้*/
    indic = lv_meter_add_needle_line(meter, scale, 4, lv_color_hex(0x0F1215), 0);


}


#endif