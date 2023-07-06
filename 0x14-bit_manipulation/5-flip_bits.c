#include "main.h"

/*
 * A function that returns the number of bits you would need to flip to get from one number to another
 * @n: the number of bit flips
 * return the number of flip bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int high = 0x01;

	while (high <= xor)
	{
		if (high & xor)
			flips++;
		high <<= 1;
	}
	return (flips);
}
