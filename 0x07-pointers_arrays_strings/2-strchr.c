#include "main.h"
#include <stdio.h>

/**
 * _strchr is a function that locates a character in 
 * a string
 * @c: the first occureence of the character c
 * @s; the input string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
