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
unsigned char Flag_PWM;

unsigned int PWM_Mod=0;

unsigned char Alarm_Enable;
//Alarm_Status[2]={0,0};

unsigned char BUF_Enable=1;
unsigned char Time_Choose=0;
unsigned char Alarm_Choose=0;
char Alarm_Choose_Flag=0;
char Time_Choose_Flag=0;
sbit  BUZ=P0^0;
 int Alarm_ComeTime;
void Wait_Key()
{
		KeyNum=Get_KeyNumber();
		while(!KeyNum){KeyNum=Get_KeyNumber();}
}

void KeyNumber_CTRL1()
{
	
	Timer2_Init();
	//ET0=0;
}

void KeyNumber_CTRL2()
{
PWM_Compare++;

}
void Show_Time();

void KeyNumber_Set_Clock()
{
	OLED_Clear();
	Show_Time();
	
	KeyNum=Get_KeyNumber();
	while(KeyNum!=4)
	{
		KeyNum=Get_KeyNumber();
		OLED_ShowNum(0,0,KeyNum,1,16);
		
		while(!KeyNum){
			
		//秒分时日月周年
			
		if(Time_Choose==6)
		{
			if(Time_Choose_Flag>=0)
			OLED_ShowNum(0,2,TIME[6],2,16);//年
			else OLED_ShowString(0,2,"  ",16);
		}
		if(Time_Choose==4)
		{
			if(Time_Choose_Flag>=0)
			OLED_ShowNum(32,2,TIME[4],2,16);//月
			else OLED_ShowString(32,2,"  ",16);
		}
		if(Time_Choose==3)
		{
			if(Time_Choose_Flag>=0)
			OLED_ShowNum(64,2,TIME[3],2,16);//日
			else OLED_ShowString(64,2,"  ",16);
		}
		if(Time_Choose==5)
		{
			if(Time_Choose_Flag>=0)
			OLED_ShowSymbol(112,2,TIME[5],16);	//周
			else OLED_ShowString(112,2,"  ",16);
		}
		if(Time_Choose==2)
		{
			if(Time_Choose_Flag>=0)
			{if(TIME[2]/10)OLED_ShowSymbol(16,4,TIME[2]/10+10,16);
			OLED_ShowSymbol(32,4,TIME[2]%10+10,16);}//时
			else
			OLED_ShowString(16,4,"    ",16);
		}
		if(Time_Choose==1)
		{
			if(Time_Choose_Flag>=0)
			{OLED_ShowSymbol(64,4,TIME[1]/10+10,16);//分
			 OLED_ShowSymbol(80,4,TIME[1]%10+10,16);}
			else 
			OLED_ShowString(64,4,"    ",16);
		}
		if(Time_Choose==0)
		{
			if(Time_Choose_Flag>=0)
			{OLED_ShowNum(98,5,TIME[0]/10,1,8);//秒
			OLED_ShowNum(106 ,5,TIME[0]%10,1,8);}
			else OLED_ShowString(98,5,"  ",16);
		}
		
		Time_Choose_Flag++;
		if(Time_Choose_Flag==10)Time_Choose_Flag=-10;
		
		KeyNum=Get_KeyNumber();}
		

		switch(KeyNum)
				{	
					case 1: TIME[Time_Choose]++;break;
					case 2: TIME[Time_Choose]--;break;
					case 3: Time_Choose++;Time_Choose%=7;break;
					case 4: DS3231_WriteTime();OLED_Clear(); break;
				}
	
	}

}
void WriteAlarm()
{
			switch(PWM_Mod)
		{	
			case 0: TIME[2]=(Alarm_Date[0]*60+Alarm_Date[1]-5)/60;
							TIME[1]=(Alarm_Date[0]*60+Alarm_Date[1]-5)%60;break;
			case 1: TIME[2]=(Alarm_Date[0]*60+Alarm_Date[1]-10)/60;
							TIME[1]=(Alarm_Date[0]*60+Alarm_Date[1]-10)%60;break;
			case 2: TIME[2]=(Alarm_Date[0]*60+Alarm_Date[1]-15)/60;
							TIME[1]=(Alarm_Date[0]*60+Alarm_Date[1]-15)%60;break;
			case 3: TIME[2]=(Alarm_Date[0]*60+Alarm_Date[1]-20)/60;
							TIME[1]=(Alarm_Date[0]*60+Alarm_Date[1]-20)%60;break;
			case 4: TIME[2]=(Alarm_Date[0]*60+Alarm_Date[1]-30)/60;
							TIME[1]=(Alarm_Date[0]*60+Alarm_Date[1]-30)%60;break;
			case 5: TIME[2]=(Alarm_Date[0]*60+Alarm_Date[1]-40)/60;
							TIME[1]=(Alarm_Date[0]*60+Alarm_Date[1]-40)%60;break;
			case 6: TIME[2]=(Alarm_Date[0]*60+Alarm_Date[1]-60)/60;
							TIME[1]=(Alarm_Date[0]*60+Alarm_Date[1]-60)%60;break;
		}
	DS3231_WriteAlarm();
}
		
		
void KeyNumber_Set_Alarm()
{//5,10,15,20,30,40,60
	OLED_Clear();
	
	
	KeyNum=Get_KeyNumber();
	while(KeyNum!=4)
	{
		KeyNum=Get_KeyNumber();

		
		while(!KeyNum){
			
		if(Alarm_Choose==6)
		{
			if(Alarm_Choose_Flag>=0)
			Get_KeyNumber();
			//else 
		}
		if(Alarm_Choose==4)
		{
			if(Alarm_Choose_Flag>=0)
			Get_KeyNumber();
			//else 
		}
		if(Alarm_Choose==3)
		{
			if(Alarm_Choose_Flag>=0)
			Get_KeyNumber();
			//else 
		}
		if(Alarm_Choose==5)
		{
			if(Alarm_Choose_Flag>=0)
			Get_KeyNumber();
			//else 
		}
		if(Alarm_Choose==2)
		{
			if(Alarm_Choose_Flag>=0)
			{
			Get_KeyNumber();
			}//时
			//else

		}
		if(Alarm_Choose==1)
		{
			if(Alarm_Choose_Flag>=0)
			{Get_KeyNumber();
			}
			//else 

		}
		if(Alarm_Choose==0)
		{
			if(Alarm_Choose_Flag>=0)
			{Get_KeyNumber();
			}
			//else 
		}
		
		Alarm_Choose_Flag++;
		if(Alarm_Choose_Flag==10)Alarm_Choose_Flag=-10;
			
		KeyNum=Get_KeyNumber();}
		
		
		switch(KeyNum)
				{	
					case 1: if(Alarm_Choose<7)Alarm_Set[Alarm_Choose+1]=!Alarm_Set[Alarm_Choose+1];
									else Alarm_Date[Alarm_Choose-7]++;break;
					case 2: if(Alarm_Choose<7)Alarm_Set[Alarm_Choose+1]=!Alarm_Set[Alarm_Choose+1];
									else Alarm_Date[Alarm_Choose-7]--;break;
					case 3: Alarm_Choose++;Alarm_Choose%=7;break;
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
	
	OLED_ShowSymbol(48,0,28,16);//设
	OLED_ShowSymbol(64,0,29,16);//置
	
	OLED_ShowSymbol(0,3,22,16);//时
	OLED_ShowSymbol(16,3,23,16);//间
	
	OLED_ShowSymbol(48,3,24,16);//闹
	OLED_ShowSymbol(64,3,25,16);//钟
	
	OLED_ShowSymbol(96,3,26,16);//其
	OLED_ShowSymbol(112,3,27,16);//他
	
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
	PWM_Compare--;
	
	//GY302_SendCMD(4);
	//DS3231_WriteByte(DS3231_STATUS,0x08);
}


void Show_Time()
{//秒分时日月周年
		OLED_ShowNum(0,2,TIME[6],2,16);
		OLED_ShowSymbol(16,2,8,16);//年
		
		OLED_ShowNum(32,2,TIME[4],2,16);
		OLED_ShowSymbol(48,2,9,16);//月
		
		OLED_ShowNum(64,2,TIME[3],2,16);
		OLED_ShowSymbol(80,2,7,16);//日
		

		OLED_ShowSymbol(96,2,0,16);//周
		OLED_ShowSymbol(112,2,TIME[5],16);
	
		if(TIME[2]/10)OLED_ShowSymbol(16,4,TIME[2]/10+10,16);
		OLED_ShowSymbol(32,4,TIME[2]%10+10,16);//时
		

		OLED_ShowSymbol(48,4,21,16);
		
		OLED_ShowSymbol(64,4,TIME[1]/10+10,16);
		OLED_ShowSymbol(80,4,TIME[1]%10+10,16);//分
		
		
		OLED_ShowNum(98,5,TIME[0]/10,1,8);//秒
		OLED_ShowNum(106 ,5,TIME[0]%10,1,8);
		
}
void PWM_Run();

void main()
{
	Timer0_Init();
	//BlueTooth_Init();
	Int0_Init();
	Int1_Init();
	Timer_Init();
	DS3231_Init();
	OLED_Init();//初始化OLED
//	OLED_ColorTurn(0);//0正常显示，1 反色显示
  //OLED_DisplayTurn(0);//0正常显示 1 屏幕翻转显示
	
			//DHT11_Read_RH_C();
	//OLED_ShowString(8,0,"OK?",16);
	GY302_Init();
	//Timer2Init();
	while(1)
	{
		KeyNum=Get_KeyNumber();
		if(KeyNum)
		{
			switch(KeyNum)
			{	
				case 1: KeyNumber_CTRL1();break;
				case 2: KeyNumber_CTRL2();break;
				case 3: PWM_Run();break;//KeyNumber_Set();break;
				case 4: KeyNumber_CTRL4();break;
			}
		}
		//OLED_ShowNum(0,0,Compare,2,16);
		OLED_ShowNum(0,0,DHT11_RH_C[1],2,16);
		OLED_ShowChar(16,0,'.',16);
		OLED_ShowNum(24,0,DHT11_RH_C[2],1,16);
		OLED_ShowSymbol(32,0,20,16);
		
		OLED_ShowNum(52,0,DHT11_RH_C[0],2,16);
		OLED_ShowChar(68,0,'%',16);
		
		OLED_ShowNum(80,0,lx,5,16);
		OLED_ShowChar(120,0,'l',8);
		OLED_ShowChar(120,1,'x',8);

		Show_Time();
		
		
		OLED_ShowSymbol(0,6,30,16);//闹钟标志
		if(Alarm_Date[0]/10)OLED_ShowNum(16,6,Alarm_Date[0]/10,1,16);//闹钟
		OLED_ShowNum(24,6,Alarm_Date[0],1,16);
		OLED_ShowChar(32,6,':',16);
		OLED_ShowNum(40,6,Alarm_Date[1]/10,1,16);
		OLED_ShowNum(48,6,Alarm_Date[1]%10,1,16);
		
		if(Alarm_Set[1])OLED_ShowNum(64,7,1,1,8);
		if(Alarm_Set[2])OLED_ShowNum(72,7,2,1,8);
		if(Alarm_Set[3])OLED_ShowNum(80,7,3,1,8);
		if(Alarm_Set[4])OLED_ShowNum(88,7,4,1,8);
		if(Alarm_Set[5])OLED_ShowNum(96,7,5,1,8);
		if(Alarm_Set[6])OLED_ShowNum(104,7,6,1,8);
		if(Alarm_Set[7])OLED_ShowNum(112,7,7,1,8);
		
		if(BUF_Enable)OLED_ShowChar(120,7,'.',8);
		//OLED_ShowNum(64,4,TIME[3],2,16);
		//OLED_ShowNum(64,4,TIME[3],2,16);
		
		
		//OLED_ShowString(112,0,"lx",16);
		OLED_ShowNum(0,2,TIME[0],3,16);
		OLED_ShowNum(0,2,TIME[0],3,16);
		OLED_ShowNum(0,2,TIME[0],3,16);
		OLED_ShowNum(0,2,TIME[0],3,16);
		OLED_ShowNum(0,2,TIME[0],3,16);
		OLED_ShowNum(0,2,TIME[0],3,16);
		
		
		

//	OLED_ShowNum(0,2,TIME[0],3,16);
//	OLED_ShowNum(36,2,TIME[1],3,16);
//	OLED_ShowNum(72,2,1,3,16);

//	OLED_ShowNum(0,4,TIME[3],3,16);
//	OLED_ShowNum(36,4,TIME[4],3,16);
//	OLED_ShowNum(72,4,TIME[5],3,16);

	
//	OLED_ShowNum(0,6,TIME[6],3,16);
//	OLED_ShowNum(36,6,AlarmStatus[0],3,16);
//	OLED_ShowNum(72,6,AlarmStatus[1],3,16);


	DS3231_ReadTime();
	//DHT11_Read_RH_C();
	GY302_Read_lx();
	if(!(TIME[1]&&TIME[0]))BUZ=0;
		else BUZ=1;
	if(PWM_Run_Flag){DS3231_WriteByte(DS3231_STATUS,0x00);PWM_Run_Flag=0;PWM_Run();}
	}
}



#define CMD0 1
#define CMD1 2
#define CMD2 3
#define CMD3 4
#define CMD4 5
#define CMD_OVER 9

unsigned char UART_RX_BUF[3];
//TIME[7] = {0, 0, 0x16, 0x1C, 0x06, 0x01, 0x17};//0秒1分2时3日4月5周6年
void BlueTooth_CMD0()
{
	BlueTooth_SendString("当前时间为：");
	BlueTooth_SendString("20");
	BlueTooth_SendByte(TIME[6]);
	BlueTooth_SendString("年");
	BlueTooth_SendByte(TIME[4]);
	BlueTooth_SendString("月");
	BlueTooth_SendByte(TIME[3]);
	BlueTooth_SendString("日");
	
	BlueTooth_SendString(" ");
	BlueTooth_SendByte(TIME[2]);
	BlueTooth_SendString(":");
	BlueTooth_SendByte(TIME[1]);
	BlueTooth_SendString(" ");
	
	BlueTooth_SendByte(TIME[0]);
}

void BlueTooth_CMD1()
{
	BlueTooth_SendString("当前温度：");
	BlueTooth_SendByte(DHT11_RH_C[1]);
	BlueTooth_SendString(".");
	BlueTooth_SendByte(DHT11_RH_C[2]);
	BlueTooth_SendString("℃");
	BlueTooth_SendString("湿度");
	BlueTooth_SendByte(DHT11_RH_C[0]);
	BlueTooth_SendString("RH");
}

void BlueTooth_CMD2()
{
	BlueTooth_SendString("当前闹钟信息：");
	BlueTooth_SendString("时间：");
	BlueTooth_SendByte(Alarm_Date[0]);
	BlueTooth_SendString(":");
	BlueTooth_SendByte(Alarm_Date[1]);

	
}

void BlueTooth_CMD3()
{

}

void BlueTooth_CMD4()
{

}

void BlueTooth_CMD_Default()
{

}

void UART_Routine() interrupt 4
{
	static unsigned char BUF_NUM=0;
	unsigned char Temp;
	//OLED_ShowString(20,4,"UART",16);
	if(RI==1)
	{
		RI=0;
		Temp=SBUF;
		//OLED_ShowString(20,4,"1",16);
		if(Temp==CMD_OVER)
		{
				switch(UART_RX_BUF[0])
			{	
				case CMD0: BlueTooth_CMD0();break;
				case CMD1: BlueTooth_CMD1();break;
				case CMD2: BlueTooth_CMD2();break;
				case CMD3: BlueTooth_CMD3();break;
				case CMD4: BlueTooth_CMD4();break;
				default: BlueTooth_CMD_Default();break;
			}
			BUF_NUM=0;
			//OLED_ShowString(20,4,"2",16);
		}
		else
		{
			UART_RX_BUF[BUF_NUM++]=Temp;
			BlueTooth_SendByte(Temp);
			BUF_NUM%=3;
			//OLED_ShowString(20,4,"3",16);
		}
		
	}

}

void Timer0_Routine() interrupt 1
{
	
	static unsigned int Key_Counter=0,Time_Choose_Counter=0;
		//Time_Counter=0;
	
	TL0 = 0x66;
	TH0 = 0xFC;
	Key_Counter++;
	if(Key_Counter>=40)
	{
		Key_Counter=0;
		Key_Entry();
		
	}
	
	Time_Choose_Counter++;
	if(Time_Choose_Counter>=100)
	{
	Time_Choose_Counter=0;

	}
}

//5,10,15,20,30,40,60
void PWM_Run()
{
	ET2=1;
	PWM_Timer=0;PWM_Timer_Sec=0,PWM_Timer_Min=0;
	
	EX1=1;
	IE1=0;
	
	
	EX0=0;
	ET0=0;
	
	while(!IE1)
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
			}

	}
	EX0=1;
	ET0=1;
	
	EX1=0;
	
	ET2=0;
}
#define DS3231_STATUS 0x0F

void Int0_Routine(void) interrupt 0
{
	
	if(Alarm_Enable&&Alarm_Set[TIME[5]])
	{
		PWM_Run_Flag=1;	

	}

}

void Int1_Routine(void) interrupt 2
{
	//ET2=0;
}


void Timer2_Routine(void) interrupt 5
{
	
	f=1;

	if(PWM_Couter<PWM_Compare)
	{
		P3_7=1;
		P0_0=1;
	}
	else
	{
		P3_7=0;
		P0_0=0;
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