/************************ DEFINE ************************/
#define LGFX_USE_V1
#define screenWidth               480
#define screenHeight              320
#define LENGTH_OFF_MACADDRS       6
#define BAUD_RATE                 115200

#define RESET_COUNTER             0

#define FIFO_SIZE   100


#define CHART
#define DEBUG
/********************************************************/

/************************ INCLUDE ************************/
#include "LovyanGFX.hpp"
#include "lvgl.h"
#include "TFT_eSPI.h"
#include "ui.h"
#include "esp_now.h"
#include "WiFi.h"
#include "HTTPClient.h"
#include "NTPClient.h"
#include "Arduino.h"
#include <WiFiUdp.h>


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


struct DataItem {
  float temperature;
  String node;
  String update_time;
};
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

const long offsetTime = 25200;
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", offsetTime);

int count_pos_array_dev1;
int count_pos_array_dev2;
int count_pos_array_dev3;
int count_pos_array_dev4;
int count_pos_array_dev5;
int count_pos_array_dev6;
int count_pos_array_dev7;
int count_pos_array_dev8;
int count_pos_array_dev9;
int count_pos_array_dev10;

char date_time[20] = "";

DataItem fifo[FIFO_SIZE];
int front = 0;
int rear = -1;
int itemCount = 0;

TaskHandle_t Task1;

unsigned long interval = 10000;
unsigned long now =0;
/*****************************************************************/

/************************ FUNCTION PROTOTYPE ************************/


/********************************************************************/

/************************ FUNCTION ************************/

void addToFifo(String node, float temperature,String time_update) {
  if (itemCount < FIFO_SIZE) {
    rear = (rear + 1) % FIFO_SIZE; // นำ rear มา mod ด้วยขนาดของ FIFO เพื่อให้วนกลับไปที่ตำแหน่งแรกของ FIFO เมื่อ rear ถึงตำแหน่งสุดท้าย
    fifo[rear].node = node;
    fifo[rear].temperature = temperature;
    fifo[rear].update_time = time_update;
    itemCount++;
  }
}

DataItem removeFromFifo() {
  DataItem data = fifo[front];
  front++;
  if (front == FIFO_SIZE) {
    front = 0;
  }
  itemCount--;  // ลดจำนวนข้อมูลใน FIFO
  return data;
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

void my_touch_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
  uint16_t touchX, touchY;
  bool touched = tft.getTouch(&touchX, &touchY);
  if (!touched)
  {
    data->state = LV_INDEV_STATE_REL;
  }
  else
  {
    data->state = LV_INDEV_STATE_PR;
    data->point.x = touchX;
    data->point.y = touchY;
  }
}

void sendSheet(void *parameter)
{
  for (;;)
  {
    if (WiFi.status() == WL_CONNECTED)
    {
      if (itemCount > 0)
      {
        Serial.println("Google sheet start");
        DataItem data = removeFromFifo();
        String url = "https://script.google.com/macros/s/AKfycbzZBsXxVEVItSIlgcv4uo8Zf3Uzs-SfzHhQ_QEZaDoPTzrY8y0SGX0A2WMVkso9os7BoA/exec?device_node=" + data.node + "&" + "value=" + data.temperature;
        Serial.println("Making a request");
        HTTPClient http;
        http.begin(url.c_str());   // Start HTTP connection
        int httpCode = http.GET(); // Send GET request
        if (httpCode > 0)
        {
          String payload = http.getString();
          Serial.println(payload);
          // ลดจำนวนข้อมูลใน FIFO เมื่อส่งข้อมูลเรียบร้อยแล้ว
          itemCount--;
        }
        else
        {
          Serial.println("Error on HTTP request");
        }
        http.end(); // End HTTP connection
      }
      else
      {
        // กรณี FIFO ว่าง ให้พักการทำงาน
      }
    }
    else
    {

      // WiFi.disconnect();
      // WiFi.reconnect();
      // delay(1000);
    }
  }
}

