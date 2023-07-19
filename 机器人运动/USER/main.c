#include "led.h"
#include "delay.h"
#include "sys.h"
#include "pwm.h"
#include "control.h"
#include "motor.h"
#include "usart.h"
#include "hmi.h"
//ALIENTEK Mini STM32开发板范例代码8
//PWM输出实验   
//技术支持：www.openedv.com
//广州市星翼电子科技有限公司

 int main(void)
 {	  
	//int temp;
	//char tjcstr[100];
	delay_init();	    	 //延时函数初始化	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// 设置中断优先级分组2
	uart_init(9600);
	uart3_init(9600);
	uart2_init(9600);
	//HMISendstart();          //为确保串口HMI正常通信
	MiniBalance_Motor_Init();
	TIM1_PWM_Init(99,719);
	LED_Init();		  	//初始化与LED连接的硬件接口
   	while(1)
	{
		//temp=(int)uart_receive;
		//sprintf(tjcstr, "page0.t1.txt=\"%c\"\xff\xff\xff",uart_receive);
		//HMISends(tjcstr);
		LED0=~LED0;
		delay_ms(500);
		
	} 
}

