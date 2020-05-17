// Direct access via GPIO
#define COLDDR  DDRD
#define COLPORT PORTD
#define COL1    (1<<PD0)
#define COL2    (1<<PD1)
#define COL3    (1<<PD2)
#define COL4    (1<<PD3)
#define COL5    (1<<PD4)
#define COL6    (1<<PD5)
#define COL7    (1<<PD6)
#define COL8    (1<<PD7)

// Access via shift register
#define ROW1    (1<<0)
#define ROW2    (1<<1)
#define ROW3    (1<<2)
#define ROW4    (1<<3)
#define ROW5    (1<<4)
#define ROW6    (1<<5)
#define ROW7    (1<<6)
#define ROW8    (1<<7)

#include <avr/io.h>

#include "shift_register.h"

uint8_t matrix_init();
uint8_t matrix_set(uint8_t *row, uint8_t *col);
uint8_t* matrix_scan();