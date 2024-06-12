#include <avr/io.h>
#include <util/delay.h>

#define LED_DDR     DDRB
#define LED_PORT    PORTB
#define LED_BIT     PB0

#define DELAY_TIME 1000

int main(void) {
	LED_DDR |= (1<<LED_BIT);  // Set LED pin to output mode
	
	// Main Loop
	while(1) {
		LED_PORT |= (1<<LED_BIT);   // Turn LED on
		_delay_ms(DELAY_TIME);   // Wait

		LED_PORT &= ~(1<<LED_BIT);  // Turn LED off
		_delay_ms(DELAY_TIME);   // Wait
	}
	
	return 0;
}