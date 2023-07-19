#include "pwm.h"
#include "usart.h"
#include "motor.h"
#include "usart.h"

//正返转控制
void Motor_A_F()						
{
	AIN1=1;												
	AIN2=0;							
}	
void Motor_A_B()					
{
	AIN1=0;												
	AIN2=1;								
}
void Motor_B_F()						
{
	BIN1=1;							
	BIN2=0;							
}
void Motor_B_B()					
{
	BIN1=0;						
	BIN2=1;							
}
void Stop_AandB()							
{
	AIN1=0;												
	AIN2=0;							
	BIN1=0;													
	BIN2=0;						
}


void Motor_F()
{
	Motor_A_F();
	Motor_B_F();
	TIM_SetCompare1(TIM1,50);//占空比
	TIM_SetCompare4(TIM1,50);
}
void Motor_B()
{
	Motor_A_B();
	Motor_B_B();
	TIM_SetCompare1(TIM1,50);//占空比
	TIM_SetCompare4(TIM1,50);
}
void Motor_L()
{
	Motor_A_F();
	Motor_B_B();
	TIM_SetCompare1(TIM1,40);
	TIM_SetCompare4(TIM1,50);
}
void Motor_R()
{
	Motor_A_B();
	Motor_B_F();
	TIM_SetCompare1(TIM1,50);
	TIM_SetCompare4(TIM1,40);
}


