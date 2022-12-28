#include "main.h"
#include <stdio.h>

/**
 * A funtion that prints n elements of an array of integers
 * @n: the number of elements
 * @a: input array
 * numbers are separated by ,
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n -1)
			printf(", ");
	}
	putchar('\n');
}
