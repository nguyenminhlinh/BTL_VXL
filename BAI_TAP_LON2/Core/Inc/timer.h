/*
 * timer.h
 *
 *  Created on: Dec 3, 2022
 *      Author: Hong Phat
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timer_run();
void timer_run2();
void timer_run3();



#endif /* INC_TIMER_H_ */
