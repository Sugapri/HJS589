

/*
 *
 * 4x7
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : font4x7.h
 * Date                : 02.10.2017
 * Font size in bytes  : 2878
 * Font width          : 4
 * Font height         : 8
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

#ifndef font4X7_H
#define font4X7_H

#define font4X7_WIDTH 4
#define font4X7_HEIGHT 8

const static uint8_t font4x7[] PROGMEM = {
    0x0B, 0x3E, // size
    0x04, // width
    0x08, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x01, 0x03, 0x05, 0x05, 0x06, 0x06, 0x01, 0x02, 0x02, 
    0x03, 0x05, 0x01, 0x02, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x01, 0x05, 0x04, 
    0x05, 0x04, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x01, 0x04, 0x04, 0x04, 0x05, 0x04, 0x04, 0x04, 0x05, 
    0x04, 0x04, 0x05, 0x04, 0x04, 0x05, 0x05, 0x05, 0x04, 0x02, 
    0x03, 0x02, 0x03, 0x04, 0x01, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x01, 0x04, 0x04, 0x01, 0x05, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x04, 0x04, 
    0x04, 0x03, 0x01, 0x03, 0x04, 0x03, 
    
    // font data
    0x5F, // 33
    0x03, 0x00, 0x03, // 34
    0x12, 0x3F, 0x12, 0x3F, 0x12, // 35
    0x26, 0x49, 0xFF, 0x49, 0x32, // 36
    0x02, 0xC5, 0x32, 0x4E, 0xA1, 0x40, // 37
    0x30, 0x4E, 0x49, 0x59, 0x26, 0x50, // 38
    0x03, // 39
    0x3E, 0x41, // 40
    0x41, 0x3E, // 41
    0x0A, 0x07, 0x0A, // 42
    0x08, 0x08, 0x3E, 0x08, 0x08, // 43
    0x60, // 44
    0x08, 0x08, // 45
    0x20, // 46
    0x20, 0x1E, 0x01, // 47
    0x3E, 0x41, 0x41, 0x3E, // 48
    0x00, 0x02, 0x7F, 0x00, // 49
    0x62, 0x51, 0x49, 0x46, // 50
    0x22, 0x41, 0x49, 0x36, // 51
    0x18, 0x14, 0x12, 0x7F, // 52
    0x4F, 0x49, 0x49, 0x30, // 53
    0x3E, 0x49, 0x49, 0x32, // 54
    0x01, 0x71, 0x0D, 0x03, // 55
    0x36, 0x49, 0x49, 0x36, // 56
    0x26, 0x49, 0x49, 0x3E, // 57
    0x24, // 58
    0x64, // 59
    0x08, 0x14, 0x14, 0x22, 0x22, // 60
    0x14, 0x14, 0x14, 0x14, // 61
    0x22, 0x22, 0x14, 0x14, 0x08, // 62
    0x02, 0x51, 0x09, 0x06, // 63
    0x3E, 0x41, 0x5D, 0x49, 0x4E, // 64
    0x7E, 0x11, 0x11, 0x7E, // 65
    0x7F, 0x49, 0x49, 0x36, // 66
    0x3E, 0x41, 0x41, 0x22, // 67
    0x7F, 0x41, 0x41, 0x3E, // 68
    0x7F, 0x49, 0x49, 0x41, // 69
    0x7F, 0x09, 0x09, 0x01, // 70
    0x3E, 0x49, 0x49, 0x7A, // 71
    0x7F, 0x08, 0x08, 0x7F, // 72
    0x7F, // 73
    0x20, 0x41, 0x41, 0x3F, // 74
    0x7F, 0x08, 0x36, 0x41, // 75
    0x7F, 0x40, 0x40, 0x40, // 76
    0x7F, 0x02, 0x0C, 0x02, 0x7F, // 77
    0x7F, 0x06, 0x18, 0x7F, // 78
    0x3E, 0x41, 0x41, 0x3E, // 79
    0x7F, 0x09, 0x09, 0x06, // 80
    0x3E, 0x41, 0x51, 0x61, 0x5E, // 81
    0x7F, 0x09, 0x19, 0x6E, // 82
    0x26, 0x49, 0x49, 0x32, // 83
    0x01, 0x01, 0x7F, 0x01, 0x01, // 84
    0x3F, 0x40, 0x40, 0x3F, // 85
    0x3F, 0x40, 0x20, 0x1F, // 86
    0x3F, 0x40, 0x30, 0x40, 0x3F, // 87
    0x63, 0x14, 0x08, 0x14, 0x63, // 88
    0x07, 0x08, 0x70, 0x08, 0x07, // 89
    0x71, 0x59, 0x4D, 0x47, // 90
    0x7F, 0x41, // 91
    0x03, 0x1C, 0x20, // 92
    0x41, 0x7F, // 93
    0x06, 0x01, 0x06, // 94
    0x80, 0x80, 0x80, 0x80, // 95
    0x01, // 96
    0x70, 0x52, 0x12, 0x7C, // 97
    0x7E, 0x48, 0x48, 0x30, // 98
    0x38, 0x44, 0x44, 0x28, // 99
    0x30, 0x48, 0x48, 0x7E, // 100
    0x38, 0x54, 0x54, 0x08, // 101
    0x08, 0x7C, 0x0A, 0x02, // 102
    0x4C, 0x92, 0x92, 0x7E, // 103
    0x7E, 0x08, 0x08, 0x70, // 104
    0x7A, // 105
    0x40, 0x80, 0x80, 0x7A, // 106
    0x7E, 0x10, 0x28, 0x48, // 107
    0x7E, // 108
    0x7C, 0x04, 0x78, 0x04, 0x78, // 109
    0x7C, 0x08, 0x04, 0x78, // 110
    0x38, 0x44, 0x44, 0x38, // 111
    0xFC, 0x24, 0x24, 0x18, // 112
    0x18, 0x24, 0x24, 0xFC, // 113
    0x7C, 0x08, 0x04, 0x04, // 114
    0x58, 0x54, 0x54, 0x24, // 115
    0x08, 0x3E, 0x48, 0x40, // 116
    0x7C, 0x40, 0x20, 0x7C, // 117
    0x1C, 0x20, 0x40, 0x3C, // 118
    0x3C, 0x40, 0x30, 0x40, 0x3C, // 119
    0x6C, 0x10, 0x10, 0x6C, // 120
    0x8C, 0x90, 0x50, 0x3C, // 121
    0x64, 0x54, 0x54, 0x4C, // 122
    0x08, 0x77, 0x41, // 123
    0x7F, // 124
    0x41, 0x77, 0x08, // 125
    0x18, 0x08, 0x10, 0x18, // 126
    0x7C, 0x44, 0x7C // 127
    
};

#endif
