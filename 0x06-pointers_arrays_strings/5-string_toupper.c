#include "main.h"

/**
 * A funtion that changes all lowercase letters of a string to
 * uppercase
 * @s: an input string
 */
char *string_toupper(char *s)
{
	char *stg = s;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;

		s++;
	}
	return (stg);
}
