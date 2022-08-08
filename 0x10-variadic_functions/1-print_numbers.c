#include "variadic_function.h"
/**
 * print_numbers - that print numbers
 *
 * @separator: serparator between two number
 *
 * @n: number of parameters
 * Return: number to priny
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list pa;
va_stat(pa, n);
for (i = 0; i < n; i++)
{
num = va_arg(pa, int);
printf("%d", num);
if (i < n - i && separator)
	printf("%s", separator);
}
printf("\n");
va_end(pa);
}
