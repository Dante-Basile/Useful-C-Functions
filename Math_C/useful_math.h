/*
 * Extra functions for arithmetic operations.
 */

#ifndef USEFUL_MATH_H
#define USEFUL_MATH_H

/*
 * Take the power of any integer to any other integer.
 * Parameters:
 *      a - the base
 *      b - the power
 * Returns:
 *      the base raised to the power by exponentation
 */
int intPow(int a, int b);

/*
 * Gets max of two ints.
 * Parameters:
 *      aVal - one val to consider
 *      bVal - one val to consider
 * Returns:
 *      the max of the vals, bVal if tie
 */
int getMax(int aVal, int bVal);

/*
 * Makes right shift return zero if behavior undefined.
 * Parameters:
 *      num - integer to be shifted
 *      shift - number of places to shift
 *
 * Returns:
 *      shifted integer representation, 0 if shift >= 64
 *
 */
uint64_t rightShiftCheck(uint64_t num, uint64_t shift);

/*
 * Makes left shift return zero if behavior undefined.
 * Parameters:
 *      num - integer to be shifted
 *      shift - number of places to shift
 *
 * Returns:
 *      shifted integer representation, 0 if shift >= 64
 *
 */
uint64_t leftShiftCheck(uint64_t num, uint64_t shift);


#endif
