#include "main.h"

/**
 * A funtion that reverses a string
 * @s: input string
 */
void rev_string(char *s)
{
	int len = 0, i =0;
	char aux;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
