#include "STC89C5xRC.h"


void Timer0_Init(void)		//1����@11.0592MHz
{

	TMOD &= 0xF0;		//���ö�ʱ��ģʽ
	TMOD |= 0x01;		//���ö�ʱ��ģʽ
	TL0 = 0x66;		//���ö�ʱ��ʼֵ
	TH0 = 0xFC;		//���ö�ʱ��ʼֵ
	TF0 = 0;		//���TF0��־
	TR0 = 1;		//��ʱ��0��ʼ��ʱ
	ET0=1;
	EA=1;
	
	PT0=0;
}

void Timer2_Init(void)		//50΢��@11.0592MHz
{
	T2MOD = 0;		//��ʼ��ģʽ�Ĵ���
	T2CON = 0;		//��ʼ�����ƼĴ���
	TL2 = 0xD2;		//���ö�ʱ��ʼֵ
	TH2 = 0xFF;		//���ö�ʱ��ʼֵ
	RCAP2L = 0xD2;		//���ö�ʱ����ֵ
	RCAP2H = 0xFF;		//���ö�ʱ����ֵ
	TR2 = 1;		//��ʱ��2��ʼ��ʱ
		ET2=0;
	EA=1;
	
	//PT2H=1;//���ȼ�3
	PT2=1;
}


void Timer_Init(void)
{
	Timer0_Init(); 
	Timer2_Init();	
}


//void Timer2Init(void)		//100΢��@12.000MHz
//{
//	T2MOD = 0;		//��ʼ��ģʽ�Ĵ���
//	T2CON = 0;		//��ʼ�����ƼĴ���
//	TL2 = 0x9C;		//���ö�ʱ��ʼֵ
//	TH2 = 0xFF;		//���ö�ʱ��ʼֵ
//	RCAP2L = 0x9C;		//���ö�ʱ����ֵ
//	RCAP2H = 0xFF;		//���ö�ʱ����ֵ
//	TR2 = 1;		//��ʱ��2��ʼ��ʱ
//	ET2=1;
//	EA=1;
//}


/*
void Timer0_Routine() interrupt 1
{
	TL0 = 0x66;
	TH0 = 0xFC;
	
}
*/