#include "main.h"

/**
 * A funtion that prints numbers from  
 * 0 to 9 folowed by a new line
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
