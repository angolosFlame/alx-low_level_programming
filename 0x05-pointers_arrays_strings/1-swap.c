#include <unistd.h>

void swap_int(int *m, int *n)
{
	int a = 98;
	int b = 42;

	*m = b;
	*n = a;
}
