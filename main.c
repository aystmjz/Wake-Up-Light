#define __AT89X52_H__
#include "UART.h"
#include "BlueTooth.h"
#include "Timer0.h"
#include "Int0.h"
#include "Key.h"
#include "OLED.h"
#include "DS3231.h"
#include "I2C.h"
#include "DHT11.h"
#include "GY302.h"
#include "STC89C5xRC.h"
	 
#define DS3231_STATUS 0x0F
unsigned char KeyNum;
#include <REGX52.H>
unsigned char PWM_Couter=0,f=0;
unsigned int PWM_Timer=0,PWM_Compare=1;
unsigned char PWM_Timer_Sec=0,PWM_Timer_Min=0;
unsigned char PWM_Run_Flag=0;
unsigned char Refresh_Flag=0;
unsigned char BlueTooth_Refresh_Flag=0;
unsigned char Alarm_Reset_Flag=0;
unsigned char Int1_Flag=0;
unsigned char BUZ_Flag=0;

//unsigned int PWM_Mod=0;

//unsigned char Alarm_Enable;
//unsigned char BUZ_Enable=1;//==Alarm_Set[0]
//Alarm_Status[2]={0,0};

//unsigned char BUF_Enable=1;
unsigned char Time_Choose=0;
unsigned char Alarm_Choose=0;
char Alarm_Choose_Flag=0;
char Time_Choose_Flag=0;
sbit BUZ=P0^0;
sbit RELAY=P2^0;
char TIME_Judge[7] = {0xFF, 0xFF,0xFF, 0xFF, 0xFF, 0xFF, 0xFF};//īؖʱɕՂלŪ
unsigned char Alarm_Set_Judge[8]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
char Alarm_Date_Judge[2]={0xFF,0xFF};
 char A=-1;
void Wait_Key()
{
		KeyNum=Get_KeyNumber();
		while(!KeyNum){KeyNum=Get_KeyNumber();}
}

void KeyNumber_CTRL1()
{
	EA=0;
	A=DHT11_Read_RH_C();
	//DS3231_Init();
	//Timer2_Init();
	//ET0=0;
	EA=1;
}

void KeyNumber_CTRL2()
{
EX1=0;EX0=0;
}
void Show_Time();

void TimeJudge()
{
	if(TIME[6]<20)TIME[6]=50;if(TIME[6]>50)TIME[6]=20;
	if(TIME[4]<1)TIME[4]=12;if(TIME[4]>12)TIME[4]=1;
	if(TIME[3]<1)TIME[3]=31;if(TIME[3]>31)TIME[3]=1;
	if(TIME[5]<1)TIME[5]=7;if(TIME[5]>7)TIME[5]=1;
	if(TIME[2]<0)TIME[2]=23;if(TIME[2]>23)TIME[2]=0;
	if(TIME[1]<0)TIME[1]=59;if(TIME[1]>59)TIME[1]=0;
	if(TIME[0]<0)TIME[0]=59;if(TIME[0]>59)TIME[0]=0;

}

