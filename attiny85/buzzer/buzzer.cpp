#include <avr/io.h>
#include <util/delay.h>

#define HERTZ 220.0f
#define OCTIVE  4

int main(void){
    DDRB = (1 << PB3);
    GTCCR = 0x90 | (8 - OCTIVE);
    OCR1B = HERTZ - 1
    while(1){
    }
    return 1;
}