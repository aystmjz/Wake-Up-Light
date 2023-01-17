#include "OLEDFONT.h"  	 
#include "I2C.h"
	
#define OLED_ADDRESS 0x78
#define Mode_Data	0x40
#define Mode_CMD	0x00
	   


void OLED_WriteCMD(unsigned char Data)
{
	OLED_I2C_Start();
	OLED_I2C_SendByte(OLED_ADDRESS);
	OLED_I2C_ReceiveAck();
	OLED_I2C_SendByte(Mode_CMD);
	OLED_I2C_ReceiveAck();
	OLED_I2C_SendByte(Data);
	OLED_I2C_ReceiveAck();
	OLED_I2C_Stop();
}

void OLED_WriteData(unsigned char Data)
{
	OLED_I2C_Start();
	OLED_I2C_SendByte(OLED_ADDRESS);
	OLED_I2C_ReceiveAck();
	OLED_I2C_SendByte(Mode_Data);
	OLED_I2C_ReceiveAck();
	OLED_I2C_SendByte(Data);
	OLED_I2C_ReceiveAck();
	OLED_I2C_Stop();
}


void OLED_SetPointer(unsigned char x, unsigned char y) 
{ 
	OLED_WriteCMD(0xb0+y);
	OLED_WriteCMD(((x&0xf0)>>4)|0x10);
	OLED_WriteCMD((x&0x0f));
}   	  
   
   			
void OLED_Clear(void)  
{  
	unsigned char i,n;		    
	for(i=0;i<8;i++)  
	{  
		OLED_WriteCMD (0xb0+i);
		OLED_WriteCMD (0x00); 
		OLED_WriteCMD (0x10);    
		for(n=0;n<128;n++)OLED_WriteData(0); 
	} 
}


void OLED_ShowChar(unsigned char x,unsigned char y,unsigned char Char,unsigned char Char_Size)
{      	
	unsigned char i,j,CharNum;
	CharNum=Char-' ';
	if(Char_Size==16)
	{
		for(i=0;i<2;i++)
		{
			OLED_SetPointer(x,y+i);
			for(j=0;j<8;j++)
			{
				 OLED_WriteData(ascii_8_16[CharNum][j+i*8]);//8x16
			}
		}
	}
	else if(Char_Size==8)
	{
		OLED_SetPointer(x,y);
		for(i=0;i<6;i++)
			{
				 OLED_WriteData(ascii_6_8[CharNum][i]);//6X8
			}
	}
}

unsigned int Pow(unsigned int m,unsigned int n)
{
	unsigned int result=1;	 
	while(n--)result*=m;    
	return result;
}				  

void OLED_ShowNum(unsigned char x,unsigned char y,unsigned int Num,unsigned char Num_Lim,unsigned char Char_Size)
{         	
	unsigned char i,Temp,Enshow=0;
	for(i=0;i<Num_Lim;i++)
	{
		Temp=(Num/Pow(10,Num_Lim-i-1))%10;
		if(Enshow==0&&i<(Num_Lim-1))
		{
			if(Temp==0)
			{
				if(Char_Size==16)OLED_ShowChar(x+8*i,y,' ',Char_Size);
				else if(Char_Size==8)OLED_ShowChar(x+6*i,y,' ',Char_Size);
				continue;
			}else Enshow=1;
		}
	 	if(Char_Size==16)OLED_ShowChar(x+8*i,y,Temp+'0',Char_Size);
		else if(Char_Size==8)OLED_ShowChar(x+6*i,y,Temp+'0',Char_Size);
	}
}

void OLED_ShowString(unsigned char x,unsigned char y,unsigned char *Char,unsigned char Char_Size)
{
	unsigned char i=0;
	while (Char[i]!='\0')
	{		
		OLED_ShowChar(x,y,Char[i++],Char_Size);
		if(Char_Size==16)x+=8;
		else if(Char_Size==8)x+=6;
	}
}

void OLED_ShowSymbol(unsigned char x,unsigned char y,unsigned char Symbol_Num,unsigned char Symbol_Size)
{
	unsigned char i,j;
	if(Symbol_Size==16)
	{
		for(i=0;i<2;i++)
		{
			OLED_SetPointer(x,y+i);
			for(j=0;j<16;j++)
			{
				 OLED_WriteData(Symbol_16_16[Symbol_Num][j+i*16]);//16x16
			}
		}
	}
	else if(Symbol_Size==8)
	{
		OLED_SetPointer(x,y);
		for(i=0;i<6;i++)
			{
				 OLED_WriteData(Symbol_16_16[Symbol_Num][i]);//6X8
			}
	}
			
}


