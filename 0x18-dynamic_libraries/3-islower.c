#include "main.h"

/**
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * @c: An input character
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
