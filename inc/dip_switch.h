#define DSDDR   DDRC
#define DSPORT  PORTC
#define DSPIN   PINC
#define SW1     (1<<PC1)
#define SW2     (1<<PC2)
#define SW3     (1<<PC3)

#define DS_NO_VALUE  0x08       // 0x08 is out of range of three bit
#define DS_MASK        0x07     // 0x07 are the least significant three bit

#include <avr/io.h>

uint8_t ds_init();
uint8_t ds_read();