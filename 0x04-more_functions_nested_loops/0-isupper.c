#include "main.h"

/**
 * A function that checks for uppercase character
 * @c: input character
 * Returns 1 if c is uppercase
 * returns 0 if otherwise
 */
int _isupper(int c)
{	
	char upcase = 'A';
	int isupper = 0;

	for (; upcase <= 'Z'; upcase++)
	{ 
		if (c == upcase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
