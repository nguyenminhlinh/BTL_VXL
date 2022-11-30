/*
 * fsm_automatic.c
 *
 *  Created on: Oct 4, 2022
 *      Author: acer
 */
#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch(status){
		case INIT:
		    status = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_YELLOW_Pin|LED_PED_Pin, 1);
				setTimer1(3000);
			break;
		case AUTO_GREEN:
			if(timer1_flag == 1){
				status = AUTO_YELLOW;
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_GREEN_Pin|LED_PED_Pin, 1);
				setTimer1(2000);
			}
			break;
		case AUTO_YELLOW:
			if(timer1_flag == 1){
				status = AUTO_RED;
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_Pin|LED_GREEN_Pin|LED_PED_Pin, 1);
				setTimer1(5000);
			}
			break;
		case AUTO_RED:
			if(timer1_flag == 1){
				status = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_Pin|LED_YELLOW_Pin|LED_PED_Pin, 1);
				setTimer1(3000);
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
void fsm_automatic_run2(){
	switch(status1){
		case INIT:
		    status1 = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin|LED_YELLOW_2_Pin|LED_PED_Pin, 1);
				setTimer3(5000);
			break;
		case AUTO_GREEN:
			if(timer3_flag == 1){
				status1 = AUTO_YELLOW;
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin|LED_YELLOW_2_Pin|LED_PED_Pin, 1);
				setTimer3(3000);
			}
			break;
		case AUTO_YELLOW:
			if(timer3_flag == 1){
				status1 = AUTO_RED;
				HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin|LED_RED_2_Pin|LED_PED_Pin, 1);
				setTimer3(2000);
			}
			break;
		case AUTO_RED:
			if(timer3_flag == 1){
				status1 = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOB, LED_RED_2_Pin, 0);
				HAL_GPIO_WritePin(GPIOB, LED_GREEN_2_Pin|LED_YELLOW_2_Pin|LED_PED_Pin, 1);
				setTimer3(5000);
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
