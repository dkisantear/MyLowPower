#ifndef MY_LOW_POWER_H
#define MY_LOW_POWER_H

#include <avr/sleep.h>
#include <avr/power.h>

class MyLowPower {
public:
    static const int SLEEP_250MS = 0;
    static const int ADC_OFF = 0;
    static const int BOD_OFF = 0;

    static void powerDown(int sleepTime, int adc, int bod) {
        set_sleep_mode(SLEEP_MODE_PWR_DOWN);
        sleep_enable();
        sleep_mode();
        sleep_disable();
    }
};

#endif
