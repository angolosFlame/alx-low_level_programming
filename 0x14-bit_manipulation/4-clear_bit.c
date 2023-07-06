#include "main.h"

/*
 * A function that sets the value of a bit to 0 at a given index
 * Where index is the index, starting from 0 of the bit you want to set
 * Returns: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int high = 0x01;

	high = ~(high << index);
	if (high == 0x00)
		return (-1);
	*n &= high;
	return (1);
