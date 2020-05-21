#include <stdio.h>
#include <stdint.h>

/**
 *      --------
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
uint8_t cross[8] = {
    0b00011000,
    0b00011000,
    0b00011000,
    0b11111111,
    0b11111111,
    0b00011000,
    0b00011000,
    0b00011000,
};
/**
 * This arrays holds pointer to the first element of the different patterns.
 * The patterns are hold as a byte per column.
 */
uint8_t* patterns[8] = {
    cross,
};

/**
 * Counts up the columns and returns the current column
 */
uint8_t* matrix_scan()
{
    static uint8_t line = 1;

    line = line<<1;
    if (!line)
        line = 1;

    return &line;
}
int main(void) {
    uint8_t pattern_selection = 0;
    uint8_t* row = patterns[pattern_selection];
    printf("size of row: %u", sizeof(row));
    for (uint8_t col = 0; col < 8; ++col) {
        uint8_t* line = matrix_scan();
        printf("[%i] -> %#x\n", *line, row[*line]);
    }
}
