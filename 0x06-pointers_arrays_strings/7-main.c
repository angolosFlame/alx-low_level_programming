#include "main.h"
#include <stdio.h>

/**
 * main to the function that encodes a string into 1337
 * return: always 0.
*/
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
