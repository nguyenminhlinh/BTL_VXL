/*
 * button.h
 *
 *  Created on: Dec 3, 2022
 *      Author: Hong Phat
 */

#include"timer.h"
#include"main.h"

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

void getKeyInput1();
void getKeyInput2();
void getKeyInput3();
void getKeyInput4();

extern int button_flag1;
extern int button_flag2;
extern int button_flag3;
extern int button_flag4;

#endif /* INC_BUTTON_H_ */
