/**
 * \mainpage 8x8 dotmatrix with control module
 * \author Maik Wöhl
 * \date May 2020
 * 
 * \image html kicad_3d.png width=350
 */
#include <stdint.h>

#include "../inc/future.h"
#include "../inc/shift_register.h"
#include "../inc/dip_switch.h"
#include "../inc/matrix.h"
#include "../inc/patterns.h"


void setup(void) {
	sr_init();
    sr_clear();
    sr_flush();
    
	ds_init();
	matrix_init();
}

void loop(void) {
	static uint8_t pattern_selection = DS_NO_VALUE;
	pattern_selection = ds_read();
	uint8_t* line = matrix_scan();
	uint8_t pattern = pattern_selection;
    uint8_t row = (pattern<<4) | pattern;
	matrix_set(&row, line);
}
 
