#include<lvgl.h>
#include<Arduino.h>
#include "BluetoothA2DPSink.h"
extern BluetoothA2DPSink a2dp_sink;


//私有宏定义
#define MUSIC_BUTTON_ROW 1          //表示播放等一排按钮的位置
#define MUSIC_BUTTON_WIDTH 40
#define MUSIC_BUTTON_HEIGHT 35

//控件变量：（如果使用static修饰变量则无法跨文件调用
lv_obj_t* slider_label;      //回调函数需要用到此变量来展示当前值，所以设置为全局变量
lv_obj_t* slider;

//数值
int volume_main=0;      //音量

/*--------------回调函数---------------*/

// static void slider_event_cb(lv_event_t* e)
// {
//     lv_obj_t* slider = lv_event_get_target(e);
//     char buf[8];
//     lv_snprintf(buf, sizeof(buf), "%d%%", (int)lv_slider_get_value(slider));
//     lv_label_set_text(slider_label, buf);
//     lv_obj_align_to(slider_label, slider, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);
// }



static void btn_play_cb(lv_event_t* event){
    a2dp_sink.play();
}

static void btn_pause_cb(lv_event_t* event){
    a2dp_sink.pause();
}

static void btn_next_cb(lv_event_t* event){
    a2dp_sink.next();
}

static void btn_prev_cb(lv_event_t* event){
    a2dp_sink.previous();
}

static void btn_stop_cb(lv_event_t* event){
    a2dp_sink.stop();
}

static void btn_vol_add_cb(lv_event_t* event){
    char buf[8];
    volume_main =(int)a2dp_sink.get_volume();
    if(volume_main<120){
        //限制音量范围
        volume_main+=10;
        a2dp_sink.set_volume(volume_main);
    }
    lv_snprintf(buf,sizeof(buf),"%d%%",volume_main);
    lv_label_set_text(slider_label,buf);
}

static void btn_vol_dec_cb(lv_event_t* event){
    char buf[8];
    volume_main =(int)a2dp_sink.get_volume();
    Serial.println(volume_main);
    if(volume_main>10){
        volume_main-=10;
        a2dp_sink.set_volume(volume_main);
    }
    lv_snprintf(buf,sizeof(buf),"%d%%",volume_main);
    lv_label_set_text(slider_label,buf);
}



