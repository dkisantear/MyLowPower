 # MyLowPower

A simple Arduino library for putting AVR-based boards (like Arduino Nano) into sleep mode.

## Features
- `sleepNow()` — enters deep power-down sleep.

## Example
```cpp
#include <MyLowPower.h>

MyLowPower sleepMgr;

void setup() {
  // Setup stuff
}

void loop() {
  sleepMgr.sleepNow();  // Enter sleep mode
}
# MyLowPower
