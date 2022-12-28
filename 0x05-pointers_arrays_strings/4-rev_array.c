#include "main.h"

/**
 * A function that reverses the content of an array of integers
 * n is the number of elements of array
 */

void reverse_array(int *a, int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

