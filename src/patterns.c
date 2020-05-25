#include "../inc/patterns.h"

// local pattern forward declaration
uint8_t filled[MAX_COLUMNS];
uint8_t cross[MAX_COLUMNS];
uint8_t chessboard[MAX_COLUMNS];
uint8_t quad[MAX_COLUMNS];
uint8_t eye[MAX_COLUMNS];
uint8_t snake[MAX_COLUMNS];
uint8_t hash[MAX_COLUMNS];

/**
 * This arrays holds pointer to the first element of the different patterns.
 * The patterns are hold as a byte per column.
 */
uint8_t* patterns[MAX_PATTERNS] = {
    filled,
    cross,
    chessboard,
    quad,
    eye,
    snake,
    hash,
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
uint8_t chessboard[MAX_COLUMNS] = {
    0b10101010,
    0b01010101,
    0b10101010,
    0b01010101,
    0b10101010,
    0b01010101,
    0b10101010,
    0b01010101,
};
uint8_t quad[MAX_COLUMNS] = {
    0b11111111,
    0b10000001,
    0b10111101,
    0b10100101,
    0b10100101,
    0b10111101,
    0b10000001,
    0b11111111,
};
uint8_t eye[MAX_COLUMNS] = {
    0b10000001,
    0b01011010,
    0b00100100,
    0b01000010,
    0b01000010,
    0b00100100,
    0b01011010,
    0b10000001,
};
uint8_t snake[MAX_COLUMNS] = {
    0b11111111,
    0b10000001,
    0b10111101,
    0b10100101,
    0b10100001,
    0b10111111,
    0b10000000,
    0b11111111,
};
uint8_t hash[MAX_COLUMNS] = {
    0b00100100,
    0b00100100,
    0b11111111,
    0b00100100,
    0b00100100,
    0b11111111,
    0b00100100,
    0b00100100,
};
