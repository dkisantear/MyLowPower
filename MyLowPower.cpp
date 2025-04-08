#include "MyLowPower.h"
#include <avr/sleep.h>
#include <avr/power.h>

void MyLowPower::powerDown(int sleepMode, int adcSetting, int bodSetting) {
  if (adcSetting == ADC_OFF) ADCSRA &= ~(1 << ADEN);  // Disable ADC
  if (bodSetting == BOD_OFF) {
    // Disable BOD (Brown-out Detection) in sleep — optional
    MCUCR |= (1 << BODS) | (1 << BODSE);
    MCUCR = (MCUCR & ~(1 << BODSE)) | (1 << BODS);
  }

  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
  sleep_cpu();
  sleep_disable();  // Wake up
}
