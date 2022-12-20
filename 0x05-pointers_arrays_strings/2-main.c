#include "main.h"
#include "stdio.h"

/**
 *A function that returns the 
 *of a string
 *   
 * Return: Always 0.
 *
 */

int main(void)

{
       	char *str;
	int len;
	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
