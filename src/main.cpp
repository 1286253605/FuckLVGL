#include <Arduino.h>
#include<SPI.h>
#include<lvgl.h>
#include<TFT_eSPI.h>
#include "BluetoothA2DPSink.h"

//GUI Guider相关
#include"gui_guider.h"
#include"events_init.h"
#include"custom.h"
lv_ui guider_ui;


//测试新的GUI分支
//测试2
/*-------------------宏定义---------------------*/
#define TFT_ROTATIOON 1     //旋转以后才是
//这两个宽和高不是给TFTe_SPI用的，是给LVGL用的，所以修改这两个并不能正确旋转屏幕
//W H for  LVGL
#define SCR_WIDTH 320
#define SCR_HEIGHT 240


/*-------------------全局变量---------------------*/
//字体
//#define LV_FONT_DECLARE(font_name) extern const lv_font_t font_name;
LV_FONT_DECLARE(myFont);

//屏幕分辨率
static const uint16_t screenWidth  = SCR_WIDTH;
static const uint16_t screenHeight = SCR_HEIGHT;

//屏幕缓冲区
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * 10 ];

//屏幕驱动
TFT_eSPI tft=TFT_eSPI();


//蓝牙
BluetoothA2DPSink a2dp_sink;

//任务
void lv_task_handler_rtos(void *param);

//函数声明
// void bluetooth_init();
void simple_bluetooth_init();





/*-------------------屏幕刷新、获取触摸点回调函数---------------------*/
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors(&color_p->full, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}


  void my_touchpad_read(lv_indev_drv_t * indev_driver, lv_indev_data_t * data)
{
    uint16_t touchX, touchY;

    bool touched = tft.getTouch(&touchX, &touchY, 600);

    if(!touched) {
      data->state = LV_INDEV_STATE_REL;
    } else {
      data->state = LV_INDEV_STATE_PR;
	
      /*Set the coordinates*/
      data->point.x = touchX;
      data->point.y = touchY;

      Serial.print("Data x");
      Serial.println(touchX);

      Serial.print("Data y");
      Serial.println(touchY);
    }

}


/*-------------------初始化---------------------*/
void setup() {
    Serial.begin(115200);

    //初始化
    lv_init();
    tft.begin();
    tft.setRotation(TFT_ROTATIOON);

    //屏幕校准
    uint16_t calData[5] = { 272, 3250, 282, 3437, 1 };
    tft.setTouch( calData );

    //缓冲区初始化
    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * 10 );

    //初始化屏幕  init——register
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res=screenWidth;
    disp_drv.ver_res=screenHeight;

    //连接屏幕刷新函数
    disp_drv.flush_cb=my_disp_flush;
    disp_drv.draw_buf=&draw_buf;
    lv_disp_drv_register(&disp_drv);    


    //初始化触摸 init——register。根据type设置输入设备类型
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type=LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb=my_touchpad_read;
    lv_indev_drv_register(&indev_drv);

    //任务的优先级和分配的内存大小 按照韦东山的例程是错误的，处理LVGL任务需要更大的运行内存否则芯片会不断重启
    xTaskCreate(lv_task_handler_rtos,"RTOS_LVGLHandler",1024*3,NULL,tskIDLE_PRIORITY+3,NULL);


    //需要先初始化蓝牙再初始化LVGL
    simple_bluetooth_init();
    
    //创建GUI
    setup_ui(&guider_ui);
    events_init(&guider_ui);
    custom_init(&guider_ui);
    
    
    


}


/*----------------------------------------*/
void loop() {

    vTaskDelay(pdMS_TO_TICKS(5));
    
}

/*---------------------FreeRTOS Tasks----------------*/
void lv_task_handler_rtos(void *param){
    TickType_t xLastWakeTimer=xTaskGetTickCount();
    for(;;){
        lv_task_handler();
        vTaskDelay(pdMS_TO_TICKS(5));
        vTaskDelayUntil(&xLastWakeTimer,pdMS_TO_TICKS(5));
    }

}


/*---------------------Functions----------------------*/
void bluetooth_init(){
    i2s_pin_config_t my_pin_config={
        .bck_io_num=26,
        .ws_io_num=27,
        .data_out_num=25,
        .data_in_num=I2S_PIN_NO_CHANGE
    };
    a2dp_sink.set_pin_config(my_pin_config);
    a2dp_sink.start("SennheiserAMBEO");
}
void simple_bluetooth_init(){
    a2dp_sink.set_volume(30);
    a2dp_sink.start("SennheiserAMBEO");
    
}
