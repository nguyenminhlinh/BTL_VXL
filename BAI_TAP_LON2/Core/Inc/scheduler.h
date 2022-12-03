/*
 * scheduler.h
 *
 *  Created on: Dec 3, 2022
 *      Author: Hong Phat
 */


#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include"stdint.h"
#include"main.h"

typedef struct {
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;

	uint32_t TaskID;
} sTask;

#define SCH_MAX_TASKS 40

#define RETURN_NORMAL 1
#define RETURN_ERROR 2

#define ERROR_SCH_CANNOT_DELETE_TASK 3
#define ERROR_SCH_TOO_MANY_TASKS 4

sTask SCH_tasks_G[SCH_MAX_TASKS];

unsigned char  Error_code_G ;
unsigned char Return_code ;
unsigned char g;
#define TICK 10

void SCH_Init ( );
void SCH_Update ( void );
unsigned char SCH_Add_Task ( void ( * pFunction ) ( ) , unsigned int DELAY, unsigned int PERIOD);
void SCH_Dispatch_Tasks ( void );
unsigned char SCH_Delete_Task (  uint32_t TASK_INDEX);
#endif /* INC_SCHEDULER_H_ */
