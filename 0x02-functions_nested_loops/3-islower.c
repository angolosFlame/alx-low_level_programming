#include "main.h"

/**
 * A function that checks for the lower case character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else {
		return (0);
	}
}

