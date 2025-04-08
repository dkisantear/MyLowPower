#include "MyLowPower.h"

void MyLowPower::powerDown(int mode, int adc, int bod) {
  if (adc == ADC_OFF) ADCSRA &= ~(1 << ADEN); // turn off ADC if set
  if (bod == BOD_OFF) {
    // optional BOD disable logic
    MCUCR |= (1 << BODS) | (1 << BODSE);
    MCUCR = (MCUCR & ~(1 << BODSE)) | (1 << BODS);
  }

  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
  sleep_cpu();     // go to sleep here
  sleep_disable(); // resume here after wake

  if (adc == ADC_OFF) ADCSRA |= (1 << ADEN); // re-enable ADC
}
