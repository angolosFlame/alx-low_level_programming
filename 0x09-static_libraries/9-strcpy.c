#include "main.h"

/**
 * A function that copies the string pointed to by src including termination null
 * byte (\0), to the buffer pointed by dest
 * returns dest to the pointer
 * @dest: A pointer to destination of the string
 * @src: A pointer to source string to copy from
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
