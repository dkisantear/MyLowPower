// MyLowPower.h
#ifndef MYLOWPOWER_H
#define MYLOWPOWER_H
#include <Arduino.h>
namespace MyLowPower {
  const int ADC_OFF = 0;
  const int BOD_OFF = 0;
  const int SLEEP_250MS = 0;
  void powerDown(int mode, int adc, int bod);
}
#endif
