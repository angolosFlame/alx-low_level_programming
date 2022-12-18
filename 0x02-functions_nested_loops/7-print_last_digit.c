#include "main.h"

/** A function that prints the last digit of a number
 */

int print_last_digit(int x)
{
	int n;
	
	if(x <= 0) 
	{
		n = -1*(x % 10);
	} 
	else 
	{
		n = x % 10;
	}
	_putchar((n % 10) + '0');
	return (n % 10);	
}
