/*
 * button.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Hong Phat
 */

/*
 * Button.c
 *
 *  Created on: Sep 27, 2022
 *      Author: Admin
 */
#include "Button.h"
#include "main.h"

int KeyReg0[3]= {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg1[3] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg2[3] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg3[3] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int TimeOutForKeyPress =  3000;
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;


int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}
int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}
int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess(int i){
	//TODO
	if(i==0){
	button1_flag = 1;
	}
	else if(i==1){
		button2_flag = 1;
	}
	else if(i == 2){
		button3_flag = 1;
	}
}

void getKeyInput(){
  for(int i=0;i<3;i++){
	  KeyReg0[i] = KeyReg1[i];
	  KeyReg1[i] = KeyReg2[i];
	  if( i== 0){
	  KeyReg2[i] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_7);
	  }
	  else if(i==1){
		  KeyReg2[i] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_8);
	  }
	  else if(i==2){
		  KeyReg2[i] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_9);
	  }
	  if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
		  if (KeyReg2[i] != KeyReg3[i]){
			  KeyReg3[i] = KeyReg2[i];
			  if (KeyReg2[i] == PRESSED_STATE){
				TimeOutForKeyPress = 3000;
				subKeyProcess(i);
			  }
		}else{
		   TimeOutForKeyPress --;
			if (TimeOutForKeyPress == 0){
			  KeyReg3[i] = NORMAL_STATE;
			}
		}
	  }
	}
}



