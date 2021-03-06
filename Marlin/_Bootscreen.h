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
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   1500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  107
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64
const unsigned char custom_start_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..................................................######........................................................
  0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00, // ...............................................#############....................................................
  0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00, // .............................................#################..................................................
  0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00, // ...........................................####################.................................................
  0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00, // ..........................................######################................................................
  0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00, // .........................................########################...............................................
  0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00, // ........................................##########################..............................................
  0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00, // .......................................############################.............................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x07,0x00,0x00,0x00,0x00,0x00,0x00, // ...................................................##........###................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x06,0x00,0x00,0x00,0x00,0x00,0x00, // ...................................................##........##.................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00, // ....................................................##......##..................................................
  0x00,0x00,0x00,0x00,0x06,0x00,0x0C,0x0C,0x18,0x00,0x00,0x00,0x00,0x00, // .....................................##.............##......##.....##...........................................
  0x00,0x00,0x00,0x00,0x07,0x00,0x06,0x18,0x3C,0x00,0x00,0x00,0x00,0x00, // .....................................###.............##....##.....####..........................................
  0x00,0x00,0x00,0x00,0x0F,0x00,0x06,0x18,0x3C,0x00,0x00,0x00,0x00,0x00, // ....................................####.............##....##.....####..........................................
  0x00,0x00,0x00,0x00,0x0F,0x80,0x03,0x30,0x7C,0x00,0x00,0x00,0x00,0x00, // ....................................#####.............##..##.....#####..........................................
  0x00,0x00,0x00,0x00,0x0F,0xC0,0x03,0x30,0x7C,0x00,0x00,0x00,0x00,0x00, // ....................................######............##..##.....#####..........................................
  0x00,0x00,0x00,0x00,0x0F,0xC0,0x01,0xE0,0xFC,0x00,0x00,0x00,0x00,0x00, // ....................................######.............####.....######..........................................
  0x00,0x00,0x00,0x00,0x0F,0xE0,0x01,0xC0,0xFC,0x00,0x00,0x00,0x00,0x00, // ....................................#######............###......######..........................................
  0x00,0x00,0x00,0x00,0x0F,0xE0,0x00,0xC1,0xFC,0x00,0x00,0x00,0x00,0x00, // ....................................#######.............##.....#######..........................................
  0x00,0x00,0x00,0x00,0x0F,0xF0,0x00,0x81,0xFC,0x00,0x00,0x00,0x00,0x00, // ....................................########............#......#######..........................................
  0x00,0x00,0x00,0x00,0x0F,0xF0,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,0x00, // ....................................########..................########..........................................
  0x00,0x00,0x00,0x00,0x07,0xF8,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,0x00, // .....................................########.................########..........................................
  0x00,0x00,0x00,0x00,0x07,0xF8,0x00,0x07,0xF8,0x00,0x00,0x00,0x00,0x00, // .....................................########................########...........................................
  0x00,0x00,0x00,0x00,0x07,0xFC,0x00,0x07,0xF8,0x00,0x00,0x00,0x00,0x00, // .....................................#########...............########...........................................
  0x00,0x00,0x00,0x00,0x03,0xFC,0x00,0x0F,0xF8,0x00,0x00,0x00,0x00,0x00, // ......................................########..............#########...........................................
  0x00,0x00,0x00,0x00,0x03,0xFE,0x00,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00, // ......................................#########............#########............................................
  0x00,0x00,0x00,0x00,0x01,0xFE,0x00,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00, // .......................................########............#########............................................
  0x00,0x00,0x00,0x00,0x01,0xFF,0x00,0x3F,0xE0,0x00,0x00,0x00,0x00,0x00, // .......................................#########..........#########.............................................
  0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00, // ........................................#########.........########..............................................
  0x00,0x00,0x00,0x00,0x00,0x7F,0x80,0x7F,0x80,0x00,0x00,0x00,0x00,0x00, // .........................................########........########...............................................
  0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x7F,0x00,0x00,0x00,0x00,0x00,0x00, // ..........................................########.......#######................................................
  0x00,0x00,0x00,0x00,0x00,0x1F,0xC0,0xFE,0x00,0x00,0x00,0x00,0x00,0x00, // ...........................................#######......#######.................................................
  0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0xF8,0x00,0x00,0x00,0x00,0x00,0x00, // .............................................######.....#####...................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0xE1,0xE0,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................###....####.....................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x08,0x08,0xCC,0x04,0x7F,0xE3,0xE0,0x10,0x80,0x87,0xFE,0x00,0x00, // ............#.......#...##..##.......#...##########...#####........#....#.......#....##########.................
  0x00,0x0C,0x18,0xCC,0x0C,0x7F,0xC3,0xF8,0x10,0xC0,0x87,0xFE,0x00,0x00, // ............##.....##...##..##......##...#########....#######......#....##......#....##########.................
  0x00,0x0C,0x18,0xC6,0x18,0x60,0x03,0x0C,0x10,0xF0,0x86,0x06,0x00,0x00, // ............##.....##...##...##....##....##...........##....##.....#....####....#....##......##.................
  0x00,0x06,0x30,0xC3,0x18,0x7F,0xE3,0x06,0x10,0xB8,0x86,0x06,0x00,0x00, // .............##...##....##....##...##....##########...##.....##....#....#.###...#....##......##.................
  0x00,0x03,0x60,0xC3,0x30,0x7F,0xE3,0x02,0x10,0x8C,0x86,0x06,0x00,0x00, // ..............##.##.....##....##..##.....##########...##......#....#....#...##..#....##......##.................
  0x00,0x03,0xE0,0xC1,0xE0,0x60,0x03,0x03,0x10,0x87,0x86,0x06,0x00,0x00, // ..............#####.....##.....####......##...........##......##...#....#....####....##......##.................
  0x00,0x01,0xC0,0xC0,0xE0,0x60,0x03,0x03,0x10,0x83,0x86,0x06,0x00,0x00, // ...............###......##......###......##...........##......##...#....#.....###....##......##.................
  0x00,0x00,0x80,0xC0,0xC0,0x7F,0xE3,0xFF,0x10,0x81,0x87,0xFE,0x00,0x00, // ................#.......##......##.......##########...##########...#....#......##....##########.................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ................................................................................................................
};
