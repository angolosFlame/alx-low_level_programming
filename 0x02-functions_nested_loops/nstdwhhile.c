#include <stdio.h>
/* Main - Entry point
 *always returns 0
 */
int main ()
{
	int i = 0, j;

	while(i < 5)
	{
		j = 0;
		while(j < 3)
		{
			printf("2 ");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
