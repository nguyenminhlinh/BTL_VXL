/*
 * control.c
 *
 *  Created on: Dec 1, 2022
 *      Author: Acer
 */
#include "control.h"

void control_unit(){
	if(button_flag1 == 1 && mode != 5)
	{
		mode = mode +1;
		button_flag1 = 0;
	}
	if(mode == 1)
	{
		fsm_automatic_run(global_red, global_green, global_yellow);
		fsm_automatic_run2(global_red, global_green, global_yellow);
	}
	if(mode == 2)
	{
	    fsm_automatic_run3();
	}

	if(mode == 3)
	{
		fsm_automatic_run4();
	}

	if(mode == 4)
	{
		mode = 1;
		status = INIT;
		status1 = INIT;
	}
	if(button_flag4 == 1)
	{
		mode = 5;
		button_flag4 = 0;
	}
	if(mode == 5 && button_flag1 == 1)
	{
		mode = 1;
		status = INIT;
		status1 = INIT;
		button_flag1 = 0;
	}

}
