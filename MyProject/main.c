#include <avr/io.h>      // Defines pins, ports, etc
#include <util/delay.h>  // Functions to waste time

#define LED_PIN PB1      // Must be a valid pin on PORTB
#define DELAY_TIME 1000

int main(void) {
	DDRB |= (1<<LED_PIN);  // Set LED pin to output mode
	
	// Main Loop
	while(1) {
		PORTB |= (1<<LED_PIN);   // Turn LED on
		_delay_ms(DELAY_TIME);   // Wait

		PORTB &= ~(1<<LED_PIN);  // Turn LED off
		_delay_ms(DELAY_TIME);   // Wait
	}
}