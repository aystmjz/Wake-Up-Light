#include "STC89C5xRC.h"

void Int0_Init(void)
{
	IT0=1;//����
	IE0=0;//��־
	
	PX0=1;//���ȼ�
	
	EX0=0;//�ж�
	EA=1;
}


void Int1_Init(void)
{
	IT1=1;//����
	IE1=0;//��־
	
	PX1=1;//���ȼ�
	
	EX1=0;//�ж�
	EA=1;
}
/*
void Int0_Routine(void) interrupt 0
{
	
}

void Int1_Routine(void) interrupt 2
{
	
}
*/