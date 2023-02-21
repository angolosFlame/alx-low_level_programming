#include <stdio.h>
/**
  * main - Entry point
  * Always: return 0.
  */
int main() 
{
    int i, j;

    for (i = 0; i < 10; i++) 
    {
        for (j = i+1; j < 10; j++) 
	{
            putchar(i + '0');
            putchar(j + '0');
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}
