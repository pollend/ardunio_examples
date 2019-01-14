#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void){
	DDRB   |= (1 << PB0);                   // PWM output on PB2
    TCCR0A = (1 << COM0A1) | (1 << WGM00);  // phase correct PWM mode

    TCCR0B = (1 << CS01) | (1 << CS00);   // clock source = CLK/8, start PWM
    OCR0A  = 126;                          // initial PWM pulse width
	
    while(1){}

	
    return 1;
}