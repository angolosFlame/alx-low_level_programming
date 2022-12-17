#include "main.h"

/**
 * A program that prints alphabets in the lower case
 */

void print_alphabet(void)
{
	char i;
	
	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
