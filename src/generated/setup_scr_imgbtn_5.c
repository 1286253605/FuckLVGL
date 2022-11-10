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


void setup_scr_imgbtn_5(lv_ui *ui){

	//Write codes imgbtn_5
	ui->imgbtn_5 = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_main_main_default
	static lv_style_t style_imgbtn_5_main_main_default;
	if (style_imgbtn_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5, &style_imgbtn_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_main_main_pressed
	static lv_style_t style_imgbtn_5_main_main_pressed;
	if (style_imgbtn_5_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5, &style_imgbtn_5_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_main_main_checked
	static lv_style_t style_imgbtn_5_main_main_checked;
	if (style_imgbtn_5_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5, &style_imgbtn_5_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes imgbtn_5_img_bg
	ui->imgbtn_5_img_bg = lv_img_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_img_bg, 0, 0);
	lv_obj_set_size(ui->imgbtn_5_img_bg, 320, 240);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_img_bg, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_img_bg_main_main_default
	static lv_style_t style_imgbtn_5_img_bg_main_main_default;
	if (style_imgbtn_5_img_bg_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_img_bg_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_img_bg_main_main_default);
	lv_style_set_img_recolor(&style_imgbtn_5_img_bg_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_img_bg_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_img_bg_main_main_default, 137);
	lv_obj_add_style(ui->imgbtn_5_img_bg, &style_imgbtn_5_img_bg_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->imgbtn_5_img_bg, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->imgbtn_5_img_bg,&_pexels_2_320x240);
	lv_img_set_pivot(ui->imgbtn_5_img_bg, 0,0);
	lv_img_set_angle(ui->imgbtn_5_img_bg, 0);

	//Write codes imgbtn_5_slider_1
	ui->imgbtn_5_slider_1 = lv_slider_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_slider_1, 62, 110);
	lv_obj_set_size(ui->imgbtn_5_slider_1, 196, 20);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_slider_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_slider_1_main_main_default
	static lv_style_t style_imgbtn_5_slider_1_main_main_default;
	if (style_imgbtn_5_slider_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_slider_1_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_slider_1_main_main_default);
	lv_style_set_radius(&style_imgbtn_5_slider_1_main_main_default, 50);
	lv_style_set_bg_color(&style_imgbtn_5_slider_1_main_main_default, lv_color_make(0x39, 0x3c, 0x41));
	lv_style_set_bg_grad_color(&style_imgbtn_5_slider_1_main_main_default, lv_color_make(0x39, 0x3c, 0x41));
	lv_style_set_bg_grad_dir(&style_imgbtn_5_slider_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_imgbtn_5_slider_1_main_main_default, 255);
	lv_style_set_outline_color(&style_imgbtn_5_slider_1_main_main_default, lv_color_make(0x39, 0x3c, 0x41));
	lv_style_set_outline_width(&style_imgbtn_5_slider_1_main_main_default, 0);
	lv_style_set_outline_opa(&style_imgbtn_5_slider_1_main_main_default, 0);
	lv_obj_add_style(ui->imgbtn_5_slider_1, &style_imgbtn_5_slider_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_slider_1_main_indicator_default
	static lv_style_t style_imgbtn_5_slider_1_main_indicator_default;
	if (style_imgbtn_5_slider_1_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_slider_1_main_indicator_default);
	else
		lv_style_init(&style_imgbtn_5_slider_1_main_indicator_default);
	lv_style_set_radius(&style_imgbtn_5_slider_1_main_indicator_default, 50);
	lv_style_set_bg_color(&style_imgbtn_5_slider_1_main_indicator_default, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_imgbtn_5_slider_1_main_indicator_default, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_imgbtn_5_slider_1_main_indicator_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_imgbtn_5_slider_1_main_indicator_default, 255);
	lv_obj_add_style(ui->imgbtn_5_slider_1, &style_imgbtn_5_slider_1_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_slider_1_main_knob_default
	static lv_style_t style_imgbtn_5_slider_1_main_knob_default;
	if (style_imgbtn_5_slider_1_main_knob_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_slider_1_main_knob_default);
	else
		lv_style_init(&style_imgbtn_5_slider_1_main_knob_default);
	lv_style_set_radius(&style_imgbtn_5_slider_1_main_knob_default, 50);
	lv_style_set_bg_color(&style_imgbtn_5_slider_1_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_imgbtn_5_slider_1_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_imgbtn_5_slider_1_main_knob_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_imgbtn_5_slider_1_main_knob_default, 255);
	lv_obj_add_style(ui->imgbtn_5_slider_1, &style_imgbtn_5_slider_1_main_knob_default, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_slider_set_range(ui->imgbtn_5_slider_1,0, 100);
	lv_slider_set_value(ui->imgbtn_5_slider_1,50,false);

	//Write codes imgbtn_5_label_vol
	ui->imgbtn_5_label_vol = lv_label_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_label_vol, 255, 111);
	lv_obj_set_size(ui->imgbtn_5_label_vol, 53, 19);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_label_vol, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->imgbtn_5_label_vol, "80");
	lv_label_set_long_mode(ui->imgbtn_5_label_vol, LV_LABEL_LONG_DOT);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_label_vol_main_main_default
	static lv_style_t style_imgbtn_5_label_vol_main_main_default;
	if (style_imgbtn_5_label_vol_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_label_vol_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_label_vol_main_main_default);
	lv_style_set_radius(&style_imgbtn_5_label_vol_main_main_default, 0);
	lv_style_set_bg_color(&style_imgbtn_5_label_vol_main_main_default, lv_color_make(0x16, 0x4c, 0xd4));
	lv_style_set_bg_grad_color(&style_imgbtn_5_label_vol_main_main_default, lv_color_make(0x5a, 0x61, 0x73));
	lv_style_set_bg_grad_dir(&style_imgbtn_5_label_vol_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_imgbtn_5_label_vol_main_main_default, 0);
	lv_style_set_text_color(&style_imgbtn_5_label_vol_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_imgbtn_5_label_vol_main_main_default, &lv_font_Adventpro_regular_20);
	lv_style_set_text_letter_space(&style_imgbtn_5_label_vol_main_main_default, 2);
	lv_style_set_text_line_space(&style_imgbtn_5_label_vol_main_main_default, 0);
	lv_style_set_text_align(&style_imgbtn_5_label_vol_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_imgbtn_5_label_vol_main_main_default, 0);
	lv_style_set_pad_right(&style_imgbtn_5_label_vol_main_main_default, 0);
	lv_style_set_pad_top(&style_imgbtn_5_label_vol_main_main_default, 0);
	lv_style_set_pad_bottom(&style_imgbtn_5_label_vol_main_main_default, 0);
	lv_obj_add_style(ui->imgbtn_5_label_vol, &style_imgbtn_5_label_vol_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes imgbtn_5_imgbtn_vol_up
	ui->imgbtn_5_imgbtn_vol_up = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_vol_up, 265, 81);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_vol_up, 30, 30);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_vol_up, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_vol_up_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_vol_up_main_main_default;
	if (style_imgbtn_5_imgbtn_vol_up_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_vol_up_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_vol_up_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_vol_up_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_vol_up_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_vol_up_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_vol_up_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_vol_up_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_vol_up, &style_imgbtn_5_imgbtn_vol_up_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_vol_up_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_vol_up_main_main_pressed;
	if (style_imgbtn_5_imgbtn_vol_up_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_vol_up_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_vol_up_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_vol_up_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_vol_up_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_vol_up_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_vol_up_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_vol_up_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_vol_up, &style_imgbtn_5_imgbtn_vol_up_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_vol_up_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_vol_up_main_main_checked;
	if (style_imgbtn_5_imgbtn_vol_up_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_vol_up_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_vol_up_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_vol_up_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_vol_up_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_vol_up_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_vol_up_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_vol_up_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_vol_up, &style_imgbtn_5_imgbtn_vol_up_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_vol_up, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowUp_alpha_30x30, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_vol_up, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_vol_down
	ui->imgbtn_5_imgbtn_vol_down = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_vol_down, 265, 128);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_vol_down, 30, 30);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_vol_down, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_vol_down_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_vol_down_main_main_default;
	if (style_imgbtn_5_imgbtn_vol_down_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_vol_down_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_vol_down_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_vol_down_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_vol_down_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_vol_down_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_vol_down_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_vol_down_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_vol_down, &style_imgbtn_5_imgbtn_vol_down_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_vol_down_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_vol_down_main_main_pressed;
	if (style_imgbtn_5_imgbtn_vol_down_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_vol_down_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_vol_down_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_vol_down_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_vol_down_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_vol_down_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_vol_down_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_vol_down_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_vol_down, &style_imgbtn_5_imgbtn_vol_down_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_vol_down_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_vol_down_main_main_checked;
	if (style_imgbtn_5_imgbtn_vol_down_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_vol_down_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_vol_down_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_vol_down_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_vol_down_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_vol_down_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_vol_down_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_vol_down_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_vol_down, &style_imgbtn_5_imgbtn_vol_down_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_vol_down, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowDown_alpha_30x30, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_vol_down, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_play
	ui->imgbtn_5_imgbtn_play = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_play, 154, 49);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_play, 50, 50);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_play, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_play_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_play_main_main_default;
	if (style_imgbtn_5_imgbtn_play_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_play_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_play_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_play_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_play_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_play_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_play_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_play_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_play, &style_imgbtn_5_imgbtn_play_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_play_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_play_main_main_pressed;
	if (style_imgbtn_5_imgbtn_play_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_play_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_play_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_play_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_play_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_play_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_play_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_play_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_play, &style_imgbtn_5_imgbtn_play_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_play_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_play_main_main_checked;
	if (style_imgbtn_5_imgbtn_play_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_play_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_play_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_play_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_play_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_play_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_play_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_play_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_play, &style_imgbtn_5_imgbtn_play_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_play, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonPlay_alpha_50x50, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_play, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_pause
	ui->imgbtn_5_imgbtn_pause = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_pause, 94, 49);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_pause, 50, 50);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_pause, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_pause_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_pause_main_main_default;
	if (style_imgbtn_5_imgbtn_pause_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_pause_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_pause_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_pause_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_pause_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_pause_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_pause_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_pause_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_pause, &style_imgbtn_5_imgbtn_pause_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_pause_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_pause_main_main_pressed;
	if (style_imgbtn_5_imgbtn_pause_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_pause_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_pause_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_pause_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_pause_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_pause_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_pause_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_pause_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_pause, &style_imgbtn_5_imgbtn_pause_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_pause_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_pause_main_main_checked;
	if (style_imgbtn_5_imgbtn_pause_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_pause_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_pause_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_pause_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_pause_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_pause_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_pause_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_pause_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_pause, &style_imgbtn_5_imgbtn_pause_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_pause, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonSuspend_alpha_50x50, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_pause, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_next
	ui->imgbtn_5_imgbtn_next = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_next, 215, 49);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_next, 50, 50);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_next, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_next_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_next_main_main_default;
	if (style_imgbtn_5_imgbtn_next_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_next_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_next_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_next_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_next_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_next_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_next_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_next_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_next, &style_imgbtn_5_imgbtn_next_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_next_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_next_main_main_pressed;
	if (style_imgbtn_5_imgbtn_next_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_next_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_next_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_next_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_next_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_next_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_next_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_next_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_next, &style_imgbtn_5_imgbtn_next_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_next_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_next_main_main_checked;
	if (style_imgbtn_5_imgbtn_next_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_next_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_next_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_next_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_next_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_next_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_next_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_next_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_next, &style_imgbtn_5_imgbtn_next_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_next, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowRight_1_alpha_50x50, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_next, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_mute
	ui->imgbtn_5_imgbtn_mute = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_mute, 154, 182);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_mute, 40, 40);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_mute, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_mute_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_mute_main_main_default;
	if (style_imgbtn_5_imgbtn_mute_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_mute_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_mute_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_mute_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_mute_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_mute_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_mute_main_main_default, 55);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_mute_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_mute, &style_imgbtn_5_imgbtn_mute_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_mute_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_mute_main_main_pressed;
	if (style_imgbtn_5_imgbtn_mute_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_mute_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_mute_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_mute_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_mute_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_mute_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_mute_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_mute_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_mute, &style_imgbtn_5_imgbtn_mute_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_mute_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_mute_main_main_checked;
	if (style_imgbtn_5_imgbtn_mute_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_mute_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_mute_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_mute_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_mute_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_mute_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_mute_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_mute_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_mute, &style_imgbtn_5_imgbtn_mute_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_mute, LV_IMGBTN_STATE_RELEASED, NULL, &_mute_alpha_40x40, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_mute, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_prev
	ui->imgbtn_5_imgbtn_prev = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_prev, 26, 49);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_prev, 50, 50);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_prev, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_prev_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_prev_main_main_default;
	if (style_imgbtn_5_imgbtn_prev_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_prev_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_prev_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_prev_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_prev_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_prev_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_prev_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_prev_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_prev, &style_imgbtn_5_imgbtn_prev_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_prev_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_prev_main_main_pressed;
	if (style_imgbtn_5_imgbtn_prev_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_prev_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_prev_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_prev_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_prev_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_prev_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_prev_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_prev_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_prev, &style_imgbtn_5_imgbtn_prev_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_prev_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_prev_main_main_checked;
	if (style_imgbtn_5_imgbtn_prev_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_prev_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_prev_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_prev_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_prev_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_prev_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_prev_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_prev_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_prev, &style_imgbtn_5_imgbtn_prev_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_prev, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowLeft_1_alpha_50x50, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_prev, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_egg
	ui->imgbtn_5_imgbtn_egg = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_egg, 39, 158);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_egg, 70, 70);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_egg, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_egg_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_egg_main_main_default;
	if (style_imgbtn_5_imgbtn_egg_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_egg_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_egg_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_egg_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_egg_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_egg_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_egg_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_egg_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_egg, &style_imgbtn_5_imgbtn_egg_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_egg_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_egg_main_main_pressed;
	if (style_imgbtn_5_imgbtn_egg_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_egg_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_egg_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_egg_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_egg_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_egg_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_egg_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_egg_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_egg, &style_imgbtn_5_imgbtn_egg_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_egg_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_egg_main_main_checked;
	if (style_imgbtn_5_imgbtn_egg_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_egg_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_egg_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_egg_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_egg_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_egg_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_egg_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_egg_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_egg, &style_imgbtn_5_imgbtn_egg_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_egg, LV_IMGBTN_STATE_RELEASED, NULL, &_smiling_alpha_70x70, NULL);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_egg, LV_IMGBTN_STATE_PRESSED, NULL, &_inlove_alpha_70x70, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_egg, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_img_music_2
	ui->imgbtn_5_img_music_2 = lv_img_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_img_music_2, 109, 142);
	lv_obj_set_size(ui->imgbtn_5_img_music_2, 21, 23);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_img_music_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_img_music_2_main_main_default
	static lv_style_t style_imgbtn_5_img_music_2_main_main_default;
	if (style_imgbtn_5_img_music_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_img_music_2_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_img_music_2_main_main_default);
	lv_style_set_img_recolor(&style_imgbtn_5_img_music_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_img_music_2_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_img_music_2_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_img_music_2, &style_imgbtn_5_img_music_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->imgbtn_5_img_music_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->imgbtn_5_img_music_2,&_yinle_21x23);
	lv_img_set_pivot(ui->imgbtn_5_img_music_2, 0,0);
	lv_img_set_angle(ui->imgbtn_5_img_music_2, 0);

	//Write codes imgbtn_5_img_music_1
	ui->imgbtn_5_img_music_1 = lv_img_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_img_music_1, 18, 122);
	lv_obj_set_size(ui->imgbtn_5_img_music_1, 30, 30);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_img_music_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_img_music_1_main_main_default
	static lv_style_t style_imgbtn_5_img_music_1_main_main_default;
	if (style_imgbtn_5_img_music_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_img_music_1_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_img_music_1_main_main_default);
	lv_style_set_img_recolor(&style_imgbtn_5_img_music_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_img_music_1_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_img_music_1_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_img_music_1, &style_imgbtn_5_img_music_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->imgbtn_5_img_music_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->imgbtn_5_img_music_1,&_yinle_30x30);
	lv_img_set_pivot(ui->imgbtn_5_img_music_1, 0,0);
	lv_img_set_angle(ui->imgbtn_5_img_music_1, 0);

	//Write codes imgbtn_5_imgbtn_bt
	ui->imgbtn_5_imgbtn_bt = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_bt, 215, 182);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_bt, 40, 40);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_bt, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_bt_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_bt_main_main_default;
	if (style_imgbtn_5_imgbtn_bt_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_bt_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_bt_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_bt_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_bt_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_bt_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_bt_main_main_default, 80);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_bt_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_bt, &style_imgbtn_5_imgbtn_bt_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_bt_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_bt_main_main_pressed;
	if (style_imgbtn_5_imgbtn_bt_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_bt_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_bt_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_bt_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_bt_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_bt_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_bt_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_bt_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_bt, &style_imgbtn_5_imgbtn_bt_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_bt_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_bt_main_main_checked;
	if (style_imgbtn_5_imgbtn_bt_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_bt_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_bt_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_bt_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_bt_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_bt_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_bt_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_bt_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_bt, &style_imgbtn_5_imgbtn_bt_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_bt, LV_IMGBTN_STATE_RELEASED, NULL, &_bluetooth_alpha_40x40, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_bt, LV_OBJ_FLAG_CHECKABLE);
}