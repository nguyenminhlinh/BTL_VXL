/*
 * fsm_automatic.c
 *
 *  Created on: Oct 4, 2022
 *      Author: acer
 */
#include "fsm_automatic.h"

void fsm_automatic_run(int x, int y, int z){
	switch(status){
		case INIT:
		    status = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_YELLOW_Pin|LED_PED_Pin, 1);
				setTimer1(y*1000);
			break;
		case AUTO_GREEN:
			if(timer1_flag == 1){
				status = AUTO_YELLOW;
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_GREEN_Pin|LED_PED_Pin, 1);
				setTimer1(z*1000);
			}
			break;
		case AUTO_YELLOW:
			if(timer1_flag == 1){
				status = AUTO_RED;
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_Pin|LED_GREEN_Pin|LED_PED_Pin, 1);
				setTimer1(x*1000);
			}
			break;
		case AUTO_RED:
			if(timer1_flag == 1){
				status = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_YELLOW_Pin|LED_PED_Pin, 1);
				setTimer1(y*1000);
			}
			break;
		case AUTO_WHITE:
				HAL_GPIO_WritePin(GPIOB, LED_PED_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin, 1);
			break;
		default:
			break;
		}
}
void fsm_automatic_run2(int x, int y, int z){
	switch(status1){
		case INIT:
		    status1 = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin|LED_YELLOW_2_Pin|LED_PED_Pin, 1);
				setTimer3(x*1000);
			break;
		case AUTO_GREEN:
			if(timer3_flag == 1){
				status1 = AUTO_YELLOW;
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin|LED_YELLOW_2_Pin|LED_PED_Pin, 1);
				setTimer3(y*1000);
			}
			break;
		case AUTO_YELLOW:
			if(timer3_flag == 1){
				status1 = AUTO_RED;
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin|LED_RED_2_Pin|LED_PED_Pin, 1);
				setTimer3(z*1000);
			}
			break;
		case AUTO_RED:
			if(timer3_flag == 1){
				status1 = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin|LED_YELLOW_2_Pin|LED_PED_Pin, 1);
				setTimer3(x*1000);
			}
			break;
		case AUTO_WHITE:
				HAL_GPIO_WritePin(GPIOB, LED_PED_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin|LED_YELLOW_2_Pin|LED_GREEN_2_Pin, 1);
			break;
		default:
			break;
		}
}
void fsm_automatic_run3()
{
	if(button_flag2 == 1)
			{
				count = count + 1;
				button_flag2 = 0;
			}
			if(count  == 0)
			{
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_YELLOW_Pin|LED_PED_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin|LED_YELLOW_2_Pin|LED_PED_Pin, 1);
			}
			if(count == 1)
			{
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin|LED_RED_Pin|LED_PED_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin|LED_RED_2_Pin|LED_PED_Pin, 1);
			}
			if(count == 2)
			{
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_Pin|LED_GREEN_Pin|LED_PED_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2_Pin|LED_GREEN_2_Pin|LED_PED_Pin, 1);
			}
			if(count == 3)
			{
				count = 0;
			}
}
void fsm_automatic_run4()
{
	if(button_flag2 == 1)
			{
				button_flag2 = 0;
				light_mode = light_mode +1;
			}
			if(light_mode  == 0)
			{
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin|LED_PED_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_YELLOW_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin|LED_PED_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin|LED_YELLOW_2_Pin, 0);
			}
			if(light_mode == 1)
			{
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_Pin|LED_PED_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin|LED_RED_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2_Pin|LED_PED_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin|LED_RED_2_Pin, 0);
			}
			if(light_mode == 2)
			{
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_PED_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_Pin|LED_GREEN_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin |LED_PED_Pin, 1);
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2_Pin|LED_GREEN_2_Pin, 0);
			}
			if(light_mode == 3)
			{
				light_mode = 0;
			}
			if(button_flag3 == 1 && light_mode == 0)
			{
				global_green = global_green + 1;
				if(global_green == 10){
					global_green = 0;
				}
				button_flag3 = 0;
			}
			if(button_flag3 == 1 && light_mode == 1)
			{
				global_yellow = global_yellow + 1;
				if(global_yellow == 10){
					global_yellow = 0;
				}
				button_flag3 = 0;
			}
			if(button_flag3 == 1 && light_mode == 2)
			{
				global_red = global_red + 1;
				if(global_red == 10){
					global_red = 0;
				}
				button_flag3 = 0;
			}
}
