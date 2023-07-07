#include "main.h"

/*
 * A function that returns the value of a bit at a given index
 * where index is the index, starting from 0 of the bit you want to get
 * Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int high = 0x01;

	high <<= index;
	if (high == 0)
		return (-1);

	if ((n & high))
		return (1);
	else
		return (0);
}
