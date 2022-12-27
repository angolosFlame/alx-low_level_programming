#include "main.h"
/**
 * A funtion that encode a string using rot13
 */
char *rot13(char *rot)
{
	int i = 0;

	while (rot[i] != '\0')
	{
		while ((rot[i] >= 'a' && rot[i] <= 'z') || (rot[i] >= 'A' && rot[i] <= 'Z'))
		{
			if ((rot[i] >= 'a' && rot[i] <= 'm') ||
					(rot[i] >= 'A' && rot[i] <= 'M'))
				rot[i] += 13;
			else
			rot[i] -= 13;
			i++;
		}
		i++;
	}
	return (rot);
}

