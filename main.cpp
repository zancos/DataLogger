//
// Created by fernando on 2/11/18.
//

#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

#include "SIM808.h"

using namespace DataLogger;

int main(void)
{
    //SIM808 sim;

//    while(true) //infinite loop
//    {
//        PORTC = 0xFF; //Turns ON All LEDs
//        _delay_ms(1000); //1 second delay
//        PORTC = 0x00; //Turns OFF All LEDs
//        _delay_ms(1000); //1 second delay
//    }
}