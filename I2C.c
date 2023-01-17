#include "STC89C5xRC.h"
#include <intrins.h>

sbit OLED_I2C_SCL=P2^6;
sbit OLED_I2C_SDA=P2^7;
sbit DS3231_I2C_SCL=P2^2;
sbit DS3231_I2C_SDA=P2^1;
sbit GY302_I2C_SCL=P2^4;
sbit GY302_I2C_SDA=P2^5;

void OLED_I2C_delay()
{

}

void OLED_I2C_Start(void)
{
	OLED_I2C_SDA=1;
	OLED_I2C_SCL=1;
	//OLED_I2C_delay();
	OLED_I2C_SDA=0;
	//OLED_I2C_delay();
	OLED_I2C_SCL=0;
}

void OLED_I2C_Stop(void)
{
	OLED_I2C_SDA=0;
	OLED_I2C_SCL=1;
	//OLED_I2C_delay();
	OLED_I2C_SDA=1;
}

void OLED_I2C_SendByte(unsigned char Byte)
{
	unsigned char i;
	for(i=0;i<8;i++)
	{
		OLED_I2C_SDA=Byte&(0x80>>i);
		OLED_I2C_SCL=1;
		//OLED_I2C_delay();
		OLED_I2C_SCL=0;
		//OLED_I2C_delay();
	}
}


bit OLED_I2C_ReceiveAck(void)
{
	unsigned char AckBit;
	OLED_I2C_SDA=1;
	//OLED_I2C_delay();
	OLED_I2C_SCL=1;
	AckBit=OLED_I2C_SDA;
	//OLED_I2C_delay();
	OLED_I2C_SCL=0;
	//OLED_I2C_delay();
	return AckBit;
}


///////////////////////////////////////////

void DS3231_I2C_delay()
{
	_nop_();
}

void DS3231_I2C_Start(void)
{
	DS3231_I2C_SDA=1;
	DS3231_I2C_SCL=1;
	DS3231_I2C_delay();
	DS3231_I2C_SDA=0;
	DS3231_I2C_delay();
	DS3231_I2C_SCL=0;
}

void DS3231_I2C_Stop(void)
{
	DS3231_I2C_SDA=0;
	DS3231_I2C_SCL=1;
	DS3231_I2C_delay();
	DS3231_I2C_SDA=1;
}

void DS3231_I2C_SendByte(unsigned char Byte)
{
	unsigned char i;
	for(i=0;i<8;i++)
	{
		DS3231_I2C_SDA=Byte&(0x80>>i);
		DS3231_I2C_SCL=1;
		DS3231_I2C_delay();
		DS3231_I2C_SCL=0;
		DS3231_I2C_delay();
	}
}

unsigned char DS3231_I2C_ReceiveByte(void)
{
	unsigned char i,Byte=0x00;
	DS3231_I2C_SDA=1;
	for(i=0;i<8;i++)
	{
		DS3231_I2C_SCL=1;
		DS3231_I2C_delay();
		if(DS3231_I2C_SDA){Byte|=(0x80>>i);}
		DS3231_I2C_SCL=0;
		DS3231_I2C_delay();
	}
	return Byte;
}

void DS3231_I2C_SendAck(bit AckBit)
{
	DS3231_I2C_SDA=AckBit;
	DS3231_I2C_SCL=1;
	DS3231_I2C_delay();
	DS3231_I2C_SCL=0;
	DS3231_I2C_delay();
}

bit DS3231_I2C_ReceiveAck(void)
{
	unsigned char AckBit;
	DS3231_I2C_SDA=1;
	DS3231_I2C_delay();
	DS3231_I2C_SCL=1;
	AckBit=DS3231_I2C_SDA;
	DS3231_I2C_delay();
	DS3231_I2C_SCL=0;
	DS3231_I2C_delay();
	return AckBit;
}



/////////////////////////////////////


void GY302_I2C_delay()
{
	_nop_();
}

void GY302_I2C_Start(void)
{
	GY302_I2C_SDA=1;
	GY302_I2C_SCL=1;
	GY302_I2C_delay();
	GY302_I2C_SDA=0;
	GY302_I2C_delay();
	GY302_I2C_SCL=0;
}

void GY302_I2C_Stop(void)
{
	GY302_I2C_SDA=0;
	GY302_I2C_SCL=1;
	GY302_I2C_delay();
	GY302_I2C_SDA=1;
}

void GY302_I2C_SendByte(unsigned char Byte)
{
	unsigned char i;
	for(i=0;i<8;i++)
	{
		GY302_I2C_SDA=Byte&(0x80>>i);
		GY302_I2C_SCL=1;
		GY302_I2C_delay();
		GY302_I2C_SCL=0;
		GY302_I2C_delay();
	}
}

unsigned char GY302_I2C_ReceiveByte(void)
{
	unsigned char i,Byte=0x00;
	GY302_I2C_SDA=1;
	for(i=0;i<8;i++)
	{
		GY302_I2C_SCL=1;
		GY302_I2C_delay();
		if(GY302_I2C_SDA){Byte|=(0x80>>i);}
		GY302_I2C_SCL=0;
		GY302_I2C_delay();
	}
	return Byte;
}

void GY302_I2C_SendAck(bit AckBit)
{
	GY302_I2C_SDA=AckBit;
	GY302_I2C_SCL=1;
	GY302_I2C_delay();
	GY302_I2C_SCL=0;
	GY302_I2C_delay();
}

bit GY302_I2C_ReceiveAck(void)
{
	unsigned char AckBit;
	GY302_I2C_SDA=1;
	GY302_I2C_delay();
	GY302_I2C_SCL=1;
	AckBit=GY302_I2C_SDA;
	GY302_I2C_delay();
	GY302_I2C_SCL=0;
	GY302_I2C_delay();
	return AckBit;
}