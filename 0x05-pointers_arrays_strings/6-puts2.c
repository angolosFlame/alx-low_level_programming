#include "main.h"

/**
 * A function that prints every other character
 * of a string
 * return 0
 */
void puts2(char *str)
{
	int lent = 0;
	int i = 0;

	while (str[lent] != '\0')
		lent++;

	lent -= 1;

	for (; i <= lent; i  += 2)
		_putchar(str[i]);

	_putchar('\n');
}
