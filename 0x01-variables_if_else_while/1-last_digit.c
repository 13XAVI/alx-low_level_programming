#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point 
 *Return: always 0 (sucess)
 *
*/

int main (void)
int n;
srand(time(0));

n = rand()-RAND_MAX / 2;
if( n %10 > 5)
{
printf("last digit of %d is %d and greater than 5\n", n % 10);
}
else if(n % 10 == 0)
{
printf("last digit of %d is %d and is  0\n", n, n % 10);
}
else 
{
printf("last digit of %d is %d and is less than 6 and nit 0\n", n, n % 10);
}
return(0);
}