void GetDateTime() {
  timeClient.update();

  unsigned long epochTime = timeClient.getEpochTime();
  int currentHour = timeClient.getHours();
  int currentMinute = timeClient.getMinutes();

  struct tm *ptm = gmtime((time_t *)&epochTime);
  int monthDay = ptm->tm_mday;
  int currentMonth = ptm->tm_mon + 1;
  int currentYear = ptm->tm_year + 1900;
  
  //00-00-00 00:00:00 >17 +\0<
  sprintf(dt.date_time_header, "%02d-%02d-%02d %02d:%02d",currentYear, currentMonth, monthDay, currentHour, currentMinute);
  lv_label_set_text(ui_label_time_header, dt.date_time_header);

  //Last update 00:00 >17 +\0<
  sprintf(dt.time_update, "Last update %02d:%02d", currentHour, currentMinute); 

}


void OnDataRecv(const uint8_t *mac_addr, const uint8_t *incomingData, int len)
{

  memcpy(&my_message, incomingData, sizeof(my_message));
  recv_num_node = my_message.num_node;
  recv_temperature_message = my_message.temperature_data;
  recv_fact_new_route = my_message.fact_new_route;
  addToFifo(recv_num_node, recv_temperature_message,dt.time_update);

  // Print FIFO size
  Serial.print("FIFO Size: ");
  Serial.println(itemCount);

  //IF RECEIVE FROM NODE 1
  if (recv_num_node == "node:1")
  {
    temp.Node1 = recv_temperature_message; 

    sprintf(t_text.temp_text1, "%.1f°C", temp.Node1);
    lv_label_set_text(ui_temp_t_device1, t_text.temp_text1);

    // lv_meter_set_indicator_value(meter_1,indic_1,temp.Node1);

    strcpy(dev_uptime.dev1,dt.time_update);
    lv_label_set_text(ui_last_up_t_device1, dev_uptime.dev1);
    
    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node1);
      Serial.println(t_text.temp_text1);
      Serial.println(dev_uptime.dev1);
      Serial.println("/");
    #endif
    
#ifdef CHART
    
    chart_temp_1_series = lv_chart_add_series(ui_chart1_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_1_array[count_pos_array_dev1] = temp.Node1;

    if (count_pos_array_dev1 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev1);
      count_pos_array_dev1++;
      lv_chart_set_point_count(ui_chart1_temp, count_pos_array_dev1);
      lv_chart_set_ext_y_array(ui_chart1_temp, chart_temp_1_series, chart_temp_1_array);
    }
    else
    {
      count_pos_array_dev1 = RESET_COUNTER;
    }
#endif

  }

  //IF RECEIVE FROM NODE 2
  else if (recv_num_node == "node:2")
  {
    temp.Node2 = recv_temperature_message; 

    sprintf(t_text.temp_text2, "%.1f°C", temp.Node2);
    lv_label_set_text(ui_temp_t_device2, t_text.temp_text2);

    //lv_meter_set_indicator_value(meter_2,indic_2,temp.Node2);

    strcpy(dev_uptime.dev2,dt.time_update);
    lv_label_set_text(ui_last_up_t_device2, dev_uptime.dev2);

    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node2);
      Serial.println(t_text.temp_text2);
      Serial.println(dev_uptime.dev2);
      Serial.println("/");
    #endif
    
#ifdef CHART
    
    chart_temp_2_series = lv_chart_add_series(ui_chart2_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_2_array[count_pos_array_dev2] = temp.Node2;

    if (count_pos_array_dev2 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev2);
      count_pos_array_dev2++;
      lv_chart_set_point_count(ui_chart2_temp, count_pos_array_dev2);
      lv_chart_set_ext_y_array(ui_chart2_temp, chart_temp_2_series, chart_temp_2_array);
    }
    else
    {
      count_pos_array_dev2 = RESET_COUNTER;
    }
