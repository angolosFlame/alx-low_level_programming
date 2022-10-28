#include <string.h>
#include <stdio.h>
#include <unistd.h>

int _strlen(char *s)
{
	char str;
	int l;

	str = "My first strlen"; 
	l = strlen(str);
	s = l;
}

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
