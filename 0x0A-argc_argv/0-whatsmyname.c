#include<stdio.h>
/**
  * A program that prints its name
  * followed by a new lin.
  */
int main(int argc, char* argv[])
{
	if( argc > 0)
	{
		printf("%s\n",argv[0]);
	}
	return (0);
}
