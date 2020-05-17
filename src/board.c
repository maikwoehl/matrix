#include "../inc/board.h"

/**
 * The column output must be set to output. And the shift register must be 
 * initialized and cleared. Preferably clear the shift register first, as 
 * it can contain random bits.
*/
int board_init() 
{
    sr_init();
    sr_clear();
    sr_flush();
    
    // Column initialization
    COLDDR |= COL1 | COL2 | COL3 | COL4;
    COLDDR |= COL5 | COL6 | COL7 | COL8;
    
    return 1;
}

/**
 * Converts both positive logic variables in their hardware definitions.
 * The cols are the cathodes - they are low-active pins.
 * 
 * Due to an error in planning, the rows and cols must be swapped.
 * The Matrix is mounted with an 90° angle.
 * 
 * \param row gpio value
 * \param col shift register value
 */
int set_matrix(uint8_t row, uint8_t col)
{
    sr_push(col);
    sr_flush();

    // COLUMN is low-active, they are the cathodes.
    COLPORT = ~row;
    return 1;
}