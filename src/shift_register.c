#include "../inc/shift_register.h"


/**
 * Initializes the gpio pins for usage. 
 */
uint8_t sr_init()
{
    CLKDDR |= RCK | SCK;
    SDADDR |= SDA;

    return 1;
}

/**
 * Shifts the given data into the register. 
 * 
 * This function consumes the data.
 * 
 * \param data The given 8-bit value is shifted LSB-first into the register.
 */
uint8_t sr_push(uint8_t *data)
{
    for (int i = 0; i < 8; ++i)
    {
        switch ( (*data>>i) & 1) {
            case 1:
                SDAPORT |= SDA;
            break;
            case 0:
            default:
                SDAPORT &= ~SDA;
            break;
        }
        delay(WAIT_MS);
        CLKPORT |= SCK;
        delay(WAIT_MS);
        CLKPORT &= ~SCK;
    }

    return 1;
}

/**
 * Latch out the shift register value to the output latch. 
 */
uint8_t sr_flush()
{
    CLKPORT |= RCK;
    delay(WAIT_MS);
    CLKPORT &= ~RCK;

    return 1;
}

/**
 * Clear the shift register with help of sr_push(). 
 */
uint8_t sr_clear()
{
    uint8_t zeros = 0x00;
    if (sr_push(&zeros))
        return 1;
    return 0;
}