#ifndef __HMI_H
#define __HMI_H

#include "sys.h"
#include "delay.h"

void HMISendstart(void);
void HMISends(char *buf1);		  //�ַ������ͺ���
void HMISendb(u8 k);		         //�ֽڷ��ͺ���
#endif
