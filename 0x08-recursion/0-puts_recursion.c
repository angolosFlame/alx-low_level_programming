#include "main.h"
/**
  * A function to print a string followed by a new line 
  * @*S pointer to a string
  * Return 0
  */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
