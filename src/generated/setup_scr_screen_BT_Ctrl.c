/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_screen_BT_Ctrl(lv_ui *ui){

	//Write codes screen_BT_Ctrl
	ui->screen_BT_Ctrl = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_main_main_default
	static lv_style_t style_screen_bt_ctrl_main_main_default;
	if (style_screen_bt_ctrl_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_main_main_default);
	lv_style_set_bg_color(&style_screen_bt_ctrl_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_screen_bt_ctrl_main_main_default, 0);
	lv_obj_add_style(ui->screen_BT_Ctrl, &style_screen_bt_ctrl_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_BT_Ctrl_img_bg
	ui->screen_BT_Ctrl_img_bg = lv_img_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_img_bg, 0, 0);
	lv_obj_set_size(ui->screen_BT_Ctrl_img_bg, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_img_bg, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_img_bg_main_main_default
	static lv_style_t style_screen_bt_ctrl_img_bg_main_main_default;
	if (style_screen_bt_ctrl_img_bg_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_img_bg_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_img_bg_main_main_default);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_img_bg_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_img_bg_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_img_bg_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_img_bg, &style_screen_bt_ctrl_img_bg_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_BT_Ctrl_img_bg, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_BT_Ctrl_img_bg,&_pexels_2_320x240);
	lv_img_set_pivot(ui->screen_BT_Ctrl_img_bg, 0,0);
	lv_img_set_angle(ui->screen_BT_Ctrl_img_bg, 0);

	//Write codes screen_BT_Ctrl_img_1
	ui->screen_BT_Ctrl_img_1 = lv_img_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_img_1, 7, 8);
	lv_obj_set_size(ui->screen_BT_Ctrl_img_1, 40, 39);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_img_1_main_main_default
	static lv_style_t style_screen_bt_ctrl_img_1_main_main_default;
	if (style_screen_bt_ctrl_img_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_img_1_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_img_1_main_main_default);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_img_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_img_1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_img_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_img_1, &style_screen_bt_ctrl_img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_BT_Ctrl_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_BT_Ctrl_img_1,&_yinle_40x39);
	lv_img_set_pivot(ui->screen_BT_Ctrl_img_1, 0,0);
	lv_img_set_angle(ui->screen_BT_Ctrl_img_1, 0);

	//Write codes screen_BT_Ctrl_imgbtn_face
	ui->screen_BT_Ctrl_imgbtn_face = lv_imgbtn_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_imgbtn_face, 210, 140);
	lv_obj_set_size(ui->screen_BT_Ctrl_imgbtn_face, 100, 100);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_imgbtn_face, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_imgbtn_face_main_main_default
	static lv_style_t style_screen_bt_ctrl_imgbtn_face_main_main_default;
	if (style_screen_bt_ctrl_imgbtn_face_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_face_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_face_main_main_default);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_face_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_face_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_face_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_face_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_face_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_face, &style_screen_bt_ctrl_imgbtn_face_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_bt_ctrl_imgbtn_face_main_main_pressed
	static lv_style_t style_screen_bt_ctrl_imgbtn_face_main_main_pressed;
	if (style_screen_bt_ctrl_imgbtn_face_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_face_main_main_pressed);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_face_main_main_pressed);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_face_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_face_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_face_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_face_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_face_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_face, &style_screen_bt_ctrl_imgbtn_face_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_bt_ctrl_imgbtn_face_main_main_checked
	static lv_style_t style_screen_bt_ctrl_imgbtn_face_main_main_checked;
	if (style_screen_bt_ctrl_imgbtn_face_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_face_main_main_checked);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_face_main_main_checked);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_face_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_face_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_face_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_face_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_face_main_main_checked, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_face, &style_screen_bt_ctrl_imgbtn_face_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_face, LV_IMGBTN_STATE_RELEASED, NULL, &_smiling_alpha_100x100, NULL);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_face, LV_IMGBTN_STATE_PRESSED, NULL, &_inlove_alpha_100x100, NULL);
	lv_obj_add_flag(ui->screen_BT_Ctrl_imgbtn_face, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_BT_Ctrl_imgbtn_bt
	ui->screen_BT_Ctrl_imgbtn_bt = lv_imgbtn_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_imgbtn_bt, 103, 170);
	lv_obj_set_size(ui->screen_BT_Ctrl_imgbtn_bt, 40, 40);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_imgbtn_bt, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_imgbtn_bt_main_main_default
	static lv_style_t style_screen_bt_ctrl_imgbtn_bt_main_main_default;
	if (style_screen_bt_ctrl_imgbtn_bt_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_bt_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_bt_main_main_default);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_bt_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_bt_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_bt_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_bt_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_bt_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_bt, &style_screen_bt_ctrl_imgbtn_bt_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_bt_ctrl_imgbtn_bt_main_main_pressed
	static lv_style_t style_screen_bt_ctrl_imgbtn_bt_main_main_pressed;
	if (style_screen_bt_ctrl_imgbtn_bt_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_bt_main_main_pressed);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_bt_main_main_pressed);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_bt_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_bt_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_bt_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_bt_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_bt_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_bt, &style_screen_bt_ctrl_imgbtn_bt_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_bt_ctrl_imgbtn_bt_main_main_checked
	static lv_style_t style_screen_bt_ctrl_imgbtn_bt_main_main_checked;
	if (style_screen_bt_ctrl_imgbtn_bt_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_bt_main_main_checked);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_bt_main_main_checked);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_bt_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_bt_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_bt_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_bt_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_bt_main_main_checked, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_bt, &style_screen_bt_ctrl_imgbtn_bt_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_bt, LV_IMGBTN_STATE_RELEASED, NULL, &_bluetooth_alpha_40x40, NULL);
	lv_obj_add_flag(ui->screen_BT_Ctrl_imgbtn_bt, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_BT_Ctrl_imgbtn_mute
	ui->screen_BT_Ctrl_imgbtn_mute = lv_imgbtn_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_imgbtn_mute, 40, 170);
	lv_obj_set_size(ui->screen_BT_Ctrl_imgbtn_mute, 40, 40);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_imgbtn_mute, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_imgbtn_mute_main_main_default
	static lv_style_t style_screen_bt_ctrl_imgbtn_mute_main_main_default;
	if (style_screen_bt_ctrl_imgbtn_mute_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_mute_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_mute_main_main_default);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_mute_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_mute_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_mute_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_mute_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_mute_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_mute, &style_screen_bt_ctrl_imgbtn_mute_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_bt_ctrl_imgbtn_mute_main_main_pressed
	static lv_style_t style_screen_bt_ctrl_imgbtn_mute_main_main_pressed;
	if (style_screen_bt_ctrl_imgbtn_mute_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_mute_main_main_pressed);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_mute_main_main_pressed);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_mute_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_mute_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_mute_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_mute_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_mute_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_mute, &style_screen_bt_ctrl_imgbtn_mute_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_bt_ctrl_imgbtn_mute_main_main_checked
	static lv_style_t style_screen_bt_ctrl_imgbtn_mute_main_main_checked;
	if (style_screen_bt_ctrl_imgbtn_mute_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_mute_main_main_checked);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_mute_main_main_checked);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_mute_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_mute_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_mute_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_mute_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_mute_main_main_checked, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_mute, &style_screen_bt_ctrl_imgbtn_mute_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_mute, LV_IMGBTN_STATE_RELEASED, NULL, &_mute_alpha_40x40, NULL);
	lv_obj_add_flag(ui->screen_BT_Ctrl_imgbtn_mute, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_BT_Ctrl_imgbtn_vol_add
	ui->screen_BT_Ctrl_imgbtn_vol_add = lv_imgbtn_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_imgbtn_vol_add, 240, 90);
	lv_obj_set_size(ui->screen_BT_Ctrl_imgbtn_vol_add, 40, 40);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_imgbtn_vol_add, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_imgbtn_vol_add_main_main_default
	static lv_style_t style_screen_bt_ctrl_imgbtn_vol_add_main_main_default;
	if (style_screen_bt_ctrl_imgbtn_vol_add_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_default);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_vol_add, &style_screen_bt_ctrl_imgbtn_vol_add_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed
	static lv_style_t style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed;
	if (style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_vol_add, &style_screen_bt_ctrl_imgbtn_vol_add_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked
	static lv_style_t style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked;
	if (style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_vol_add, &style_screen_bt_ctrl_imgbtn_vol_add_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_vol_add, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowRight_alpha_40x40, NULL);
	lv_obj_add_flag(ui->screen_BT_Ctrl_imgbtn_vol_add, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_BT_Ctrl_imgbtn_vol_dec
	ui->screen_BT_Ctrl_imgbtn_vol_dec = lv_imgbtn_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_imgbtn_vol_dec, 40, 90);
	lv_obj_set_size(ui->screen_BT_Ctrl_imgbtn_vol_dec, 40, 40);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_imgbtn_vol_dec, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default
	static lv_style_t style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default;
	if (style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_vol_dec, &style_screen_bt_ctrl_imgbtn_vol_dec_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed
	static lv_style_t style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed;
	if (style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_vol_dec, &style_screen_bt_ctrl_imgbtn_vol_dec_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked
	static lv_style_t style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked;
	if (style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_vol_dec, &style_screen_bt_ctrl_imgbtn_vol_dec_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_vol_dec, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowLeft_alpha_40x40, NULL);
	lv_obj_add_flag(ui->screen_BT_Ctrl_imgbtn_vol_dec, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_BT_Ctrl_slider_1
	ui->screen_BT_Ctrl_slider_1 = lv_slider_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_slider_1, 80, 106);
	lv_obj_set_size(ui->screen_BT_Ctrl_slider_1, 160, 8);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_slider_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_slider_1_main_main_default
	static lv_style_t style_screen_bt_ctrl_slider_1_main_main_default;
	if (style_screen_bt_ctrl_slider_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_slider_1_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_slider_1_main_main_default);
	lv_style_set_radius(&style_screen_bt_ctrl_slider_1_main_main_default, 50);
	lv_style_set_bg_color(&style_screen_bt_ctrl_slider_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_bt_ctrl_slider_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_bt_ctrl_slider_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_bt_ctrl_slider_1_main_main_default, 136);
	lv_style_set_outline_color(&style_screen_bt_ctrl_slider_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_outline_width(&style_screen_bt_ctrl_slider_1_main_main_default, 0);
	lv_style_set_outline_opa(&style_screen_bt_ctrl_slider_1_main_main_default, 0);
	lv_obj_add_style(ui->screen_BT_Ctrl_slider_1, &style_screen_bt_ctrl_slider_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_slider_1_main_indicator_default
	static lv_style_t style_screen_bt_ctrl_slider_1_main_indicator_default;
	if (style_screen_bt_ctrl_slider_1_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_slider_1_main_indicator_default);
	else
		lv_style_init(&style_screen_bt_ctrl_slider_1_main_indicator_default);
	lv_style_set_radius(&style_screen_bt_ctrl_slider_1_main_indicator_default, 50);
	lv_style_set_bg_color(&style_screen_bt_ctrl_slider_1_main_indicator_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_bt_ctrl_slider_1_main_indicator_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_bt_ctrl_slider_1_main_indicator_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_bt_ctrl_slider_1_main_indicator_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_slider_1, &style_screen_bt_ctrl_slider_1_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_slider_1_main_knob_default
	static lv_style_t style_screen_bt_ctrl_slider_1_main_knob_default;
	if (style_screen_bt_ctrl_slider_1_main_knob_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_slider_1_main_knob_default);
	else
		lv_style_init(&style_screen_bt_ctrl_slider_1_main_knob_default);
	lv_style_set_radius(&style_screen_bt_ctrl_slider_1_main_knob_default, 50);
	lv_style_set_bg_color(&style_screen_bt_ctrl_slider_1_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_bt_ctrl_slider_1_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_bt_ctrl_slider_1_main_knob_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_bt_ctrl_slider_1_main_knob_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_slider_1, &style_screen_bt_ctrl_slider_1_main_knob_default, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_slider_set_range(ui->screen_BT_Ctrl_slider_1,0, 100);
	lv_slider_set_value(ui->screen_BT_Ctrl_slider_1,50,false);

	//Write codes screen_BT_Ctrl_imgbtn_prev
	ui->screen_BT_Ctrl_imgbtn_prev = lv_imgbtn_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_imgbtn_prev, 53, 40);
	lv_obj_set_size(ui->screen_BT_Ctrl_imgbtn_prev, 50, 50);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_imgbtn_prev, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_imgbtn_prev_main_main_default
	static lv_style_t style_screen_bt_ctrl_imgbtn_prev_main_main_default;
	if (style_screen_bt_ctrl_imgbtn_prev_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_prev_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_prev_main_main_default);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_prev_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_prev_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_prev_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_prev_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_prev_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_prev, &style_screen_bt_ctrl_imgbtn_prev_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_bt_ctrl_imgbtn_prev_main_main_pressed
	static lv_style_t style_screen_bt_ctrl_imgbtn_prev_main_main_pressed;
	if (style_screen_bt_ctrl_imgbtn_prev_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_prev_main_main_pressed);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_prev_main_main_pressed);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_prev_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_prev_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_prev_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_prev_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_prev_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_prev, &style_screen_bt_ctrl_imgbtn_prev_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_bt_ctrl_imgbtn_prev_main_main_checked
	static lv_style_t style_screen_bt_ctrl_imgbtn_prev_main_main_checked;
	if (style_screen_bt_ctrl_imgbtn_prev_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_prev_main_main_checked);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_prev_main_main_checked);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_prev_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_prev_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_prev_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_prev_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_prev_main_main_checked, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_prev, &style_screen_bt_ctrl_imgbtn_prev_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_prev, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowLeft_1_alpha_50x50, NULL);
	lv_obj_add_flag(ui->screen_BT_Ctrl_imgbtn_prev, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_BT_Ctrl_imgbtn_pause
	ui->screen_BT_Ctrl_imgbtn_pause = lv_imgbtn_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_imgbtn_pause, 103, 40);
	lv_obj_set_size(ui->screen_BT_Ctrl_imgbtn_pause, 50, 50);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_imgbtn_pause, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_imgbtn_pause_main_main_default
	static lv_style_t style_screen_bt_ctrl_imgbtn_pause_main_main_default;
	if (style_screen_bt_ctrl_imgbtn_pause_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_pause_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_pause_main_main_default);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_pause_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_pause_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_pause_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_pause_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_pause_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_pause, &style_screen_bt_ctrl_imgbtn_pause_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_bt_ctrl_imgbtn_pause_main_main_pressed
	static lv_style_t style_screen_bt_ctrl_imgbtn_pause_main_main_pressed;
	if (style_screen_bt_ctrl_imgbtn_pause_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_pause_main_main_pressed);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_pause_main_main_pressed);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_pause_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_pause_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_pause_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_pause_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_pause_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_pause, &style_screen_bt_ctrl_imgbtn_pause_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_bt_ctrl_imgbtn_pause_main_main_checked
	static lv_style_t style_screen_bt_ctrl_imgbtn_pause_main_main_checked;
	if (style_screen_bt_ctrl_imgbtn_pause_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_pause_main_main_checked);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_pause_main_main_checked);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_pause_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_pause_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_pause_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_pause_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_pause_main_main_checked, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_pause, &style_screen_bt_ctrl_imgbtn_pause_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_pause, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonSuspend_alpha_50x50, NULL);
	lv_obj_add_flag(ui->screen_BT_Ctrl_imgbtn_pause, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_BT_Ctrl_imgbtn_play
	ui->screen_BT_Ctrl_imgbtn_play = lv_imgbtn_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_imgbtn_play, 153, 40);
	lv_obj_set_size(ui->screen_BT_Ctrl_imgbtn_play, 50, 50);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_imgbtn_play, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_imgbtn_play_main_main_default
	static lv_style_t style_screen_bt_ctrl_imgbtn_play_main_main_default;
	if (style_screen_bt_ctrl_imgbtn_play_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_play_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_play_main_main_default);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_play_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_play_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_play_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_play_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_play_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_play, &style_screen_bt_ctrl_imgbtn_play_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_bt_ctrl_imgbtn_play_main_main_pressed
	static lv_style_t style_screen_bt_ctrl_imgbtn_play_main_main_pressed;
	if (style_screen_bt_ctrl_imgbtn_play_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_play_main_main_pressed);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_play_main_main_pressed);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_play_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_play_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_play_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_play_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_play_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_play, &style_screen_bt_ctrl_imgbtn_play_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_bt_ctrl_imgbtn_play_main_main_checked
	static lv_style_t style_screen_bt_ctrl_imgbtn_play_main_main_checked;
	if (style_screen_bt_ctrl_imgbtn_play_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_play_main_main_checked);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_play_main_main_checked);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_play_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_play_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_play_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_play_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_play_main_main_checked, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_play, &style_screen_bt_ctrl_imgbtn_play_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_play, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonPlay_alpha_50x50, NULL);
	lv_obj_add_flag(ui->screen_BT_Ctrl_imgbtn_play, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_BT_Ctrl_imgbtn_next
	ui->screen_BT_Ctrl_imgbtn_next = lv_imgbtn_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_imgbtn_next, 203, 40);
	lv_obj_set_size(ui->screen_BT_Ctrl_imgbtn_next, 50, 50);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_imgbtn_next, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_imgbtn_next_main_main_default
	static lv_style_t style_screen_bt_ctrl_imgbtn_next_main_main_default;
	if (style_screen_bt_ctrl_imgbtn_next_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_next_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_next_main_main_default);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_next_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_next_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_next_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_next_main_main_default, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_next, &style_screen_bt_ctrl_imgbtn_next_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_bt_ctrl_imgbtn_next_main_main_pressed
	static lv_style_t style_screen_bt_ctrl_imgbtn_next_main_main_pressed;
	if (style_screen_bt_ctrl_imgbtn_next_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_next_main_main_pressed);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_next_main_main_pressed);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_next_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_next_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_next_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_next_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_next_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_next, &style_screen_bt_ctrl_imgbtn_next_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_bt_ctrl_imgbtn_next_main_main_checked
	static lv_style_t style_screen_bt_ctrl_imgbtn_next_main_main_checked;
	if (style_screen_bt_ctrl_imgbtn_next_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_imgbtn_next_main_main_checked);
	else
		lv_style_init(&style_screen_bt_ctrl_imgbtn_next_main_main_checked);
	lv_style_set_text_color(&style_screen_bt_ctrl_imgbtn_next_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_bt_ctrl_imgbtn_next_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_bt_ctrl_imgbtn_next_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_bt_ctrl_imgbtn_next_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_bt_ctrl_imgbtn_next_main_main_checked, 255);
	lv_obj_add_style(ui->screen_BT_Ctrl_imgbtn_next, &style_screen_bt_ctrl_imgbtn_next_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_BT_Ctrl_imgbtn_next, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowRight_1_alpha_50x50, NULL);
	lv_obj_add_flag(ui->screen_BT_Ctrl_imgbtn_next, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_BT_Ctrl_slider_label_main
	ui->screen_BT_Ctrl_slider_label_main = lv_label_create(ui->screen_BT_Ctrl);
	lv_obj_set_pos(ui->screen_BT_Ctrl_slider_label_main, 108, 130);
	lv_obj_set_size(ui->screen_BT_Ctrl_slider_label_main, 95, 22);
	lv_obj_set_scrollbar_mode(ui->screen_BT_Ctrl_slider_label_main, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_BT_Ctrl_slider_label_main, "20%");
	lv_label_set_long_mode(ui->screen_BT_Ctrl_slider_label_main, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_bt_ctrl_slider_label_main_main_main_default
	static lv_style_t style_screen_bt_ctrl_slider_label_main_main_main_default;
	if (style_screen_bt_ctrl_slider_label_main_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bt_ctrl_slider_label_main_main_main_default);
	else
		lv_style_init(&style_screen_bt_ctrl_slider_label_main_main_main_default);
	lv_style_set_radius(&style_screen_bt_ctrl_slider_label_main_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_bt_ctrl_slider_label_main_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_bt_ctrl_slider_label_main_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_bt_ctrl_slider_label_main_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_bt_ctrl_slider_label_main_main_main_default, 0);
	lv_style_set_text_color(&style_screen_bt_ctrl_slider_label_main_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_bt_ctrl_slider_label_main_main_main_default, &lv_font_Acme_Regular_18);
	lv_style_set_text_letter_space(&style_screen_bt_ctrl_slider_label_main_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_bt_ctrl_slider_label_main_main_main_default, 0);
	lv_style_set_text_align(&style_screen_bt_ctrl_slider_label_main_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_bt_ctrl_slider_label_main_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_bt_ctrl_slider_label_main_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_bt_ctrl_slider_label_main_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_bt_ctrl_slider_label_main_main_main_default, 0);
	lv_obj_add_style(ui->screen_BT_Ctrl_slider_label_main, &style_screen_bt_ctrl_slider_label_main_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
}