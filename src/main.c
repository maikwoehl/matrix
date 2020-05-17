/**
 * \mainpage 8x8 dotmatrix with control module
 * \author Maik Wöhl
 * \date May 2020
 * 
 * \image html kicad_3d.png width=350
 */
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
 