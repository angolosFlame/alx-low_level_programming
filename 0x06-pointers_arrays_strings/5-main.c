#include "main.h"
#include <stdio.h>
/**
 * mainto function that changes all lowercase letters of a 
 * string to uppercase
 * return: always 0.
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
