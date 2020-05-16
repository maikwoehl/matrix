#include "../inc/shift_register.h"

int sr_init()
{
    CLKDDR |= RCK | SCK;
    SDADDR |= SDA;

    sr_clear();
    sr_flush();

    return 1;
}

int sr_push(uint8_t data)
{
    for (int i = 0; i < 8; ++i)
    {
        switch((data>>i) & 1) {
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

int sr_flush()
{
    CLKPORT |= RCK;
    delay(WAIT_MS);
    CLKPORT &= ~RCK;

    return 1;
}

int sr_clear()
{
    uint8_t zeros = 0x00;
    if (sr_push(zeros))
        return 1;
    return 0;
}