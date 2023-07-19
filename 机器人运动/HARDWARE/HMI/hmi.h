#ifndef __HMI_H
#define __HMI_H

#include "sys.h"
#include "delay.h"

void HMISendstart(void);
void HMISends(char *buf1);		  //字符串发送函数
void HMISendb(u8 k);		         //字节发送函数
#endif
