/*#include<reg51.h>
void delay(){
unsigned int i;
	for(i = 0;i<50000;i++);
}
void main(){
	while(1){
		P1 = 0X00;//for keeping all the pins to zero
		P1 = P1 | 0x01;
		delay();
		P1 = P1 & ~0x01;
		delay();
	}
}
*/
//HERE SBIT USED--cant manipulate data directly controlled..*
#include <reg51.h> // Include the 8051 header file

sbit LED = P1^0;  // Define the LED on Pin P1.0

void delay() {
    unsigned int i;
    for (i = 0; i < 30000; i++);
}

void main() {
    while(1) {
			P1 = 0x00;
        LED = 1;  // Turn on the LED
        delay();  // Wait
        LED = 0;  // Turn off the LED
        delay();  // Wait
    }
}
