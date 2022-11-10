// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/**
 * @file custom.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"
#include "BluetoothA2DPSink.h"
#include <Arduino.h>


/*********************
 *      DEFINES
 *********************/
#define MUTE_PIN 12

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
lv_ui *ui_event;                        //将所有控件传递给回调函数
extern BluetoothA2DPSink a2dp_sink;     //蓝牙
uint8_t is_muted=0;                     //是否已经静音
uint8_t volume_all=0;                   //音量

/**********************
 *  Functions
 **********************/

/**
 * callback
 */
void lv_btn_events_handler(lv_event_t*e){
    lv_obj_t* obj=lv_event_get_target(e);
    char vol_label_text[8];


    if(obj==ui_event->imgbtn_5_imgbtn_prev){
        a2dp_sink.previous();
    }

    else if (obj==ui_event->imgbtn_5_imgbtn_pause){
        a2dp_sink.pause();
    }
    
    else if (obj==ui_event->imgbtn_5_imgbtn_next){
        a2dp_sink.next();
    }
    else if (obj==ui_event->imgbtn_5_imgbtn_play){
        a2dp_sink.play();
    }

    else if(obj==ui_event->imgbtn_5_imgbtn_mute){
        if(is_muted==0){
            //高电平静音
            digitalWrite(MUTE_PIN,HIGH);
            is_muted=1;
        }
        else {
            digitalWrite(MUTE_PIN,LOW);
            is_muted=0;
        }
    }
    else if(obj==ui_event->imgbtn_5_imgbtn_vol_up){
        if((volume_all<120)||(volume_all+10<120)){
            volume_all+=10;
            a2dp_sink.set_volume(volume_all);
            lv_snprintf(vol_label_text,sizeof(vol_label_text),"%d",volume_all);
            lv_label_set_text(ui_event->imgbtn_5_label_vol,vol_label_text);
        }

    }
    else if(obj==ui_event->imgbtn_5_imgbtn_vol_down){
        if((volume_all>0)||(volume_all-10>0)){
            volume_all-=10;
            a2dp_sink.set_volume(volume_all);
            lv_snprintf(vol_label_text,sizeof(vol_label_text),"%d",volume_all);
            lv_label_set_text(ui_event->imgbtn_5_label_vol,vol_label_text);
        }
    }
    
}

/**
 * style of slider
 */
void add_slider_style(void)
{
    //调用的官方代码 不是很理想
    /*Create a transition*/
    lv_style_prop_t a112131a;       //必须添加此定义才能使用lv_style_prop_t 参考：https://www.delftstack.com/zh/howto/c/c-typedef-enum/
    static const lv_style_prop_t props[] = {LV_STYLE_BG_COLOR, LV_STYLE_PROP_INV};
    static lv_style_transition_dsc_t transition_dsc;
    lv_style_transition_dsc_init(&transition_dsc, props, lv_anim_path_linear, 300, 0, NULL);

    static lv_style_t style_main;
    static lv_style_t style_indicator;
    static lv_style_t style_knob;
    static lv_style_t style_pressed_color;
    lv_style_init(&style_main);
    lv_style_set_bg_opa(&style_main, LV_OPA_COVER);
    lv_style_set_bg_color(&style_main, lv_color_hex3(0xbbb));
    lv_style_set_radius(&style_main, LV_RADIUS_CIRCLE);
    lv_style_set_pad_ver(&style_main, -2); /*Makes the indicator larger*/

    lv_style_init(&style_indicator);
    lv_style_set_bg_opa(&style_indicator, LV_OPA_COVER);
    lv_style_set_bg_color(&style_indicator, lv_palette_main(LV_PALETTE_CYAN));
    lv_style_set_radius(&style_indicator, LV_RADIUS_CIRCLE);
    lv_style_set_transition(&style_indicator, &transition_dsc);

    lv_style_init(&style_knob);
    lv_style_set_bg_opa(&style_knob, LV_OPA_COVER);
    lv_style_set_bg_color(&style_knob, lv_palette_main(LV_PALETTE_CYAN));
    lv_style_set_border_color(&style_knob, lv_palette_darken(LV_PALETTE_CYAN, 3));
    lv_style_set_border_width(&style_knob, 2);
    lv_style_set_radius(&style_knob, LV_RADIUS_CIRCLE);
    lv_style_set_pad_all(&style_knob, 6); /*Makes the knob larger*/
    lv_style_set_transition(&style_knob, &transition_dsc);

    lv_style_init(&style_pressed_color);
    lv_style_set_bg_color(&style_pressed_color, lv_palette_darken(LV_PALETTE_CYAN, 2));

    /*Create a slider and add the style*/
    lv_obj_t * slider = ui_event->imgbtn_5_slider_1;
    //不需要删除其他style
    // lv_obj_remove_style_all(slider);        /*Remove the styles coming from the theme*/

    lv_obj_add_style(slider, &style_main, LV_PART_MAIN);
    lv_obj_add_style(slider, &style_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(slider, &style_pressed_color, LV_PART_INDICATOR | LV_STATE_PRESSED);
    lv_obj_add_style(slider, &style_knob, LV_PART_KNOB);
    lv_obj_add_style(slider, &style_pressed_color, LV_PART_KNOB | LV_STATE_PRESSED);

}

void get_volume_set_label(void){
    char vol_label_text[8];
    volume_all= a2dp_sink.get_volume();
    lv_snprintf(vol_label_text,sizeof(vol_label_text),"%d",volume_all);
    lv_label_set_text(ui_event->imgbtn_5_label_vol,vol_label_text);

}


/**
 * Create a demo application
 */

void custom_init(lv_ui *ui)
{
    /* Add your codes here */
    ui_event=ui;
    lv_obj_add_event_cb(ui->imgbtn_5_imgbtn_bt,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(ui->imgbtn_5_imgbtn_next,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(ui->imgbtn_5_imgbtn_prev,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(ui->imgbtn_5_imgbtn_pause,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(ui->imgbtn_5_imgbtn_play,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(ui->imgbtn_5_imgbtn_vol_up,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(ui->imgbtn_5_imgbtn_vol_down,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    
    get_volume_set_label();
    add_slider_style();

}

