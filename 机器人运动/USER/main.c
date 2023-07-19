#include "led.h"
#include "delay.h"
#include "sys.h"
#include "pwm.h"
#include "control.h"
#include "motor.h"
#include "usart.h"
#include "hmi.h"
//ALIENTEK Mini STM32�����巶������8
//PWM���ʵ��   
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾

 int main(void)
 {	  
	//int temp;
	//char tjcstr[100];
	delay_init();	    	 //��ʱ������ʼ��	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// �����ж����ȼ�����2
	uart_init(9600);
	uart3_init(9600);
	uart2_init(9600);
	//HMISendstart();          //Ϊȷ������HMI����ͨ��
	MiniBalance_Motor_Init();
	TIM1_PWM_Init(99,719);
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
   	while(1)
	{
		//temp=(int)uart_receive;
		//sprintf(tjcstr, "page0.t1.txt=\"%c\"\xff\xff\xff",uart_receive);
		//HMISends(tjcstr);
		LED0=~LED0;
		delay_ms(500);
		
	} 
}

