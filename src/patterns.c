#include "../inc/patterns.h"

// local pattern forward declaration
uint8_t filled[MAX_COLUMNS];
uint8_t cross[MAX_COLUMNS];

/**
 * This arrays holds pointer to the first element of the different patterns.
 * The patterns are hold as a byte per column.
 */
uint8_t* patterns[MAX_PATTERNS] = {
    filled,
    cross,
};

/**
 *     |++++++++|
 *     |++++++++|
 *     |++++++++|
 *     |++++++++|
 *     |++++++++|
 *     |++++++++|
 *     |++++++++|
 *     |++++++++|
 */
uint8_t filled[MAX_COLUMNS] = {
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
};
/**
 *     |---++---|
 *     |---++---|
 *     |---++---|
 *     |++++++++|
 *     |++++++++|
 *     |---++---|
 *     |---++---|
 *     |---++---|
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
