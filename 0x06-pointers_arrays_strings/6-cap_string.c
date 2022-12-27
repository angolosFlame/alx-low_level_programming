#include "main.h"

/**
 * A funtion that capitalizes all words of a string
 */
int check_separators(char c);


char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		if (check_separators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}

/**check_separators - separators of words: space, tabulation, new line,
 * , , ;, ., !, ?, '"', (, ), {, and }.
 * @c: an input character
 * return: 1 if separator, 0 otherwise
 */
int check_separators(char c)
{
	int i = 0;
	char separators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		 '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}
