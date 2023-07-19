#ifndef __MOTOR_H
#define __MOTOR_H
#include <sys.h>	 
#define AIN2   PBout(12)
#define AIN1   PBout(13)
#define BIN1   PBout(15)
#define BIN2   PBout(14)
void MiniBalance_Motor_Init(void);
#endif
