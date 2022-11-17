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
#include "BluetoothA2DP.h"

/*********************
 *      DEFINES
 *********************/
#define LV_DEMO_PRINTER_ANIM_TIME  (150)
// #define SCR_LOADING 0
// #define SCR_BT 1

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
int cur_scr;
uint8_t is_muted=0;                     //是否已经静音
uint8_t volume_all=20;                   //音量
char vol_label_text[20]={0};                 

extern BluetoothA2DPSink a2dp_sink;

/**
 * Create a demo application
 */
/**********************
 *Functions
 **********************/

//Make Loading Process More Flexible
void lv_demo_printer_anim_in_all(lv_obj_t * obj, uint32_t delay)
{
    lv_coord_t y;
    lv_obj_t * child;
    for(int i = 0; i < lv_obj_get_child_cnt(obj); i++) {
        child = lv_obj_get_child(obj, i);
        lv_obj_update_layout(child);
        y = lv_obj_get_y(child);
        if (child != lv_scr_act()  && child != guider_ui.screen_BT_Ctrl_img_bg) {
            //背景图片不需要动效
            lv_anim_t a;
            lv_anim_init(&a);
            lv_anim_set_var(&a, child);
            lv_anim_set_time(&a, LV_DEMO_PRINTER_ANIM_TIME);
            lv_anim_set_delay(&a, delay);
            lv_anim_set_exec_cb(&a, (lv_anim_exec_xcb_t) lv_obj_set_y);

            if(y > 150)
                lv_anim_set_values(&a, 270, y);
            else
                lv_anim_set_values(&a, 0, y);
            
            lv_anim_start(&a);

            lv_obj_fade_in(child, LV_DEMO_PRINTER_ANIM_TIME - 50, delay);
        }
    }
}



lv_obj_t **get_scr_by_id(int scr_id){
    if(scr_id == SCR_BT){
        return &guider_ui.screen_BT_Ctrl;
    }
    else if (scr_id == SCR_LOADING){
        return &guider_ui.screen_loading;
    }
    return NULL;
}

void guider_load_screen(int scr_id){
    lv_obj_t **scr=NULL;
    lv_obj_t **old_scr=NULL;

    switch (scr_id)
    {
    case SCR_BT:
        /* code */
        if(!guider_ui.screen_BT_Ctrl){
            scr=&guider_ui.screen_BT_Ctrl;
            setup_scr_screen_BT_Ctrl(&guider_ui);
            bt_ctrl_event_init();
            get_volume_set_label();
        }
        break;
    
    case SCR_LOADING:
        if(!guider_ui.screen_loading){
            scr=&guider_ui.screen_loading;
            setup_scr_screen_loading(&guider_ui);
        }
    }
    lv_scr_load(*scr);
    old_scr=get_scr_by_id(cur_scr);
    lv_obj_clean(*old_scr);
    lv_obj_del(*old_scr);

    *old_scr=NULL;
    cur_scr=scr_id;
}

void loading_event_init(void){
    lv_demo_printer_anim_in_all(guider_ui.screen_loading,200);
}

