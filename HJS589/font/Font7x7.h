

/*
 *
 * Font3x5
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Font4X6.h
 * Date                : 17.02.2012
 * Font size in bytes  : 1472
 * Font width          : 3
 * Font height         : 5
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef FONT7x7_H
#define FONT7x7_H

#define FONT7x7_WIDTH 7
#define FONT7x7_HEIGHT 7

const static uint8_t Font7x7[] PROGMEM = {
    0x00, 0x00, //C0, // size
    0x07, // width
    0x07, // height
    0x20, // first char
    0x60, // char count
    
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char  
        0x00, 0x00, 0x00, 0xBE, 0x00, 0x00, 0x00,  // Code for char !
        0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00,  // Code for char "
        0x28, 0x28, 0xFE, 0x28, 0xFE, 0x28, 0x28,  // Code for char #
        0x48, 0x54, 0x54, 0xFE, 0x54, 0x54, 0x24,  // Code for char $
        0x86, 0x46, 0x20, 0x10, 0x08, 0xC4, 0xC2,  // Code for char %
        0x72, 0x8D, 0x89, 0x99, 0x65, 0x62, 0x90,  // Code for char &
        0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,  // Code for char '
        0x00, 0x7C, 0x82, 0x00, 0x00, 0x00, 0x00,  // Code for char (
        0x00, 0x00, 0x00, 0x00, 0x82, 0x7C, 0x00,  // Code for char )
        0x00, 0x00, 0x0A, 0x04, 0x0A, 0x00, 0x00,  // Code for char *
        0x00, 0x10, 0x10, 0x7C, 0x10, 0x10, 0x00,  // Code for char +
        0x00, 0x00, 0x00, 0x02, 0x06, 0x00, 0x00,  // Code for char ,
        0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00,  // Code for char -
        0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00,  // Code for char .
        0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02,  // Code for char /
        0x7C, 0xC2, 0xA2, 0x92, 0x8A, 0x86, 0x7C,  // Code for char 0
        0x00, 0x82, 0x82, 0xFE, 0x80, 0x80, 0x00,  // Code for char 1
        0xE4, 0x92, 0x92, 0x92, 0x92, 0x92, 0xCC,  // Code for char 2
        0x44, 0x82, 0x92, 0x92, 0x92, 0x92, 0x6C,  // Code for char 3
        0x30, 0x28, 0x24, 0x22, 0xA2, 0xFE, 0xA0,  // Code for char 4
        0x4E, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x72,  // Code for char 5
        0x00, 0x7C, 0x92, 0x92, 0x92, 0x92, 0x64,  // Code for char 6
        0x06, 0x02, 0x82, 0xE2, 0x92, 0x12, 0x0E,  // Code for char 7
        0x6C, 0x92, 0x92, 0x92, 0x92, 0x92, 0x6C,  // Code for char 8
        0x4C, 0x92, 0x92, 0x92, 0x92, 0x92, 0x7C,  // Code for char 9
        0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00,  // Code for char :
        0x00, 0x00, 0x00, 0x24, 0x64, 0x00, 0x00,  // Code for char ;
        0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00,  // Code for char <
        0x00, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00,  // Code for char =
        0x00, 0x82, 0x44, 0x28, 0x10, 0x00, 0x00,  // Code for char >
        0x04, 0x02, 0xA2, 0x12, 0x12, 0x12, 0x0C,  // Code for char ?
        0x5C, 0xA2, 0xB2, 0xB2, 0xB2, 0x82, 0x7C,  // Code for char @
        0x80, 0xFC, 0xA2, 0x22, 0xA2, 0xFC, 0x80,  // Code for char A
        0x82, 0xFE, 0x92, 0x92, 0x92, 0x92, 0x6C,  // Code for char B
        0x00, 0x7C, 0x82, 0x82, 0x82, 0x82, 0x44,  // Code for char C
        0x82, 0xFE, 0x82, 0x82, 0x82, 0x44, 0x38,  // Code for char D
        0x82, 0xFE, 0x92, 0x92, 0xBA, 0x82, 0xC6,  // Code for char E
        0x82, 0xFE, 0x92, 0x12, 0x3A, 0x02, 0x06,  // Code for char F
        0x7C, 0x82, 0x82, 0x92, 0x92, 0x52, 0xF4,  // Code for char G
        0x82, 0xFE, 0x92, 0x10, 0x92, 0xFE, 0x82,  // Code for char H
        0x00, 0x00, 0x82, 0xFE, 0x82, 0x00, 0x00,  // Code for char I
        0x40, 0x80, 0x80, 0x80, 0x82, 0x7E, 0x02,  // Code for char J
        0x82, 0xFE, 0x92, 0x10, 0xAA, 0xC6, 0x82,  // Code for char K
        0x82, 0xFE, 0x82, 0x80, 0x80, 0x80, 0xC0,  // Code for char L
        0x82, 0xFE, 0x84, 0x08, 0x84, 0xFE, 0x82,  // Code for char M
        0x82, 0xFE, 0x8A, 0x10, 0xA2, 0xFE, 0x82,  // Code for char N
        0x7C, 0x82, 0x82, 0x82, 0x82, 0x82, 0x7C,  // Code for char O
        0x82, 0xFE, 0x92, 0x12, 0x12, 0x12, 0x0C,  // Code for char P
        0x7C, 0x82, 0x82, 0x82, 0xA2, 0x42, 0xBC,  // Code for char Q
        0x82, 0xFE, 0x92, 0x12, 0xB2, 0xD2, 0x8C,  // Code for char R
        0xCC, 0x52, 0x92, 0x92, 0x92, 0x94, 0x66,  // Code for char S
        0x06, 0x02, 0x82, 0xFE, 0x82, 0x02, 0x06,  // Code for char T
        0x02, 0x7E, 0x82, 0x80, 0x82, 0x7E, 0x02,  // Code for char U
        0x02, 0x3E, 0xC2, 0x80, 0xC2, 0x3E, 0x02,  // Code for char V
        0x02, 0x7E, 0x82, 0x60, 0x82, 0x7E, 0x02,  // Code for char W
        0x82, 0xC6, 0x28, 0x10, 0x28, 0xC6, 0x82,  // Code for char X
        0x02, 0x0E, 0x92, 0xE0, 0x92, 0x0E, 0x02,  // Code for char Y
        0x86, 0xC2, 0xA2, 0x92, 0x8A, 0x86, 0xC2,  // Code for char Z
        0xFE, 0x82, 0x82, 0x82, 0x00, 0x00, 0x00,  // Code for char [
        0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80,  // Code for char BackSlash
        0x00, 0x00, 0x00, 0x82, 0x82, 0x82, 0xFE,  // Code for char ]
        0x00, 0x08, 0x04, 0x02, 0x04, 0x08, 0x00,  // Code for char ^
        0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,  // Code for char _
        0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00,  // Code for char `
        0x60, 0x94, 0x94, 0x94, 0x54, 0xF8, 0x80,  // Code for char a
        0x82, 0xFE, 0x48, 0x88, 0x88, 0x88, 0x70,  // Code for char b
        0x78, 0x84, 0x84, 0x84, 0x84, 0x84, 0x48,  // Code for char c
        0x70, 0x88, 0x88, 0x88, 0x48, 0xFE, 0x82,  // Code for char d
        0x78, 0x94, 0x94, 0x94, 0x94, 0x58, 0x00,  // Code for char e
        0x00, 0x00, 0x90, 0xFC, 0x92, 0x12, 0x02,  // Code for char f
        0x48, 0x94, 0x94, 0x94, 0x94, 0x7C, 0x00,  // Code for char g
        0x82, 0xFE, 0x92, 0x08, 0x88, 0xF0, 0x80,  // Code for char h
        0x00, 0x80, 0x88, 0xFA, 0x80, 0x80, 0x00,  // Code for char i
        0x40, 0x80, 0x80, 0x80, 0x88, 0x7A, 0x08,  // Code for char j
        0x82, 0xFE, 0xB2, 0x30, 0x48, 0x84, 0x84,  // Code for char k
        0x00, 0x00, 0x82, 0xFE, 0x80, 0x80, 0x40,  // Code for char l
        0x84, 0xFC, 0x08, 0xFC, 0x04, 0x04, 0xF8,  // Code for char m
        0x84, 0xFC, 0x88, 0x04, 0x84, 0xF8, 0x80,  // Code for char n
        0x78, 0x84, 0x84, 0x84, 0x84, 0x84, 0x78,  // Code for char o
        0x84, 0xFC, 0xA4, 0x24, 0x24, 0x18, 0x00,  // Code for char p
        0x18, 0x24, 0x24, 0x24, 0x24, 0xFC, 0x80,  // Code for char q
        0x84, 0xFC, 0x88, 0x04, 0x04, 0x04, 0x08,  // Code for char r
        0xC0, 0x58, 0xA4, 0xA4, 0xA4, 0xA8, 0x4C,  // Code for char s
        0x00, 0x00, 0x04, 0x7E, 0x84, 0x84, 0x40,  // Code for char t
        0x04, 0x7C, 0x84, 0x80, 0x44, 0xFC, 0x84,  // Code for char u
        0x04, 0x3C, 0x44, 0x80, 0x44, 0x3C, 0x04,  // Code for char v
        0x04, 0x7C, 0x84, 0x60, 0x84, 0x7C, 0x04,  // Code for char w
        0x84, 0x8C, 0xD4, 0x20, 0xD4, 0x8C, 0x84,  // Code for char x
        0x04, 0x9C, 0xA4, 0xA0, 0xA4, 0x7C, 0x04,  // Code for char y
        0xCC, 0xC4, 0xA4, 0xA4, 0x94, 0x9C, 0xCC,  // Code for char z
        0x10, 0x6C, 0x82, 0x82, 0x00, 0x00, 0x00,  // Code for char {
        0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00,  // Code for char |
        0x00, 0x00, 0x00, 0x82, 0x82, 0x6C, 0x10,  // Code for char }
        0x80, 0x40, 0x20, 0x40, 0x80, 0x40, 0x20   // Code for char ~
};

#endif