#endif
  }

  //IF RECEIVE FROM NODE 3
  else if (recv_num_node == "node:3")
  {
    temp.Node3 = recv_temperature_message; 

    sprintf(t_text.temp_text3, "%.1f°C", temp.Node3);
    lv_label_set_text(ui_temp_t_device3, t_text.temp_text3);

    // lv_meter_set_indicator_value(meter_3,indic_3,temp.Node3);

    strcpy(dev_uptime.dev3,dt.time_update);
    lv_label_set_text(ui_last_up_t_device3, dev_uptime.dev3);


    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node3);
      Serial.println(t_text.temp_text3);
      Serial.println(dev_uptime.dev3);
      Serial.print("/");
    #endif
    
#ifdef CHART
    
    chart_temp_3_series = lv_chart_add_series(ui_chart3_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_3_array[count_pos_array_dev3] = temp.Node3;

    if (count_pos_array_dev3 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev3);
      count_pos_array_dev3++;
      lv_chart_set_point_count(ui_chart3_temp, count_pos_array_dev3);
      lv_chart_set_ext_y_array(ui_chart3_temp, chart_temp_3_series, chart_temp_3_array);
    }
    else
    {
      count_pos_array_dev3 = RESET_COUNTER;
    }
#endif
  }

  //IF RECEIVE FROM NODE 4
  else if (recv_num_node == "node:4")
  {
    temp.Node4 = recv_temperature_message; 

    sprintf(t_text.temp_text4, "%.1f°C", temp.Node4);
    lv_label_set_text(ui_temp_t_device4, t_text.temp_text4);

    // lv_meter_set_indicator_value(meter_4,indic_4,temp.Node4);

    strcpy(dev_uptime.dev4,dt.time_update);
    lv_label_set_text(ui_last_up_t_device4, dev_uptime.dev4);
    
    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node4);
      Serial.println(t_text.temp_text4);
      Serial.println(dev_uptime.dev4);
      Serial.print("/");
    #endif
    
#ifdef CHART
    
    chart_temp_4_series = lv_chart_add_series(ui_chart4_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_4_array[count_pos_array_dev4] = temp.Node4;

    if (count_pos_array_dev4 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev4);
      count_pos_array_dev4++;
      lv_chart_set_point_count(ui_chart4_temp, count_pos_array_dev4);
      lv_chart_set_ext_y_array(ui_chart4_temp, chart_temp_4_series, chart_temp_4_array);
    }
    else
    {
      count_pos_array_dev4 = RESET_COUNTER;
    }
#endif
  }

   //IF RECEIVE FROM NODE 5
  else if (recv_num_node == "node:5")
  {
    temp.Node5 = recv_temperature_message;

    sprintf(t_text.temp_text5, "%.1f°C", temp.Node5);
    lv_label_set_text(ui_temp_t_device5, t_text.temp_text5);

    // lv_meter_set_indicator_value(meter_5,indic_5,temp.Node5);

    strcpy(dev_uptime.dev5,dt.time_update);
    lv_label_set_text(ui_last_up_t_device5, dev_uptime.dev5);
    
    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node5);
      Serial.println(t_text.temp_text5);
      Serial.println(dev_uptime.dev5);
      Serial.print("/");
    #endif
    
#ifdef CHART
    
    chart_temp_5_series = lv_chart_add_series(ui_chart5_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_5_array[count_pos_array_dev5] = temp.Node5;

    if (count_pos_array_dev5 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev5);
      count_pos_array_dev5++;
      lv_chart_set_point_count(ui_chart5_temp, count_pos_array_dev5);
      lv_chart_set_ext_y_array(ui_chart5_temp, chart_temp_5_series, chart_temp_5_array);
    }
    else
    {
      count_pos_array_dev5 = RESET_COUNTER;
    }