void KeyNumber_Set_Clock()
{
	OLED_Clear();
	OLED_ShowNum(0,2,TIME[6],2,16);
	OLED_ShowSymbol(16,2,8,16);//Ū
	OLED_ShowNum(32,2,TIME[4],2,16);
	OLED_ShowSymbol(48,2,9,16);//Ղ
	OLED_ShowNum(64,2,TIME[3],2,16);
	OLED_ShowSymbol(80,2,7,16);//ɕ
	OLED_ShowSymbol(96,2,0,16);//ל
	OLED_ShowSymbol(112,2,TIME[5],16);
	if(TIME[2]/10)OLED_ShowSymbol(16,4,TIME[2]/10+10,16);
	OLED_ShowSymbol(32,4,TIME[2]%10+10,16);//ʱ
	OLED_ShowSymbol(48,4,21,16);
	OLED_ShowSymbol(64,4,TIME[1]/10+10,16);
	OLED_ShowSymbol(80,4,TIME[1]%10+10,16);//ؖ
	OLED_ShowNum(98,5,TIME[0]/10,1,8);//ī
	OLED_ShowNum(106 ,5,TIME[0]%10,1,8);
	
	KeyNum=Get_KeyNumber();
	while(KeyNum!=4)
	{
		KeyNum=Get_KeyNumber();
		
		
		while(!KeyNum){
		//īؖʱɕՂלŪ
		KeyNum=Get_KeyNumber();
		if(KeyNum)Time_Choose_Flag=0;
		if(Time_Choose==6)
		{
			if(Time_Choose_Flag>=0)
			OLED_ShowNum(0,2,TIME[6],2,16);//Ū
			else OLED_ShowString(0,2,"  ",16);
		}
		if(Time_Choose==4)
		{
			if(Time_Choose_Flag>=0)
			OLED_ShowNum(32,2,TIME[4],2,16);//Ղ
			else OLED_ShowString(32,2,"  ",16);
		}
		if(Time_Choose==3)
		{
			if(Time_Choose_Flag>=0)
			OLED_ShowNum(64,2,TIME[3],2,16);//ɕ
			else OLED_ShowString(64,2,"  ",16);
		}
		if(Time_Choose==5)
		{
			if(Time_Choose_Flag>=0)
			OLED_ShowSymbol(112,2,TIME[5],16);	//ל
			else OLED_ShowString(112,2,"  ",16);
		}
		if(Time_Choose==2)
		{
			if(Time_Choose_Flag>=0)
			{if(TIME[2]/10)OLED_ShowSymbol(16,4,TIME[2]/10+10,16);
			OLED_ShowSymbol(32,4,TIME[2]%10+10,16);}//ʱ
			else
			OLED_ShowString(16,4,"    ",16);
		}
		if(Time_Choose==1)
		{
			if(Time_Choose_Flag>=0)
			{OLED_ShowSymbol(64,4,TIME[1]/10+10,16);//ؖ
			 OLED_ShowSymbol(80,4,TIME[1]%10+10,16);}
			else 
			OLED_ShowString(64,4,"    ",16);
		}
		if(Time_Choose==0)
		{
			if(Time_Choose_Flag>=0)
			{OLED_ShowNum(98,5,TIME[0]/10,1,8);//ī
			OLED_ShowNum(106 ,5,TIME[0]%10,1,8);}
			else OLED_ShowString(98,5,"  ",16);
		}
		
		Time_Choose_Flag++;
		
		switch(Time_Choose)
			{	
				case 0: if(Time_Choose_Flag==20)Time_Choose_Flag=-10;break;
				case 1: if(Time_Choose_Flag==5)Time_Choose_Flag=-5;break;
				case 2: if(Time_Choose_Flag==5)Time_Choose_Flag=-5;break;
				case 3: if(Time_Choose_Flag==10)Time_Choose_Flag=-10;break;
				case 4: if(Time_Choose_Flag==10)Time_Choose_Flag=-10;break;
				case 5: if(Time_Choose_Flag==10)Time_Choose_Flag=-10;break;
				case 6: if(Time_Choose_Flag==10)Time_Choose_Flag=-10;break;
			};
		
		}
		

		switch(KeyNum)
				{	
					case 1: TIME[Time_Choose]++;TimeJudge();break;
					case 2: TIME[Time_Choose]--;TimeJudge();break;
					case 3: Time_Choose++;Time_Choose%=7;Time_Choose_Flag=-5;break;
					case 4: DS3231_WriteTime();OLED_Clear(); break;
				}
	
	}

}
void WriteAlarm()
{
			switch(PWM_Mod)
		{	
			case 0: Alarm_Date_Temp[0]=(Alarm_Date[0]*60+Alarm_Date[1]-5)/60;
							Alarm_Date_Temp[1]=(Alarm_Date[0]*60+Alarm_Date[1]-5)%60;break;
			case 1: Alarm_Date_Temp[0]=(Alarm_Date[0]*60+Alarm_Date[1]-10)/60;
							Alarm_Date_Temp[1]=(Alarm_Date[0]*60+Alarm_Date[1]-10)%60;break;
			case 2: Alarm_Date_Temp[0]=(Alarm_Date[0]*60+Alarm_Date[1]-15)/60;
							Alarm_Date_Temp[1]=(Alarm_Date[0]*60+Alarm_Date[1]-15)%60;break;
			case 3: Alarm_Date_Temp[0]=(Alarm_Date[0]*60+Alarm_Date[1]-20)/60;
							Alarm_Date_Temp[1]=(Alarm_Date[0]*60+Alarm_Date[1]-20)%60;break;
			case 4: Alarm_Date_Temp[0]=(Alarm_Date[0]*60+Alarm_Date[1]-30)/60;
							Alarm_Date_Temp[1]=(Alarm_Date[0]*60+Alarm_Date[1]-30)%60;break;
			case 5: Alarm_Date_Temp[0]=(Alarm_Date[0]*60+Alarm_Date[1]-40)/60;
							Alarm_Date_Temp[1]=(Alarm_Date[0]*60+Alarm_Date[1]-40)%60;break;
			case 6: Alarm_Date_Temp[0]=(Alarm_Date[0]*60+Alarm_Date[1]-60)/60;
							Alarm_Date_Temp[1]=(Alarm_Date[0]*60+Alarm_Date[1]-60)%60;break;
		}
		
	if(Alarm_Date_Temp[0]<0||Alarm_Date_Temp[1]<0)
	{
		Alarm_Date_Temp[0]=(1440+Alarm_Date_Temp[0]*60+Alarm_Date_Temp[1])/60;
		Alarm_Date_Temp[1]=(1440+Alarm_Date_Temp[0]*60+Alarm_Date_Temp[1])%60;
	}
	DS3231_WriteAlarm();
}
		
void Alarm_Judge()
{
	if(Alarm_Date[0]<0)Alarm_Date[0]=23;if(Alarm_Date[0]>23)Alarm_Date[0]=0;
	if(Alarm_Date[1]<0)Alarm_Date[1]=59;if(Alarm_Date[1]>59)Alarm_Date[1]=0;
	if(PWM_Mod<0)PWM_Mod=6;if(PWM_Mod>6)PWM_Mod=0;
}

