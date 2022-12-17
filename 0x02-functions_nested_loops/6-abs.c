#include "main.h"

/** A function that computes the asolute
 * value of an integer
 */

int _abs(int i)
{
	if (i < 0) 
	{ 
		 i = -(i);	
	}
	else if (i == 0)
	{
		i = 0;
	}
	else 
	{
		i = i;
	}
	return (i);
}
