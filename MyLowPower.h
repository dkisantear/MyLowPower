#ifndef MY_LOW_POWER_H
#define MY_LOW_POWER_H

#include <avr/sleep.h>
#include <avr/power.h>

namespace MyLowPower {
  const int SLEEP_250MS = 0;
  const int ADC_OFF = 1;
  const int BOD_OFF = 2;

  void powerDown(int mode, int adc, int bod) {
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);
    sleep_enable();
    sleep_cpu();
    sleep_disable();
  }
}

#endif
