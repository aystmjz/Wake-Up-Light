#ifndef __OLED_H
#define __OLED_H

#define  u8 unsigned char 

void OLED_WriteCMD(unsigned char Data);
void OLED_WriteData(unsigned char Data);
void OLED_Clear(void);
void OLED_SetPointer(unsigned char x, unsigned char y) ;
void OLED_ShowChar(u8 x,u8 y,unsigned char Char,unsigned char Char_Size);
unsigned int Pow(unsigned int m,unsigned int n); 
void OLED_ShowNum(u8 x,u8 y,unsigned int Num,unsigned char Num_Lim,unsigned char Char_Size);
void OLED_ShowString(u8 x,u8 y,unsigned char *Char,unsigned char Char_Size);
void OLED_ShowSymbol(u8 x,u8 y,unsigned char Symbol_Num,unsigned char Symbol_Size);
void OLED_DrawBMP(u8 x,u8 y,unsigned char sizex, unsigned char sizey,unsigned char BMP[]);	    
void OLED_Init(void);

#endif  
	 