void test_tabview_1(void) {
    //创建tabview控件
    lv_obj_t* test_obj_tabview;
    test_obj_tabview = lv_tabview_create(lv_scr_act(), LV_DIR_TOP, 50);

    //创建页面
    lv_obj_t* test_tab_1 = lv_tabview_add_tab(test_obj_tabview, "MUSIC");
    lv_obj_t* test_tab_2 = lv_tabview_add_tab(test_obj_tabview, "TIME");

    /*----创建文字和BLuetooth图标----*/
    //添加控件Sennheiser
    lv_obj_t* label = lv_label_create(test_tab_1);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_text(label, "#0000ff Se##ff00ff nn##0703f0 he##f00ff0 ir##3f000f ser#");
    lv_obj_align(label, LV_ALIGN_TOP_LEFT , 0, 0);
    //lv_label_set_text(label, "#0000ff Re-color# #ff00ff words# #ff0000 of a# label, align the lines to the center "
    //    "and wrap long text automatically.");
    //添加文字旁边的蓝牙图标控件
    lv_obj_t* img_next_2label = lv_img_create(test_tab_1);
    lv_img_set_src(img_next_2label, LV_SYMBOL_BLUETOOTH);
    lv_obj_align_to(img_next_2label, label, LV_ALIGN_RIGHT_MID, 15, 0);


    /*----添加SDU LOGO----*/
    //添加图标到标签页中，create的父对象是创建的tabview
    lv_obj_t* tab_btn_icon = lv_tabview_get_tab_btns(test_obj_tabview);
    //设置页边距
    //lv_obj_set_style_pad_right(tab_btn_icon, LV_HOR_RES / 2, 0);
    lv_obj_set_style_pad_left(tab_btn_icon, LV_HOR_RES / 2, 0);
    //添加图片
    lv_obj_t* logo = lv_img_create(tab_btn_icon);
    //LV_IMG_DECLARE(sdu_3);
    //lv_img_set_src(logo, &sdu_3);
    //lv_obj_align(logo, LV_ALIGN_LEFT_MID, -LV_HOR_RES / 2 + 25, 0);
    LV_IMG_DECLARE(sdu_50x50_jpeg);
    lv_img_set_src(logo, &sdu_50x50_jpeg);
    lv_obj_align(logo, LV_ALIGN_LEFT_MID, -LV_HOR_RES / 2 + 25, 0);
    //图片稍微不合适 使用zoom方法缩放：
    lv_img_set_zoom(logo, 200);

    /*----渐变色样式----*/
    static lv_style_t bg_color_style;
    lv_style_init(&bg_color_style);
    lv_style_set_bg_opa(&bg_color_style, LV_OPA_COVER);// 设置样式背景的透明度，不透明 255
    lv_style_set_bg_grad_color(&bg_color_style, lv_palette_main(LV_PALETTE_RED)); // 设置样式的渐变色为红色
    lv_style_set_bg_grad_dir(&bg_color_style, LV_GRAD_DIR_VER); // 设置样式的颜色渐变方向为垂直方向
    lv_style_set_bg_color(&bg_color_style,lv_palette_lighten(LV_PALETTE_LIGHT_BLUE,1));

    lv_style_set_bg_grad_color(&bg_color_style, lv_palette_main(LV_PALETTE_PINK)); // 设置样式的渐变色为红色
    lv_style_set_bg_grad_dir(&bg_color_style, LV_GRAD_DIR_HOR); // 设置样式的颜色渐变方向
    //main的值要小于grad的值。
    lv_style_set_bg_main_stop(&bg_color_style, 100); // 设置主停止色为100
    lv_style_set_bg_grad_stop(&bg_color_style, 250); // 设置渐变停止色为250


    /*----创建网格 并创建img btn 和音量控制----*/
    //创建布局
    static lv_coord_t main_grid_column[] = { 50,50,50,50,50,LV_GRID_TEMPLATE_LAST };
    static lv_coord_t main_grid_row[] = { 40,40,40,40,LV_GRID_TEMPLATE_LAST };
    //创建主网格的容器
    lv_obj_t* container_main_grid = lv_obj_create(test_tab_1);
    lv_obj_set_size(container_main_grid, 300, 170);
    lv_obj_center(container_main_grid);
    //主容器边框样式
    static lv_style_t style_main_grid;
    lv_style_init(&style_main_grid);
    lv_style_set_radius(&style_main_grid, 4);
    lv_style_set_opa(&style_main_grid, LV_OPA_50);
    lv_style_set_border_color(&style_main_grid, lv_palette_main(LV_PALETTE_BLUE));
    lv_style_set_border_width(&style_main_grid, 1);
    //添加样式到容器上
    lv_obj_add_style(container_main_grid, &style_main_grid, 0);
    lv_obj_add_style(container_main_grid, &bg_color_style,0);
    //将网格布局配置到容器上
    lv_obj_set_grid_dsc_array(container_main_grid, main_grid_column, main_grid_row);

    /*播放按钮*/
    //创建标签图标按钮——
    lv_obj_t* btn_play = lv_btn_create(container_main_grid);//如果父对象不是container 则无法使用网格布局
    lv_obj_set_size(btn_play, MUSIC_BUTTON_WIDTH, MUSIC_BUTTON_HEIGHT);
    //lv_obj_center(btn_play);
    //按钮图片
    lv_obj_t* img_btn_play = lv_img_create(btn_play);
    lv_img_set_src(img_btn_play, LV_SYMBOL_PLAY);
    lv_obj_center(img_btn_play);
    //将按钮布局到网格中：
    lv_obj_set_grid_cell(btn_play,LV_GRID_ALIGN_CENTER,2,1,LV_GRID_ALIGN_CENTER, MUSIC_BUTTON_ROW,1);
    //添加回调函数
    lv_obj_add_event_cb(btn_play,btn_play_cb,LV_EVENT_CLICKED,NULL);

    /*暂停按钮*/
    lv_obj_t* btn_pause = lv_btn_create(container_main_grid);
    lv_obj_t* img_btn_pause = lv_img_create(btn_pause);
    lv_obj_set_size(btn_pause, MUSIC_BUTTON_WIDTH, MUSIC_BUTTON_HEIGHT);
    lv_img_set_src(img_btn_pause, LV_SYMBOL_PAUSE);
    lv_obj_center(img_btn_pause);
    lv_obj_set_grid_cell(btn_pause, LV_GRID_ALIGN_CENTER, 1, 1, LV_GRID_ALIGN_CENTER, MUSIC_BUTTON_ROW, 1);
    //添加回调函数
    lv_obj_add_event_cb(btn_pause,btn_pause_cb,LV_EVENT_CLICKED,NULL);

    /*下一首按钮*/
    lv_obj_t* btn_next = lv_btn_create(container_main_grid);
    lv_obj_t* img_btn_next = lv_img_create(btn_next);
    lv_obj_set_size(btn_next, MUSIC_BUTTON_WIDTH, MUSIC_BUTTON_HEIGHT);
    lv_img_set_src(img_btn_next, LV_SYMBOL_NEXT);
    lv_obj_center(img_btn_next);
    lv_obj_set_grid_cell(btn_next, LV_GRID_ALIGN_CENTER, 3, 1, LV_GRID_ALIGN_CENTER, MUSIC_BUTTON_ROW, 1);
    //添加回调函数
    lv_obj_add_event_cb(btn_next,btn_next_cb,LV_EVENT_CLICKED,NULL);

    /*上一首按钮*/
    lv_obj_t* btn_prev = lv_btn_create(container_main_grid);
    lv_obj_t* img_btn_prev = lv_img_create(btn_prev);
    lv_obj_set_size(btn_prev, MUSIC_BUTTON_WIDTH, MUSIC_BUTTON_HEIGHT);
    lv_img_set_src(img_btn_prev, LV_SYMBOL_PREV);
    lv_obj_center(img_btn_prev);
    lv_obj_set_grid_cell(btn_prev, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, MUSIC_BUTTON_ROW, 1);
    //添加回调函数
    lv_obj_add_event_cb(btn_prev,btn_prev_cb,LV_EVENT_CLICKED,NULL);

    /*停止按钮*/
    lv_obj_t* btn_stop = lv_btn_create(container_main_grid);
    lv_obj_t* img_btn_stop = lv_img_create(btn_stop);
    lv_obj_set_size(btn_stop, MUSIC_BUTTON_WIDTH, MUSIC_BUTTON_HEIGHT);
    lv_img_set_src(img_btn_stop, LV_SYMBOL_STOP);
    lv_obj_center(img_btn_stop);
    lv_obj_set_grid_cell(btn_stop, LV_GRID_ALIGN_CENTER, 4, 1, LV_GRID_ALIGN_CENTER, MUSIC_BUTTON_ROW, 1);
    //添加回调函数
    lv_obj_add_event_cb(btn_stop,btn_stop_cb,LV_EVENT_CLICKED,NULL);

    //取消使用滑动条控制音量方案
    // /*创建音量控制滑动条*/
    //     /*Create a slider in the center of the display*/
    // slider = lv_slider_create(container_main_grid);
    // lv_slider_set_range(slider, 0, 100);
    // lv_slider_set_value(slider, 40, LV_ANIM_OFF);
    // lv_obj_add_event_cb(slider, slider_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    // //布局在控制按钮下面一排 占四个格子 
    // lv_obj_set_grid_cell(slider, LV_GRID_ALIGN_STRETCH, 1,4, LV_GRID_ALIGN_CENTER, MUSIC_BUTTON_ROW+1, 1);
    
    /*创建音量控制按钮ADD*/
    lv_obj_t* btn_vol_add = lv_btn_create(container_main_grid);
    lv_obj_t* img_btn_vol_add = lv_img_create(btn_vol_add);
    lv_obj_set_size(btn_vol_add, MUSIC_BUTTON_WIDTH, MUSIC_BUTTON_HEIGHT);
    lv_img_set_src(img_btn_vol_add, LV_SYMBOL_PLUS);
    lv_obj_center(img_btn_vol_add);
    lv_obj_set_grid_cell(btn_vol_add, LV_GRID_ALIGN_CENTER, 2, 1, LV_GRID_ALIGN_CENTER, MUSIC_BUTTON_ROW+1, 1);
    lv_obj_add_event_cb(btn_vol_add,btn_vol_add_cb,LV_EVENT_CLICKED,NULL);

    /*创建音量控制按钮DEC*/
    lv_obj_t* btn_vol_dec = lv_btn_create(container_main_grid);
    lv_obj_t* img_btn_vol_dec = lv_img_create(btn_vol_dec);
    lv_obj_set_size(btn_vol_dec, MUSIC_BUTTON_WIDTH, MUSIC_BUTTON_HEIGHT);
    lv_img_set_src(img_btn_vol_dec, LV_SYMBOL_MINUS);
    lv_obj_center(img_btn_vol_dec);
    lv_obj_set_grid_cell(btn_vol_dec, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, MUSIC_BUTTON_ROW + 1, 1);
    lv_obj_add_event_cb(btn_vol_dec,btn_vol_dec_cb,LV_EVENT_CLICKED,NULL);

    /*Create a label below the slider*/
    slider_label = lv_label_create(container_main_grid);
    lv_label_set_text(slider_label, "40%");
    lv_obj_set_grid_cell(slider_label, LV_GRID_ALIGN_STRETCH,1, 1, LV_GRID_ALIGN_CENTER, MUSIC_BUTTON_ROW + 1, 1);
    
}



