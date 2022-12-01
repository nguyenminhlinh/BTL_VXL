/*
 * global.h
 *
 *  Created on: Nov 29, 2022
 *      Author: Acer
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

/*
 * global.h
 *
 *  Created on: Oct 4, 2022
 *      Author: phamv
 */
#include"timer.h"
#include"main.h"

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

extern int global_green;
extern int global_red;
extern int global_yellow;

#endif /* INC_GLOBAL_H_ */
