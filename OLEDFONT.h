#ifndef __OLEDFONT_H__ 
#define __OLEDFONT_H__ 

/************************************6*8的点阵************************************/
unsigned char code ascii_6_8[][6] ={
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00},// sp
{0x00, 0x00, 0x00, 0x2f, 0x00, 0x00},// !
{0x00, 0x00, 0x07, 0x00, 0x07, 0x00},// "
{0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14},// #
{0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12},// $
{0x00, 0x62, 0x64, 0x08, 0x13, 0x23},// %
{0x00, 0x36, 0x49, 0x55, 0x22, 0x50},// &
{0x00, 0x00, 0x05, 0x03, 0x00, 0x00},// '
{0x00, 0x00, 0x1c, 0x22, 0x41, 0x00},// (
{0x00, 0x00, 0x41, 0x22, 0x1c, 0x00},// )
{0x00, 0x14, 0x08, 0x3E, 0x08, 0x14},// *
{0x00, 0x08, 0x08, 0x3E, 0x08, 0x08},// +
{0x00, 0x00, 0x00, 0xA0, 0x60, 0x00},// ,
{0x00, 0x08, 0x08, 0x08, 0x08, 0x08},// -
{0x00, 0x00, 0x60, 0x60, 0x00, 0x00},// .
{0x00, 0x20, 0x10, 0x08, 0x04, 0x02},// /
{0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E},// 0
{0x00, 0x00, 0x42, 0x7F, 0x40, 0x00},// 1
{0x00, 0x42, 0x61, 0x51, 0x49, 0x46},// 2
{0x00, 0x21, 0x41, 0x45, 0x4B, 0x31},// 3
{0x00, 0x18, 0x14, 0x12, 0x7F, 0x10},// 4
{0x00, 0x27, 0x45, 0x45, 0x45, 0x39},// 5
{0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30},// 6
{0x00, 0x01, 0x71, 0x09, 0x05, 0x03},// 7
{0x00, 0x36, 0x49, 0x49, 0x49, 0x36},// 8
{0x00, 0x06, 0x49, 0x49, 0x29, 0x1E},// 9
{0x00, 0x00, 0x36, 0x36, 0x00, 0x00},// :
{0x00, 0x00, 0x56, 0x36, 0x00, 0x00},// ;
{0x00, 0x08, 0x14, 0x22, 0x41, 0x00},// <
{0x00, 0x14, 0x14, 0x14, 0x14, 0x14},// =
{0x00, 0x00, 0x41, 0x22, 0x14, 0x08},// >
{0x00, 0x02, 0x01, 0x51, 0x09, 0x06},// ?
{0x00, 0x32, 0x49, 0x59, 0x51, 0x3E},// @
{0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C},// A
{0x00, 0x7F, 0x49, 0x49, 0x49, 0x36},// B
{0x00, 0x3E, 0x41, 0x41, 0x41, 0x22},// C
{0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C},// D
{0x00, 0x7F, 0x49, 0x49, 0x49, 0x41},// E
{0x00, 0x7F, 0x09, 0x09, 0x09, 0x01},// F
{0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A},// G
{0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F},// H
{0x00, 0x00, 0x41, 0x7F, 0x41, 0x00},// I
{0x00, 0x20, 0x40, 0x41, 0x3F, 0x01},// J
{0x00, 0x7F, 0x08, 0x14, 0x22, 0x41},// K
{0x00, 0x7F, 0x40, 0x40, 0x40, 0x40},// L
{0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F},// M
{0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F},// N
{0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E},// O
{0x00, 0x7F, 0x09, 0x09, 0x09, 0x06},// P
{0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E},// Q
{0x00, 0x7F, 0x09, 0x19, 0x29, 0x46},// R
{0x00, 0x46, 0x49, 0x49, 0x49, 0x31},// S
{0x00, 0x01, 0x01, 0x7F, 0x01, 0x01},// T
{0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F},// U
{0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F},// V
{0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F},// W
{0x00, 0x63, 0x14, 0x08, 0x14, 0x63},// X
{0x00, 0x07, 0x08, 0x70, 0x08, 0x07},// Y
{0x00, 0x61, 0x51, 0x49, 0x45, 0x43},// Z
{0x00, 0x00, 0x7F, 0x41, 0x41, 0x00},// [
{0x00, 0x55, 0x2A, 0x55, 0x2A, 0x55},// 55
{0x00, 0x00, 0x41, 0x41, 0x7F, 0x00},// ]
{0x00, 0x04, 0x02, 0x01, 0x02, 0x04},// ^
{0x00, 0x40, 0x40, 0x40, 0x40, 0x40},// _
{0x00, 0x00, 0x01, 0x02, 0x04, 0x00},// '
{0x00, 0x20, 0x54, 0x54, 0x54, 0x78},// a
{0x00, 0x7F, 0x48, 0x44, 0x44, 0x38},// b
{0x00, 0x38, 0x44, 0x44, 0x44, 0x20},// c
{0x00, 0x38, 0x44, 0x44, 0x48, 0x7F},// d
{0x00, 0x38, 0x54, 0x54, 0x54, 0x18},// e
{0x00, 0x08, 0x7E, 0x09, 0x01, 0x02},// f
{0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C},// g
{0x00, 0x7F, 0x08, 0x04, 0x04, 0x78},// h
{0x00, 0x00, 0x44, 0x7D, 0x40, 0x00},// i
{0x00, 0x40, 0x80, 0x84, 0x7D, 0x00},// j
{0x00, 0x7F, 0x10, 0x28, 0x44, 0x00},// k
{0x00, 0x00, 0x41, 0x7F, 0x40, 0x00},// l
{0x00, 0x7C, 0x04, 0x18, 0x04, 0x78},// m
{0x00, 0x7C, 0x08, 0x04, 0x04, 0x78},// n
{0x00, 0x38, 0x44, 0x44, 0x44, 0x38},// o
{0x00, 0xFC, 0x24, 0x24, 0x24, 0x18},// p
{0x00, 0x18, 0x24, 0x24, 0x18, 0xFC},// q
{0x00, 0x7C, 0x08, 0x04, 0x04, 0x08},// r
{0x00, 0x48, 0x54, 0x54, 0x54, 0x20},// s
{0x00, 0x04, 0x3F, 0x44, 0x40, 0x20},// t
{0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C},// u
{0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C},// v
{0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C},// w
{0x00, 0x44, 0x28, 0x10, 0x28, 0x44},// x
{0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C},// y
{0x00, 0x44, 0x64, 0x54, 0x4C, 0x44},// z
{0x14, 0x14, 0x14, 0x14, 0x14, 0x14},// horiz lines

};


