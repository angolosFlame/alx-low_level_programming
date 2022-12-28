#include "main.h"

/**
 * A function that prints a string
 * followed by a new line
 * @s: an input string
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}

