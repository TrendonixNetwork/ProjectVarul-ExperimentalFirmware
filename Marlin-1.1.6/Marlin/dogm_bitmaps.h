/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Standard Marlin Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 *
 * Please note that using the high-res version takes 402Bytes of PROGMEM.
 */

#define START_BMPHIGH

#if ENABLED(SHOW_BOOTSCREEN)
  #if ENABLED(START_BMPHIGH)
    #define START_BMPWIDTH      112
    #define START_BMPHEIGHT      32
    #define START_BMPBYTEWIDTH   14
    #define START_BMPBYTES      448 // START_BMPWIDTH * START_BMPHEIGHT / 8

    const unsigned char start_bmp[START_BMPBYTES] PROGMEM = {
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x80,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xe0,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x30,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x10,0x00,0x00
,0x1f,0xff,0xff,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x18,0x00,0x00
,0x3f,0xff,0xff,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0xc4,0x08,0x00,0x00
,0x7f,0xff,0xff,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0xdf,0x08,0x00,0x00
,0x00,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdf,0xc8,0x00,0x00
,0x00,0xf0,0x7c,0x00,0x03,0xc0,0x00,0x00,0x03,0xe1,0x89,0xc8,0x00,0x00
,0x00,0xf0,0xff,0x3f,0xcf,0xf3,0xf8,0x1f,0x0f,0xf1,0x89,0x19,0xf0,0x78
,0x00,0xf1,0xef,0x3f,0xde,0xf3,0xfe,0x7f,0x8f,0x7b,0x09,0x11,0xf8,0xf0
,0x00,0xf1,0xe7,0x38,0x1e,0x73,0xff,0x7f,0x8e,0x3b,0x09,0x30,0xf8,0xf0
,0x00,0xf1,0xe7,0x38,0x1e,0x73,0xff,0xff,0xce,0x39,0x89,0x60,0x7d,0xe0
,0x00,0xf1,0xe7,0x38,0x1e,0x73,0xff,0xf7,0xce,0x39,0x8b,0xc0,0x7f,0xc0
,0x00,0xf1,0xe7,0x38,0x1e,0x73,0xcf,0xe3,0xee,0x39,0x87,0x80,0x3f,0xc0
,0x00,0xf1,0xef,0x3f,0xde,0x73,0xc7,0x81,0xee,0x39,0xe0,0x00,0x1f,0x80
,0x00,0xf1,0xfe,0x3f,0xde,0x73,0xc7,0x80,0xee,0x38,0xff,0x00,0x1f,0x80
,0x00,0xf1,0xff,0x38,0x1e,0x73,0xc7,0x80,0xee,0x38,0x1f,0x80,0x1f,0x80
,0x00,0xf1,0xe7,0x38,0x1e,0x73,0xc7,0x81,0xee,0x38,0x00,0x00,0x3f,0xc0
,0x00,0xf1,0xe7,0x38,0x1e,0x73,0x8f,0xf3,0xee,0x38,0x1f,0x80,0x7f,0xc0
,0x00,0xf1,0xe7,0x38,0x1e,0x73,0xff,0xff,0xce,0x38,0x07,0x00,0x7c,0xe0
,0x00,0xf1,0xe7,0x38,0x1e,0x73,0xff,0xff,0xce,0x38,0x19,0x80,0xf8,0xf0
,0x00,0xf1,0xe7,0x3f,0x9e,0x73,0xfe,0x7f,0x8e,0x38,0x06,0x01,0xf8,0x78
,0x00,0xf1,0xe7,0x3f,0xde,0x73,0xfc,0x3f,0x0e,0x38,0x18,0x01,0xf0,0x38
,0x00,0x01,0xc7,0x3f,0x9c,0x73,0xf0,0x1e,0x0e,0x38,0x0f,0x03,0xe0,0x3c
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x03,0xc0,0x00
,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0x00
,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x00,0x00 };
  #else
    #define START_BMPWIDTH      56
    #define START_BMPHEIGHT     19
    #define START_BMPBYTEWIDTH  7
    #define START_BMPBYTES      133 // START_BMPWIDTH * START_BMPHEIGHT / 8

    const unsigned char start_bmp[START_BMPBYTES] PROGMEM = {
      0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
      0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
      0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
      0x83, 0xCF, 0x00, 0x00, 0x0C, 0x30, 0x3F,
      0x87, 0xFF, 0x80, 0x00, 0x0C, 0x30, 0x1F,
      0x86, 0x79, 0x80, 0x00, 0x0C, 0x00, 0x0F,
      0x8C, 0x30, 0xC7, 0x83, 0x8C, 0x30, 0xE7,
      0x8C, 0x30, 0xCF, 0xC7, 0xCC, 0x31, 0xF3,
      0x8C, 0x30, 0xDC, 0xEC, 0xEC, 0x33, 0xB9,
      0x8C, 0x30, 0xD8, 0x6C, 0x6C, 0x33, 0x19,
      0x8C, 0x30, 0xD0, 0x6C, 0x0C, 0x33, 0x19,
      0x8C, 0x30, 0xD8, 0x6C, 0x0C, 0x33, 0x19,
      0x8C, 0x30, 0xDC, 0x6C, 0x0E, 0x3B, 0x19,
      0x8C, 0x30, 0xCF, 0x7C, 0x07, 0x9F, 0x19,
      0x8C, 0x30, 0xC7, 0x7C, 0x03, 0x8F, 0x19,
      0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
      0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8 };
  #endif
