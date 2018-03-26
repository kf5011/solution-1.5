/* flash the led at a given rate */
#include <mbed.h>

DigitalOut led(LED_RED);

void flash_1Hz(void){
    const float period = 1;
    led.write(0); /* ON */
    wait(period/2);
    led.write(1); /* OFF */
    wait(period/2);
}

void flash_10Hz(void){
    const float period = 1/10.0f;
    led.write(0); /* ON */
    wait(period/2);
    led.write(1); /* OFF */
    wait(period/2);
}

void flash_45fpm(void){
    /* period of 4/3 seconds */
    led.write(0); /* ON */
    wait_ms(333); /* 1/3 second */
    led.write(1); /* OFF */
    wait(1); /* 1 second */
}

int main() {
    while(1) {
        //OR flash_1Hz();
        //OR flash_10Hz();
        flash_45fpm();
    }
}
