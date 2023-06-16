#include "main.h"

/**
 * A function that checks if a character is alphabetic or not
 * returns 1 if c is a letter. lowercase or uppercase
 * Returns 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return 1;
	}
       	else 
	{
	        	return (0);
	}
}	