void KeyNumber_Set_Alarm()
{//5,10,15,20,30,40,60
	OLED_Clear();
	OLED_ShowSymbol(0,0,0,16);
	if(Alarm_Set[1])OLED_ShowSymbol(16,2,31,16);
	else OLED_ShowSymbol(16,2,32,16);
	OLED_ShowSymbol(16,0,1,16);
	if(Alarm_Set[2])OLED_ShowSymbol(32,2,31,16);
	else OLED_ShowSymbol(32,2,32,16);
	OLED_ShowSymbol(32,0,2,16);
	if(Alarm_Set[3])OLED_ShowSymbol(48,2,31,16);
	else OLED_ShowSymbol(48,2,32,16);
	OLED_ShowSymbol(48,0,3,16);
	if(Alarm_Set[4])OLED_ShowSymbol(64,2,31,16);
	else OLED_ShowSymbol(64,2,32,16);
	OLED_ShowSymbol(64,0,4,16);
	if(Alarm_Set[5])OLED_ShowSymbol(80,2,31,16);
	else OLED_ShowSymbol(80,2,32,16);
	OLED_ShowSymbol(80,0,5,16);
	if(Alarm_Set[6])OLED_ShowSymbol(96,2,31,16);
	else OLED_ShowSymbol(96,2,32,16);
	OLED_ShowSymbol(96,0,6,16);
	if(Alarm_Set[7])OLED_ShowSymbol(112,2,31,16);
	else OLED_ShowSymbol(112,2,32,16);
	OLED_ShowSymbol(112,0,7,16);
	if(Alarm_Date[0]/10)OLED_ShowSymbol(16,4,Alarm_Date[0]/10+10,16);
	OLED_ShowSymbol(32,4,Alarm_Date[0]%10+10,16);//ʱ
	OLED_ShowSymbol(48,4,21,16);
	OLED_ShowSymbol(64,4,Alarm_Date[1]/10+10,16);//ؖ
	OLED_ShowSymbol(80,4,Alarm_Date[1]%10+10,16);
	
	OLED_ShowSymbol(0,6,24,16);
	OLED_ShowSymbol(16,6,25,16);
	if(Alarm_Enable)OLED_ShowSymbol(32,6,31,16);
	else OLED_ShowSymbol(32,6,32,16);
	OLED_ShowSymbol(48,6,33,16);
	OLED_ShowSymbol(64,6,34,16);
	OLED_ShowSymbol(80,6,35,16);
	OLED_ShowSymbol(96,6,36,16);
	if(Alarm_Set[0])OLED_ShowSymbol(112,6,31,16);
	else OLED_ShowSymbol(112,6,32,16);
	
	switch(PWM_Mod)//5,10,15,20,30,40,60
			{	
				case 0: OLED_ShowNum(104,4,5,2,16);break;
				case 1: OLED_ShowNum(104,4,10,2,16);break;
				case 2: OLED_ShowNum(104,4,15,2,16);break;
				case 3: OLED_ShowNum(104,4,20,2,16);break;
				case 4: OLED_ShowNum(104,4,30,2,16);break;
				case 5: OLED_ShowNum(104,4,40,2,16);break;
				case 6: OLED_ShowNum(104,4,60,2,16);break;
			}//5,10,15,20,30,40,60
	OLED_ShowChar(120,4,'m',16);
	
	KeyNum=Get_KeyNumber();
	while(KeyNum!=4)
	{
		KeyNum=Get_KeyNumber();


		while(!KeyNum){
			
		KeyNum=Get_KeyNumber();
		if(KeyNum)Alarm_Choose_Flag=0;
		if(Alarm_Choose==0)
		{
			if(Alarm_Set[1])OLED_ShowSymbol(16,2,31,16);
			else OLED_ShowSymbol(16,2,32,16);
			if(Alarm_Choose_Flag>=0)
			OLED_ShowSymbol(16,0,1,16);
			else OLED_ShowString(16,0,"  ",16);
		}
		if(Alarm_Choose==1)
		{
			if(Alarm_Set[2])OLED_ShowSymbol(32,2,31,16);
			else OLED_ShowSymbol(32,2,32,16);
			if(Alarm_Choose_Flag>=0)
			OLED_ShowSymbol(32,0,2,16);
			else OLED_ShowString(32,0,"  ",16);
		}
		if(Alarm_Choose==2)
		{
			if(Alarm_Set[3])OLED_ShowSymbol(48,2,31,16);
			else OLED_ShowSymbol(48,2,32,16);
			if(Alarm_Choose_Flag>=0)
			OLED_ShowSymbol(48,0,3,16);
			else OLED_ShowString(48,0,"  ",16);
		}
		if(Alarm_Choose==3)
		{
			if(Alarm_Set[4])OLED_ShowSymbol(64,2,31,16);
			else OLED_ShowSymbol(64,2,32,16);
			if(Alarm_Choose_Flag>=0)
			OLED_ShowSymbol(64,0,4,16);
			else OLED_ShowString(64,0,"  ",16);
		}
		if(Alarm_Choose==4)
		{
			if(Alarm_Set[5])OLED_ShowSymbol(80,2,31,16);
			else OLED_ShowSymbol(80,2,32,16);
			if(Alarm_Choose_Flag>=0)
			OLED_ShowSymbol(80,0,5,16);
			else OLED_ShowString(80,0,"  ",16);

		}
		if(Alarm_Choose==5)
		{
			if(Alarm_Set[6])OLED_ShowSymbol(96,2,31,16);
			else OLED_ShowSymbol(96,2,32,16);
			if(Alarm_Choose_Flag>=0)
			OLED_ShowSymbol(96,0,6,16);
			else OLED_ShowString(96,0,"  ",16);

		}
		if(Alarm_Choose==6)
		{
			if(Alarm_Set[7])OLED_ShowSymbol(112,2,31,16);
			else OLED_ShowSymbol(112,2,32,16);
			if(Alarm_Choose_Flag>=0)
			OLED_ShowSymbol(112,0,7,16);
			else OLED_ShowString(112,0,"  ",16);
		}

			if(Alarm_Choose==7)
		{
			if(Alarm_Choose_Flag>=0)
			{if(Alarm_Date[0]/10)OLED_ShowSymbol(16,4,Alarm_Date[0]/10+10,16);
			OLED_ShowSymbol(32,4,Alarm_Date[0]%10+10,16);}//ʱ
			else
			OLED_ShowString(16,4,"    ",16);
		}
		
			if(Alarm_Choose==8)
		{
			if(Alarm_Choose_Flag>=0)
			{OLED_ShowSymbol(64,4,Alarm_Date[1]/10+10,16);//ؖ
			 OLED_ShowSymbol(80,4,Alarm_Date[1]%10+10,16);}
			else 
			OLED_ShowString(64,4,"    ",16);
		}
		
			if(Alarm_Choose==9)
		{
			if(Alarm_Enable)OLED_ShowSymbol(32,6,31,16);
			else OLED_ShowSymbol(32,6,32,16);
			if(Alarm_Choose_Flag>=0)
			{OLED_ShowSymbol(0,6,24,16);
			 OLED_ShowSymbol(16,6,25,16);}
			else 
			OLED_ShowString(0,6,"    ",16);
		}
		
			if(Alarm_Choose==10)
		{
			if(Alarm_Set[0])OLED_ShowSymbol(112,6,31,16);
			else OLED_ShowSymbol(112,6,32,16);
			if(Alarm_Choose_Flag>=0)
			{OLED_ShowSymbol(48,6,33,16);
			 OLED_ShowSymbol(64,6,34,16);
			 OLED_ShowSymbol(80,6,35,16);
			 OLED_ShowSymbol(96,6,36,16);}
			else 
			OLED_ShowString(48,6,"        ",16);
		}
		
		if(Alarm_Choose==11)
		{
			switch(PWM_Mod)
			{	
				case 0: OLED_ShowNum(104,4,5,2,16);break;
				case 1: OLED_ShowNum(104,4,10,2,16);break;
				case 2: OLED_ShowNum(104,4,15,2,16);break;
				case 3: OLED_ShowNum(104,4,20,2,16);break;
				case 4: OLED_ShowNum(104,4,30,2,16);break;
				case 5: OLED_ShowNum(104,4,40,2,16);break;
				case 6: OLED_ShowNum(104,4,60,2,16);break;
			}//5,10,15,20,30,40,60
			if(Alarm_Choose_Flag>=0)
			OLED_ShowChar(120,4,'m',16);
			else 
			OLED_ShowString(120,4," ",16);
		}
		
		Alarm_Choose_Flag++;
		if(Alarm_Choose<9||Alarm_Choose==11)
		{	if(Alarm_Choose_Flag==5)Alarm_Choose_Flag=-5;}
		else if(Alarm_Choose==9)
		{if(Alarm_Choose_Flag==3)Alarm_Choose_Flag=-3;}
		else
		{if(Alarm_Choose_Flag==2)Alarm_Choose_Flag=-2;}
			
		}
		
		switch(KeyNum)
				{	
					case 1: if(Alarm_Choose<7)Alarm_Set[Alarm_Choose+1]=!Alarm_Set[Alarm_Choose+1];
									else if(Alarm_Choose<9)Alarm_Date[Alarm_Choose-7]++;
									else if(Alarm_Choose==9)Alarm_Enable=!Alarm_Enable;
									else if(Alarm_Choose==11)PWM_Mod++;
									else 	Alarm_Set[0]=!Alarm_Set[0]; Alarm_Judge();break;
					case 2: if(Alarm_Choose<7)Alarm_Set[Alarm_Choose+1]=!Alarm_Set[Alarm_Choose+1];
									else if(Alarm_Choose<9)Alarm_Date[Alarm_Choose-7]--;
									else if(Alarm_Choose==9)Alarm_Enable=!Alarm_Enable;
									else if(Alarm_Choose==11)PWM_Mod--;
									else 	Alarm_Set[0]=!Alarm_Set[0]; Alarm_Judge();break;
					case 3: Alarm_Choose++;Alarm_Choose%=12;Alarm_Choose_Flag=-2;break;
					case 4: WriteAlarm();OLED_Clear(); break;
				}
	
	
	}

}
void KeyNumber_Set_Other()
{
	
}
void KeyNumber_Set()
{
	OLED_Clear(); 
	
	OLED_ShowSymbol(48,0,28,16);//ʨ
	OLED_ShowSymbol(64,0,29,16);//׃
	
	OLED_ShowSymbol(0,3,22,16);//ʱ
	OLED_ShowSymbol(16,3,23,16);//ݤ
	
	OLED_ShowSymbol(48,3,24,16);//Ŗ
	OLED_ShowSymbol(64,3,25,16);//ד
	
	OLED_ShowSymbol(96,3,26,16);//Ǥ
	OLED_ShowSymbol(112,3,27,16);//̻
	
	Wait_Key();
	switch(KeyNum)
			{	
				case 1: KeyNumber_Set_Clock();break;
				case 2: KeyNumber_Set_Alarm();break;
				case 3: KeyNumber_Set_Other();break;
				case 4: OLED_Clear();break;
			}
	
}