#endif
  }

    else if (recv_num_node == "node:6")
  {
    temp.Node6 = recv_temperature_message;

    sprintf(t_text.temp_text6, "%.1f°C", temp.Node6);
    lv_label_set_text(ui_temp_t_device6, t_text.temp_text6);

    // lv_meter_set_indicator_value(meter_6,indic_6,temp.Node6);

    strcpy(dev_uptime.dev6,dt.time_update);
    lv_label_set_text(ui_last_up_t_device6, dev_uptime.dev6);
    
    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node6);
      Serial.println(t_text.temp_text6);
      Serial.println(dev_uptime.dev6);
      Serial.print("/");
    #endif
    
#ifdef CHART
    
    chart_temp_6_series = lv_chart_add_series(ui_chart6_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_6_array[count_pos_array_dev6] = temp.Node6;

    if (count_pos_array_dev6 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev6);
      count_pos_array_dev6++;
      lv_chart_set_point_count(ui_chart6_temp, count_pos_array_dev6);
      lv_chart_set_ext_y_array(ui_chart6_temp, chart_temp_6_series, chart_temp_6_array);
    }
    else
    {
      count_pos_array_dev6 = RESET_COUNTER;
    }
#endif
  }

    else if (recv_num_node == "node:7")
  {
    temp.Node7 = recv_temperature_message;

    sprintf(t_text.temp_text7, "%.1f°C", temp.Node7);
    lv_label_set_text(ui_temp_t_device7, t_text.temp_text7);

    // lv_meter_set_indicator_value(meter_7,indic_7,temp.Node7);

    strcpy(dev_uptime.dev7,dt.time_update);
    lv_label_set_text(ui_last_up_t_device7, dev_uptime.dev7);
    
    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node7);
      Serial.println(t_text.temp_text7);
      Serial.println(dev_uptime.dev7);
      Serial.print("/");
    #endif
    
#ifdef CHART
    
    chart_temp_7_series = lv_chart_add_series(ui_chart7_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_7_array[count_pos_array_dev7] = temp.Node7;

    if (count_pos_array_dev7 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev7);
      count_pos_array_dev7++;
      lv_chart_set_point_count(ui_chart7_temp, count_pos_array_dev7);
      lv_chart_set_ext_y_array(ui_chart7_temp, chart_temp_7_series, chart_temp_7_array);
    }
    else
    {
      count_pos_array_dev7 = RESET_COUNTER;
    }
#endif
  }

    else if (recv_num_node == "node:8")
  {
    temp.Node8 = recv_temperature_message;

    sprintf(t_text.temp_text8, "%.1f°C", temp.Node8);
    lv_label_set_text(ui_temp_t_device8, t_text.temp_text8);

    // lv_meter_set_indicator_value(meter_8,indic_8,temp.Node8);

    strcpy(dev_uptime.dev8,dt.time_update);
    lv_label_set_text(ui_last_up_t_device8, dev_uptime.dev8);
    
    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node8);
      Serial.println(t_text.temp_text8);
      Serial.println(dev_uptime.dev8);
      Serial.print("/");
    #endif
    
#ifdef CHART
    
    chart_temp_8_series = lv_chart_add_series(ui_chart8_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_8_array[count_pos_array_dev8] = temp.Node8;

    if (count_pos_array_dev8 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev8);
      count_pos_array_dev8++;
      lv_chart_set_point_count(ui_chart8_temp, count_pos_array_dev8);
      lv_chart_set_ext_y_array(ui_chart8_temp, chart_temp_8_series, chart_temp_8_array);
    }
    else
    {
      count_pos_array_dev8 = RESET_COUNTER;
    }
#endif
  }

    else if (recv_num_node == "node:9")
  {
    temp.Node9 = recv_temperature_message;

    sprintf(t_text.temp_text9, "%.1f°C", temp.Node9);
    lv_label_set_text(ui_temp_t_device9, t_text.temp_text9);

    // lv_meter_set_indicator_value(meter_9,indic_9,temp.Node9);

    strcpy(dev_uptime.dev9,dt.time_update);
    lv_label_set_text(ui_last_up_t_device9, dev_uptime.dev9);
    
    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node9);
      Serial.println(t_text.temp_text9);
      Serial.println(dev_uptime.dev9);
      Serial.print("/");
    #endif
    