void bt_ctrl_event_init(void){

    // lv_obj_add_event_cb(guider_ui.screen_BT_Ctrl_imgbtn_vol_add,all_events_handler,LV_EVENT_ALL,NULL);

    lv_obj_add_event_cb(guider_ui.screen_BT_Ctrl_imgbtn_bt,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(guider_ui.screen_BT_Ctrl_imgbtn_next,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(guider_ui.screen_BT_Ctrl_imgbtn_prev,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(guider_ui.screen_BT_Ctrl_imgbtn_pause,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    
    lv_obj_add_event_cb(guider_ui.screen_BT_Ctrl_imgbtn_play,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(guider_ui.screen_BT_Ctrl_imgbtn_vol_add,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);
    lv_obj_add_event_cb(guider_ui.screen_BT_Ctrl_imgbtn_vol_dec,lv_btn_events_handler,LV_EVENT_CLICKED,NULL);

    lv_obj_add_event_cb(guider_ui.screen_BT_Ctrl_slider_1,lv_btn_events_handler,LV_EVENT_VALUE_CHANGED,NULL);

}


void custom_init(lv_ui *ui)
{
    /* Add your codes here */
    setup_scr_screen_loading(ui);
    loading_event_init();
    cur_scr=SCR_LOADING;
    ui->screen_BT_Ctrl=NULL;
    lv_scr_load(ui->screen_loading);

    
}

void all_events_handler(lv_event_t *event){
    lv_event_code_t code=lv_event_get_code(event);
    lv_obj_t* obj=lv_event_get_target(event);

    if(code==LV_EVENT_PRESSED){
        if (obj==guider_ui.screen_BT_Ctrl_imgbtn_vol_add)
        {
            /* code */
            if((volume_all<120)||(volume_all+10<120)){
                volume_all+=10;
                a2dp_sink.set_volume(volume_all);
                sprintf(vol_label_text,"%d%%",volume_all);
                lv_label_set_text(guider_ui.screen_BT_Ctrl_slider_label_main,vol_label_text);
                // lv_slider_set_value(guider_ui.screen_BT_Ctrl_slider_label_main,volume_all,LV_ANIM_ON);
            }
        }
    }
}


void lv_btn_events_handler(lv_event_t*e){
    lv_obj_t* obj=lv_event_get_target(e);
    


    if(obj==guider_ui.screen_BT_Ctrl_imgbtn_prev){
        a2dp_sink.previous();
    }

    else if (obj==guider_ui.screen_BT_Ctrl_imgbtn_pause){
        a2dp_sink.pause();
    }
    
    else if (obj==guider_ui.screen_BT_Ctrl_imgbtn_next){
        a2dp_sink.next();
    }
    else if (obj==guider_ui.screen_BT_Ctrl_imgbtn_play){
        a2dp_sink.play();
    }

    else if(obj==guider_ui.screen_BT_Ctrl_imgbtn_mute){
        if(is_muted==0){
            //高电平静音
            // digitalWrite(MUTE_PIN,HIGH);
            is_muted=1;
        }
        else {
            // digitalWrite(MUTE_PIN,LOW);
            is_muted=0;
        }
    }
    else if(obj==guider_ui.screen_BT_Ctrl_imgbtn_vol_add){
        if((volume_all<120)||(volume_all+10<120)){
            volume_all+=10;
            a2dp_sink.set_volume(volume_all);
            sprintf(vol_label_text,"%d%%",volume_all);
            lv_label_set_text(guider_ui.screen_BT_Ctrl_slider_label_main,vol_label_text);
            lv_slider_set_value(guider_ui.screen_BT_Ctrl_slider_1,volume_all,LV_ANIM_ON);
        }

    }
    else if(obj==guider_ui.screen_BT_Ctrl_imgbtn_vol_dec){
        if((volume_all>0)||(volume_all-10>0)){
            volume_all-=10;
            a2dp_sink.set_volume(volume_all);
            sprintf(vol_label_text,"%d%%",volume_all);
            lv_label_set_text(guider_ui.screen_BT_Ctrl_slider_label_main,vol_label_text);
            lv_slider_set_value(guider_ui.screen_BT_Ctrl_slider_1,volume_all,LV_ANIM_ON);
        }
    }

    else if(obj==guider_ui.screen_BT_Ctrl_slider_1){
        volume_all= lv_slider_get_value(obj);
        lv_snprintf(vol_label_text,sizeof(vol_label_text),"%d%%",volume_all);
        lv_label_set_text(guider_ui.screen_BT_Ctrl_slider_label_main,vol_label_text);

        if(!lv_slider_is_dragged(obj)){
            //如果已经不再拖动，则修改音量
            a2dp_sink.set_volume(volume_all);
        }
        
    }
    
}


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
    lv_obj_t * slider = guider_ui.screen_BT_Ctrl_slider_1;
    //不需要删除其他style
    // lv_obj_remove_style_all(slider);        /*Remove the styles coming from the theme*/

    lv_obj_add_style(slider, &style_main, LV_PART_MAIN);
    lv_obj_add_style(slider, &style_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(slider, &style_pressed_color, LV_PART_INDICATOR | LV_STATE_PRESSED);
    lv_obj_add_style(slider, &style_knob, LV_PART_KNOB);
    lv_obj_add_style(slider, &style_pressed_color, LV_PART_KNOB | LV_STATE_PRESSED);

}

void get_volume_set_label(void){
    // volume_all= a2dp_sink.get_volume();
    lv_snprintf(vol_label_text,sizeof(vol_label_text),"%d%%",volume_all);
    lv_label_set_text(guider_ui.screen_BT_Ctrl_slider_label_main,vol_label_text);
    lv_slider_set_value(guider_ui.screen_BT_Ctrl_slider_1,volume_all,LV_ANIM_OFF);

}