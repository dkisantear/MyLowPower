#ifndef MY_LOW_POWER_H
#define MY_LOW_POWER_H

#include <Arduino.h>
#include <avr/sleep.h>
#include <avr/power.h>

// === Add these macros so they exist ===
#define ADC_OFF true
#define ADC_ON false

#define BOD_OFF true
#define BOD_ON false

enum SleepPeriod {
  SLEEP_250MS,
  SLEEP_500MS,
  SLEEP_1S
};

class MyLowPowerClass {
public:
  void powerDown(SleepPeriod period, bool adcOff, bool bodOff);

private:
  unsigned long getSleepDuration(SleepPeriod period);
};

extern MyLowPowerClass MyLowPower;

#endif
