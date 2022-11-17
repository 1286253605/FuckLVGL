// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/*
 * custom.h
 *
 *  Created on: July 29, 2020
 *      Author: nxf53801
 */

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

enum SCR_ID {
    SCR_LOADING=0,
    SCR_BT=1
};

extern int cur_scr;

void custom_init(lv_ui *ui);
void lv_demo_printer_anim_in_all(lv_obj_t * obj, uint32_t delay);
void loading_event_init(void);
void bt_ctrl_event_init(void);
void guider_load_screen(int scr_id);

void lv_btn_events_handler(lv_event_t*e);
void all_events_handler(lv_event_t *event);
void add_slider_style();
void get_volume_set_label();
#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