#endif

// Here comes a compile-time operation to match the extruder symbols
// on the info screen to the set number of extruders in configuration.h
//
// When only one extruder is selected, the "1" on the symbol will not
// be displayed.

#if HAS_TEMP_BED
  #if HOTENDS == 1
    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };

    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };
  #elif HOTENDS == 2
    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };

    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };
  #else
    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };

    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };
  #endif // Extruders
#else
  #if HOTENDS == 1
    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
  #elif HOTENDS == 2
    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
  #else
    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    #define STATUS_SCREENWIDTH     115 //Width in pixels
    #define STATUS_SCREENHEIGHT     19 //Height in pixels
    #define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
    const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
  #endif // Extruders

  #if ENABLED(BABYSTEP_ZPROBE_GFX_OVERLAY)
    const unsigned char cw_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x07,0xf8,0x00, // 000001111111100000000000
      0x0c,0x0c,0x00, // 000011000000110000000000
      0x10,0x02,0x00, // 000100000000001000000000
      0x20,0x01,0x00, // 001000000000000100000000
      0x60,0x01,0x80, // 011000000000000100000000
      0x40,0x00,0x80, // 010000000000000010000000
      0x40,0x03,0xe0, // 010000000000000011100000
      0x40,0x01,0xc0, // 010000000000000011000000
      0x40,0x00,0x80, // 010000000000000010000000
      0x40,0x00,0x00, // 010000000000000000000000
      0x40,0x00,0x00, // 010000000000000000000000
      0x60,0x00,0x00, // 011000000000000000000000
      0x20,0x00,0x00, // 001000000000000000000000
      0x10,0x00,0x00, // 000100000000000000000000
      0x0c,0x0c,0x00, // 000011000000110000000000
      0x07,0xf8,0x00  // 000001111111100000000000
    };

    const unsigned char ccw_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x01,0xfe,0x00, // 000000011111111000000000
      0x03,0x03,0x00, // 000000110000001100000000
      0x04,0x00,0x80, // 000001000000000010000000
      0x08,0x00,0x40, // 000010000000000001000000
      0x18,0x00,0x60, // 000110000000000001100000
      0x10,0x00,0x20, // 000100000000000000100000
      0x7c,0x00,0x20, // 011111000000000000100000
      0x38,0x00,0x20, // 001110000000000000100000
      0x10,0x00,0x20, // 000100000000000000100000
      0x00,0x00,0x20, // 000000000000000000100000
      0x00,0x00,0x20, // 000000000000000000100000
      0x00,0x00,0x60, // 000000000000000001100000
      0x00,0x00,0x40, // 000000000000000001000000
      0x00,0x00,0x80, // 000000000000000010000000
      0x03,0x03,0x00, // 000000110000001100000000
      0x01,0xfe,0x00  // 000000011111111000000000
    };


    const unsigned char up_arrow_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x06,0x00, // 000001100000
      0x0F,0x00, // 000011110000
      0x1F,0x80, // 000111111000
      0x3F,0xC0, // 001111111100
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00  // 000001100000
    };

    const unsigned char down_arrow_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x06,0x00, // 000001100000
      0x3F,0xC0, // 001111111100
      0x1F,0x80, // 000111111000
      0x0F,0x00, // 000011110000
      0x06,0x00  // 000001100000
    };

    const unsigned char offset_bedline_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0xFF,0xFF,0xFF // 111111111111111111111111
    };

    const unsigned char nozzle_bmp[] PROGMEM = { //AVR-GCC, WinAVR
      0x7F,0x80, // 0111111110000000
      0xFF,0xC0, // 1111111111000000
      0xFF,0xC0, // 1111111111000000
      0xFF,0xC0, // 1111111111000000
      0x7F,0x80, // 0111111110000000
      0x7F,0x80, // 0111111110000000
      0xFF,0xC0, // 1111111111000000
      0xFF,0xC0, // 1111111111000000
      0xFF,0xC0, // 1111111111000000
      0x3F,0x00, // 0011111100000000
      0x1E,0x00, // 0001111000000000
      0x0C,0x00  // 0000110000000000
    };
  #endif // BABYSTEP_ZPROBE_GFX_OVERLAY
#endif // HAS_TEMP_BED
