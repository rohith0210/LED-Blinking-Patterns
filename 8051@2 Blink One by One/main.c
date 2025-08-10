#include <reg51.h>

// Simple delay function
void delay() {
    unsigned int i;
    for (i = 0; i < 50000; i++);  // Adjust this value for the required delay
}

void main() {
    unsigned char i;

    while (1) {
        for (i = 0; i <4; i++) {
            P1 = (1 << i);  // Turn on one LED at a time (bitwise operation)
            delay();        // Wait for 2 seconds
            P1 = 0x00;      // Turn off the LED
            delay();
            }				// Wait for 2 seconds
			     for (i = 2; i <4; i--) {
            P1 = (1 << i);  // Turn on one LED at a time (bitwise operation)
            delay();        // Wait for 2 seconds
            P1 = 0x00;      // Turn off the LED
            delay();
            }				// Wait for 2 seconds
    }
}
