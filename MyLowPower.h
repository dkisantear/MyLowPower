#ifndef MY_LOW_POWER_H
#define MY_LOW_POWER_H

#include <Arduino.h>
#include <avr/sleep.h>
#include <avr/power.h>

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
