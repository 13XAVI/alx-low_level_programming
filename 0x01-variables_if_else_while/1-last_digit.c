#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n%10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n",n ,n%10);
	}
	else if (n%10 == 5)
	{
		printf("last digit of %i is %i and is equal than 5\n",n ,n%10 );
	}
	else
	{
		Printf("Last digit of %i is %i and is less than 5\n" ,n ,n%10); 		
	}
	return (0);

}
