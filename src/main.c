#include <stdint.h>

#include "../inc/board.h"
#include "../inc/future.h"


void setup(void) {
	board_init();
}

void loop(void) {
	// Endless loop

	uint8_t col = 0b11100111;
	uint8_t row = 0b11100111;
	set_matrix(row, col);
	delay(50);
	col = ~col;
	row = ~row;
	set_matrix(row, col);
	delay(50);
}
 