#include "../inc/patterns.h"

/**
 * This arrays holds pointer to the first element of the different patterns.
 * The patterns are hold as a byte per column.
 */
uint8_t* patterns[MAX_PATTERNS] = {
    cross,
};

/**
 *      ________
 *     |---**---|
 *     |---**---|
 *     |---**---|
 *     |********|
 *     |********|
 *     |---**---|
 *     |---**---|
 *     |---**---|
 *      --------
 */
uint8_t cross[MAX_COLUMNS] = {
    0b00011000,
    0b00011000,
    0b00011000,
    0b11111111,
    0b11111111,
    0b00011000,
    0b00011000,
    0b00011000,
};