#ifdef CHART
    
    chart_temp_9_series = lv_chart_add_series(ui_chart9_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_9_array[count_pos_array_dev9] = temp.Node9;

    if (count_pos_array_dev9 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev9);
      count_pos_array_dev9++;
      lv_chart_set_point_count(ui_chart9_temp, count_pos_array_dev9);
      lv_chart_set_ext_y_array(ui_chart9_temp, chart_temp_9_series, chart_temp_9_array);
    }
    else
    {
      count_pos_array_dev9 = RESET_COUNTER;
    }
#endif
  }

    else if (recv_num_node == "node:10")
  {
    temp.Node10 = recv_temperature_message;

    sprintf(t_text.temp_text10, "%.1f°C", temp.Node10);
    lv_label_set_text(ui_temp_t_device10, t_text.temp_text10);

    // lv_meter_set_indicator_value(meter_10,indic_10,temp.Node10);

    strcpy(dev_uptime.dev10,dt.time_update);
    lv_label_set_text(ui_last_up_t_device10, dev_uptime.dev10);
    
    #ifdef DEBUG
      Serial.println(recv_num_node);
      Serial.println(temp.Node10);
      Serial.println(t_text.temp_text10);
      Serial.println(dev_uptime.dev10);
      Serial.print("/");
    #endif
    
#ifdef CHART
    
    chart_temp_10_series = lv_chart_add_series(ui_chart10_temp, lv_color_hex(0x464B55), LV_CHART_AXIS_SECONDARY_Y);
    chart_temp_10_array[count_pos_array_dev10] = temp.Node10;

    if (count_pos_array_dev10 <= BUFFER_OF_CHART - 1)
    {
      Serial.println(count_pos_array_dev10);
      count_pos_array_dev10++;
      lv_chart_set_point_count(ui_chart10_temp, count_pos_array_dev10);
      lv_chart_set_ext_y_array(ui_chart10_temp, chart_temp_10_series, chart_temp_10_array);
    }
    else
    {
      count_pos_array_dev10 = RESET_COUNTER;
    }
#endif
  }

  else
  {
    // Nothing
  }
 
}

