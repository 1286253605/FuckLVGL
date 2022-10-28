#include <Arduino.h>
#include<SPI.h>
#include<lvgl.h>
#include<TFT_eSPI.h>
#include "BluetoothA2DPSink.h"
#include<app.h>
//测试旧GUI
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
//控制音量
extern lv_obj_t* slider_label;
extern lv_obj_t* slider;

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
void bluetooth_init();
void simple_bluetooth_init();



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

void lv_create_pic_test(void){
    LV_IMG_DECLARE(a9);
    lv_obj_t *img_1=lv_img_create(lv_scr_act());
    lv_img_set_src(img_1,&a9);
    // lv_obj_align() lv_obj_set_align() 两种设置位置的方式 前者需要指定偏移量
    lv_obj_align(img_1,LV_ALIGN_CENTER,0,0);
}

void lv_create_label_with_Chinese(void){
    
    static lv_style_t style_font_Chinese;
    lv_style_init(&style_font_Chinese);
    lv_style_set_text_font(&style_font_Chinese,&myFont);

    lv_obj_t *label_CHN=lv_label_create(lv_scr_act());
    lv_obj_add_style(label_CHN,&style_font_Chinese,LV_STATE_DEFAULT);
    lv_obj_align(label_CHN,LV_ALIGN_TOP_LEFT,0,0);
    lv_label_set_text(label_CHN,"海棠零o0oOOo0o00OoOO00oOO");
    

}
/*-------------------动画---------------------*/

static void anim_x_cb(void *var,int32_t v)
{
    //注意这里强制转换的类型 (_lv_obj_t*) 
   lv_obj_set_x((_lv_obj_t*)var,v);
}
/*************************************************
 *  函数名称 :  anim_size_cb
 *  参    数 ： 无
 *  函数功能 ： 动画尺寸显示回调函数
 *************************************************/
static void anim_size_cb(void *var,int32_t v)
{
   lv_obj_set_size((_lv_obj_t*)var,v,v);
}
/*************************************************
 *  函数名称 :  anim_show_2
 *  参    数 ： 无
 *  函数功能 ： 按键联动，实现Label动画显示
 *************************************************/
void anim_show_2()
{
   lv_obj_t * obj = lv_obj_create(lv_scr_act());      //创建一个对象
   lv_obj_set_style_bg_color(obj,lv_palette_main(LV_PALETTE_RED),0); //设置背景颜色
   lv_obj_set_style_radius(obj,LV_RADIUS_CIRCLE,0);   //设置样式圆角

   lv_obj_align(obj,LV_ALIGN_LEFT_MID,10,0);          //居中样式

   lv_anim_t a;                                       //创建动画样式
   lv_anim_init(&a);                                  //初始化动画
   lv_anim_set_var(&a,obj);                           //给动画设置一个变量
   lv_anim_set_values(&a,10,50);                      //设置一个动画值
   lv_anim_set_time(&a,1000);                         //设置动画时间
   lv_anim_set_playback_delay(&a,100);                //回放延时 使动画回放时，正向方向准备好了
   lv_anim_set_playback_time(&a,300);                 //回放时间
   lv_anim_set_repeat_delay(&a,500);                  //重复延时
   lv_anim_set_repeat_count(&a,LV_ANIM_REPEAT_INFINITE); //重复计数次数
   lv_anim_set_path_cb(&a,lv_anim_path_ease_in_out);  //设置动画播放路径

   lv_anim_set_exec_cb(&a,anim_size_cb);              //给动画设置一个功能 回调函数为尺寸
   lv_anim_start(&a);                                 //开始动画
   lv_anim_set_exec_cb(&a,anim_x_cb);                 //给动画设置一个功能 回调函数为x轴值
   lv_anim_set_values(&a,10,240);                     //给动画设置一个值
   lv_anim_start(&a);                                 //开始动画
}

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
    //在LVGL中旋转屏幕而不是在tft中
    // disp_drv.sw_rotate=1;               // add for rotation
    // disp_drv.rotated=LV_DISP_ROT_90;    // add for rotation
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
    // bluetooth_init();
    simple_bluetooth_init();
    //
    



    // lv_create_btn_test();
    // lv_create_pic_test();
    // lv_create_label_with_Chinese();
    test_tabview_1();
    
    
    


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