void KeyNumber_CTRL4()
{
DHT11_Read_RH_C();

}


void PWM_Run();

void main()
{
	Timer0_Init();
	BlueTooth_Init();
	Int0_Init();
	Int1_Init();
	Timer_Init();
	DS3231_Init();
	OLED_Init();//ԵʼۯOLED
//	OLED_ColorTurn(0);//0ֽӣДʾì1 ״ɫДʾ
  //OLED_DisplayTurn(0);//0ֽӣДʾ 1 ǁĻ׭תДʾ
	
			//DHT11_Read_RH_C();
	//OLED_ShowString(8,0,"OK?",16);
	GY302_Init();
	//Timer2Init();
	EX0=1;
	PX1=1;
	IPH=0x04;
	Refresh_Flag=1;
	while(1)
	{
		KeyNum=Get_KeyNumber();
		if(KeyNum)
		{
			switch(KeyNum)
			{	
				case 1: KeyNumber_CTRL1();break;
				case 2: KeyNumber_CTRL2();break;
				case 3: KeyNumber_Set();break;
				case 4: KeyNumber_CTRL4();break;
			}
			Refresh_Flag=1;
		}

		//OLED_ShowNum(0,4,A,1,16);
		//OLED_ShowNum(8,4,EX0,1,16);
		OLED_ShowNum(0,0,DHT11_RH_C[1],2,16);
		if(Refresh_Flag)
		OLED_ShowChar(16,0,'.',16);
		OLED_ShowNum(24,0,DHT11_RH_C[2],1,16);
		OLED_ShowSymbol(32,0,20,16);
		
		OLED_ShowNum(52,0,DHT11_RH_C[0],2,16);
		if(Refresh_Flag)
		OLED_ShowChar(68,0,'%',16);
		
		OLED_ShowNum(80,0,lx,5,16);
		
		if(Refresh_Flag)
		{
		OLED_ShowChar(120,0,'l',8);
		OLED_ShowChar(120,1,'x',8);
		}
		

		//īؖʱɕՂלŪ
		if(TIME_Judge[6]!=TIME[6]||Refresh_Flag)
		{
		OLED_ShowNum(0,2,TIME[6],2,16);
		TIME_Judge[6]=TIME[6];
		}
		if(Refresh_Flag)
		OLED_ShowSymbol(16,2,8,16);//Ū
		
		if(TIME_Judge[4]!=TIME[4]||Refresh_Flag)
		{
		OLED_ShowNum(32,2,TIME[4],2,16);
		TIME_Judge[4]=TIME[4];
		}
		if(Refresh_Flag)
		OLED_ShowSymbol(48,2,9,16);//Ղ
		
		if(TIME_Judge[3]!=TIME[3]||Refresh_Flag)
		{
		OLED_ShowNum(64,2,TIME[3],2,16);
		TIME_Judge[3]=TIME[3];
		}
		if(Refresh_Flag)
		OLED_ShowSymbol(80,2,7,16);//ɕ
		
		if(Refresh_Flag)
		OLED_ShowSymbol(96,2,0,16);//ל
		if(TIME_Judge[5]!=TIME[5]||Refresh_Flag)
		{
		OLED_ShowSymbol(112,2,TIME[5],16);
		TIME_Judge[5]=TIME[5];
		}
		
		if(TIME_Judge[2]!=TIME[2]||Refresh_Flag)
		{
		if(TIME[2]/10)OLED_ShowSymbol(16,4,TIME[2]/10+10,16);
		OLED_ShowSymbol(32,4,TIME[2]%10+10,16);//ʱ
		TIME_Judge[2]=TIME[2];
		}
		
		if(Refresh_Flag)
		OLED_ShowSymbol(48,4,21,16);
		
		if(TIME_Judge[1]!=TIME[1]||Refresh_Flag)
		{
		OLED_ShowSymbol(64,4,TIME[1]/10+10,16);
		OLED_ShowSymbol(80,4,TIME[1]%10+10,16);//ؖ
		TIME_Judge[1]=TIME[1];
		}
		
		if(TIME_Judge[0]!=TIME[0]||Refresh_Flag)
		{
		OLED_ShowNum(98,5,TIME[0]/10,1,8);//ī
		OLED_ShowNum(106 ,5,TIME[0]%10,1,8);
		TIME_Judge[0]=TIME[0];
		}
		
		if(Refresh_Flag)
		if(Alarm_Enable)OLED_ShowSymbol(0,6,30,16);//ŖדҪ־
		
		if(Alarm_Date_Judge[0]!=Alarm_Date[0]||Refresh_Flag)
		{
		if(Alarm_Date[0]/10)OLED_ShowNum(16,6,Alarm_Date[0]/10,1,16);//Ŗד
		OLED_ShowNum(24,6,Alarm_Date[0],1,16);
		Alarm_Date_Judge[0]=Alarm_Date[0];
		}
		
		if(Refresh_Flag)
		OLED_ShowChar(32,6,':',16);
		
		if(Alarm_Date_Judge[1]!=Alarm_Date[1]||Refresh_Flag)
		{
		OLED_ShowNum(40,6,Alarm_Date[1]/10,1,16);
		OLED_ShowNum(48,6,Alarm_Date[1]%10,1,16);
		Alarm_Date_Judge[1]=Alarm_Date[1];
		}
		
		if(Alarm_Set_Judge[1]!=Alarm_Set[1]||Refresh_Flag)
		{
		if(Alarm_Set[1])OLED_ShowNum(64,7,1,1,8);
		Alarm_Set_Judge[1]=Alarm_Set[1];
		}
		
		if(Alarm_Set_Judge[2]!=Alarm_Set[2]||Refresh_Flag)
		{
		if(Alarm_Set[2])OLED_ShowNum(72,7,2,1,8);
		Alarm_Set_Judge[2]=Alarm_Set[2];
		}
		
		if(Alarm_Set_Judge[3]!=Alarm_Set[3]||Refresh_Flag)
		{
		if(Alarm_Set[3])OLED_ShowNum(80,7,3,1,8);
		Alarm_Set_Judge[3]=Alarm_Set[3];
		}
		
		if(Alarm_Set_Judge[4]!=Alarm_Set[4]||Refresh_Flag)
		{
		if(Alarm_Set[4])OLED_ShowNum(88,7,4,1,8);
		Alarm_Set_Judge[4]=Alarm_Set[4];
		}
		
		if(Alarm_Set_Judge[5]!=Alarm_Set[5]||Refresh_Flag)
		{
			if(Alarm_Set[5])OLED_ShowNum(96,7,5,1,8);
			Alarm_Set_Judge[5]=Alarm_Set[5];
		}
		
		
		if(Alarm_Set_Judge[1]!=Alarm_Set[1]||Refresh_Flag)
		{
		if(Alarm_Set[6])OLED_ShowNum(104,7,6,1,8);
		Alarm_Set_Judge[1]=Alarm_Set[1];
		}
		
		if(Alarm_Set_Judge[1]!=Alarm_Set[1]||Refresh_Flag)
		{
		if(Alarm_Set[7])OLED_ShowNum(112,7,7,1,8);
		Alarm_Set_Judge[1]=Alarm_Set[1];
		}
		
		if(Alarm_Set_Judge[0]!=Alarm_Set[0]||Refresh_Flag)
		{
		if(Alarm_Set[0])OLED_ShowChar(120,6,'~'+1,16);
		Alarm_Set_Judge[0]=Alarm_Set[0];
		}

		Refresh_Flag=0;
		if(BlueTooth_Refresh_Flag)
		{
			BlueTooth_Refresh_Flag=0;
			TimeJudge();
			Alarm_Judge();
			DS3231_WriteTime();
			WriteAlarm();
			OLED_Clear();
			Refresh_Flag=1;
		}
		
		DS3231_ReadTime();
		
		GY302_Read_lx();
		//if((!(TIME[1]||TIME[0]))&&Alarm_Set[0])BUZ=0;
		if(Alarm_Reset_Flag){Alarm_Reset_Flag=0;DS3231_WriteByte(DS3231_STATUS,0x00);};
		if(PWM_Run_Flag)
		{
			BUZ=1;
			OLED_DrawBMP(2);
			//DS3231_WriteByte(DS3231_STATUS,0x00);
			PWM_Run();
			OLED_Clear();
			Refresh_Flag=1;
			PWM_Run_Flag=0;
		}
	}
}



