/*
   KY016.h

   Copyright © 2017, by Wissem Boussetta

   This file is part of The KY-016 3-Color LED library for for arduino (KY016).

   KY016 is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef KY016_H_
#define KY016_H_

#include <arduino.h>


const uint32_t RGB_RED = 0xFF0000;
const uint32_t RGB_GREEN = 0x00FF00;
const uint32_t RGB_BLUE = 0x0000FF;

const uint32_t RGB_WHITE = 0xFFFFFF;
const uint32_t RGB_GRAY = 0x808080;
const uint32_t RGB_YELLOW = 0xFFFF00;

class KY016 {
  public:
    KY016(int red_pin, int green_pin, int blue_pin);
    void init();
    void reset();
    void set_red_value(byte red_value);
    void set_green_value(byte green_value);
    void set_blue_value(byte blue_value);
    void set_color(uint32_t color_code);
  private:
    //KY016 3-color LED module pins
    int redpin;
    int greenpin;
    int bluepin;
};

#endif /* KY016_H_ */
