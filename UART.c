#include "STC89C5xRC.h"

#define RELOAD_COUNT 0xF3 //�����ʷ�����������ֵ

//void UART_Init()
//{
//	SCON=0x50;
//	PCON |= 0x80;		//ʹ�ܲ����ʱ���λSMOD
//	TMOD&=0x0F;
//	TMOD|=0x20;
//	TL1 = RELOAD_COUNT;		//���ö�ʱ��ʼֵ
//	TH1 = TL1;		//���ö�ʱ����ֵ
//	ET1 = 0;		//��ֹ��ʱ��1�ж�
//	TR1 = 1;		//��ʱ��1��ʼ��ʱ
//	EA=1;
//	ES=1;
//}	
void UART_Init(void)		//38400bps@11.0592MHz
{

	PCON &= 0x7F;		//�����ʲ�����
	SCON = 0x50;		//8λ����,�ɱ䲨����
	TMOD &= 0x0F;		//���ö�ʱ��ģʽ
	TMOD |= 0x20;		//���ö�ʱ��ģʽ
	TL1 = 0xFD;		//���ö�ʱ��ʼֵ
	TH1 = 0xFD;		//���ö�ʱ����ֵ
	ET1 = 0;		//��ֹ��ʱ��%d�ж�
	TR1 = 1;		//��ʱ��1��ʼ��ʱ
	EA=1;
	ES=1;
}


void UART_SendByte(unsigned char Byte)
{
	ES=0; //�رմ����ж�
	SBUF=Byte;
	while(TI==0);
	TI=0;
	ES=1; //�������ж�
}
/*void UART_Routine() interrupt 4
{
	if(RI==1)
	{
		RI=0;
	}
}*/