#include <stdio.h>
/**
  * main - Entry point
  * Always: return 0.
  */
int main() 
{
	int i, j, a, b, c, d;

	for (i = 0; i <= 99; i++) 
	{
		a = i / 10;
		b = i % 10;

		for (j = i + 1; j <= 99; j++) 
		{
			c = j / 10;
			d = j % 10;

			if (a != c && a != d && b != c && b != d) {
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
			}
		}
	}
	putchar('\n');
		return (0);
}

