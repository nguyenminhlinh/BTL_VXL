
#include "timer.h"

int timer1_flag = 0;
int timer1_counter = 0;

int timer2_flag = 0;
int timer2_counter = 0;

int timer_cycle = 10;

void setTimer1(int duration){
	timer1_flag = 0;
	timer1_counter = duration / timer_cycle;
}

void setTimer2(int duration){
	timer2_flag = 0;
	timer2_counter = duration / timer_cycle;
}

void timer_run(){
	if(timer1_counter >= 0){
		timer1_counter--;
		if(timer1_counter == 0) timer1_flag = 1;
	}
}

void timer_run2(){
	if(timer2_counter >= 0){
		timer2_counter--;
		if(timer2_counter == 0) timer2_flag = 1;
	}
}
