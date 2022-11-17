/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *screen_loading;
	bool screen_loading_del;
	lv_obj_t *screen_loading_imgbtn_load;
	lv_obj_t *screen_loading_imgbtn_load_label;
	lv_obj_t *screen_BT_Ctrl;
	bool screen_BT_Ctrl_del;
	lv_obj_t *screen_BT_Ctrl_img_bg;
	lv_obj_t *screen_BT_Ctrl_img_1;
	lv_obj_t *screen_BT_Ctrl_imgbtn_face;
	lv_obj_t *screen_BT_Ctrl_imgbtn_face_label;
	lv_obj_t *screen_BT_Ctrl_imgbtn_bt;
	lv_obj_t *screen_BT_Ctrl_imgbtn_bt_label;
	lv_obj_t *screen_BT_Ctrl_imgbtn_mute;
	lv_obj_t *screen_BT_Ctrl_imgbtn_mute_label;
	lv_obj_t *screen_BT_Ctrl_imgbtn_vol_add;
	lv_obj_t *screen_BT_Ctrl_imgbtn_vol_add_label;
	lv_obj_t *screen_BT_Ctrl_imgbtn_vol_dec;
	lv_obj_t *screen_BT_Ctrl_imgbtn_vol_dec_label;
	lv_obj_t *screen_BT_Ctrl_slider_1;
	lv_obj_t *screen_BT_Ctrl_imgbtn_prev;
	lv_obj_t *screen_BT_Ctrl_imgbtn_prev_label;
	lv_obj_t *screen_BT_Ctrl_imgbtn_pause;
	lv_obj_t *screen_BT_Ctrl_imgbtn_pause_label;
	lv_obj_t *screen_BT_Ctrl_imgbtn_play;
	lv_obj_t *screen_BT_Ctrl_imgbtn_play_label;
	lv_obj_t *screen_BT_Ctrl_imgbtn_next;
	lv_obj_t *screen_BT_Ctrl_imgbtn_next_label;
	lv_obj_t *screen_BT_Ctrl_slider_label_main;
	lv_obj_t *screen_2;
	bool screen_2_del;
}lv_ui;

void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen_loading(lv_ui *ui);
void setup_scr_screen_BT_Ctrl(lv_ui *ui);
void setup_scr_screen_2(lv_ui *ui);
LV_IMG_DECLARE(_CartoonArrowRight_1_alpha_50x50);
LV_IMG_DECLARE(_CartoonPlay_alpha_50x50);
LV_IMG_DECLARE(_sdu_alpha_200x200);
LV_IMG_DECLARE(_yinle_40x39);
LV_IMG_DECLARE(_CartoonArrowRight_alpha_40x40);
LV_IMG_DECLARE(_CartoonArrowLeft_1_alpha_50x50);
LV_IMG_DECLARE(_mute_alpha_40x40);
LV_IMG_DECLARE(_inlove_alpha_100x100);
LV_IMG_DECLARE(_CartoonSuspend_alpha_50x50);
LV_IMG_DECLARE(_pexels_2_320x240);
LV_IMG_DECLARE(_bluetooth_alpha_40x40);
LV_IMG_DECLARE(_smiling_alpha_100x100);
LV_IMG_DECLARE(_CartoonArrowLeft_alpha_40x40);

#ifdef __cplusplus
}
#endif
#endif