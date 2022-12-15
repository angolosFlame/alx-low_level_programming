#include <stdio.h>

/**
 * this function prints _putchar
 */

int main (void)
{
	char x[] = "_putchar\n";

	int i;
	
	for (i=0; x[i]!='\0'; i++)
	{
		putchar(x[i]);
	}
	return (0);
}
