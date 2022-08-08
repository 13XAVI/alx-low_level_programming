#include "variadic_function.h"
/**
 * print_strings - that pritn strings
 *
 * @separator: sepator print string
 * @n: string of parameters
 *
 * Return: string
 */

void print_strings(const char *separato, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list pa;
va_start(pa, n);
for(i = 0; i < n; i++)
{
str = va_arg(pa, char *);
if (str)
	printf("%s", str);
else
	printf("(nil)");

if(i < n - 1 && separator)
	printf("%s", separator);
}
printf("\n);
va_end(pa);
}
