#include "main.h"

/**
 * _strspn funtion gets length of a prefix substring
 * @s: input string
 */
unsigned int_strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)					
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;																										
				flag = 1;																										
				break;
																															
			}
			accept++;
		}		
		s++;
		accept = start;	
		if (flag == 0)
			break;
	}
	return (count);
}
