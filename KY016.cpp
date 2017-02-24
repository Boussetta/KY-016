/*
   KY016.cpp

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


#include "KY016.h"

KY016::KY016(int r_pin, int g_pin, int b_pin) {
  redpin = b_pin;
  greenpin = g_pin;
  bluepin = r_pin;
}

void KY016::init() {
  pinMode (redpin, OUTPUT);
  pinMode (bluepin, OUTPUT);
  pinMode (greenpin, OUTPUT);
}

void KY016::reset() {
  analogWrite (redpin, 0);
  analogWrite (bluepin, 0);
  analogWrite (greenpin, 0);
}

void KY016::set_red_value(byte red_value) {
  analogWrite (redpin, red_value);
}

void KY016::set_green_value(byte green_value) {
  analogWrite (greenpin, green_value);
}

void KY016::set_blue_value(byte blue_value) {
  analogWrite (bluepin, blue_value);
}

void KY016::set_color(uint32_t color_code) {
  byte  r = (color_code >> 16) & 0xFF;
  byte  g = (color_code >> 8) & 0xFF;
  byte  b = color_code & 0xFF;
  this->set_red_value(r);
  this->set_green_value(g);
  this->set_blue_value(b);
}

