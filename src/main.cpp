///////////////////// DEFINE ////////////////////
#define LGFX_USE_V1
#define screenWidth               480
#define screenHeight              320
#define LENGTH_OFF_MACADDRS       6
#define BAUD_RATE                 115200
#define BUFFER_OF_CHART           1000

//////////////////////////////////////////////////

///////////////////// INCLUDE ////////////////////
#include <LovyanGFX.hpp>
#include <lvgl.h>
#include <TFT_eSPI.h> 
#include <ui.h>
#include <esp_now.h>
#include <WiFi.h>
#include <Arduino.h>
#include <WiFiMulti.h>
#include <HttpClient.h>

#include "C:\Users\nsiri\OneDrive\Desktop\wireless_sensor_network_master_node\src\screens\data_struct.h"
          
//////////////////////////////////////////////////

///////////////// GLOBAL VARIABLE ////////////////
extern Temperature temp;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];

//////////////////////////////////////////////////

/////////////////// STRUCTURE ////////////////////
class LGFX : public lgfx::LGFX_Device
{

lgfx::Panel_ST7796  _panel_instance;
lgfx::Bus_Parallel8 _bus_instance;   // 8-bit parallel bus instance (for ESP32)
lgfx::Light_PWM     _light_instance;
lgfx::Touch_FT5x06  _touch_instance; // FT5206, FT5306, FT5406, FT6206, FT6236, FT6336, FT6436

public:
  LGFX(void)
  {
    { //Bus control settings
      auto cfg = _bus_instance.config();    // Get the bus configuration structure.
      // 8-bit parallel bus settings
      //cfg.i2s_port = I2S_NUM_0;     // Select the I2S port to use (I2S_NUM_0 or I2S_NUM_1) (Use ESP32's I2S LCD mode)
      cfg.freq_write = 20000000;    // Transmission clock (max 20MHz, rounded to the nearest integer value of 80MHz)
      cfg.pin_wr =  47;              // Pin number connected to WR
      cfg.pin_rd =  -1;              // Pin number connected to RD
      cfg.pin_rs = 0;                // Pin number connected to RS (D/C)
      // LCD data interface, 8bit MCU (8080)
      cfg.pin_d0 = 9;                // Pin number connected to D0
      cfg.pin_d1 = 46;               // Pin number connected to D1
      cfg.pin_d2 = 3;                // Pin number connected to D2
      cfg.pin_d3 = 8;                // Pin number connected to D3
      cfg.pin_d4 = 18;               // Pin number connected to D4
      cfg.pin_d5 = 17;               // Pin number connected to D5
      cfg.pin_d6 = 16;               // Pin number connected to D6
      cfg.pin_d7 = 15;               // Pin number connected to D7
      _bus_instance.config(cfg);     // Apply the configuration to the bus.
      _panel_instance.setBus(&_bus_instance);      // Set the bus to the panel.
    }

    { // Display panel control settings
      auto cfg = _panel_instance.config();    // Get the display panel configuration structure.

      cfg.pin_cs           =    -1;  // Pin number to which CS is connected   (-1 = disable)
      cfg.pin_rst          =    4;   // Pin number to which RST is connected  (-1 = disable)
      cfg.pin_busy         =    -1;  // Pin number to which BUSY is connected (-1 = disable)

      // ※ The following settings have default values set for each panel, so if any item is unknown, try commenting it out.

      cfg.panel_width      =   320;  // Actual display width
      cfg.panel_height     =   480;  // Actual display height
      cfg.offset_x         =     0;  // X-direction offset of the panel
      cfg.offset_y         =     0;  // Y-direction offset of the panel
      cfg.offset_rotation  =     0;  // Offset value of the rotation direction 0~7 (4~7 are upside down)
      cfg.dummy_read_pixel =     8;  // Number of dummy reads before reading pixels
      cfg.dummy_read_bits  =     1;  // Number of dummy reads before reading non-pixel data
      cfg.readable         =  true;  // Set to true if data reading is possible
      cfg.invert           = true;  // Set to true if the brightness of the panel is inverted
      cfg.rgb_order        = false;  // Set to true if the red and blue of the panel are swapped
      cfg.dlen_16bit       = false;  // Set to true for panels that send data in 16-bit units via 16-bit parallel or SPI
      cfg.bus_shared       =  true;  // Set to true if sharing the bus with an SD card (controls the bus in drawJpgFile, etc.)

      // The following settings should only be set if the driver is ST7735 or ILI9163 and the display is shifted when the number of pixels is variable.
      //cfg.memory_width     =   240;  // Maximum width supported by the driver IC
      //cfg.memory_height    =   320;  // Maximum height supported by the driver IC

      _panel_instance.config(cfg);
    }

//*
    { // Backlight control settings (remove if not needed)
      auto cfg = _light_instance.config();    // Get the backlight configuration structure.

      cfg.pin_bl = 45;              // Pin number to which the backlight is connected
      cfg.invert = false;           // Set to true if the brightness of the backlight needs to be inverted
      cfg.freq   = 115200;           // PWM frequency of the backlight
      cfg.pwm_channel = 7;          // PWM channel number to use

      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance);  // Set the backlight to the panel.
    }
//*/

//*
    { // Touch screen control settings (remove if not needed)
      auto cfg = _touch_instance.config();

      cfg.x_min      = 0;     // Minimum X value obtained from the touch screen (raw value)
      cfg.x_max      = 319;   // Maximum X value obtained from the touch screen (raw value)
      cfg.y_min      = 0;     // Minimum Y value obtained from the touch screen (raw value)
      cfg.y_max      = 479;   // Maximum Y value obtained from the touch screen (raw value)
      cfg.pin_int    = 7;     // Pin number to which INT is connected
      cfg.bus_shared = true;  // Set to true if using a common bus with the screen
      cfg.offset_rotation = 0; // Adjustment in case the orientation of the display and touch do not match (set a value between 0 and 7)
// For I2C connection
      cfg.i2c_port = 1;       // Select the I2C to use (0 or 1)
      cfg.i2c_addr = 0x38;    // I2C device address
      cfg.pin_sda  = 6;       // Pin number to which SDA is connected
      cfg.pin_scl  = 5;       // Pin number to which SCL is connected
      cfg.freq = 400000;      // Set the I2C clock

      _touch_instance.config(cfg);
      _panel_instance.setTouch(&_touch_instance);  // Set the touch screen to the panel.
    }
//*/
    setPanel(&_panel_instance); // Set the panel to be used.
  }
};

