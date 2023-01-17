#include "STC89C5xRC.h"

#define RELOAD_COUNT 0xF3 //波特率发生器的载入值

//void UART_Init()
//{
//	SCON=0x50;
//	PCON |= 0x80;		//使能波特率倍速位SMOD
//	TMOD&=0x0F;
//	TMOD|=0x20;
//	TL1 = RELOAD_COUNT;		//设置定时初始值
//	TH1 = TL1;		//设置定时重载值
//	ET1 = 0;		//禁止定时器1中断
//	TR1 = 1;		//定时器1开始计时
//	EA=1;
//	ES=1;
//}	
void UART_Init(void)		//38400bps@11.0592MHz
{

	PCON &= 0x7F;		//波特率不倍速
	SCON = 0x50;		//8位数据,可变波特率
	TMOD &= 0x0F;		//设置定时器模式
	TMOD |= 0x20;		//设置定时器模式
	TL1 = 0xFD;		//设置定时初始值
	TH1 = 0xFD;		//设置定时重载值
	ET1 = 0;		//禁止定时器%d中断
	TR1 = 1;		//定时器1开始计时
	EA=1;
	ES=1;
}


void UART_SendByte(unsigned char Byte)
{
	ES=0; //关闭串口中断
	SBUF=Byte;
	while(TI==0);
	TI=0;
	ES=1; //允许串口中断
}
/*void UART_Routine() interrupt 4
{
	if(RI==1)
	{
		RI=0;
	}
}*/