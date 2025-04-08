#include "MyLowPower.h"

void MyLowPowerClass::powerDown(SleepPeriod period, bool adcOff, bool bodOff) {
  if (adcOff) ADCSRA &= ~(1 << ADEN); // Disable ADC
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();

  if (bodOff) {
    sleep_bod_disable();
  }

  delay(getSleepDuration(period)); // Simulated duration
  sleep_cpu();

  sleep_disable();
  if (adcOff) ADCSRA |= (1 << ADEN); // Re-enable ADC
}

unsigned long MyLowPowerClass::getSleepDuration(SleepPeriod period) {
  switch (period) {
    case SLEEP_250MS: return 250;
    case SLEEP_500MS: return 500;
    case SLEEP_1S:    return 1000;
    default:          return 250;
  }
}

MyLowPowerClass MyLowPower;
