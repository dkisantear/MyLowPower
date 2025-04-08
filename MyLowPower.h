#ifndef MY_LOW_POWER_H
#define MY_LOW_POWER_H

namespace MyLowPower {
  const int SLEEP_250MS = 0;
  const int ADC_OFF = 1;
  const int BOD_OFF = 2;

  void powerDown(int sleepMode, int adcSetting, int bodSetting);
}

#endif
