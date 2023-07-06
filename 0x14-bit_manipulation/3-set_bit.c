#include "main.h"

/* a function that sets the value of a bit to 1 at a given index
 * 
 * where index is the index, starting from 0 of the bit you want to set
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int high = 0x01;

	high <<= index;
	if (high == 0)
		return (-1);
	*n |= high;
	return (1);
}
