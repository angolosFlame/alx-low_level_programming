#include "main.h"

/**
 * A function that prints half of a string follwed by
 * a new line
 * the second half of the string is also printed
 * @n: the number of characters of the string
 */
void puts_half(char *str)
{
	int lent = 0;
	int i;
	int n;

	while (str[lent] != '\0')
		lent++;
	
	if (lent % 2 == 0)
		n = lent / 2;
	else
		n = (lent + 1) / 2;

	for (i = n; i < lent; i ++)
		_putchar(str[i]);

	_putchar('\n');
}