#define CMD_Get						0x01
#define CMD_Switch				0x02
#define CMD_Set						0x03
#define CMD_AlarmReset 		0x04
#define CMD_OVER 					0xFF
#define LF 0x0A
unsigned char UART_RX_BUF[4];

void BlueTooth_CMD_Get()
{
	unsigned char i;
	if(UART_RX_BUF[1]==1)
	{
	BlueTooth_SendString("当前时间为：");
	BlueTooth_SendByte(LF);
	BlueTooth_SendString("20");
	BlueTooth_SendNum(TIME[6]);
	BlueTooth_SendString("年");
	BlueTooth_SendNum(TIME[4]);
	BlueTooth_SendString("月");
	BlueTooth_SendNum(TIME[3]);
	BlueTooth_SendString("日");
	
	BlueTooth_SendString("周");
	switch(TIME[5])
			{	
				case 1: BlueTooth_SendString("一");break;
				case 2: BlueTooth_SendString("二");break;
				case 3: BlueTooth_SendString("三");break;
				case 4: BlueTooth_SendString("四");break;
				case 5: BlueTooth_SendString("五");break;
				case 6: BlueTooth_SendString("六");break;
				case 7: BlueTooth_SendString("日");break;
			}
			
	BlueTooth_SendString(" ");
	BlueTooth_SendNum(TIME[2]);
	BlueTooth_SendString(":");
	BlueTooth_SendNum(TIME[1]);
	 
	BlueTooth_SendString(" ");
	BlueTooth_SendNum(TIME[0]/10);
	BlueTooth_SendNum(TIME[0]%10);
	BlueTooth_SendString("s");
	BlueTooth_SendByte(LF);
	}
	else if(UART_RX_BUF[1]==2)
	{
	BlueTooth_SendString("当前温度:");
	BlueTooth_SendNum(DHT11_RH_C[1]);
	BlueTooth_SendString(".");
	BlueTooth_SendNum(DHT11_RH_C[2]);
	BlueTooth_SendString("℃ ");
	BlueTooth_SendString("湿度:");
	BlueTooth_SendNum(DHT11_RH_C[0]);
	BlueTooth_SendString("RH ");
	BlueTooth_SendString("光照:");
	BlueTooth_SendNum(lx);
	BlueTooth_SendString("lx");
	BlueTooth_SendByte(LF);
	}
	else if(UART_RX_BUF[1]==3)
	{
	BlueTooth_SendString("当前闹钟信息：");
	BlueTooth_SendByte(LF);
	BlueTooth_SendString("闹钟:");
	if(Alarm_Enable)BlueTooth_SendString("开 ");
		else BlueTooth_SendString("关 ");
	
	
	BlueTooth_SendString("整点报时:");
	if(Alarm_Set[0])BlueTooth_SendString("开");
		else BlueTooth_SendString("关");
	

	BlueTooth_SendByte(LF);
	BlueTooth_SendString("设置时间：");
	BlueTooth_SendNum(Alarm_Date[0]);
	BlueTooth_SendString(":");
	BlueTooth_SendNum(Alarm_Date[1]/10);
	BlueTooth_SendNum(Alarm_Date[1]%10);
	
	BlueTooth_SendByte(LF);
	BlueTooth_SendString("开始时间：");
	BlueTooth_SendNum(Alarm_Date_Temp[0]);
	BlueTooth_SendString(":");
	BlueTooth_SendNum(Alarm_Date_Temp[1]/10);
	BlueTooth_SendNum(Alarm_Date_Temp[1]%10);
	
	BlueTooth_SendByte(LF);
	BlueTooth_SendString("         唤醒周期：");
	switch(PWM_Mod)
		{	
			case 0: BlueTooth_SendString("5");break;
			case 1: BlueTooth_SendString("10");break;
			case 2: BlueTooth_SendString("15");break;
			case 3: BlueTooth_SendString("20");break;
			case 4: BlueTooth_SendString("30");break;
			case 5: BlueTooth_SendString("40");break;
			case 6: BlueTooth_SendString("60");break;
		}
	BlueTooth_SendString("分钟");
		
	BlueTooth_SendByte(LF);
	BlueTooth_SendString("闹钟周期:周");
	for(i=1;i<=7;i++)
	{
		if(Alarm_Set[i])
		{switch(i)
			{	
				case 1: BlueTooth_SendString("一 ");break;
				case 2: BlueTooth_SendString("二 ");break;
				case 3: BlueTooth_SendString("三 ");break;
				case 4: BlueTooth_SendString("四 ");break;
				case 5: BlueTooth_SendString("五 ");break;
				case 6: BlueTooth_SendString("六 ");break;
				case 7: BlueTooth_SendString("日 ");break;
			}
		}
	}
	BlueTooth_SendByte(LF);
	}
	else BlueTooth_SendString("未知指令");
}

