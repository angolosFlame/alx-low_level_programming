#include "main.h"
#include <stdio.h>
/**
 * this program prints the absolute value
 * of an integer
 */

int main(void)
{
	int r;

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r= _abs(-98);
printf("%d\n", r);
return (0);
}
