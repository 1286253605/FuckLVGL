#include <Arduino.h>
#include<SPI.h>
#include<lvgl.h>
#include<TFT_eSPI.h>

/*-------------------宏定义---------------------*/
#define TFT_ROTATIOON 1
#define SCR_WIDTH 320
#define SCR_HEIGHT 240


/*-------------------全局变量---------------------*/


//屏幕分辨率
static const uint16_t screenWidth  = SCR_WIDTH;
static const uint16_t screenHeight = SCR_HEIGHT;

//屏幕缓冲区
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * 10 ];

//屏幕驱动
TFT_eSPI tft=TFT_eSPI();

//任务、
void lv_task_handler_rtos(void *param);

/*-------------------LVGL事件回调---------------------*/
void btn_test_callback(lv_event_t* event){
    Serial.println("Clicked");
}

/*-------------------LVGL控件---------------------*/
//LVGL控件
void lv_create_btn_test(void){
    lv_obj_t *btn_test =lv_btn_create(lv_scr_act());
    lv_obj_t *label_test=lv_label_create(btn_test);

    lv_obj_set_size(btn_test,100,50);

    lv_obj_align(btn_test,LV_ALIGN_TOP_MID,0,0);
    lv_obj_align(label_test,LV_ALIGN_CENTER,0,0);

    lv_label_set_text(label_test,"FUUUUCK");

    lv_obj_add_event_cb(btn_test,btn_test_callback,LV_EVENT_CLICKED,NULL);



    
}

/*-------------------屏幕刷新、获取触摸点函数---------------------*/
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
    lv_create_btn_test();

    
}


/*----------------------------------------*/
void loop() {

  /*-------------------添加LVGL心跳&任务处理器---------------------*/
  //lv_conf.h文件中使能 #define LV_TICK_CUSTOM 1  即可不用手动配置心跳
    // lv_timer_handler();
    // delay(5);
    vTaskDelay(pdMS_TO_TICKS(5));
    
}

/*---------------------FreeRTOS Tasks----------------*/
void lv_task_handler_rtos(void *param){
    //处理任务要放在死循环里 ！！别忘了。。
    TickType_t xLastWakeTimer=xTaskGetTickCount();
    for(;;){
        lv_task_handler();
        vTaskDelay(pdMS_TO_TICKS(5));
        vTaskDelayUntil(&xLastWakeTimer,pdMS_TO_TICKS(5));
    }

}