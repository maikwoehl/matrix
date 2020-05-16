#define CLKDDR  DDRB
#define CLKPORT PORTB
// Save action
#define RCK     (1<<PB1)
// Shift into action
#define SCK     (1<<PB2)

#define SDADDR  DDRC
#define SDAPORT PORTC
#define SDA     (1<<PC4)

#define WAIT_MS 10

#include <avr/io.h>

#include "../inc/future.h"

int sr_init();
int sr_push(uint8_t data);
int sr_flush();
int sr_clear();