void OLED_DrawBMP(unsigned char x,unsigned char y,unsigned char sizex, unsigned char sizey,unsigned char BMP[])
{ 	
  unsigned int j=0;
	unsigned char i,m;
	sizey=sizey/8+((sizey%8)?1:0);
	for(i=0;i<sizey;i++)
	{
		OLED_SetPointer(x,i+y);
    for(m=0;m<sizex;m++)
		{      
			OLED_WriteData(BMP[j++]);	    	
		}
	}
} 


		    
void OLED_Init(void)
{

	OLED_WriteCMD(0xAE);//--turn off oled panel
	OLED_WriteCMD(0x00);//---set low column address
	OLED_WriteCMD(0x10);//---set high column address
	OLED_WriteCMD(0x40);//--set start line address  Set Mapping RAM Display Start Line (0x00~0x3F)
	OLED_WriteCMD(0x81);//--set contrast control register
	OLED_WriteCMD(0xCF); // Set SEG Output Current Brightness
	OLED_WriteCMD(0xA1);//--Set SEG/Column Mapping     0xa0���ҷ��� 0xa1����
	OLED_WriteCMD(0xC8);//Set COM/Row Scan Direction   0xc0���·��� 0xc8����
	OLED_WriteCMD(0xA6);//--set normal display
	OLED_WriteCMD(0xA8);//--set multiplex ratio(1 to 64)
	OLED_WriteCMD(0x3f);//--1/64 duty
	OLED_WriteCMD(0xD3);//-set display offset	Shift Mapping RAM Counter (0x00~0x3F)
	OLED_WriteCMD(0x00);//-not offset
	OLED_WriteCMD(0xd5);//--set display clock divide ratio/oscillator frequency
	OLED_WriteCMD(0x80);//--set divide ratio, Set Clock as 100 Frames/Sec
	OLED_WriteCMD(0xD9);//--set pre-charge period
	OLED_WriteCMD(0xF1);//Set Pre-Charge as 15 Clocks & Discharge as 1 Clock
	OLED_WriteCMD(0xDA);//--set com pins hardware configuration
	OLED_WriteCMD(0x12);
	OLED_WriteCMD(0xDB);//--set vcomh
	OLED_WriteCMD(0x40);//Set VCOM Deselect Level
	
	OLED_WriteCMD(0x20); //�����ڴ��ַģʽ
	OLED_WriteCMD(0x02); //[1:0],00���е�ַģʽ;01���е�ַģʽ;10,ҳ��ַģʽ;Ĭ��10;
	
	OLED_WriteCMD(0x8D);//--set Charge Pump enable/disable
	OLED_WriteCMD(0x14);//--set(0x10) disable
	OLED_WriteCMD(0xA4);// Disable Entire Display On (0xa4/0xa5)
	OLED_WriteCMD(0xA6);// Disable Inverse Display On (0xa6/a7) 
	OLED_Clear();
	OLED_WriteCMD(0xAF); /*display ON*/ 
	
	
	OLED_WriteCMD(0xC8);//������ʾ
	OLED_WriteCMD(0xA1);
			
	OLED_WriteCMD(0xA6);//������ʾ
}


/*
//OLED��ʼ��
void OLED_Init(void)
{	  	
	OLED_WriteCMD(0xAE); //�ر���ʾ
	OLED_WriteCMD(0xD5); //����ʱ�ӷ�Ƶ����,��Ƶ��
	OLED_WriteCMD(80);   //[3:0],��Ƶ����;[7:4],��Ƶ��
	OLED_WriteCMD(0xA8); //��������·��
	OLED_WriteCMD(0X3F); //Ĭ��0X3F(1/64) 
	OLED_WriteCMD(0xD3); //������ʾƫ��
	OLED_WriteCMD(0X00); //Ĭ��Ϊ0

	OLED_WriteCMD(0x40); //������ʾ��ʼ�� [5:0],����.
													    
	OLED_WriteCMD(0x8D); //��ɱ�����
	OLED_WriteCMD(0x14); //bit2������/�ر�
	OLED_WriteCMD(0x20); //�����ڴ��ַģʽ
	OLED_WriteCMD(0x02); //[1:0],00���е�ַģʽ;01���е�ַģʽ;10,ҳ��ַģʽ;Ĭ��10;
	OLED_WriteCMD(0xA1); //���ض�������,bit0:0,0->0;1,0->127;
	OLED_WriteCMD(0xC0); //����COMɨ�跽��;bit3:0,��ͨģʽ;1,�ض���ģʽ COM[N-1]->COM0;N:����·��
	OLED_WriteCMD(0xDA); //����COMӲ����������
	OLED_WriteCMD(0x12); //[5:4]����
		 
	OLED_WriteCMD(0x81); //�Աȶ�����
	OLED_WriteCMD(0xEF); //1~255;Ĭ��0X7F (��������,Խ��Խ��)
	OLED_WriteCMD(0xD9); //����Ԥ�������
	OLED_WriteCMD(0xf1); //[3:0],PHASE 1;[7:4],PHASE 2;
	OLED_WriteCMD(0xDB); //����VCOMH ��ѹ����
	OLED_WriteCMD(0x30); //[6:4] 000,0.65*vcc;001,0.77*vcc;011,0.83*vcc;

	OLED_WriteCMD(0xA4); //ȫ����ʾ����;bit0:1,����;0,�ر�;(����/����)
	OLED_WriteCMD(0xA6); //������ʾ��ʽ;bit0:1,������ʾ;0,������ʾ	    						   
	OLED_WriteCMD(0xAF); //������ʾ	

	OLED_Clear();
}

*/