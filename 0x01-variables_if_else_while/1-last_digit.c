#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point 
 *Return: always 0 (sucess)
 *
*/

int main (void)
{
int n;
srand(time(0));

n = rand()-RAND_MAX / 2;
if(n < 6)
{
printf("%i is less than 6 and not 0", n);
}
else if(n > 6)
{
printf("%i is greater than 6 and not 0", n);
}
else 
{
printf("%i is 0 and is 0");
}
return(0);
}
