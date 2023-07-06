#include "main.h"

/* A funtion that prints the binary representation of a number
 * 
 * A binary numbers has only 0 and 1 as digits
 *
 */

void print_binary(unsigned long int n)
{
	unsigned int flag = 0, high = 32768; /* 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (high)
	{
		if (flag == 1 && (n & high) == 0)
			_putchar('0');
		else if ((n & high) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		high >>= 1;
	}
}
