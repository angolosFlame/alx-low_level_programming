#include "main.h"

/**
 * a funtion that draws a striaght line in 
 * the terminal
 * @n: is the number of time the character _ is printed
 * if n is 0 or less only '\n' is printed
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