typedef struct struct_message
{
  String num_node;
  float temperature_data;
  int fact_new_route;
 
} struct_message;
//////////////////////////////////////////////////

////////////// FUNCTION PROTOTYPE ////////////////


//////////////////////////////////////////////////

/////////////////// FUNCTION /////////////////////
//TFT setting
static LGFX tft;

int recv_fact_new_route = 0;
String recv_num_node = "node: ";
float recv_temperature_message = 00.0;
struct_message my_message;

// callback function that will be executed when data is received
void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len)
{
  memcpy(&my_message, incomingData, sizeof(my_message));
  recv_num_node = my_message.num_node;
  recv_temperature_message = my_message.temperature_data;
  recv_fact_new_route = my_message.fact_new_route;

  if (recv_num_node == "node:1")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo1_series_1_array[BUFFER_OF_CHART];
    lv_chart_series_t * ChartTempInfo1_series_1 = lv_chart_add_series(ChartTempInfo1, lv_color_hex(0x464B55),LV_CHART_AXIS_PRIMARY_Y);
    temp.Node1 = recv_temperature_message;
    CharTempInfo1_series_1_array[count_position_array] = temp.Node1;

    lv_arc_set_value(ui_ArcTemp1, temp.Node1);
    sprintf(t_text.temp_text1, "%.1f°C", temp.Node1);
    lv_label_set_text(ui_TempCard1, t_text.temp_text1);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo1, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo1, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo1, ChartTempInfo1_series_1, CharTempInfo1_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
  }

  else if (recv_num_node == "node:2")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo2_series_1_array[BUFFER_OF_CHART];
    temp.Node2 = recv_temperature_message;
    CharTempInfo2_series_1_array[count_position_array] = temp.Node2;

    lv_arc_set_value(ui_ArcTemp2, temp.Node2);
    sprintf(t_text.temp_text2, "%.1f°C", temp.Node2);
    lv_label_set_text(ui_TempCard2, t_text.temp_text2);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo2, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo2, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo2, ChartTempInfo2_series_1, CharTempInfo2_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
  }

  else if (recv_num_node == "node:3")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo3_series_1_array[BUFFER_OF_CHART];
    temp.Node3 = recv_temperature_message;
    CharTempInfo3_series_1_array[count_position_array] = temp.Node3;

    lv_arc_set_value(ui_ArcTemp3, temp.Node3);
    sprintf(t_text.temp_text3, "%.1f°C", temp.Node3);
    lv_label_set_text(ui_TempCard3, t_text.temp_text3);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo3, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo3, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo3, ChartTempInfo3_series_1, CharTempInfo3_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
  }

  else if (recv_num_node == "node:4")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo4_series_1_array[BUFFER_OF_CHART];
    temp.Node4 = recv_temperature_message;
    CharTempInfo4_series_1_array[count_position_array] = temp.Node4;

    lv_arc_set_value(ui_ArcTemp4, temp.Node4);
    sprintf(t_text.temp_text4, "%.1f°C", temp.Node4);
    lv_label_set_text(ui_TempCard4, t_text.temp_text4);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo4, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo4, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo4, ChartTempInfo4_series_1, CharTempInfo4_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
  }

  else if (recv_num_node == "node:5")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo5_series_1_array[BUFFER_OF_CHART];
    temp.Node5 = recv_temperature_message;
    CharTempInfo5_series_1_array[count_position_array] = temp.Node5;

    lv_arc_set_value(ui_ArcTemp5, temp.Node5);
    sprintf(t_text.temp_text5, "%.1f°C", temp.Node5);
    lv_label_set_text(ui_TempCard5, t_text.temp_text5);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo5, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo5, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo5, ChartTempInfo5_series_1, CharTempInfo5_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
  }

  else if (recv_num_node == "node:6")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo6_series_1_array[BUFFER_OF_CHART];
    temp.Node6 = recv_temperature_message;
    CharTempInfo6_series_1_array[count_position_array] = temp.Node6;

    lv_arc_set_value(ui_ArcTemp6, temp.Node6);
    sprintf(t_text.temp_text6, "%.1f°C", temp.Node6);
    lv_label_set_text(ui_TempCard6, t_text.temp_text6);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo6, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo6, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo6, ChartTempInfo6_series_1, CharTempInfo6_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
  }

  else if (recv_num_node == "node:7")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo7_series_1_array[BUFFER_OF_CHART];
    temp.Node7 = recv_temperature_message;
    CharTempInfo7_series_1_array[count_position_array] = temp.Node7;

    lv_arc_set_value(ui_ArcTemp7, temp.Node7);
    sprintf(t_text.temp_text7, "%.1f°C", temp.Node7);
    lv_label_set_text(ui_TempCard7, t_text.temp_text7);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo7, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo7, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo7, ChartTempInfo7_series_1, CharTempInfo7_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
  }

  else if (recv_num_node == "node:8")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo8_series_1_array[BUFFER_OF_CHART];
    temp.Node8 = recv_temperature_message;
    CharTempInfo8_series_1_array[count_position_array] = temp.Node8;

    lv_arc_set_value(ui_ArcTemp8, temp.Node8);
    sprintf(t_text.temp_text8, "%.1f°C", temp.Node8);
    lv_label_set_text(ui_TempCard8, t_text.temp_text8);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo8, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo8, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo8, ChartTempInfo8_series_1, CharTempInfo8_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
  }

  else if (recv_num_node == "node:9")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo9_series_1_array[BUFFER_OF_CHART];
    temp.Node9 = recv_temperature_message;
    CharTempInfo9_series_1_array[count_position_array] = temp.Node9;

    lv_arc_set_value(ui_ArcTemp9, temp.Node9);
    sprintf(t_text.temp_text9, "%.1f°C", temp.Node9);
    lv_label_set_text(ui_TempCard9, t_text.temp_text9);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo9, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo9, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo9, ChartTempInfo9_series_1, CharTempInfo9_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
  }

  else if (recv_num_node == "node:10")
  {
    static int count_position_array = 0;
    static lv_coord_t CharTempInfo10_series_1_array[BUFFER_OF_CHART];
    temp.Node10 = recv_temperature_message;
    CharTempInfo10_series_1_array[count_position_array] = temp.Node10;

    lv_arc_set_value(ui_ArcTemp10, temp.Node10);
    sprintf(t_text.temp_text10, "%.1f°C", temp.Node10);
    lv_label_set_text(ui_TempCard10, t_text.temp_text10);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ChartTempInfo10, count_position_array);
      lv_chart_set_axis_tick(ChartTempInfo10, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ChartTempInfo10, ChartTempInfo10_series_1, CharTempInfo10_series_1_array);
    }
    else
    {
      count_position_array = 0;
    
    }
  }

  else
  {
    // noting
  }
}

void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);
  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.writePixels((lgfx::rgb565_t *)&color_p->full, w * h);
  tft.endWrite();
  lv_disp_flush_ready(disp);
}

void my_touch_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
    uint16_t touchX, touchY;
    bool touched = tft.getTouch(&touchX, &touchY);
    if (!touched) { data->state = LV_INDEV_STATE_REL; }
    else {
      data->state = LV_INDEV_STATE_PR;
      data->point.x = touchX;
      data->point.y = touchY;
    }
}

void setup() {
  Serial.begin(115200);

  tft.begin();
  tft.setRotation(3);
  tft.setBrightness(255);
  WiFi.mode(WIFI_STA);

    // Init ESP-NOW
  if (esp_now_init() != ESP_OK)
  {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  esp_now_register_recv_cb(OnDataRecv);

  lv_init();
  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * 10);
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touch_read;
  lv_indev_drv_register(&indev_drv);
  
  ui_init();

  
}

void loop() {
  // while(1){
    lv_task_handler();
    delay(5);                                                                          
  // }
}
