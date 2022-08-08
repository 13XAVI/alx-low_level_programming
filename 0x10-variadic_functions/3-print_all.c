#include "varriadic_function"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c -printa char
 * @c: char to print
 *
 * Return: void
 */

void print_c(va_list)
{
print("%c", va_arg(c, int));
}
/**
 * pprint_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void Print_s(va_list s)
{
char *str = va_arg(s, char *);
if (str == NULL)
	str = "(ni;)";
printf("%s", str);
}
/**
 * print_i - print an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
printf("%d", va_arg(i, int));
}
/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_f(va_list f)
{
printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed the function
 *
 * Return: void
 */
void pritn_all(const chaaaar * const format, ...)
{
unsigned int i,j;
print_t p[] = {
{"c", print_c},
{"s", print_s},
{"i", print_i},
{"f",print_f},
{NULL, NULL}
};
va_list valist;
char *separator = ""

va_start(valist, format);
i = 0;
while (format && format[i])
{
j = 0;
while (p[j].t != NULL)
{
if(*(p[j].t) == format[i])
{
printf("%s",separator);
p[j].f(valist);
separato = ",";
break;
}
j++;
}
i++;
}
va_end(valist);
printf("\n");
}
