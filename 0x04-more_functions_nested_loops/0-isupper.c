#include <stdio.h>
#include <ctype.h>

int _isupper(int x);

int main(void)
{	char c;
	int u = 1;
	int y = 0;
	int ret;
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

int _isupper(int x) 

{	char c;
	int y;
	if(isupper(c))
		x = 1;
	else
		x = 0;
	
	return (x);
}
