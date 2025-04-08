#include "MyLowPower.h"
#include <avr/sleep.h>
#include <avr/power.h>

void MyLowPower::sleepNow() {
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  noInterrupts();
  sleep_enable();
  interrupts();
  sleep_cpu();
  sleep_disable();
}
