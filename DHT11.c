#include "STC89C5xRC.h"


sbit DHT11_DQ = P1^7;
 
extern unsigned char DHT11_RH_C[3]={0,0,0};

unsigned char DHT11_Read_RH_C(void)
{
	
	unsigned char i=0,j=0,timer=0,sum=0;
	unsigned char DHT11_Data_temp[5]={1,1,1,1,1};
	EA=0;
	DHT11_DQ = 1;
	DHT11_DQ = 0;
	i = 36;j = 217;do{while (--j);} while (--i);//20ms
	DHT11_DQ = 1;
 
	while(DHT11_DQ == 1)
	{timer++;if(timer>50)return 0;}
	while(DHT11_DQ == 0)
	{timer++;if(timer>50)return 0;}
	while(DHT11_DQ==1);
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		{ 
			timer=0;
			while(DHT11_DQ == 0)
			{timer++;if(timer>50)return 0;}
			timer=0;
			while(DHT11_DQ == 1)
			{timer++;if(timer>50)return 0;}
			if(timer<4)DHT11_Data_temp[i]<<=1;
			 else {DHT11_Data_temp[i]<<=1;DHT11_Data_temp[i]++;}
		}	
	}
	EA=1;
	for(i=0;i<3;i++)
	{
		sum+=DHT11_Data_temp[i];
	}
	if(sum == DHT11_Data_temp[4])
	{
		DHT11_RH_C[0]=DHT11_Data_temp[0];
		DHT11_RH_C[1]=DHT11_Data_temp[2];
		DHT11_RH_C[2]=DHT11_Data_temp[3];
		return 1;
	}
	else return 0;
		
}
