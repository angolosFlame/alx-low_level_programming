#include "main.h"

/*
 * a function that converts a binary number to an unsigned int
 * @b: pointer to  a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nu = 0;
	int i = 0;

	if (b == NULL)
		return 0;
	while (b[i] == '0' || b[i] == '1')
	{
		nu <<= 1;
		nu += b[i] - '0';
		i++;
	}	
	return (nu);
}
