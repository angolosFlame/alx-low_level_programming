#include "main.h"
#include <stdio.h>

/**
 * A program that prints the numbers 1 to 100 but multiples of three prints fizz
 * instead of the number and for multiples of 5 prints buzz instaed of the number
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i = 1;
	for (; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
