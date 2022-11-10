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
	lv_obj_t *imgbtn_5;
	bool imgbtn_5_del;
	lv_obj_t *imgbtn_5_img_bg;
	lv_obj_t *imgbtn_5_slider_1;
	lv_obj_t *imgbtn_5_label_vol;
	lv_obj_t *imgbtn_5_imgbtn_vol_up;
	lv_obj_t *imgbtn_5_imgbtn_vol_up_label;
	lv_obj_t *imgbtn_5_imgbtn_vol_down;
	lv_obj_t *imgbtn_5_imgbtn_vol_down_label;
	lv_obj_t *imgbtn_5_imgbtn_play;
	lv_obj_t *imgbtn_5_imgbtn_play_label;
	lv_obj_t *imgbtn_5_imgbtn_pause;
	lv_obj_t *imgbtn_5_imgbtn_pause_label;
	lv_obj_t *imgbtn_5_imgbtn_next;
	lv_obj_t *imgbtn_5_imgbtn_next_label;
	lv_obj_t *imgbtn_5_imgbtn_mute;
	lv_obj_t *imgbtn_5_imgbtn_mute_label;
	lv_obj_t *imgbtn_5_imgbtn_prev;
	lv_obj_t *imgbtn_5_imgbtn_prev_label;
	lv_obj_t *imgbtn_5_imgbtn_egg;
	lv_obj_t *imgbtn_5_imgbtn_egg_label;
	lv_obj_t *imgbtn_5_img_music_2;
	lv_obj_t *imgbtn_5_img_music_1;
	lv_obj_t *imgbtn_5_imgbtn_bt;
	lv_obj_t *imgbtn_5_imgbtn_bt_label;
}lv_ui;

void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_imgbtn_5(lv_ui *ui);
LV_IMG_DECLARE(_CartoonArrowRight_1_alpha_50x50);
LV_IMG_DECLARE(_CartoonPlay_alpha_50x50);
LV_IMG_DECLARE(_yinle_21x23);
LV_IMG_DECLARE(_CartoonArrowLeft_1_alpha_50x50);
LV_IMG_DECLARE(_yinle_30x30);
LV_IMG_DECLARE(_CartoonArrowDown_alpha_30x30);
LV_IMG_DECLARE(_mute_alpha_40x40);
LV_IMG_DECLARE(_inlove_alpha_70x70);
LV_IMG_DECLARE(_CartoonSuspend_alpha_50x50);
LV_IMG_DECLARE(_pexels_2_320x240);
LV_IMG_DECLARE(_bluetooth_alpha_40x40);
LV_IMG_DECLARE(_CartoonArrowUp_alpha_30x30);
LV_IMG_DECLARE(_smiling_alpha_70x70);

#ifdef __cplusplus
}
#endif
#endif