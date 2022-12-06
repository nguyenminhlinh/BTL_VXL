/*
 * global.h
 *
 *  Created on: Dec 3, 2022
 *      Author: Hong Phat
 */


#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include"timer.h"
#include"main.h"
#include "stdio.h"
#define INIT		1
#define AUTO_RED	2
#define AUTO_GREEN	3
#define AUTO_YELLOW	4
#define AUTO_WHITE	5

extern int status1;
extern int status;

extern int light_mode;
extern int count;
extern int mode;
extern int ped ;
extern int global_green;
extern int global_red;
extern int global_yellow;
extern int counter_red;
extern int counter_yellow;
extern int counter_green;
extern uint32_t PWM ;

extern char  data[];
#endif /* INC_GLOBAL_H_ */
