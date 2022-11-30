/*
 * button.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Acer
 */
#include"button.h"
int key01 = NORMAL_STATE;
int key11 = NORMAL_STATE;
int key21 = NORMAL_STATE;
int key31 = NORMAL_STATE;

int key03 = NORMAL_STATE;
int key13 = NORMAL_STATE;
int key23 = NORMAL_STATE;
int key33 = NORMAL_STATE;

int key02 = NORMAL_STATE;
int key12 = NORMAL_STATE;
int key22 = NORMAL_STATE;
int key32 = NORMAL_STATE;

int key04 = NORMAL_STATE;
int key14 = NORMAL_STATE;
int key24 = NORMAL_STATE;
int key34 = NORMAL_STATE;

int timerforpress2 = 10;
int timerforpress1 = 10;
int timerforpress3 = 10;
int timerforpress4 = 10;


int button_flag1 = 0;
int button_flag2 = 0;
int button_flag3 = 0;
int button_flag4 = 0;


void getKeyInput1(){
	key01 = key11;
	key11 = key21;
	key21 = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
	if((key01 == key11) && (key11 == key21)){
		if(key31 != key21){
			key31 = key21;
			if(key21== PRESSED_STATE){
				button_flag1 = 1;
				timerforpress1 = 10;
			}
		}else{
			timerforpress1--;
			if(timerforpress1 == 0){
				key31 = NORMAL_STATE;
			}
		}
	}
}

void getKeyInput2(){
	key02 = key12;
	key12 = key22;
	key22 = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
	if((key02 == key12) && (key12 == key22)){
		if(key32 != key22){
			key32 = key22;
			if(key22 == PRESSED_STATE){
				button_flag2= 1;
				timerforpress2 = 10;
			}
		}else{
			timerforpress2--;
			if(timerforpress2 == 0){
				key32 = NORMAL_STATE;
			}
		}
	}
}

void getKeyInput3(){
	key03 = key13;
	key13 = key23;
	key23 = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
	if((key03 == key13) && (key13 == key23)){
		if(key33 != key23){
			key33 = key23;
			if(key23 == PRESSED_STATE){
				button_flag3= 1;
				timerforpress3 = 10;
			}
		}else{
			timerforpress3--;
			if(timerforpress3 == 0){
				key33 = NORMAL_STATE;
			}
		}
	}
}

void getKeyInput4(){
	key04 = key14;
	key14 = key24;
	key24 = HAL_GPIO_ReadPin(BUTTON_4_GPIO_Port, BUTTON_4_Pin);
	if((key04 == key14) && (key14 == key24)){
		if(key34 != key24){
			key34 = key24;
			if(key24 == PRESSED_STATE){
				button_flag4= 1;
				timerforpress4 = 10;
			}
		}else{
			timerforpress4--;
			if(timerforpress4 == 0){
				key34 = NORMAL_STATE;
			}
		}
	}
}
