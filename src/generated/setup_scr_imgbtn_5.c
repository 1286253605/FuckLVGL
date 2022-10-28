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

	//Write codes imgbtn_5_img_3
	ui->imgbtn_5_img_3 = lv_img_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_img_3, 0, 0);
	lv_obj_set_size(ui->imgbtn_5_img_3, 320, 240);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_img_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_img_3_main_main_default
	static lv_style_t style_imgbtn_5_img_3_main_main_default;
	if (style_imgbtn_5_img_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_img_3_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_img_3_main_main_default);
	lv_style_set_img_recolor(&style_imgbtn_5_img_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_img_3_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_img_3_main_main_default, 137);
	lv_obj_add_style(ui->imgbtn_5_img_3, &style_imgbtn_5_img_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->imgbtn_5_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->imgbtn_5_img_3,&_pexels_2_320x240);
	lv_img_set_pivot(ui->imgbtn_5_img_3, 0,0);
	lv_img_set_angle(ui->imgbtn_5_img_3, 0);

	//Write codes imgbtn_5_label_1
	ui->imgbtn_5_label_1 = lv_label_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_label_1, 265, 80);
	lv_obj_set_size(ui->imgbtn_5_label_1, 53, 19);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_label_1, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->imgbtn_5_label_1, "80");
	lv_label_set_long_mode(ui->imgbtn_5_label_1, LV_LABEL_LONG_DOT);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_label_1_main_main_default
	static lv_style_t style_imgbtn_5_label_1_main_main_default;
	if (style_imgbtn_5_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_label_1_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_label_1_main_main_default);
	lv_style_set_radius(&style_imgbtn_5_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_imgbtn_5_label_1_main_main_default, lv_color_make(0x16, 0x4c, 0xd4));
	lv_style_set_bg_grad_color(&style_imgbtn_5_label_1_main_main_default, lv_color_make(0x5a, 0x61, 0x73));
	lv_style_set_bg_grad_dir(&style_imgbtn_5_label_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_imgbtn_5_label_1_main_main_default, 24);
	lv_style_set_text_color(&style_imgbtn_5_label_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_imgbtn_5_label_1_main_main_default, &lv_font_Adventpro_regular_20);
	lv_style_set_text_letter_space(&style_imgbtn_5_label_1_main_main_default, 2);
	lv_style_set_text_line_space(&style_imgbtn_5_label_1_main_main_default, 0);
	lv_style_set_text_align(&style_imgbtn_5_label_1_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_imgbtn_5_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_imgbtn_5_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_imgbtn_5_label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_imgbtn_5_label_1_main_main_default, 0);
	lv_obj_add_style(ui->imgbtn_5_label_1, &style_imgbtn_5_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes imgbtn_5_imgbtn_1
	ui->imgbtn_5_imgbtn_1 = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_1, 276, 42);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_1, 30, 30);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_1_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_1_main_main_default;
	if (style_imgbtn_5_imgbtn_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_1_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_1_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_1_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_1_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_1_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_1, &style_imgbtn_5_imgbtn_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_1_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_1_main_main_pressed;
	if (style_imgbtn_5_imgbtn_1_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_1_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_1_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_1_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_1_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_1_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_1_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_1_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_1, &style_imgbtn_5_imgbtn_1_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_1_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_1_main_main_checked;
	if (style_imgbtn_5_imgbtn_1_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_1_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_1_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_1_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_1_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_1_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_1_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_1_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_1, &style_imgbtn_5_imgbtn_1_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowUp_alpha_30x30, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_2
	ui->imgbtn_5_imgbtn_2 = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_2, 276, 105);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_2, 30, 30);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_2_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_2_main_main_default;
	if (style_imgbtn_5_imgbtn_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_2_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_2_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_2_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_2_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_2_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_2_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_2, &style_imgbtn_5_imgbtn_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_2_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_2_main_main_pressed;
	if (style_imgbtn_5_imgbtn_2_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_2_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_2_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_2_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_2_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_2_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_2_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_2_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_2, &style_imgbtn_5_imgbtn_2_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_2_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_2_main_main_checked;
	if (style_imgbtn_5_imgbtn_2_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_2_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_2_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_2_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_2_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_2_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_2_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_2_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_2, &style_imgbtn_5_imgbtn_2_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowDown_alpha_30x30, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_3
	ui->imgbtn_5_imgbtn_3 = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_3, 154, 49);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_3, 50, 50);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_3_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_3_main_main_default;
	if (style_imgbtn_5_imgbtn_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_3_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_3_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_3_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_3_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_3_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_3_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_3, &style_imgbtn_5_imgbtn_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_3_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_3_main_main_pressed;
	if (style_imgbtn_5_imgbtn_3_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_3_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_3_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_3_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_3_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_3_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_3_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_3_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_3, &style_imgbtn_5_imgbtn_3_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_3_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_3_main_main_checked;
	if (style_imgbtn_5_imgbtn_3_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_3_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_3_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_3_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_3_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_3_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_3_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_3_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_3, &style_imgbtn_5_imgbtn_3_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonPlay_alpha_50x50, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_4
	ui->imgbtn_5_imgbtn_4 = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_4, 94, 49);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_4, 50, 50);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_4, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_4_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_4_main_main_default;
	if (style_imgbtn_5_imgbtn_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_4_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_4_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_4_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_4_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_4_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_4_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_4, &style_imgbtn_5_imgbtn_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_4_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_4_main_main_pressed;
	if (style_imgbtn_5_imgbtn_4_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_4_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_4_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_4_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_4_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_4_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_4_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_4_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_4, &style_imgbtn_5_imgbtn_4_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_4_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_4_main_main_checked;
	if (style_imgbtn_5_imgbtn_4_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_4_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_4_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_4_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_4_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_4_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_4_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_4_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_4, &style_imgbtn_5_imgbtn_4_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonSuspend_alpha_50x50, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_5
	ui->imgbtn_5_imgbtn_5 = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_5, 215, 49);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_5, 50, 50);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_5_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_5_main_main_default;
	if (style_imgbtn_5_imgbtn_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_5_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_5_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_5_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_5_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_5_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_5_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_5, &style_imgbtn_5_imgbtn_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_5_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_5_main_main_pressed;
	if (style_imgbtn_5_imgbtn_5_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_5_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_5_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_5_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_5_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_5_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_5_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_5_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_5, &style_imgbtn_5_imgbtn_5_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_5_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_5_main_main_checked;
	if (style_imgbtn_5_imgbtn_5_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_5_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_5_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_5_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_5_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_5_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_5_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_5_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_5, &style_imgbtn_5_imgbtn_5_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowRight_1_alpha_50x50, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_8
	ui->imgbtn_5_imgbtn_8 = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_8, 215, 165);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_8, 40, 40);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_8, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_8_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_8_main_main_default;
	if (style_imgbtn_5_imgbtn_8_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_8_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_8_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_8_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_8_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_8_main_main_default, 55);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_8_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_8, &style_imgbtn_5_imgbtn_8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_8_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_8_main_main_pressed;
	if (style_imgbtn_5_imgbtn_8_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_8_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_8_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_8_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_8_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_8_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_8_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_8_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_8, &style_imgbtn_5_imgbtn_8_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_8_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_8_main_main_checked;
	if (style_imgbtn_5_imgbtn_8_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_8_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_8_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_8_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_8_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_8_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_8_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_8_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_8, &style_imgbtn_5_imgbtn_8_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_8, LV_IMGBTN_STATE_RELEASED, NULL, &_mute_alpha_40x40, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_8, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_6
	ui->imgbtn_5_imgbtn_6 = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_6, 26, 49);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_6, 50, 50);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_6_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_6_main_main_default;
	if (style_imgbtn_5_imgbtn_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_6_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_6_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_6_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_6_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_6_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_6_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_6, &style_imgbtn_5_imgbtn_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_6_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_6_main_main_pressed;
	if (style_imgbtn_5_imgbtn_6_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_6_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_6_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_6_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_6_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_6_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_6_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_6_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_6, &style_imgbtn_5_imgbtn_6_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_6_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_6_main_main_checked;
	if (style_imgbtn_5_imgbtn_6_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_6_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_6_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_6_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_6_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_6_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_6_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_6_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_6, &style_imgbtn_5_imgbtn_6_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_CartoonArrowLeft_1_alpha_50x50, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_imgbtn_7
	ui->imgbtn_5_imgbtn_7 = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_7, 48, 165);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_7, 70, 70);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_7, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_7_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_7_main_main_default;
	if (style_imgbtn_5_imgbtn_7_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_7_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_7_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_7_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_7_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_7_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_7_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_7, &style_imgbtn_5_imgbtn_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_7_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_7_main_main_pressed;
	if (style_imgbtn_5_imgbtn_7_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_7_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_7_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_7_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_7_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_7_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_7_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_7_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_7, &style_imgbtn_5_imgbtn_7_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_7_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_7_main_main_checked;
	if (style_imgbtn_5_imgbtn_7_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_7_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_7_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_7_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_7_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_7_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_7_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_7_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_7, &style_imgbtn_5_imgbtn_7_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_7, LV_IMGBTN_STATE_RELEASED, NULL, &_smiling_alpha_70x70, NULL);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_7, LV_IMGBTN_STATE_PRESSED, NULL, &_inlove_alpha_70x70, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);

	//Write codes imgbtn_5_img_1
	ui->imgbtn_5_img_1 = lv_img_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_img_1, 109, 142);
	lv_obj_set_size(ui->imgbtn_5_img_1, 21, 23);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_img_1_main_main_default
	static lv_style_t style_imgbtn_5_img_1_main_main_default;
	if (style_imgbtn_5_img_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_img_1_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_img_1_main_main_default);
	lv_style_set_img_recolor(&style_imgbtn_5_img_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_img_1_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_img_1_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_img_1, &style_imgbtn_5_img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->imgbtn_5_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->imgbtn_5_img_1,&_yinle_21x23);
	lv_img_set_pivot(ui->imgbtn_5_img_1, 0,0);
	lv_img_set_angle(ui->imgbtn_5_img_1, 0);

	//Write codes imgbtn_5_img_2
	ui->imgbtn_5_img_2 = lv_img_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_img_2, 18, 122);
	lv_obj_set_size(ui->imgbtn_5_img_2, 30, 30);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_img_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_img_2_main_main_default
	static lv_style_t style_imgbtn_5_img_2_main_main_default;
	if (style_imgbtn_5_img_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_img_2_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_img_2_main_main_default);
	lv_style_set_img_recolor(&style_imgbtn_5_img_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_img_2_main_main_default, 0);
	lv_style_set_img_opa(&style_imgbtn_5_img_2_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_img_2, &style_imgbtn_5_img_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->imgbtn_5_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->imgbtn_5_img_2,&_yinle_30x30);
	lv_img_set_pivot(ui->imgbtn_5_img_2, 0,0);
	lv_img_set_angle(ui->imgbtn_5_img_2, 0);

	//Write codes imgbtn_5_imgbtn_9
	ui->imgbtn_5_imgbtn_9 = lv_imgbtn_create(ui->imgbtn_5);
	lv_obj_set_pos(ui->imgbtn_5_imgbtn_9, 265, 165);
	lv_obj_set_size(ui->imgbtn_5_imgbtn_9, 40, 40);
	lv_obj_set_scrollbar_mode(ui->imgbtn_5_imgbtn_9, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_imgbtn_5_imgbtn_9_main_main_default
	static lv_style_t style_imgbtn_5_imgbtn_9_main_main_default;
	if (style_imgbtn_5_imgbtn_9_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_9_main_main_default);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_9_main_main_default);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_9_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_9_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_9_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_9_main_main_default, 80);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_9_main_main_default, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_9, &style_imgbtn_5_imgbtn_9_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_imgbtn_5_imgbtn_9_main_main_pressed
	static lv_style_t style_imgbtn_5_imgbtn_9_main_main_pressed;
	if (style_imgbtn_5_imgbtn_9_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_9_main_main_pressed);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_9_main_main_pressed);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_9_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_9_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_9_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_9_main_main_pressed, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_9_main_main_pressed, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_9, &style_imgbtn_5_imgbtn_9_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_imgbtn_5_imgbtn_9_main_main_checked
	static lv_style_t style_imgbtn_5_imgbtn_9_main_main_checked;
	if (style_imgbtn_5_imgbtn_9_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_imgbtn_5_imgbtn_9_main_main_checked);
	else
		lv_style_init(&style_imgbtn_5_imgbtn_9_main_main_checked);
	lv_style_set_text_color(&style_imgbtn_5_imgbtn_9_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_imgbtn_5_imgbtn_9_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_imgbtn_5_imgbtn_9_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_imgbtn_5_imgbtn_9_main_main_checked, 0);
	lv_style_set_img_opa(&style_imgbtn_5_imgbtn_9_main_main_checked, 255);
	lv_obj_add_style(ui->imgbtn_5_imgbtn_9, &style_imgbtn_5_imgbtn_9_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->imgbtn_5_imgbtn_9, LV_IMGBTN_STATE_RELEASED, NULL, &_bluetooth_alpha_40x40, NULL);
	lv_obj_add_flag(ui->imgbtn_5_imgbtn_9, LV_OBJ_FLAG_CHECKABLE);
}