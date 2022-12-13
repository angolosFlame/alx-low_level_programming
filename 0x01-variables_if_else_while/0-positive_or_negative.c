#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** 
 * the program determins if n is negative or positive 
 * the program assigns a random number to the variable n 
 * anytime it is excuted
 */

int main(void)
{	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}

