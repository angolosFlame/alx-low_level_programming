#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: the string to be encoed.
 *
 * return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char nums[18] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == str[j])
				s[i] = nums[j];
		i++;
	}

	return (s);
}
