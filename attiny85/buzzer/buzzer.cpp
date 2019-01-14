#include <avr/io.h>
#include <util/delay.h>

#define HERTZ 220.0f

int main(void){
    DDRB = (1 << PB3);
    while(1){
        PORTB = (1 << PB3);
        _delay_ms((1.0f/HERTZ) * 1000.0f);
        PORTB = 0x00;
        _delay_ms((1.0f/HERTZ) * 1000.0f);
    }
    return 1;
}