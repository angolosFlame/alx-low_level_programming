#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to sdout
 *
 * Return: 1 on sucess 1.
 */

int _putchar(char c) 
{
	return (write(1, &c, 1));
}
