#include "main.h"
#include <stdio.h>

/**A function that prints  the sum of multiples 3,5
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
