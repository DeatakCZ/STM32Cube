/*
 * LCD16X2.h
 *
 *  Created on: Feb 24, 2025
 *      Author: PanTalir
 */

#ifndef LCD16X2_H_
#define LCD16X2_H_

#include "stdint.h"

#define LCD16X2_MAX	1 //Max number of LCD modules in project
#define LCD16X2_1	0 //LCD Instance number, more can be defined if needed

#define LCD_Delay	20

/////////_PROTOTYPES FOR ALL FUNCTIONS_////////////////////////////////

extern void LCD16X2_Init(uint8_t);		//Initialize the LCD for 4-Bit interface
extern void LCD16X2_Clear(uint8_t);		//Clear the LCD

extern void LCD16X2_Set_Cursor(uint8_t, unsigned char, unsigned char);		//Set cursor position

extern void LCD16X2_Write_Char(uint8_t, char);		//Write char to LCD at current position
extern void LCD16X2_Write_String(uint8_t, char*);		//Write a string to LCD

extern void LCD16X2_SL(uint8_t);		//Shift display to left
extern void LCD16X2_SR(uint8_t);		//Shift display to right

#endif /* LCD16X2_H_ */
