/*
 * timer.h
 *
 *  Created on: Nov 29, 2022
 *      Author: Acer
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);

void timer_run();
void timer_run2();


#endif /* INC_TIMER_H_ */
