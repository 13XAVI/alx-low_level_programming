#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *Entry point
 *main (void)
 *
 * Return: 0 always
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0)
	{
		printf("%dn" ,"is positive");
	}
	else if (n = 0)
	{
		printf("%dn" ,"is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
