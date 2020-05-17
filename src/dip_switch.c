#include "../inc/dip_switch.h"

/**
 * Initialize the DDR for the switch pins.
 */
uint8_t ds_init() 
{
    DSDDR &= ~(SW1 | SW2 | SW3);
    DSPORT |= SW1 | SW2 | SW3;      // Pull-Up ON
    
    return 1;
}

/** 
 * Read the value from the port and returns it.
 * 
 * The dip-switch is low active.
 * 
 * \return 3-bit dip switch pattern
 */
uint8_t ds_read() 
{
    uint8_t value = DS_NO_VALUE;

    value |= DSPIN & SW3 ? 0 : 1;
    value = (value<<1);

    value |= DSPIN & SW2 ? 0 : 1;
    value = (value<<1);

    value |= DSPIN & SW1 ? 0 : 1;

    return (value & DS_MASK);
}