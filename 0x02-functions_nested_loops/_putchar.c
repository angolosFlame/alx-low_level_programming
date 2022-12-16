#include <unistd.h>
#include "main.h"
/**
 * this program writes the character c to the stdout
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
