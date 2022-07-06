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
		printf("%d\n" ,n + "is positive");
	}
	else if (n = 0)
	{
		printf("%dn" ,n + "is zero");
	}
	else
	{
		printf("%d\n",n + "is negative");
	}
	return (0);
}
