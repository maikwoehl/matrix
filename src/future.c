#include "../inc/future.h"

int main()
{
    setup();
    
    while (1) 
    {
        loop();
    }
}

void delay(double ms) 
{
    _delay_ms(ms);
}