void BlueTooth_CMD_Switch()
{
	switch(UART_RX_BUF[1])
			{	
				case 1: Alarm_Set[1]=UART_RX_BUF[2];
				BlueTooth_SendString("星期一闹钟已");
				if(Alarm_Enable)BlueTooth_SendString("开启");
				else BlueTooth_SendString("关闭");
				BlueTooth_SendByte(LF);break;
				case 2: Alarm_Set[2]=UART_RX_BUF[2];
				BlueTooth_SendString("星期二闹钟已");
				if(Alarm_Enable)BlueTooth_SendString("开启");
				else BlueTooth_SendString("关闭");
				BlueTooth_SendByte(LF);break;
				case 3: Alarm_Set[3]=UART_RX_BUF[2];
				BlueTooth_SendString("星期三闹钟已");
				if(Alarm_Enable)BlueTooth_SendString("开启");
				else BlueTooth_SendString("关闭");
				BlueTooth_SendByte(LF);break;
				case 4: Alarm_Set[4]=UART_RX_BUF[2];
				BlueTooth_SendString("星期四闹钟已");
				if(Alarm_Enable)BlueTooth_SendString("开启");
				else BlueTooth_SendString("关闭");
				BlueTooth_SendByte(LF);break;
				case 5: Alarm_Set[5]=UART_RX_BUF[2];
				BlueTooth_SendString("星期五闹钟已");
				if(Alarm_Enable)BlueTooth_SendString("开启");
				else BlueTooth_SendString("关闭");
				BlueTooth_SendByte(LF);break;
				case 6: Alarm_Set[6]=UART_RX_BUF[2];
				BlueTooth_SendString("星期六闹钟已");
				if(Alarm_Enable)BlueTooth_SendString("开启");
				else BlueTooth_SendString("关闭");
				BlueTooth_SendByte(LF);break;
				case 7: Alarm_Set[7]=UART_RX_BUF[2];
				BlueTooth_SendString("星期日闹钟已");
				if(Alarm_Enable)BlueTooth_SendString("开启");
				else BlueTooth_SendString("关闭");
				BlueTooth_SendByte(LF);break;
				
				case 8: Alarm_Enable=UART_RX_BUF[2];
				BlueTooth_SendString("闹钟已");
				if(Alarm_Enable)BlueTooth_SendString("开启");
				else BlueTooth_SendString("关闭");
				BlueTooth_SendByte(LF);break;
				case 9: Alarm_Set[0]=UART_RX_BUF[2];
				BlueTooth_SendString("整点报时已");
				if(Alarm_Set[0])BlueTooth_SendString("开启");
				else BlueTooth_SendString("关闭");
				BlueTooth_SendByte(LF);break;
				default: BlueTooth_SendString("未知指令");break;
			}
			BlueTooth_Refresh_Flag=1;
}
   
