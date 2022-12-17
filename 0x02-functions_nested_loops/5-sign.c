#include "main.h"
/**
 * A function that prints the sign of a a number
 * returns 1 if number is positive, 0 if number is 0, 0r,
 * -1 if number is negative.
 */

int print_sign(int n)
{
	int num;
	
	if (n > 0) 
	{
		num = 1;
		_putchar('+');
	} 
	else if (n == 0)
	{
		num = 0;
		_putchar(0);
	} 
	else 
	{
		num = -1;
		_putchar('-');
	}

	return (num);
}
