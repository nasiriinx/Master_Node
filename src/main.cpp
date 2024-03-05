/************************ DEFINE ************************/
#define LGFX_USE_V1
#define screenWidth               480
#define screenHeight              320
#define LENGTH_OFF_MACADDRS       6
#define BAUD_RATE                 115200
#define BUFFER_OF_CHART           1000
/********************************************************/

/************************ INCLUDE ************************/
#include "LovyanGFX.hpp"
#include "lvgl.h"
#include "TFT_eSPI.h"
#include "ui.h"
#include "esp_now.h"
#include "WiFi.h"
#include "HTTPClient.h"
#include "Arduino.h"


#include "screens/object.h"
#include "screens/data_struct.h"
/*********************************************************/

/************************ STRUCTURE ************************/
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

/***********************************************************/

/************************ GLOBAL VARIABLE ************************/

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];
static LGFX tft;

int recv_fact_new_route = 0;
String recv_num_node = "node: ";
float recv_temperature_message = 00.0;
struct_message my_message;

const char *ssid = "Test";
const char *password = "12345678";

esp_now_peer_info_t peerInfo;
/*****************************************************************/

/************************ FUNCTION PROTOTYPE ************************/


/********************************************************************/

/************************ FUNCTION ************************/


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

void OnDataRecv(const uint8_t *mac_addr, const uint8_t *incomingData, int len)
{

  memcpy(&my_message, incomingData, sizeof(my_message));
  recv_num_node = my_message.num_node;
  recv_temperature_message = my_message.temperature_data;
  recv_fact_new_route = my_message.fact_new_route;
  

  if (recv_num_node == "node:1")
  {

    static int count_position_array = 0;
    temp.Node1 = recv_temperature_message;
    chart_temp_1_series = lv_chart_add_series(ui_chart1_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_1_array[count_position_array] = temp.Node1;
    lv_arc_set_value(ui_arc_temp_1, temp.Node1);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text1, "%.1f°C", temp.Node1);
    lv_label_set_text(ui_temp_t_device1, t_text.temp_text1);
    lv_label_set_text(ui_temp_t_info_device1, t_text.temp_text1);
    
    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart1_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart1_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart1_temp, chart_temp_1_series, chart_temp_1_array);
    }
    else
    {
      count_position_array = 0;
    }
    
  }else if (recv_num_node == "node:2")
  {

    static int count_position_array = 0;
    temp.Node2 = recv_temperature_message;
    chart_temp_2_series = lv_chart_add_series(ui_chart2_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_2_array[count_position_array] = temp.Node2;
    lv_arc_set_value(ui_arc_temp_2, temp.Node2);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text2, "%.1f°C", temp.Node2);
    lv_label_set_text(ui_temp_t_device2, t_text.temp_text2);
    lv_label_set_text(ui_temp_t_info_device2, t_text.temp_text2);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart2_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart2_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart2_temp, chart_temp_2_series, chart_temp_2_array);
    }
    else
    {
      count_position_array = 0;
    }
  }else if (recv_num_node == "node:3")
  {
    static int count_position_array = 0;
    temp.Node3 = recv_temperature_message;
    chart_temp_3_series = lv_chart_add_series(ui_chart3_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_3_array[count_position_array] = temp.Node3;
    lv_arc_set_value(ui_arc_temp_3, temp.Node3);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text3, "%.1f°C", temp.Node3);
    lv_label_set_text(ui_temp_t_device3, t_text.temp_text3);
    lv_label_set_text(ui_temp_t_info_device3, t_text.temp_text3);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart3_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart3_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart3_temp, chart_temp_3_series, chart_temp_3_array);
    }
    else
    {
      count_position_array = 0;
    }
  }else if (recv_num_node == "node:4")
  {
    static int count_position_array = 0;
    temp.Node4 = recv_temperature_message;
    chart_temp_4_series = lv_chart_add_series(ui_chart4_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_4_array[count_position_array] = temp.Node4;
    lv_arc_set_value(ui_arc_temp_4, temp.Node4);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text4, "%.1f°C", temp.Node4);
    lv_label_set_text(ui_temp_t_device4, t_text.temp_text4);
    lv_label_set_text(ui_temp_t_info_device4, t_text.temp_text4);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart4_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart4_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart4_temp, chart_temp_4_series, chart_temp_4_array);
    }
    else
    {
      count_position_array = 0;
    }
  }else if (recv_num_node == "node:5")
  {
    static int count_position_array = 0;
    temp.Node5 = recv_temperature_message;
    chart_temp_5_series = lv_chart_add_series(ui_chart5_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_5_array[count_position_array] = temp.Node5;
    lv_arc_set_value(ui_arc_temp_5, temp.Node5);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text5, "%.1f°C", temp.Node5);
    lv_label_set_text(ui_temp_t_device5, t_text.temp_text5);
    lv_label_set_text(ui_temp_t_info_device5, t_text.temp_text5);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart5_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart5_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart5_temp, chart_temp_5_series, chart_temp_5_array);
    }
    else
    {
      count_position_array = 0;
    }
  }else if (recv_num_node == "node:6")
  {
    static int count_position_array = 0;
    temp.Node6 = recv_temperature_message;
    chart_temp_6_series = lv_chart_add_series(ui_chart6_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_6_array[count_position_array] = temp.Node6;
    lv_arc_set_value(ui_arc_temp_6, temp.Node6);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text6, "%.1f°C", temp.Node6);
    lv_label_set_text(ui_temp_t_device6, t_text.temp_text6);
    lv_label_set_text(ui_temp_t_info_device6, t_text.temp_text6);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart6_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart6_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart6_temp, chart_temp_6_series, chart_temp_6_array);
    }
    else
    {
      count_position_array = 0;
    }
  }else if (recv_num_node == "node:7")
  {
    static int count_position_array = 0;
    temp.Node7 = recv_temperature_message;
    chart_temp_7_series = lv_chart_add_series(ui_chart7_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_7_array[count_position_array] = temp.Node7;
    lv_arc_set_value(ui_arc_temp_7, temp.Node7);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text7, "%.1f°C", temp.Node7);
    lv_label_set_text(ui_temp_t_device7, t_text.temp_text7);
    lv_label_set_text(ui_temp_t_info_device7, t_text.temp_text7);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart7_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart7_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart7_temp, chart_temp_7_series, chart_temp_7_array);
    }
    else
    {
      count_position_array = 0;
    }
  }else if (recv_num_node == "node:8")
  {
    static int count_position_array = 0;
    temp.Node8 = recv_temperature_message;
    chart_temp_8_series = lv_chart_add_series(ui_chart8_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_8_array[count_position_array] = temp.Node8;
    lv_arc_set_value(ui_arc_temp_8, temp.Node8);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text8, "%.1f°C", temp.Node8);
    lv_label_set_text(ui_temp_t_device8, t_text.temp_text8);
    lv_label_set_text(ui_temp_t_info_device8, t_text.temp_text8);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart8_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart8_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart8_temp, chart_temp_8_series, chart_temp_8_array);
    }
    else
    {
      count_position_array = 0;
    }
  }else if (recv_num_node == "node:9")
  {
    static int count_position_array = 0;
    temp.Node9 = recv_temperature_message;
    chart_temp_9_series = lv_chart_add_series(ui_chart9_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_9_array[count_position_array] = temp.Node9;
    lv_arc_set_value(ui_arc_temp_9, temp.Node9);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text9, "%.1f°C", temp.Node9);
    lv_label_set_text(ui_temp_t_device9, t_text.temp_text9);
    lv_label_set_text(ui_temp_t_info_device9, t_text.temp_text9);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart9_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart9_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart9_temp, chart_temp_9_series, chart_temp_9_array);
    }
    else
    {
      count_position_array = 0;
    }
  }else if (recv_num_node == "node:10")
  {
    static int count_position_array = 0;
    temp.Node10 = recv_temperature_message;
    chart_temp_10_series = lv_chart_add_series(ui_chart10_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_10_array[count_position_array] = temp.Node10;
    lv_arc_set_value(ui_arc_temp_10, temp.Node10);
    // lv_arc_set_value(ui_arc_temp_info_1, temp.Node1);
    sprintf(t_text.temp_text10, "%.1f°C", temp.Node10);
    lv_label_set_text(ui_temp_t_device10, t_text.temp_text10);
    lv_label_set_text(ui_temp_t_info_device10, t_text.temp_text10);

    if (count_position_array <= BUFFER_OF_CHART - 1)
    {
      count_position_array++;
      lv_chart_set_point_count(ui_chart10_temp, count_position_array);
      lv_chart_set_axis_tick(ui_chart10_temp, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_chart10_temp, chart_temp_10_series, chart_temp_10_array);
    }
    else
    {
      count_position_array = 0;
    }
  }
  else
  {
    // Nothing
  }
}

void setup_receiver_espnow()
{
  WiFi.mode(WIFI_AP_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(1000);
    Serial.println("Setting as a Wi-Fi Station..");
  }
  Serial.print("Station IP Address: ");
  Serial.println(WiFi.localIP());
  Serial.print("Wi-Fi Channel: ");
  Serial.println(WiFi.channel());
 
  if (esp_now_add_peer(&peerInfo) != ESP_OK)
  {
    Serial.println("Failed to add peer");
    return;
  }
  // Register for a callback function that will be called when data is received
  esp_now_register_recv_cb(OnDataRecv);
}





void setup()
{
  tft.begin();
  tft.setRotation(3);
  tft.setBrightness(255);
  Serial.begin(115200);

  setup_receiver_espnow();

  lv_init();
  // initialize LVGL draw buffers
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

void loop()
{
  
  lv_task_handler();
  

}

/***********************************************************/
