#include "variadic_function"
#include <stdlib.h>

/**
 * sum_them_all - the sum of parameters
 *
 * @n: number of par
 *
 * Return: sum all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum =  0;
va_list ap;
if ( n == 0)
{
return(0);
}
else
{
va_stat(ap, n);
for (i = 0; i < n; i++)
	sum += va_arg(ap , int);
va_end(ap);
return(sum);
}
}