void BlueTooth_CMD_Set()
{
	if(UART_RX_BUF[1]==1)
	{
		TIME[2]=(UART_RX_BUF[2]>>4)*10+(UART_RX_BUF[2]&0x0F);
		TIME[1]=(UART_RX_BUF[3]>>4)*10+(UART_RX_BUF[3]&0x0F);
		BlueTooth_SendString("时间 ");
		BlueTooth_SendNum(TIME[2]);
		BlueTooth_SendString(":");
		BlueTooth_SendNum(TIME[1]/10);
		BlueTooth_SendNum(TIME[1]%10);
		BlueTooth_SendString(" 已设置完成");
		BlueTooth_SendByte(LF);
	}
	else if(UART_RX_BUF[1]==2)
	{
		Alarm_Date[0]=(UART_RX_BUF[2]>>4)*10+(UART_RX_BUF[2]&0x0F);
		Alarm_Date[1]=(UART_RX_BUF[3]>>4)*10+(UART_RX_BUF[3]&0x0F);
		BlueTooth_SendString("闹钟 ");
		BlueTooth_SendNum(Alarm_Date[0]);
		BlueTooth_SendString(":");
		BlueTooth_SendNum(Alarm_Date[1]/10);
		BlueTooth_SendNum(Alarm_Date[1]%10);
		BlueTooth_SendString(" 已设置完成");
		BlueTooth_SendByte(LF);
		BlueTooth_SendString("唤醒周期：");
		switch(PWM_Mod)
			{	
				case 0: BlueTooth_SendString("5");break;
				case 1: BlueTooth_SendString("10");break;
				case 2: BlueTooth_SendString("15");break;
				case 3: BlueTooth_SendString("20");break;
				case 4: BlueTooth_SendString("30");break;
				case 5: BlueTooth_SendString("40");break;
				case 6: BlueTooth_SendString("60");break;
			}
		BlueTooth_SendString("分钟");
		BlueTooth_SendByte(LF);
	}
	else if(UART_RX_BUF[1]==3)
	{
				switch(UART_RX_BUF[2])
			{	
				case 0: PWM_Mod=0;break;
				case 1: PWM_Mod=1;break;
				case 2: PWM_Mod=2;break;
				case 3: PWM_Mod=3;break;
				case 4: PWM_Mod=4;break;
				case 5: PWM_Mod=5;break;
				case 6: PWM_Mod=6;break;
			}
		BlueTooth_SendString("唤醒周期 ");
		switch(PWM_Mod)
			{	
				case 0: BlueTooth_SendString("5");break;
				case 1: BlueTooth_SendString("10");break;
				case 2: BlueTooth_SendString("15");break;
				case 3: BlueTooth_SendString("20");break;
				case 4: BlueTooth_SendString("30");break;
				case 5: BlueTooth_SendString("40");break;
				case 6: BlueTooth_SendString("60");break;
			}
			
		BlueTooth_SendString("分钟 已设置完成");
		BlueTooth_SendByte(LF);
	}
	else BlueTooth_SendString("未知指令");
	
	BlueTooth_Refresh_Flag=1;
}

