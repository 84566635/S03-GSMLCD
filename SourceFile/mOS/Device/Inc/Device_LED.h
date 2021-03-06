#ifndef __DEVICE_LED_H
#define __DEVICE_LED_H

/*--------------------------------------------头文件-------------------------------------*/
#include "stm32F10x.h"
#include "sys.h"
/*---------------------------------------------常数--------------------------------------*/
#define LED(n) (1<<n)
#define LEDLight  0x00
#define LEDClose 0xFF

#define LEDKey	PCout(7)

#define PowerSate		GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)

#define LEDKeyOn()	LEDKey=1
#define LEDKeyOff()	LEDKey=0

/*--------------------------------------------宏定义-------------------------------------*/


/*---------------------------------------------变量--------------------------------------*/


/*---------------------------------------------类型--------------------------------------*/


/*---------------------------------------------函数--------------------------------------*/
extern void LcdLedClose(void);
#endif