//8*16 ASCII字符集点阵
unsigned char code ascii_8_16[][16]={	  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x30,0x00,0x00,0x00},/*"!",1*/
{0x00,0x10,0x0C,0x06,0x10,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x40,0xC0,0x78,0x40,0xC0,0x78,0x40,0x00,0x04,0x3F,0x04,0x04,0x3F,0x04,0x04,0x00},/*"#",3*/
{0x00,0x70,0x88,0xFC,0x08,0x30,0x00,0x00,0x00,0x18,0x20,0xFF,0x21,0x1E,0x00,0x00},/*"$",4*/
{0xF0,0x08,0xF0,0x00,0xE0,0x18,0x00,0x00,0x00,0x21,0x1C,0x03,0x1E,0x21,0x1E,0x00},/*"%",5*/
{0x00,0xF0,0x08,0x88,0x70,0x00,0x00,0x00,0x1E,0x21,0x23,0x24,0x19,0x27,0x21,0x10},/*"&",6*/
{0x10,0x16,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00,0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00},/*"(",8*/
{0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,0x00,0x40,0x20,0x18,0x07,0x00,0x00,0x00},/*")",9*/
{0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00},/*"*",10*/
{0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x1F,0x01,0x01,0x01,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xB0,0x70,0x00,0x00,0x00,0x00,0x00},/*",",12*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x04,0x00,0x60,0x18,0x06,0x01,0x00,0x00,0x00},/*"/",15*/
{0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00},/*"0",16*/
{0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"1",17*/
{0x00,0x70,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00},/*"2",18*/
{0x00,0x30,0x08,0x88,0x88,0x48,0x30,0x00,0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00},/*"3",19*/
{0x00,0x00,0xC0,0x20,0x10,0xF8,0x00,0x00,0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00},/*"4",20*/
{0x00,0xF8,0x08,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00},/*"5",21*/
{0x00,0xE0,0x10,0x88,0x88,0x18,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00},/*"6",22*/
{0x00,0x38,0x08,0x08,0xC8,0x38,0x08,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00},/*"7",23*/
{0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00},/*"8",24*/
{0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x00,0x31,0x22,0x22,0x11,0x0F,0x00},/*"9",25*/
{0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x00,0x00,0x00,0x00},/*";",27*/
{0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00},/*"<",28*/
{0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00},/*"=",29*/
{0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00},/*">",30*/
{0x00,0x70,0x48,0x08,0x08,0x08,0xF0,0x00,0x00,0x00,0x00,0x30,0x36,0x01,0x00,0x00},/*"?",31*/
{0xC0,0x30,0xC8,0x28,0xE8,0x10,0xE0,0x00,0x07,0x18,0x27,0x24,0x23,0x14,0x0B,0x00},/*"@",32*/
{0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00,0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20},/*"A",33*/
{0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00},/*"B",34*/
{0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00},/*"C",35*/
{0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00,0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00},/*"D",36*/
{0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00},/*"E",37*/
{0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00},/*"F",38*/
{0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00,0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00},/*"G",39*/
{0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20},/*"H",40*/
{0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"I",41*/
{0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00},/*"J",42*/
{0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00,0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00},/*"K",43*/
{0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00},/*"L",44*/
{0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00,0x20,0x3F,0x00,0x3F,0x00,0x3F,0x20,0x00},/*"M",45*/
{0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08,0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00},/*"N",46*/
{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00},/*"O",47*/
{0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00,0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00},/*"P",48*/
{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x18,0x24,0x24,0x38,0x50,0x4F,0x00},/*"Q",49*/
{0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00,0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20},/*"R",50*/
{0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00,0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00},/*"S",51*/
{0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00},/*"T",52*/
{0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00},/*"U",53*/
{0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08,0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00},/*"V",54*/
{0xF8,0x08,0x00,0xF8,0x00,0x08,0xF8,0x00,0x03,0x3C,0x07,0x00,0x07,0x3C,0x03,0x00},/*"W",55*/
{0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08,0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20},/*"X",56*/
{0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00},/*"Y",57*/
{0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00,0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00},/*"Z",58*/
{0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x7F,0x40,0x40,0x40,0x00},/*"[",59*/
{0x00,0x0C,0x30,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x06,0x38,0xC0,0x00},/*"\",60*/
{0x00,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x7F,0x00,0x00,0x00},/*"]",61*/
{0x00,0x00,0x04,0x02,0x02,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80},/*"_",63*/
{0x00,0x02,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x19,0x24,0x22,0x22,0x22,0x3F,0x20},/*"a",65*/
{0x08,0xF8,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00},/*"b",66*/
{0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00},/*"c",67*/
{0x00,0x00,0x00,0x80,0x80,0x88,0xF8,0x00,0x00,0x0E,0x11,0x20,0x20,0x10,0x3F,0x20},/*"d",68*/
{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x22,0x22,0x22,0x22,0x13,0x00},/*"e",69*/
{0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x18,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"f",70*/
{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00},/*"g",71*/
{0x08,0xF8,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20},/*"h",72*/
{0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"i",73*/
{0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00},/*"j",74*/
{0x08,0xF8,0x00,0x00,0x80,0x80,0x80,0x00,0x20,0x3F,0x24,0x02,0x2D,0x30,0x20,0x00},/*"k",75*/
{0x00,0x08,0x08,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"l",76*/
{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F},/*"m",77*/
{0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20},/*"n",78*/
{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00},/*"o",79*/
{0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00,0x80,0xFF,0xA1,0x20,0x20,0x11,0x0E,0x00},/*"p",80*/
{0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x0E,0x11,0x20,0x20,0xA0,0xFF,0x80},/*"q",81*/
{0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00},/*"r",82*/
{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00},/*"s",83*/
{0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x20,0x00,0x00},/*"t",84*/
{0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20},/*"u",85*/
{0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x00,0x01,0x0E,0x30,0x08,0x06,0x01,0x00},/*"v",86*/
{0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00},/*"w",87*/
{0x00,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x31,0x2E,0x0E,0x31,0x20,0x00},/*"x",88*/
{0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x80,0x81,0x8E,0x70,0x18,0x06,0x01,0x00},/*"y",89*/
{0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00},/*"z",90*/
{0x00,0x00,0x00,0x00,0x80,0x7C,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x3F,0x40,0x40},/*"{",91*/
{0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},/*"|",92*/
{0x00,0x02,0x02,0x7C,0x80,0x00,0x00,0x00,0x00,0x40,0x40,0x3F,0x00,0x00,0x00,0x00},/*"}",93*/
{0x00,0x06,0x01,0x01,0x02,0x02,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
{0x00,0x00,0x00,0x00,0xFF,0x03,0x06,0x04,0x60,0xF0,0xF8,0xFC,0x7F,0x00,0x00,0x00},/*"音符",95*/
};  


	//年月周一二三四五六日0123456789℃:时间闹钟其他设置■√×
unsigned char code Symbol_16_16[][32]={
{0x00,0x00,0xFE,0x82,0x92,0x92,0x92,0xFE,0x92,0x92,0x92,0x82,0xFE,0x00,0x00,0x00,0x80,0x60,0x1F,0x00,0x00,0x1E,0x12,0x12,0x12,0x1E,0x40,0x80,0x7F,0x00,0x00,0x00},/*"周",0*/
{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"一",1*/
{0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00},/*"二",2*/
{0x00,0x04,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x04,0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00},/*"三",3*/
{0x00,0xFC,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0xFC,0x00,0x00,0x00,0x7F,0x28,0x24,0x23,0x20,0x20,0x20,0x20,0x21,0x22,0x22,0x22,0x7F,0x00,0x00},/*"四",4*/
{0x00,0x02,0x42,0x42,0x42,0xC2,0x7E,0x42,0x42,0x42,0x42,0xC2,0x02,0x02,0x00,0x00,0x40,0x40,0x40,0x40,0x78,0x47,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x00},/*"五",5*/
{0x20,0x20,0x20,0x20,0x20,0x20,0x21,0x22,0x2C,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x40,0x20,0x10,0x0C,0x03,0x00,0x00,0x00,0x01,0x02,0x04,0x18,0x60,0x00,0x00},/*"六",6*/
{0x00,0x00,0x00,0xFE,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0xFF,0x00,0x00,0x00,0x00},/*"日",7*/
{0x00,0x20,0x18,0xC7,0x44,0x44,0x44,0x44,0xFC,0x44,0x44,0x44,0x44,0x04,0x00,0x00,0x04,0x04,0x04,0x07,0x04,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x04,0x04,0x00},/*"年",8*/
{0x00,0x00,0x00,0xFE,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00,0x80,0x40,0x30,0x0F,0x02,0x02,0x02,0x02,0x02,0x02,0x42,0x82,0x7F,0x00,0x00,0x00},/*"月",9*/

{0x00,0x00,0xE0,0xF0,0x30,0x08,0x08,0x08,0x08,0x08,0x08,0x30,0xF0,0xE0,0x00,0x00,0x00,0x00,0x0F,0x1F,0x18,0x30,0x20,0x20,0x20,0x20,0x20,0x18,0x0F,0x07,0x00,0x00},/*"0",10*/
{0x00,0x00,0x00,0x00,0x00,0x10,0x10,0xF0,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x20,0x3F,0x3F,0x20,0x20,0x20,0x20,0x00,0x00,0x00},/*"1",11*/
{0x00,0x00,0x30,0x70,0x28,0x08,0x08,0x08,0x08,0x08,0x08,0xD8,0xF0,0x20,0x00,0x00,0x00,0x00,0x30,0x30,0x28,0x24,0x24,0x22,0x22,0x21,0x21,0x20,0x30,0x18,0x00,0x00},/*"2",12*/
{0x00,0x00,0x30,0x30,0x28,0x08,0x08,0x08,0x08,0x88,0x88,0x70,0x70,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x28,0x20,0x20,0x21,0x21,0x21,0x21,0x13,0x1E,0x0C,0x00,0x00},/*"3",13*/
{0x00,0x00,0x00,0x00,0x80,0x80,0x40,0x20,0x10,0xF0,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,0x04,0x06,0x05,0x04,0x04,0x24,0x24,0x24,0x3F,0x3F,0x3F,0x24,0x24,0x24,0x00},/*"4",14*/
{0x00,0x00,0x00,0xF8,0x08,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x08,0x00,0x00,0x00,0x00,0x00,0x18,0x19,0x29,0x20,0x20,0x20,0x20,0x20,0x20,0x11,0x1F,0x0E,0x00,0x00},/*"5",15*/
{0x00,0x00,0xC0,0xE0,0x10,0x88,0x88,0x88,0x88,0x88,0x88,0x98,0x10,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x11,0x20,0x20,0x20,0x20,0x20,0x20,0x10,0x1F,0x0F,0x00,0x00},/*"6",16*/
{0x00,0x00,0x30,0x18,0x08,0x08,0x08,0x08,0x08,0x88,0x48,0x28,0x18,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x3E,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"7",17*/
{0x00,0x00,0x70,0x70,0xC8,0x88,0x88,0x88,0x08,0x08,0x88,0x88,0x70,0x20,0x00,0x00,0x00,0x0C,0x1E,0x12,0x21,0x21,0x20,0x21,0x21,0x21,0x23,0x22,0x1E,0x0C,0x00,0x00},/*"8",18*/
{0x00,0x40,0xF0,0xF0,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x90,0xF0,0xE0,0x00,0x00,0x00,0x00,0x11,0x11,0x33,0x22,0x22,0x22,0x22,0x22,0x11,0x1C,0x0F,0x07,0x00,0x00},/*"9",19*/
	
{0x06,0x09,0x09,0xE6,0xF8,0x0C,0x04,0x02,0x02,0x02,0x02,0x02,0x04,0x1E,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0x30,0x20,0x40,0x40,0x40,0x40,0x40,0x20,0x10,0x00,0x00},/*"℃",20*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x78,0x78,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x1E,0x1E,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},/*":",21*/
	
{0x00,0xF8,0xF8,0x88,0x88,0xF8,0x00,0x30,0xB0,0x30,0x30,0x30,0xFE,0x30,0x30,0x00,0x00,0x3F,0x3F,0x08,0x08,0x1F,0x00,0x00,0x01,0x03,0x40,0x40,0x7F,0x00,0x00,0x00},/*"时",22*/
{0x00,0xF0,0xF0,0x06,0x0C,0xE0,0x20,0x24,0x24,0x24,0xE4,0x04,0x04,0xFC,0x00,0x00,0x00,0x7F,0x7F,0x00,0x00,0x0F,0x09,0x09,0x09,0x09,0x0F,0x00,0x40,0x7F,0x00,0x00},/*"间",23*/
{0x00,0xF0,0xF2,0x06,0x24,0x20,0x24,0xFC,0xF4,0x24,0x24,0x24,0x04,0xFC,0xFC,0x00,0x00,0xFF,0xFF,0x00,0x1F,0x01,0x01,0x7F,0x7F,0x11,0x11,0x1F,0x40,0x7F,0x7F,0x00},/*"闹",24*/
{0x00,0x60,0x78,0xDE,0x50,0x50,0x00,0xF0,0x10,0x10,0xFE,0x10,0x10,0xF0,0xF0,0x00,0x00,0x02,0x02,0x7F,0x22,0x32,0x00,0x0F,0x04,0x04,0xFF,0x84,0x04,0x0F,0x0F,0x00},/*"钟",25*/
{0x00,0x00,0x08,0x08,0xFE,0x4A,0x48,0x48,0x48,0x48,0xFE,0xFE,0x08,0x08,0x00,0x00,0x00,0x08,0x48,0x68,0x37,0x19,0x09,0x09,0x09,0x09,0x17,0x37,0x68,0x48,0x08,0x00},/*"其",26*/
{0x00,0x80,0xE0,0xF8,0x8E,0x80,0xF8,0xC0,0x40,0xFE,0xFE,0x20,0x20,0xF0,0x00,0x00,0x00,0x01,0x00,0x7F,0x00,0x00,0x3F,0x60,0x40,0x4F,0x4F,0x44,0x46,0x63,0x30,0x00},/*"他",27*/
{0x00,0x40,0x46,0xCC,0x08,0xC0,0x60,0x3C,0x04,0x04,0x04,0x7C,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x7F,0xB0,0x98,0x41,0x47,0x2D,0x31,0x39,0x6D,0x43,0x40,0xC0,0x00},/*"设",28*/
{0x00,0x00,0x5C,0x5C,0xD4,0xD4,0xDC,0xF4,0xF4,0xDC,0xD4,0xD4,0xD4,0x5C,0x00,0x00,0x00,0x40,0x40,0x40,0x7F,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x7F,0x40,0x40,0x40,0x00},/*"置",29*/
{0x00,0x00,0x00,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x04,0x04,0x04,0x0C,0xF8,0x00,0x00,0x00,0x03,0x04,0x39,0x53,0x26,0x24,0x48,0x50,0x50,0x30,0x08,0x06,0x01,0x00},/*"■",30*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x30,0x0C,0x03,0x00,0x00,0x00,0x00,0x10,0x08,0x04,0x18,0x20,0x10,0x0C,0x03,0x00,0x00,0x00,0x00,0x00},/*"√",31*/
{0x00,0x00,0x00,0x08,0x10,0x20,0x40,0x80,0x40,0x20,0x10,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x04,0x02,0x01,0x00,0x01,0x02,0x04,0x08,0x00,0x00,0x00,0x00},/*"×",32*/

	
{0x00,0x74,0x74,0xD4,0xFE,0xD4,0xD4,0x74,0x24,0x30,0xEE,0xCA,0xE8,0x38,0x08,0x00,0x00,0x43,0x45,0x44,0x75,0x44,0x45,0x7D,0x7D,0x55,0x55,0x54,0x54,0x45,0x41,0x00},/*"整",33*/
{0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x7E,0x48,0x48,0x48,0x48,0xC8,0x08,0x00,0x00,0x00,0x40,0x70,0x17,0x04,0x34,0x64,0x04,0x04,0x34,0x44,0x04,0x17,0x70,0x40,0x00},/*"点",34*/
{0x00,0x30,0x30,0x30,0xFE,0x30,0x30,0xFC,0x84,0x84,0xE4,0xA4,0xB4,0xBC,0x00,0x00,0x00,0x02,0x42,0x43,0x7F,0x01,0x01,0x7F,0x40,0x43,0x2E,0x18,0x3E,0x63,0xC0,0x00},/*"报",35*/
{0x00,0xF8,0xF8,0x88,0x88,0xF8,0x00,0x30,0xB0,0x30,0x30,0x30,0xFE,0x30,0x30,0x00,0x00,0x3F,0x3F,0x08,0x08,0x1F,0x00,0x00,0x01,0x03,0x40,0x40,0x7F,0x00,0x00,0x00},/*"时",36*/
{0x00,0x80,0x84,0x84,0x84,0xFC,0xFC,0x84,0x84,0x84,0xFC,0x84,0x84,0x84,0x80,0x00,0x00,0x41,0x41,0x61,0x31,0x1F,0x03,0x01,0x01,0x01,0x7F,0x01,0x01,0x01,0x01,0x00},/*"开",37*/
{0x00,0x00,0x30,0x30,0x30,0x3E,0x38,0xF0,0xF0,0x38,0x3E,0x30,0x30,0x30,0x00,0x00,0x00,0x42,0x42,0x42,0x22,0x32,0x1A,0x0F,0x07,0x1A,0x12,0x32,0x62,0x62,0x02,0x00},/*"关",38*/
	



};
//阿梓关闭打开设置取消闹钟整点报时星期分钟唤醒间点一二三四五六七八九十天
//阿(0) 梓(1) 关(2) 闭(3) 打(4) 开(5) 设(6) 置(7) 取(8) 消(9) 闹(10) 钟(11) 整(12) 点(13) 报(14) 时(15) 星(16) 期(17) 分(18) 钟(19) 唤(20) 醒(21) 间(22) 点(23) 一(24) 二(25) 三(26) 四(27) 五(28) 六(29) 七(30) 八(31) 九(32) 十(33) 天(34)

unsigned char code Sentence_16_16[][32]={
{0x00,0xE8,0xE4,0x44,0x7C,0x98,0x00,0xEC,0x2C,0x2C,0x2C,0xEC,0x0C,0x7C,0xF4,0x04,0x00,0x1F,0x1F,0x02,0x03,0x01,0x00,0x03,0x06,0x04,0x16,0x13,0x10,0x18,0x0F,0x00},/*"阿",0*/
{0x00,0x20,0xA0,0xFC,0xA0,0xA0,0x80,0x90,0xF0,0xD4,0x9C,0x98,0xF0,0xB0,0x90,0x80,0x00,0x01,0x01,0x1F,0x00,0x01,0x00,0x04,0x04,0x04,0x1F,0x1F,0x04,0x04,0x04,0x00},/*"梓",1*/
{0x00,0x00,0x20,0x20,0x2C,0x3C,0xB0,0xE0,0x60,0x20,0x38,0x2C,0x24,0x20,0x00,0x00,0x00,0x01,0x11,0x19,0x0F,0x07,0x01,0x01,0x01,0x05,0x0D,0x09,0x09,0x19,0x11,0x00},/*"关",2*/
{0x00,0xF8,0xF0,0x04,0x4C,0x48,0x40,0x4C,0xD4,0xE4,0xC4,0x44,0x44,0x0C,0xF8,0x00,0x00,0x00,0x1F,0x00,0x0C,0x04,0x02,0x0B,0x09,0x0C,0x0F,0x00,0x00,0x1C,0x1F,0x00},/*"闭",3*/
{0x00,0x10,0x10,0xFC,0xF8,0x90,0x00,0x08,0x08,0x08,0x18,0xF8,0x08,0x08,0x08,0x08,0x00,0x19,0x11,0x1F,0x0F,0x00,0x00,0x08,0x10,0x10,0x10,0x1F,0x00,0x00,0x00,0x00},/*"打",4*/
{0x00,0x80,0x80,0x88,0xE8,0xF8,0x8C,0x8C,0x84,0x84,0x84,0xFC,0xE4,0x84,0x80,0x00,0x00,0x00,0x00,0x1C,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00},/*"开",5*/
{0x00,0x40,0x64,0xEC,0xC8,0x00,0x1C,0x78,0x88,0x04,0x04,0xE4,0xFC,0xC0,0x40,0x00,0x00,0x00,0x0C,0x1F,0x19,0x18,0x04,0x07,0x15,0x1D,0x09,0x0D,0x0E,0x1B,0x19,0x00},/*"设",6*/
{0x00,0x00,0x5C,0x54,0xD4,0xD4,0xDC,0xD4,0xF4,0xFC,0xD4,0xD4,0xD4,0x5C,0x58,0x00,0x00,0x00,0x10,0x17,0x1F,0x15,0x15,0x15,0x15,0x15,0x12,0x10,0x1F,0x17,0x10,0x00},/*"置",7*/
{0x00,0x0C,0xFC,0xFC,0xA4,0x24,0x04,0xFC,0xFC,0x04,0x24,0x10,0x10,0x10,0xE0,0x40,0x00,0x04,0x07,0x07,0x05,0x05,0x04,0x1F,0x1F,0x00,0x11,0x1B,0x0E,0x07,0x05,0x04},/*"取",8*/
{0x00,0x40,0xC8,0x88,0x98,0x00,0xD8,0xD0,0x40,0x40,0x7C,0x40,0x40,0xD8,0xC8,0x00,0x00,0x08,0x08,0x0C,0x04,0x00,0x01,0x1F,0x05,0x05,0x05,0x05,0x00,0x1E,0x1F,0x00},/*"消",9*/
{0x00,0xF8,0xF0,0x04,0x4C,0x4C,0x48,0xDC,0xE4,0x44,0x44,0x44,0x44,0x0C,0xF8,0x00,0x00,0x00,0x1F,0x00,0x0B,0x07,0x01,0x03,0x0F,0x01,0x01,0x0F,0x06,0x1C,0x1F,0x00},/*"闹",10*/
{0x00,0x20,0x78,0xDC,0xC8,0x48,0x48,0x00,0xF0,0x30,0x10,0xFC,0x3C,0x20,0xE0,0x80,0x00,0x03,0x01,0x1F,0x19,0x11,0x19,0x00,0x01,0x02,0x12,0x1F,0x02,0x02,0x03,0x00},/*"钟",11*/
{0x00,0x38,0xD8,0xD4,0xFC,0xFC,0xD4,0xB4,0x28,0x10,0xDC,0xCC,0x68,0xA8,0x88,0x00,0x00,0x00,0x0A,0x1E,0x13,0x13,0x12,0x1E,0x16,0x16,0x15,0x16,0x16,0x12,0x00,0x00},/*"整",12*/
{0x00,0x80,0xE0,0x60,0x20,0x3C,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0xE8,0xC0,0x00,0x00,0x01,0x1B,0x0A,0x0A,0x0E,0x1E,0x16,0x16,0x16,0x1E,0x02,0x02,0x0B,0x19,0x00},/*"点",13*/
{0x00,0x10,0x10,0x7C,0xFC,0x90,0x90,0x00,0xFC,0x88,0x84,0x84,0x84,0xBC,0xB8,0x00,0x00,0x11,0x11,0x19,0x1F,0x01,0x00,0x00,0x1F,0x00,0x12,0x1E,0x0C,0x0E,0x0B,0x08},/*"报",14*/
{0x00,0xE0,0xF8,0xC8,0x88,0xF8,0xF0,0x00,0x20,0xA0,0x20,0x20,0x3C,0xF8,0x30,0x20,0x00,0x07,0x0F,0x08,0x08,0x0F,0x07,0x00,0x00,0x11,0x13,0x12,0x18,0x0F,0x00,0x00},/*"时",15*/
{0x00,0x00,0xB8,0xFC,0x54,0x54,0x54,0x54,0xD4,0x54,0x44,0x44,0x44,0x78,0x38,0x00,0x00,0x02,0x13,0x15,0x15,0x15,0x15,0x15,0x1F,0x15,0x15,0x15,0x15,0x15,0x11,0x00},/*"星",16*/
{0x00,0x18,0xFC,0xA8,0xA8,0x08,0xFC,0x3C,0x08,0xFC,0xFC,0x64,0x44,0x0C,0xFC,0x30,0x00,0x16,0x1F,0x0E,0x02,0x0A,0x0B,0x12,0x00,0x1F,0x1F,0x02,0x02,0x00,0x1F,0x00},/*"期",17*/
{0x00,0x40,0x60,0x30,0x98,0xD8,0xC8,0xC0,0x40,0x48,0x58,0xD8,0x90,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x18,0x1E,0x03,0x00,0x00,0x00,0x00,0x1C,0x1F,0x01,0x00,0x00},/*"分",18*/
{0x00,0x20,0x78,0xDC,0xC8,0x48,0x48,0x00,0xF0,0x30,0x10,0xFC,0x3C,0x20,0xE0,0x80,0x00,0x03,0x01,0x1F,0x19,0x11,0x19,0x00,0x01,0x02,0x12,0x1F,0x02,0x02,0x03,0x00},/*"钟",19*/
{0x00,0xF8,0x18,0x18,0xF0,0x00,0x00,0xD0,0x58,0x4C,0xA8,0xE8,0x38,0xD8,0xC0,0x00,0x00,0x07,0x04,0x04,0x07,0x00,0x04,0x03,0x1A,0x0E,0x03,0x0A,0x0A,0x1B,0x13,0x02},/*"唤",20*/
{0x00,0xF4,0x24,0xF4,0x2C,0xFC,0x24,0xE4,0x38,0xBC,0x54,0x54,0xD4,0x44,0x3C,0x38,0x00,0x0F,0x1C,0x15,0x14,0x11,0x08,0x07,0x03,0x15,0x15,0x1D,0x1F,0x15,0x15,0x10},/*"醒",21*/
{0x00,0xF8,0xF0,0x04,0x0C,0xCC,0x68,0x4C,0x24,0x64,0xC4,0x84,0x04,0x0C,0xF8,0x00,0x00,0x00,0x1F,0x00,0x00,0x07,0x05,0x05,0x05,0x04,0x07,0x03,0x00,0x1C,0x1F,0x00},/*"间",22*/
{0x00,0x80,0xE0,0x60,0x20,0x3C,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0xE8,0xC0,0x00,0x00,0x01,0x1B,0x0A,0x0A,0x0E,0x1E,0x16,0x16,0x16,0x1E,0x02,0x02,0x0B,0x19,0x00},/*"点",23*/
{0x00,0x80,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"一",24*/
{0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x08,0x08,0x08,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x04,0x00},/*"二",25*/
{0x00,0x08,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x08,0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00},/*"三",26*/
{0x00,0xE0,0xF8,0x08,0x08,0xC8,0xF8,0x08,0x08,0xC8,0xF8,0x08,0x18,0xF8,0xF0,0x00,0x00,0x03,0x07,0x0C,0x08,0x09,0x09,0x08,0x08,0x09,0x09,0x08,0x0C,0x07,0x03,0x00},/*"四",27*/
{0x00,0x00,0x88,0xC8,0xC8,0xC8,0xF8,0x58,0x48,0x48,0x48,0x48,0xC8,0x88,0x08,0x00,0x00,0x18,0x18,0x18,0x1C,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0x0F,0x0F,0x08,0x10},/*"五",28*/
{0x00,0x60,0x60,0x60,0x60,0x60,0x68,0x2C,0x38,0x30,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x08,0x1C,0x06,0x03,0x01,0x00,0x00,0x00,0x00,0x01,0x03,0x06,0x0C,0x08,0x00},/*"六",29*/
{0x00,0x60,0x60,0x60,0xE0,0x7C,0x2C,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x40,0x00,0x00,0x00,0x00,0x07,0x0C,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00},/*"七",30*/
{0x00,0x00,0x00,0xC0,0xF0,0x10,0x00,0x00,0x0C,0x18,0x70,0xE0,0xC0,0x00,0x00,0x00,0x00,0x04,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x06,0x00},/*"八",31*/
{0x00,0x00,0x20,0x20,0xF0,0xF0,0x38,0x1C,0x10,0x10,0x10,0x90,0xF0,0x20,0x00,0x00,0x00,0x00,0x1C,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x13,0x18,0x18,0x00},/*"九",32*/
{0x00,0x40,0x40,0x40,0x40,0x40,0x40,0xFC,0xFC,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"十",33*/
{0x00,0x08,0x88,0x88,0x88,0x88,0xE8,0xB8,0x98,0x88,0x88,0x88,0x88,0x88,0x08,0x00,0x00,0x00,0x10,0x1C,0x0F,0x03,0x00,0x00,0x02,0x06,0x04,0x0C,0x0C,0x18,0x08,0x00},/*"天",34*/
	};

unsigned char code Sentence_Date[50][5]={
{0,0,0,0,0},//0
{2,0,1,0,0},//1
{2,2,3,0,0},//2
{2,4,5,0,0},//3
{2,6,7,0,0},//4
{2,8,9,0,0},//5
{2,10,11,0,0},//6
{4,12,13,14,15},//7
{3,16,17,24,0},//8
{3,16,17,25,0},//9
{3,16,17,26,0},//10
{3,16,17,27,0},//11
{3,16,17,28,0},//12
{3,16,17,29,0},//13
{3,16,17,34,0},//14
{4,20,21,15,22},//15
{3,28,18,19,0},//16
{3,33,18,19,0},//17
{4,33,28,18,19},//18
{4,25,33,18,19},//19
{4,26,33,18,19},//20
{4,27,33,18,19},//21
{4,29,33,18,19},//22
{2,24,23,0,0},//23
{2,25,23,0,0},//24
{2,26,23,0,0},//25
{2,27,23,0,0},//26
{2,28,23,0,0},//27
{2,29,23,0,0},//28
{2,30,23,0,0},//29
{2,31,23,0,0},//30
{2,32,23,0,0},//31
{2,33,23,0,0},//32
{3,33,24,23,0},//33
{3,33,25,23,0},//34
{2,24,33,0,0},//35
{2,25,33,0,0},//36
{2,26,33,0,0},//37
{2,27,33,0,0},//38
{2,28,33,0,0},//39
{2,29,33,0,0},//40
{0,0,0,0,0},//41
{0,0,0,0,0},//42
{0,0,0,0,0},//43
{0,0,0,0,0},//44
{0,0,0,0,0},//45
{0,0,0,0,0},//46
{0,0,0,0,0},//47
{0,0,0,0,0},//48
{0,0,0,0,0},//49

};
unsigned char code BMP_GetUP[8][128]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0x10,0x18,0x0C,0x04,0x06,0xC6,0x66,0xA6,0x86,0x8E,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x06,0x30,0x0D,0x00,0x12,0x32,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0F,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x05,0x05,0x07,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x82,0xFE,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x70,0x10,0x1A,0x0C,0x06,0x02,0x02,0x02,0x06,0x04,0x04,0x0C,0x18,0x70,0xFC,0x07,0x00,0x00,0x48,0x48,0x6C,0xFC,0x48,0x40,0x80,0xFC,0x44,0x64,0x3C,0x00,0xC0,0x7C,0x08,0x4C,0x4C,0x4E,0xFC,0x4C,0x4C,0x4C,0x44,0x00,0x00,0x00,0x80,0xFC,0x0C,0x00,0x00,0xE0,0xBF,0xDC,0x86,0x02,0x03,0x03,0x01,0x01,0x03,0x06,0x3C,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x40,0x60,0x30,0x18,0x0C,0x04,0x02,0x01,0x01,0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0x1C,0x06,0x07,0x0F,0x0F,0xDF,0xFF,0x01,0x00,0x00,0x00,0x1F,0x04,0x04,0x07,0x0D,0x08,0x09,0x0B,0x1A,0x12,0x12,0x00,0x1F,0x00,0x08,0x0C,0x06,0x03,0x1F,0x02,0x06,0x04,0x04,0x00,0x00,0x04,0x05,0x09,0x00,0x00,0xC0,0xFF,0xCF,0x8F,0x0F,0x70,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x7C,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x66,0x24,0x0C,0x71,0x08,0x0C,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x19,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x08,0x0C,0x06,0x03,0x01,0x78,0x48,0x60,0x60,0x58,0xCC,0x66,0x22,0x0F,0x39,0xE0,0x20,0xE0,0x70,0x30,0x30,0x30,0x30,0x70,0xF0,0x30,0x30,0xF0,0x70,0xF8,0x38,0x18,0x18,0x18,0x38,0x78,0x18,0xF8,0x38,0x08,0x18,0xF8,0x38,0xD8,0x88,0x84,0x84,0x00,0xCF,0xCF,0x38,0xC0,0xE1,0x06,0x38,0xE1,0x07,0x0C,0x78,0x60,0xC0,0x80,0x00,0x00,0x00,0x03,0x9E,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x03,0xC6,0xF4,0xF8,0xF8,0x9F,0x40,0x8F,0x4E,0x06,0x07,0x01,0x00,0x00,0x01,0x02,0x00,0x07,0x00,0x01,0x00,0x00,0x00,0x00,0x63,0x67,0x67,0x6F,0x0E,0xE2,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xC7,0xF9,0xFF,0xC0,0xFE,0xC1,0x8E,0x70,0xC0,0x80,0x01,0x03,0x03,0x03,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xB0,0x90,0x80,0xC0,0x40,0xE1,0xFE,0xC3,0xFF,0xE7,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0xC1,0x81,0x01,0x01,0x01,0x01,0x01,0x02,0x86,0x4C,0xA0,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xE0,0x7F,0x0F,0x07,0x0F,0x1E,0x35,0xCF,0x8F,0x0E,0x0E,0x0E,0x0C,0x0C,0x0C,0x08,0x08,0x10,0xE0,0xD0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF0,0x0D,0x07,0xE3,0x00,0x70,0xB1,0x01,0x7F,0xFF,0xFF,0xEF,0xEF,0xFF,0xF9,0xFF,0xFE,0xFE,0xFC,0xFC,0xF8,0xF8,0xF8,0xF0,0x10,0xF0,0x10,0xD0,0x30,0x11,0x09,0xDC,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFE,0x7E,0xFE,0xF0,0x02,0xC6,0x18,0x20,0x41,0x83,0x04,0xF0,0x00,0x00,0x00,0x10,0x18,0x0E,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};

unsigned char code BMP_Name[8][128]={
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0x9F,0x1F,0x7F,0xFF,0xFF,0xFF,0x7F,0x3F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0x1F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x3F,0xFF,0xFF,0xFF,0xFF,0x9F,0x1F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x1F,0xBF,0xFF,0xFF,0xFF,0xFF,0x1F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xCF,0x2F,0x2E,0xA2,0x06,0x02,0xB0,0x96,0xF7,0x01,0x80,0xEE,0x07,0x07,0xF7,0xF7,0xF7,0xFF,0xFF,0xFF,0xFF,0xF3,0xF3,0xF3,0xFA,0xE0,0x80,0x3B,0x39,0xE1,0xF0,0xFC,0xBD,0x3D,0x3D,0x7D,0xFF,0xFF,0xFF,0xEF,0xCF,0x6F,0x2F,0x86,0x00,0x01,0xB3,0x3F,0x37,0x24,0xAD,0xBD,0x00,0x9F,0x9F,0xDF,0xDF,0xDF,0xFF,0xFF,0xFF,0x77,0x77,0x00,0x00,0xDB,0xFB,0x3B,0x3B,0x9B,0xC0,0x18,0x1D,0xDD,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xF8,0xFC,0xFB,0xF0,0xF0,0xFE,0xF6,0xF0,0xFC,0xFF,0xFF,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xF0,0xF8,0xFF,0xF8,0xF3,0xE7,0xEF,0xCF,0xCF,0xCF,0xCD,0xE3,0xE7,0xEE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFC,0xFE,0xFF,0xF7,0xC0,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xFE,0xF6,0xC0,0xE0,0xFF,0xEF,0xEF,0xF6,0xF0,0xF9,0xF0,0xE2,0xE7,0xE7,0xEF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0x7F,0x7F,0x3F,0x7F,0xBF,0x8F,0x0F,0x1F,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0x1F,0x1F,0x1F,0x5F,0xDF,0x1F,0x1F,0x3F,0x0F,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0xBF,0x3F,0x7F,0x7F,0x3F,0xBF,0xBF,0xFF,0xFF,0xFF,0x7F,0x3F,0x9F,0x5F,0x5F,0x5F,0x5F,0x9F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0x07,0x0F,0x1F,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x07,0x0F,0x1F,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0x0F,0x6F,0xFF,0xBF,0xAF,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0x4F,0xFF,0x8F,0x9F,0x87,0x2F,0x3F,0x3F,0xFF,0xFF,0xFF,0xFF,0x1F,0xDF,0x5F,0x4F,0x4F,0x1F,0xFF,0xCF,0xDF,0xDF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFC,0xFD,0xF4,0xB6,0xD0,0xE2,0xF0,0xE2,0xC8,0x9A,0xBB,0xFB,0xFF,0xFF,0xC0,0xE0,0xE4,0xCC,0xC0,0xD9,0xD1,0xC0,0xC0,0xDD,0xDF,0xDF,0xFF,0xFF,0xDE,0xE6,0xF0,0xF3,0xF7,0xFF,0xDF,0x80,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xE7,0xC8,0xD2,0xD7,0xD7,0xD2,0xCF,0xE7,0xF0,0xFF,0xFF,0xFF,0xEE,0xF6,0xF0,0x80,0x80,0xFB,0xE7,0xE7,0xEF,0xEF,0xFF,0xFF,0xFF,0xDF,0xED,0xE5,0xF1,0x80,0x80,0xFA,0xE6,0xE6,0xEE,0xEF,0xFF,0xFF,0xFF,0xF6,0xFA,0xD8,0xC0,0xFD,0xFB,0xF8,0xFD,0x80,0xFD,0xFD,0xFD,0xFF,0xFF,0xFE,0xF6,0xF7,0xFA,0xBA,0x80,0xC2,0xFB,0xFB,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xED,0xE0,0xB0,0x81,0xF8,0xF6,0xE7,0xE7,0xEF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}
};
	
#endif


