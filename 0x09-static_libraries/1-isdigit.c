#include "main.h"

/*A function that checks for a digit (0 though 9)
 * Returns 1 if is a digit
 * returns 0 if otherwise
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
