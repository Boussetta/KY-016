#include "KY016.h"

#define R_PIN     9  // select the pin for the red LED
#define G_PIN     10   // select the pin for the green LED
#define B_PIN     11  // select the pin for the blue LED
#define GRN_PIN   8

KY016 rgb_led(R_PIN, G_PIN, B_PIN);

void setup() {
  //  Serial.begin(9600);
  //  Serial.print("SETUP -- Color Code: "); Serial.println(RGB_GRAY, HEX);

  pinMode (GRN_PIN, OUTPUT);
  digitalWrite (GRN_PIN, LOW);

  rgb_led.init();
}

void loop() {

  //Basic colors
  rgb_led.set_color(RGB_RED);
  delay(1000);
  rgb_led.set_color(RGB_GREEN);
  delay(1000);
  rgb_led.set_color(RGB_BLUE);
  delay(1000);

  //Mixed colors:
  rgb_led.set_color(RGB_WHITE);
  delay(1000);
  rgb_led.set_color(RGB_GRAY);
  delay(1000);
  rgb_led.set_color(RGB_YELLOW);
  delay(1000);

  //Manual Random values
  rgb_led.set_color(0xF8091C);
  delay(1000);
  rgb_led.set_color(0xA615DF);
  delay(1000);
  rgb_led.set_color(0x00ABCD);
  delay(1000);
  
}
