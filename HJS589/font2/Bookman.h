

/*
 *
 * Bookman
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Bookman.h
 * Date                : 09.05.2018
 * Font size in bytes  : 9477
 * Font width          : 10
 * Font height         : 15
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

#ifndef BOOKMAN_H
#define BOOKMAN_H

#define BOOKMAN_WIDTH 10
#define BOOKMAN_HEIGHT 15

const static uint8_t Bookman[] PROGMEM = {
    0x25, 0x05, // size
    0x0A, // width
    0x0F, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x01, 0x03, 0x07, 0x07, 0x0D, 0x0A, 0x01, 0x02, 0x02, 
    0x05, 0x07, 0x02, 0x04, 0x01, 0x05, 0x07, 0x05, 0x07, 0x07, 
    0x07, 0x07, 0x07, 0x08, 0x08, 0x07, 0x01, 0x02, 0x06, 0x06, 
    0x06, 0x07, 0x0B, 0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x0A, 
    0x09, 0x03, 0x07, 0x09, 0x07, 0x0B, 0x08, 0x09, 0x08, 0x09, 
    0x08, 0x07, 0x09, 0x09, 0x09, 0x0D, 0x0A, 0x09, 0x09, 0x02, 
    0x05, 0x02, 0x05, 0x07, 0x03, 0x07, 0x07, 0x06, 0x07, 0x06, 
    0x04, 0x07, 0x08, 0x03, 0x03, 0x09, 0x03, 0x0D, 0x08, 0x06, 
    0x07, 0x07, 0x05, 0x05, 0x04, 0x08, 0x07, 0x0B, 0x08, 0x08, 
    0x07, 0x04, 0x01, 0x04, 0x06, 0x08, 
    
    // font data
    0xFC, 0x1A, // 33
    0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00, // 34
    0x40, 0xC0, 0x78, 0x40, 0xC0, 0x78, 0x40, 0x02, 0x1E, 0x02, 0x02, 0x1E, 0x02, 0x02, // 35
    0x18, 0x24, 0x44, 0xFF, 0x44, 0x8C, 0x10, 0x1E, 0x08, 0x10, 0x7E, 0x10, 0x18, 0x0E, // 36
    0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0xC0, 0x20, 0x18, 0x84, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x10, 0x0C, 0x02, 0x00, 0x00, 0x0E, 0x10, 0x10, 0x10, 0x0E, // 37
    0x80, 0x78, 0x24, 0x24, 0x64, 0xB8, 0x20, 0xE0, 0x20, 0x00, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x0A, 0x0E, 0x18, 0x14, 0x08, // 38
    0x3C, 0x00, // 39
    0xF8, 0x04, 0x7E, 0x80, // 40
    0x04, 0xF8, 0x80, 0x7E, // 41
    0x10, 0x50, 0x3C, 0x50, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x80, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x58, 0x38, // 44
    0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, // 45
    0x00, 0x18, // 46
    0x00, 0x00, 0x80, 0x60, 0x1C, 0xC0, 0x38, 0x06, 0x00, 0x00, // 47
    0xF0, 0x08, 0x04, 0x04, 0x04, 0x08, 0xF0, 0x06, 0x08, 0x10, 0x10, 0x10, 0x08, 0x06, // 48
    0x08, 0x08, 0xFC, 0x00, 0x00, 0x10, 0x10, 0x1E, 0x10, 0x10, // 49
    0x30, 0x08, 0x04, 0x04, 0x04, 0x88, 0x70, 0x10, 0x18, 0x14, 0x14, 0x12, 0x10, 0x08, // 50
    0x00, 0x08, 0x44, 0x44, 0x64, 0x98, 0x00, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x08, 0x06, // 51
    0x80, 0x60, 0x10, 0x08, 0xFC, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x1E, 0x02, 0x02, // 52
    0x00, 0x7C, 0x44, 0x44, 0x44, 0x84, 0x00, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x08, 0x06, // 53
    0xE0, 0x58, 0x28, 0x24, 0x24, 0x44, 0x80, 0x06, 0x08, 0x10, 0x10, 0x10, 0x08, 0x06, // 54
    0x18, 0x04, 0x04, 0x84, 0x44, 0x24, 0x24, 0x1C, 0x00, 0x00, 0x18, 0x06, 0x00, 0x00, 0x00, 0x00, // 55
    0x00, 0xB0, 0x68, 0x44, 0x44, 0xC8, 0xB0, 0x00, 0x06, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x06, // 56
    0x70, 0x88, 0x04, 0x04, 0x04, 0x88, 0xF0, 0x00, 0x10, 0x12, 0x12, 0x0A, 0x0C, 0x02, // 57
    0x60, 0x18, // 58
    0x60, 0x00, 0x58, 0x38, // 59
    0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x00, 0x02, 0x02, 0x04, 0x04, 0x08, // 60
    0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 61
    0x10, 0x20, 0x20, 0x40, 0x40, 0x80, 0x08, 0x04, 0x04, 0x02, 0x02, 0x00, // 62
    0x08, 0x0C, 0x84, 0x84, 0x84, 0x44, 0x78, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0x00, // 63
    0xC0, 0x20, 0x10, 0x88, 0x44, 0x24, 0x44, 0xC4, 0x08, 0x10, 0xE0, 0x0E, 0x10, 0x20, 0x4E, 0x90, 0x90, 0x8E, 0x90, 0x50, 0x28, 0x16, // 64
    0x00, 0x00, 0xC0, 0xB8, 0x84, 0xB8, 0xC0, 0x00, 0x00, 0x10, 0x1C, 0x12, 0x00, 0x00, 0x00, 0x12, 0x1C, 0x10, // 65
    0x04, 0xFC, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xB8, 0x10, 0x1E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, // 66
    0xF0, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x1C, 0x06, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, // 67
    0x04, 0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0xF0, 0x10, 0x1E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x06, // 68
    0x04, 0xFC, 0x44, 0x44, 0xF4, 0x04, 0x0C, 0x10, 0x10, 0x1E, 0x10, 0x10, 0x12, 0x10, 0x18, 0x04, // 69
    0x04, 0xFC, 0x44, 0x44, 0xF4, 0x04, 0x0C, 0x18, 0x10, 0x1E, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // 70
    0xF0, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x88, 0x9C, 0x80, 0x06, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x1E, 0x00, // 71
    0x04, 0xFC, 0x44, 0x40, 0x40, 0x40, 0x44, 0xFC, 0x04, 0x10, 0x1E, 0x10, 0x00, 0x00, 0x00, 0x10, 0x1E, 0x10, // 72
    0x04, 0xFC, 0x04, 0x10, 0x1E, 0x10, // 73
    0x00, 0x00, 0x00, 0x00, 0x04, 0xFC, 0x04, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x00, // 74
    0x04, 0xFC, 0x84, 0x40, 0xA0, 0x14, 0x0C, 0x04, 0x04, 0x10, 0x1E, 0x10, 0x00, 0x00, 0x12, 0x1C, 0x10, 0x10, // 75
    0x04, 0xFC, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1E, 0x10, 0x10, 0x10, 0x18, 0x04, // 76
    0x04, 0xFC, 0x1C, 0xE0, 0x00, 0x00, 0x80, 0x60, 0x1C, 0xFC, 0x04, 0x10, 0x1E, 0x10, 0x00, 0x0E, 0x18, 0x06, 0x00, 0x10, 0x1E, 0x10, // 77
    0x04, 0xFC, 0x0C, 0x70, 0x80, 0x04, 0xFC, 0x04, 0x10, 0x1E, 0x10, 0x00, 0x02, 0x0C, 0x1E, 0x00, // 78
    0xF0, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0xF0, 0x06, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x06, // 79
    0x04, 0xFC, 0x84, 0x84, 0x84, 0x84, 0x84, 0x78, 0x10, 0x1E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xF0, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0xF0, 0x06, 0x08, 0x10, 0x10, 0x30, 0x50, 0x50, 0x48, 0x06, // 81
    0x04, 0xFC, 0x44, 0x44, 0xC4, 0x44, 0x44, 0x38, 0x10, 0x1E, 0x10, 0x00, 0x02, 0x04, 0x08, 0x10, // 82
    0x38, 0x44, 0x44, 0x44, 0x84, 0x88, 0x1C, 0x1C, 0x08, 0x10, 0x10, 0x10, 0x10, 0x0E, // 83
    0x18, 0x0C, 0x04, 0x04, 0xFC, 0x04, 0x04, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x10, 0x1E, 0x10, 0x00, 0x00, 0x00, // 84
    0x04, 0xFC, 0x04, 0x00, 0x00, 0x00, 0x04, 0xFC, 0x04, 0x00, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x00, // 85
    0x04, 0x1C, 0xE4, 0x00, 0x00, 0x00, 0xE4, 0x1C, 0x04, 0x00, 0x00, 0x00, 0x0E, 0x10, 0x0E, 0x00, 0x00, 0x00, // 86
    0x04, 0x0C, 0x74, 0x84, 0x00, 0x00, 0xE4, 0x1C, 0xE4, 0x00, 0x00, 0xC4, 0x3C, 0x00, 0x00, 0x00, 0x0E, 0x18, 0x06, 0x00, 0x00, 0x00, 0x0E, 0x18, 0x06, 0x00, // 87
    0x04, 0x04, 0x0C, 0x34, 0xC0, 0xC0, 0x30, 0x0C, 0x04, 0x04, 0x10, 0x10, 0x1C, 0x02, 0x00, 0x02, 0x16, 0x18, 0x10, 0x10, // 88
    0x04, 0x0C, 0x34, 0x40, 0x80, 0x40, 0x34, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x10, 0x1E, 0x10, 0x00, 0x00, 0x00, // 89
    0x18, 0x0C, 0x04, 0x84, 0x44, 0x24, 0x1C, 0x04, 0x00, 0x10, 0x1C, 0x12, 0x10, 0x10, 0x10, 0x10, 0x18, 0x04, // 90
    0xFC, 0x04, 0xFE, 0x80, // 91
    0x1C, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x70, 0x80, // 92
    0x04, 0xFC, 0x80, 0xFE, // 93
    0xC0, 0x38, 0x04, 0x38, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x04, 0x0C, 0x08, 0x00, 0x00, 0x00, // 96
    0x40, 0x20, 0xA0, 0xA0, 0xA0, 0xC0, 0x00, 0x0E, 0x12, 0x10, 0x10, 0x08, 0x1E, 0x10, // 97
    0x08, 0xFC, 0x40, 0x20, 0x20, 0x40, 0x80, 0x00, 0x1E, 0x08, 0x10, 0x10, 0x08, 0x06, // 98
    0x80, 0x40, 0x20, 0x20, 0x20, 0x40, 0x06, 0x08, 0x10, 0x10, 0x10, 0x08, // 99
    0x80, 0x40, 0x20, 0x20, 0x48, 0xFC, 0x00, 0x06, 0x08, 0x10, 0x10, 0x08, 0x1E, 0x10, // 100
    0x80, 0x40, 0x20, 0x20, 0x40, 0x80, 0x06, 0x0A, 0x12, 0x12, 0x12, 0x0A, // 101
    0x20, 0xF8, 0x24, 0x04, 0x10, 0x1E, 0x10, 0x00, // 102
    0xC0, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x20, 0x6A, 0xAC, 0x94, 0x94, 0x96, 0x52, 0x20, // 103
    0x08, 0xFC, 0x40, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x10, 0x1E, 0x10, 0x00, 0x00, 0x10, 0x1E, 0x10, // 104
    0x40, 0xEC, 0x00, 0x10, 0x1E, 0x10, // 105
    0x00, 0x40, 0xEC, 0x80, 0x80, 0x7E, // 106
    0x08, 0xFC, 0x00, 0x80, 0x80, 0x60, 0x20, 0x20, 0x00, 0x10, 0x1E, 0x12, 0x00, 0x02, 0x14, 0x18, 0x10, 0x10, // 107
    0x08, 0xFC, 0x00, 0x10, 0x1E, 0x10, // 108
    0x40, 0xE0, 0x40, 0x20, 0x20, 0x20, 0xC0, 0x40, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x10, 0x1E, 0x10, 0x00, 0x00, 0x10, 0x1E, 0x10, 0x00, 0x00, 0x10, 0x1E, 0x10, // 109
    0x40, 0xE0, 0x40, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x10, 0x1E, 0x10, 0x00, 0x00, 0x10, 0x1E, 0x10, // 110
    0x80, 0x40, 0x20, 0x20, 0x40, 0x80, 0x06, 0x08, 0x10, 0x10, 0x08, 0x06, // 111
    0x40, 0xE0, 0x40, 0x20, 0x20, 0x40, 0x80, 0x80, 0xFE, 0x88, 0x10, 0x10, 0x08, 0x06, // 112
    0x80, 0x40, 0x20, 0x20, 0x40, 0xE0, 0x00, 0x06, 0x08, 0x10, 0x10, 0x88, 0xFE, 0x80, // 113
    0x40, 0xE0, 0x40, 0x20, 0x60, 0x10, 0x1E, 0x10, 0x00, 0x00, // 114
    0xC0, 0x20, 0x20, 0x40, 0x60, 0x18, 0x0A, 0x12, 0x12, 0x0C, // 115
    0x20, 0xF8, 0x20, 0x20, 0x00, 0x0E, 0x10, 0x10, // 116
    0x20, 0xE0, 0x00, 0x00, 0x00, 0x20, 0xE0, 0x00, 0x00, 0x0E, 0x10, 0x10, 0x10, 0x08, 0x1E, 0x10, // 117
    0x20, 0xE0, 0x20, 0x00, 0x20, 0xE0, 0x20, 0x00, 0x00, 0x0E, 0x10, 0x0E, 0x00, 0x00, // 118
    0x20, 0xE0, 0x20, 0x00, 0x20, 0xE0, 0x20, 0x00, 0x20, 0xE0, 0x20, 0x00, 0x00, 0x0E, 0x10, 0x0E, 0x00, 0x0E, 0x10, 0x0E, 0x00, 0x00, // 119
    0x20, 0x20, 0x60, 0xA0, 0x80, 0x60, 0x20, 0x20, 0x10, 0x18, 0x14, 0x02, 0x04, 0x18, 0x10, 0x10, // 120
    0x20, 0x60, 0xA0, 0x00, 0x00, 0x20, 0xE0, 0x20, 0x40, 0x80, 0x82, 0x6C, 0x18, 0x06, 0x00, 0x00, // 121
    0x40, 0x60, 0x20, 0x20, 0xA0, 0x60, 0x20, 0x10, 0x18, 0x14, 0x12, 0x10, 0x18, 0x0C, // 122
    0x00, 0x80, 0xF8, 0x0C, 0x02, 0x04, 0x7C, 0xC0, // 123
    0xFC, 0xFE, // 124
    0x0C, 0xF8, 0x80, 0x00, 0xC0, 0x7C, 0x04, 0x02, // 125
    0x80, 0x40, 0x40, 0x80, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x1E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1E // 127
    
};

#endif