void BlueTooth_CMD_AlarmReset()
{
	Int1_Flag=1;
}


void BlueTooth_CMD_Default()
{
	BlueTooth_SendString("未知指令");
}


void UART_Routine() interrupt 4
{
	static unsigned char BUF_NUM=0;
	unsigned char Temp;
	if(RI==1)
	{
		RI=0;
		Temp=SBUF;
		if(Temp==CMD_OVER)
		{
				switch(UART_RX_BUF[0])
			{	
				case CMD_Get: BlueTooth_CMD_Get();break;
				case CMD_Switch: BlueTooth_CMD_Switch();break;
				case CMD_Set: BlueTooth_CMD_Set();break;
				case CMD_AlarmReset: BlueTooth_CMD_AlarmReset();break;
				default: BlueTooth_CMD_Default();break;
			}
			BUF_NUM=0;
		}
		else
		{
			UART_RX_BUF[BUF_NUM++]=Temp;
			BUF_NUM%=4;
		}
	}
}

void Timer0_Routine() interrupt 1
{
	static unsigned int Key_Counter=0,BUZ_Counter=0;
	TL0 = 0x66;
	TH0 = 0xFC;
	Key_Counter++;
	if(Key_Counter>=40)
	{
		Key_Counter=0;
		Key_Entry();
	}
	if(((!TIME[0])&&Alarm_Set[0])&&BUZ_Flag){BUZ_Flag=0;BUZ_Counter=0;BUZ=0;}
	if(!BUZ_Flag)BUZ_Counter++;
	if(BUZ_Counter>=100)BUZ=1;
	if(BUZ_Counter>=5000)BUZ_Flag=1;
}


void PWM_Run()
{
	RELAY=0;
	PWM_Timer=0;PWM_Timer_Sec=0,PWM_Timer_Min=0;
	Int1_Flag=0;
	IE1=0;EX1=1;
	EX0=0;
	ET0=0;ET2=1;
	while(!Int1_Flag)
	{
		if(PWM_Timer_Min)
		{
		switch(PWM_Mod)
			{	
				case 0: PWM_Compare=PWM_Timer_Min*10;break;
				case 1: PWM_Compare=PWM_Timer_Min*5;break;
				case 2: PWM_Compare=PWM_Timer_Min*10/3;break;
				case 3: PWM_Compare=PWM_Timer_Min*5/2;break;
				case 4: PWM_Compare=PWM_Timer_Min*5/3;break;
				case 5: PWM_Compare=PWM_Timer_Min*5/4;break;
				case 6: PWM_Compare=PWM_Timer_Min*5/6;break;
			}//5,10,15,20,30,40,60
		}else PWM_Compare=1;
	}
	ET2=0;ET0=1;
	IE0=0;EX0=1;
	EX1=0;

	RELAY=1;
}
#define DS3231_STATUS 0x0F

void Int0_Routine(void) interrupt 0
{
	if(Alarm_Enable&&Alarm_Set[TIME[5]])
	{	
		PWM_Run_Flag=1;	
	}
	Alarm_Reset_Flag=1;
}

void Int1_Routine(void) interrupt 2
{
	Int1_Flag=1;
}


void Timer2_Routine(void) interrupt 5
{
	if(PWM_Couter<PWM_Compare)
	{
		P0_1=1;
	}
	else
	{
		P0_1=0;
	}
	PWM_Couter++;
	PWM_Couter%=50;
	//PWM_Compare %=50;
	
	PWM_Timer++;
	if(PWM_Timer>=8450)
	{
		PWM_Timer=0;
		PWM_Timer_Sec++;
	}
	if(PWM_Timer_Sec>=60)
	{
		PWM_Timer_Sec=0;
		if(PWM_Timer_Min!=100)PWM_Timer_Min++;
	}
	
}
