#include "main.h"

/**
 * Description: This function returns absolute value of a number
 * @r: An integer input
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
