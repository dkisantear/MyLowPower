#include "MyLowPower.h"
#include <avr/sleep.h>
#include <avr/interrupt.h>

void MyLowPower::sleepNow() {
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  noInterrupts();         // Avoid race conditions
  sleep_enable();         // Enable sleep
  interrupts();           // Now enable global interrupts
  sleep_cpu();            // Sleep here

  // Wake up happens here
  sleep_disable();        // Immediately disable sleep on wake
}
