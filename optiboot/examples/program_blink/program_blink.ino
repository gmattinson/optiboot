/*
 * Blink pin 13 four times / second until pin 2 goes low.
 * Then flash new firmware which blinks one time / second.
 */

#define BIGBOOT
#include "optiboot.h"

/* The following was generated from Blink.ino.hex using cat and sed.  There are numerous other options:
 * cat Blink.ino.hex | 
 * sed "s#:..0.....\(..\)\(..\)\(..\)\(..\)\(..\)\(..\)\(..\)\(..\)\(.*\)..#0x\1, 0x\2, 0x\3, 0x\4, 0x\5, 0x\6, 0x\7, 0x\8, \9#" | 
 * sed "s#, \(.[0-9A-F]\)\(..\)\(..\)\(..\)\(..\)\(..\)\(..\)\(..\)#, 0x\1, 0x\2, 0x\3, 0x\4, 0x\5, 0x\6, 0x\7, 0x\8,#" 
 * It is only 0x406 bytes, but size must be a multiple of SPM_PAGESIZE.
 */
const uint8_t blink1s[0x480] __attribute__((aligned(SPM_PAGESIZE))) PROGMEM= {
0x0C, 0x94, 0x5C, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00,
0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00,
0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00,
0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00,
0x0C, 0x94, 0x88, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00,
0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00,
0x0C, 0x94, 0x6E, 0x00, 0x0C, 0x94, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x02, 0x01, 0x00,
0x00, 0x03, 0x04, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x08,
0x10, 0x20, 0x40, 0x80, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20,
0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03,
0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x28, 0x00, 0x2B, 0x00, 0x00, 0x00,
0x00, 0x00, 0x24, 0x00, 0x27, 0x00, 0x2A, 0x00, 0x11, 0x24, 0x1F, 0xBE, 0xCF, 0xEF, 0xD8, 0xE0,
0xDE, 0xBF, 0xCD, 0xBF, 0x21, 0xE0, 0xA0, 0xE0, 0xB1, 0xE0, 0x01, 0xC0, 0x1D, 0x92, 0xA9, 0x30,
0xB2, 0x07, 0xE1, 0xF7, 0x0E, 0x94, 0xF1, 0x01, 0x0C, 0x94, 0x01, 0x02, 0x0C, 0x94, 0x00, 0x00,
0x61, 0xE0, 0x8D, 0xE0, 0x0C, 0x94, 0x81, 0x01, 0x61, 0xE0, 0x8D, 0xE0, 0x0E, 0x94, 0xBA, 0x01,
0x68, 0xEE, 0x73, 0xE0, 0x80, 0xE0, 0x90, 0xE0, 0x0E, 0x94, 0xF5, 0x00, 0x60, 0xE0, 0x8D, 0xE0,
0x0E, 0x94, 0xBA, 0x01, 0x68, 0xEE, 0x73, 0xE0, 0x80, 0xE0, 0x90, 0xE0, 0x0C, 0x94, 0xF5, 0x00,
0x1F, 0x92, 0x0F, 0x92, 0x0F, 0xB6, 0x0F, 0x92, 0x11, 0x24, 0x2F, 0x93, 0x3F, 0x93, 0x8F, 0x93,
0x9F, 0x93, 0xAF, 0x93, 0xBF, 0x93, 0x80, 0x91, 0x01, 0x01, 0x90, 0x91, 0x02, 0x01, 0xA0, 0x91,
0x03, 0x01, 0xB0, 0x91, 0x04, 0x01, 0x30, 0x91, 0x00, 0x01, 0x23, 0xE0, 0x23, 0x0F, 0x2D, 0x37,
0x20, 0xF4, 0x01, 0x96, 0xA1, 0x1D, 0xB1, 0x1D, 0x05, 0xC0, 0x26, 0xE8, 0x23, 0x0F, 0x02, 0x96,
0xA1, 0x1D, 0xB1, 0x1D, 0x20, 0x93, 0x00, 0x01, 0x80, 0x93, 0x01, 0x01, 0x90, 0x93, 0x02, 0x01,
0xA0, 0x93, 0x03, 0x01, 0xB0, 0x93, 0x04, 0x01, 0x80, 0x91, 0x05, 0x01, 0x90, 0x91, 0x06, 0x01,
0xA0, 0x91, 0x07, 0x01, 0xB0, 0x91, 0x08, 0x01, 0x01, 0x96, 0xA1, 0x1D, 0xB1, 0x1D, 0x80, 0x93,
0x05, 0x01, 0x90, 0x93, 0x06, 0x01, 0xA0, 0x93, 0x07, 0x01, 0xB0, 0x93, 0x08, 0x01, 0xBF, 0x91,
0xAF, 0x91, 0x9F, 0x91, 0x8F, 0x91, 0x3F, 0x91, 0x2F, 0x91, 0x0F, 0x90, 0x0F, 0xBE, 0x0F, 0x90,
0x1F, 0x90, 0x18, 0x95, 0x3F, 0xB7, 0xF8, 0x94, 0x80, 0x91, 0x05, 0x01, 0x90, 0x91, 0x06, 0x01,
0xA0, 0x91, 0x07, 0x01, 0xB0, 0x91, 0x08, 0x01, 0x26, 0xB5, 0xA8, 0x9B, 0x05, 0xC0, 0x2F, 0x3F,
0x19, 0xF0, 0x01, 0x96, 0xA1, 0x1D, 0xB1, 0x1D, 0x3F, 0xBF, 0x66, 0x27, 0x78, 0x2F, 0x89, 0x2F,
0x9A, 0x2F, 0x62, 0x0F, 0x71, 0x1D, 0x81, 0x1D, 0x91, 0x1D, 0x42, 0xE0, 0x66, 0x0F, 0x77, 0x1F,
0x88, 0x1F, 0x99, 0x1F, 0x4A, 0x95, 0xD1, 0xF7, 0x08, 0x95, 0xCF, 0x92, 0xDF, 0x92, 0xEF, 0x92,
0xFF, 0x92, 0xCF, 0x93, 0xDF, 0x93, 0x6B, 0x01, 0x7C, 0x01, 0x0E, 0x94, 0xD2, 0x00, 0xEB, 0x01,
0xC1, 0x14, 0xD1, 0x04, 0xE1, 0x04, 0xF1, 0x04, 0x89, 0xF0, 0x0E, 0x94, 0x00, 0x02, 0x0E, 0x94,
0xD2, 0x00, 0x6C, 0x1B, 0x7D, 0x0B, 0x68, 0x3E, 0x73, 0x40, 0x90, 0xF3, 0x81, 0xE0, 0xC8, 0x1A,
0xD1, 0x08, 0xE1, 0x08, 0xF1, 0x08, 0xC8, 0x51, 0xDC, 0x4F, 0xEA, 0xCF, 0xDF, 0x91, 0xCF, 0x91,
0xFF, 0x90, 0xEF, 0x90, 0xDF, 0x90, 0xCF, 0x90, 0x08, 0x95, 0x78, 0x94, 0x84, 0xB5, 0x82, 0x60,
0x84, 0xBD, 0x84, 0xB5, 0x81, 0x60, 0x84, 0xBD, 0x85, 0xB5, 0x82, 0x60, 0x85, 0xBD, 0x85, 0xB5,
0x81, 0x60, 0x85, 0xBD, 0xEE, 0xE6, 0xF0, 0xE0, 0x80, 0x81, 0x81, 0x60, 0x80, 0x83, 0xE1, 0xE8,
0xF0, 0xE0, 0x10, 0x82, 0x80, 0x81, 0x82, 0x60, 0x80, 0x83, 0x80, 0x81, 0x81, 0x60, 0x80, 0x83,
0xE0, 0xE8, 0xF0, 0xE0, 0x80, 0x81, 0x81, 0x60, 0x80, 0x83, 0xE1, 0xEB, 0xF0, 0xE0, 0x80, 0x81,
0x84, 0x60, 0x80, 0x83, 0xE0, 0xEB, 0xF0, 0xE0, 0x80, 0x81, 0x81, 0x60, 0x80, 0x83, 0xEA, 0xE7,
0xF0, 0xE0, 0x80, 0x81, 0x84, 0x60, 0x80, 0x83, 0x80, 0x81, 0x82, 0x60, 0x80, 0x83, 0x80, 0x81,
0x81, 0x60, 0x80, 0x83, 0x80, 0x81, 0x80, 0x68, 0x80, 0x83, 0x10, 0x92, 0xC1, 0x00, 0x08, 0x95,
0x83, 0x30, 0x81, 0xF0, 0x28, 0xF4, 0x81, 0x30, 0x99, 0xF0, 0x82, 0x30, 0xA1, 0xF0, 0x08, 0x95,
0x87, 0x30, 0xA9, 0xF0, 0x88, 0x30, 0xB9, 0xF0, 0x84, 0x30, 0xD1, 0xF4, 0x80, 0x91, 0x80, 0x00,
0x8F, 0x7D, 0x03, 0xC0, 0x80, 0x91, 0x80, 0x00, 0x8F, 0x77, 0x80, 0x93, 0x80, 0x00, 0x08, 0x95,
0x84, 0xB5, 0x8F, 0x77, 0x02, 0xC0, 0x84, 0xB5, 0x8F, 0x7D, 0x84, 0xBD, 0x08, 0x95, 0x80, 0x91,
0xB0, 0x00, 0x8F, 0x77, 0x03, 0xC0, 0x80, 0x91, 0xB0, 0x00, 0x8F, 0x7D, 0x80, 0x93, 0xB0, 0x00,
0x08, 0x95, 0xCF, 0x93, 0xDF, 0x93, 0x90, 0xE0, 0xFC, 0x01, 0xE4, 0x58, 0xFF, 0x4F, 0x24, 0x91,
0xFC, 0x01, 0xE0, 0x57, 0xFF, 0x4F, 0x84, 0x91, 0x88, 0x23, 0x49, 0xF1, 0x90, 0xE0, 0x88, 0x0F,
0x99, 0x1F, 0xFC, 0x01, 0xE2, 0x55, 0xFF, 0x4F, 0xA5, 0x91, 0xB4, 0x91, 0x8C, 0x55, 0x9F, 0x4F,
0xFC, 0x01, 0xC5, 0x91, 0xD4, 0x91, 0x9F, 0xB7, 0x61, 0x11, 0x08, 0xC0, 0xF8, 0x94, 0x8C, 0x91,
0x20, 0x95, 0x82, 0x23, 0x8C, 0x93, 0x88, 0x81, 0x82, 0x23, 0x0A, 0xC0, 0x62, 0x30, 0x51, 0xF4,
0xF8, 0x94, 0x8C, 0x91, 0x32, 0x2F, 0x30, 0x95, 0x83, 0x23, 0x8C, 0x93, 0x88, 0x81, 0x82, 0x2B,
0x88, 0x83, 0x04, 0xC0, 0xF8, 0x94, 0x8C, 0x91, 0x82, 0x2B, 0x8C, 0x93, 0x9F, 0xBF, 0xDF, 0x91,
0xCF, 0x91, 0x08, 0x95, 0x0F, 0x93, 0x1F, 0x93, 0xCF, 0x93, 0xDF, 0x93, 0x1F, 0x92, 0xCD, 0xB7,
0xDE, 0xB7, 0x28, 0x2F, 0x30, 0xE0, 0xF9, 0x01, 0xE8, 0x59, 0xFF, 0x4F, 0x84, 0x91, 0xF9, 0x01,
0xE4, 0x58, 0xFF, 0x4F, 0x14, 0x91, 0xF9, 0x01, 0xE0, 0x57, 0xFF, 0x4F, 0x04, 0x91, 0x00, 0x23,
0xC9, 0xF0, 0x88, 0x23, 0x21, 0xF0, 0x69, 0x83, 0x0E, 0x94, 0x58, 0x01, 0x69, 0x81, 0xE0, 0x2F,
0xF0, 0xE0, 0xEE, 0x0F, 0xFF, 0x1F, 0xEC, 0x55, 0xFF, 0x4F, 0xA5, 0x91, 0xB4, 0x91, 0x9F, 0xB7,
0xF8, 0x94, 0x8C, 0x91, 0x61, 0x11, 0x03, 0xC0, 0x10, 0x95, 0x81, 0x23, 0x01, 0xC0, 0x81, 0x2B,
0x8C, 0x93, 0x9F, 0xBF, 0x0F, 0x90, 0xDF, 0x91, 0xCF, 0x91, 0x1F, 0x91, 0x0F, 0x91, 0x08, 0x95,
0x08, 0x95, 0x0E, 0x94, 0x1D, 0x01, 0x0E, 0x94, 0xF0, 0x01, 0x0E, 0x94, 0x70, 0x00, 0xC0, 0xE0,
0xD0, 0xE0, 0x0E, 0x94, 0x74, 0x00, 0x20, 0x97, 0xE1, 0xF3, 0x0E, 0x94, 0x00, 0x00, 0xF9, 0xCF,
0x08, 0x95, 0xF8, 0x94, 0xFF, 0xCF };


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  // initialize digital pin 2 as input with a pull up resistor to simplify the circuit.
  pinMode(2, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for 250 ms
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(250);               // wait for 250 ms
  if (digitalRead(2) == 0) {
    // Copy blink1s (the program we want to run now)
    // to address 0 (the address programs normally run at)
    // then jump to address 0 (ie. reset the device)
    optiboot_copy(0, (uint16_t)blink1s, sizeof(blink1s) / SPM_PAGESIZE, 0);
  }
}
