#include "../inc/matrix.h"

/** 
 * Initialize the DDR for the column pins
 */
uint8_t matrix_init()
{
    // Column initialization
    COLDDR |= COL1 | COL2 | COL3 | COL4;
    COLDDR |= COL5 | COL6 | COL7 | COL8;
}

/**
 * Converts both positive logic variables in their hardware definitions.
 * The cols are the cathodes - they are low-active pins.
 * 
 * Due to an error in planning, the rows and cols must be swapped.
 * The Matrix is mounted with an 90° angle.
 * 
 * This function consumes data.
 * 
 * \param row gpio value
 * \param col shift register value
 */
uint8_t matrix_set(uint8_t *row, uint8_t *col)
{
    sr_push(col);
    sr_flush();

    // COLUMN is low-active, they are the cathodes.
    COLPORT = ~(*row);
    return 1;
}

/**
 * Counts up the columns and returns the current column
 */
uint8_t* matrix_scan() 
{
    static uint8_t line = 1;

    line = line<<1;
    if (!line)
        line = 1;

    return &line;
}