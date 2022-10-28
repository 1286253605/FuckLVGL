/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"


void init_scr_del_flag(lv_ui *ui){
	ui->imgbtn_5_del = true;
}

void setup_ui(lv_ui *ui){
	init_scr_del_flag(ui);
	setup_scr_imgbtn_5(ui);
	lv_scr_load(ui->imgbtn_5);
}