void init_esp_now(){

  if (esp_now_init() != ESP_OK) {
    Serial.println("There was an error initializing ESP-NOW");
    return;
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

void load_scr(void){
    ui_load_scr = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_load_scr, LV_OBJ_FLAG_SCROLLABLE);/// Flags
    lv_obj_set_style_bg_color(ui_load_scr, lv_color_hex(0x57626C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_load_scr, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_load_scr, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_load_scr, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void setup_wifi() {
  WiFi.mode(WIFI_AP_STA);
  WiFi.begin(getstart.ssid, getstart.password);

  unsigned long start_time = millis();  // Record the start time

  while (WiFi.status() != WL_CONNECTED && millis() - start_time < 10000) {
    Serial.println("Try to connect..");
    delay(1000);
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.print("Connected! IP address: ");
    Serial.println(WiFi.localIP());
    Serial.print("Wi-Fi Channel: ");
    Serial.println(WiFi.channel());
    lv_obj_set_style_text_color(ui_icon_header_WiFi, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_monitor_screen_1_init();
    lv_scr_load(ui_monitor_screen_1);
    init_esp_now();
  } else {
    // Connection unsuccessful after 10 seconds
    Serial.println("Connection failed. Loading get_start screen again.");
    load_scr();
    lv_scr_load(ui_load_scr);
    lv_obj_del(ui_get_start_screen);
    get_start_screen_init();
    lv_scr_load(ui_get_start_screen);
    lv_obj_del(ui_load_scr);
  }
}

void setup()
{
  char start_name_1[10] = "Device 1";
  char start_name_2[10] = "Device 2";
  char start_name_3[10] = "Device 3";
  char start_name_4[10] = "Device 4";
  char start_name_5[10] = "Device 5";
  char start_name_6[10] = "Device 6";
  char start_name_7[10] = "Device 7";
  char start_name_8[10] = "Device 8";
  char start_name_9[10] = "Device 9";
  char start_name_10[10] = "Device 10";

  char start_pos_1[11] = "Position 1";
  char start_pos_2[11] = "Position 2";
  char start_pos_3[11] = "Position 3";
  char start_pos_4[11] = "Position 4";
  char start_pos_5[11] = "Position 5";
  char start_pos_6[11] = "Position 6";
  char start_pos_7[11] = "Position 7";
  char start_pos_8[11] = "Position 8";
  char start_pos_9[11] = "Position 9";
  char start_pos_10[12] = "Position 10";

  char start_temp[10] = "0 °C";

  char start_project_name[13] = "Project name";

  char start_update_time[18] = "Last update 00:00";

  strcpy(name.device1, start_name_1);
  strcpy(name.device2, start_name_2);
  strcpy(name.device3, start_name_3);
  strcpy(name.device4, start_name_4);
  strcpy(name.device5, start_name_5);
  strcpy(name.device6, start_name_6);
  strcpy(name.device7, start_name_7);
  strcpy(name.device8, start_name_8);
  strcpy(name.device9, start_name_9);
  strcpy(name.device10, start_name_10);

  strcpy(pos_n.device1, start_pos_1);
  strcpy(pos_n.device2, start_pos_2);
  strcpy(pos_n.device3, start_pos_3);
  strcpy(pos_n.device4, start_pos_4);
  strcpy(pos_n.device5, start_pos_5);
  strcpy(pos_n.device6, start_pos_6);
  strcpy(pos_n.device7, start_pos_7);
  strcpy(pos_n.device8, start_pos_8);
  strcpy(pos_n.device9, start_pos_9);
  strcpy(pos_n.device10, start_pos_10);

  strcpy(t_text.temp_text1, start_temp);
  strcpy(t_text.temp_text2, start_temp);
  strcpy(t_text.temp_text3, start_temp);
  strcpy(t_text.temp_text4, start_temp);
  strcpy(t_text.temp_text5, start_temp);
  strcpy(t_text.temp_text6, start_temp);
  strcpy(t_text.temp_text7, start_temp);
  strcpy(t_text.temp_text8, start_temp);
  strcpy(t_text.temp_text9, start_temp);
  strcpy(t_text.temp_text10, start_temp);

  strcpy(getstart.pj_name, start_project_name);

  strcpy(dev_uptime.dev1, start_update_time);
  strcpy(dev_uptime.dev2, start_update_time);
  strcpy(dev_uptime.dev3, start_update_time);
  strcpy(dev_uptime.dev4, start_update_time);
  strcpy(dev_uptime.dev5, start_update_time);
  strcpy(dev_uptime.dev6, start_update_time);
  strcpy(dev_uptime.dev7, start_update_time);
  strcpy(dev_uptime.dev8, start_update_time);
  strcpy(dev_uptime.dev9, start_update_time);
  strcpy(dev_uptime.dev10, start_update_time);

  tft.begin();
  tft.setRotation(3);
  tft.setBrightness(255);
  Serial.begin(115200);

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

  xTaskCreatePinnedToCore(
    sendSheet, // ชื่อฟังก์ชันที่จะรันใน task
    "Task1",   // ชื่อ task
    10000,     // ขนาด stack
    NULL,      // พารามิเตอร์ที่ส่งไปยังฟังก์ชันที่รันใน task
    1,         // ลำดับความสำคัญของ task
    &Task1,    // ตัวแปรสำหรับเก็บ handle ของ task
    1          // core ที่จะรัน task (0 หรือ 1)
  );


}


void loop()
{
  
  if(WiFi.status() == WL_CONNECTED){
    delay(100);
    GetDateTime();
    lv_obj_set_style_text_color(ui_icon_header_WiFi, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
  }else{
    lv_obj_set_style_text_color(ui_icon_header_WiFi, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
  }

  lv_timer_handler();

  delay(10);
}
/***********************************************************/
