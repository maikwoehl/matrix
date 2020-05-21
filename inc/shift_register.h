#define CLKDDR  DDRB
#define CLKPORT PORTB

#define SCK     (1<<PB2)        // Shift into shift register
#define RCK     (1<<PB1)        // Latch to output register

#define SDADDR  DDRC
#define SDAPORT PORTC
#define SDA     (1<<PC4)

#include <avr/io.h>

#include "../inc/future.h"

uint8_t sr_init();
uint8_t sr_push(uint8_t *data);
uint8_t sr_flush();
uint8_t sr_clear();
