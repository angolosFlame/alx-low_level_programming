#include "main.h"

/**
 * A function that draws a diagonal line on the 
 * terminal
 * @n: the number of lines '\' is printed
 * if n is 0 or less the function prints only '\n'
 */
void print_diagonal(int n)
{
	int i = 0, j;
	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
