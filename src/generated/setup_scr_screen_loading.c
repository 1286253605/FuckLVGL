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


void setup_scr_screen_loading(lv_ui *ui){

	//Write codes screen_loading
	ui->screen_loading = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->screen_loading, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_loading_main_main_default
	static lv_style_t style_screen_loading_main_main_default;
	if (style_screen_loading_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_loading_main_main_default);
	else
		lv_style_init(&style_screen_loading_main_main_default);
	lv_style_set_bg_color(&style_screen_loading_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_screen_loading_main_main_default, 0);
	lv_obj_add_style(ui->screen_loading, &style_screen_loading_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_loading_imgbtn_load
	ui->screen_loading_imgbtn_load = lv_imgbtn_create(ui->screen_loading);
	lv_obj_set_pos(ui->screen_loading_imgbtn_load, 62, 21);
	lv_obj_set_size(ui->screen_loading_imgbtn_load, 200, 200);
	lv_obj_set_scrollbar_mode(ui->screen_loading_imgbtn_load, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_loading_imgbtn_load_main_main_default
	static lv_style_t style_screen_loading_imgbtn_load_main_main_default;
	if (style_screen_loading_imgbtn_load_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_loading_imgbtn_load_main_main_default);
	else
		lv_style_init(&style_screen_loading_imgbtn_load_main_main_default);
	lv_style_set_text_color(&style_screen_loading_imgbtn_load_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_screen_loading_imgbtn_load_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_loading_imgbtn_load_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_loading_imgbtn_load_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_loading_imgbtn_load_main_main_default, 255);
	lv_obj_add_style(ui->screen_loading_imgbtn_load, &style_screen_loading_imgbtn_load_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_loading_imgbtn_load_main_main_pressed
	static lv_style_t style_screen_loading_imgbtn_load_main_main_pressed;
	if (style_screen_loading_imgbtn_load_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_loading_imgbtn_load_main_main_pressed);
	else
		lv_style_init(&style_screen_loading_imgbtn_load_main_main_pressed);
	lv_style_set_text_color(&style_screen_loading_imgbtn_load_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_loading_imgbtn_load_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_loading_imgbtn_load_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_loading_imgbtn_load_main_main_pressed, 0);
	lv_style_set_img_opa(&style_screen_loading_imgbtn_load_main_main_pressed, 255);
	lv_obj_add_style(ui->screen_loading_imgbtn_load, &style_screen_loading_imgbtn_load_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_loading_imgbtn_load_main_main_checked
	static lv_style_t style_screen_loading_imgbtn_load_main_main_checked;
	if (style_screen_loading_imgbtn_load_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_loading_imgbtn_load_main_main_checked);
	else
		lv_style_init(&style_screen_loading_imgbtn_load_main_main_checked);
	lv_style_set_text_color(&style_screen_loading_imgbtn_load_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_screen_loading_imgbtn_load_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_loading_imgbtn_load_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_loading_imgbtn_load_main_main_checked, 0);
	lv_style_set_img_opa(&style_screen_loading_imgbtn_load_main_main_checked, 255);
	lv_obj_add_style(ui->screen_loading_imgbtn_load, &style_screen_loading_imgbtn_load_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_loading_imgbtn_load, LV_IMGBTN_STATE_RELEASED, NULL, &_sdu_alpha_200x200, NULL);
	lv_obj_add_flag(ui->screen_loading_imgbtn_load, LV_OBJ_FLAG_CHECKABLE);

	//Init events for screen
	events_init_screen_loading(ui);
}