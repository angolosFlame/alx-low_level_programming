#include "main.h"
#include <stdio.h>
/**
 * A function that prints all natural numbers
 */

	void print_to_98(int n)
	{
		if (n <= 98)
		{
			for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
			       continue;	
			printf(", ");
		}
		printf("\n");
	}
		else
		{
			for (; n >= 98; n--)
			{
				printf("%d", n);

				if (n == 98)
					continue;
				printf(", ");
			}
			printf("\n");
		}
	}
