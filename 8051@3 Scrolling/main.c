
#include <reg51.h> // Include 8051 header file

void delay(); // Function to create a delay

void main() {
    while (1) {        // Infinite loop
        P1 = 0x01;     // Light up the first LED
        delay();       // Wait for a moment

       P1 = 0x02;     // Light up the second LED
        delay();       // Wait for a moment

         P1 = 0x04;     // Light up the third LED
        delay();       // Wait for a moment

         P1 = 0x08;     // Light up the fourth LED
        delay();       // Wait for a moment

    }
}

// Simple delay function
void delay() {
    unsigned int i;
    for (i = 0; i < 20000; i++) {
        // Do nothing, just waste time
    }
}
/*
#include <reg51.h> // Header file for 8051

void delay(); // Function declaration for delay

void main() {
    unsigned char pattern = 0x01; // Start with the first LED on
    P1 = 0x00;                    // Turn off all LEDs initially

    while (1) {                   // Infinite loop
        P1 = pattern;             // Turn on the LED according to the pattern
        delay();                  // Call the delay function
        pattern <<= 1;            // Move to the next LED
        if (pattern == 0x00) {    // If all LEDs have been scrolled
            pattern = 0x01;       // Reset to the first LED
        }
    }
}

// Simple delay function
void delay() {
    unsigned int i, j;
    for (i = 0; i < 300; i++) {   // Outer loop
        for (j = 0; j < 100; j++) { // Inner loop
            // Do nothing, just waste time for delay
        }
    }
}
*/