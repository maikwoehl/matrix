#include <avr/io.h>

#include "matrix.h"
#include "shift_register.h"

int board_init();
int set_matrix(uint8_t row, uint8_t col);