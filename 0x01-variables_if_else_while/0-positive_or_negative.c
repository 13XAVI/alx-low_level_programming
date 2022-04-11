#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starting function
 *
 * return : always return zero (correct)
*/

int main void (void) /*this function will return nothing*/
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is positive\n", n);
}
return (0);
}
