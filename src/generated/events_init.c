/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"


void events_init(lv_ui *ui)
{
}

static void screen_loading_imgbtn_load_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_PRESSED:
	{
		guider_load_screen(SCR_BT);
		lv_demo_printer_anim_in_all(guider_ui.screen_BT_Ctrl, 200);
	}
		break;
	default:
		break;
	}
}

void events_init_screen_loading(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_loading_imgbtn_load, screen_loading_imgbtn_load_event_handler, LV_EVENT_ALL, NULL);
}
