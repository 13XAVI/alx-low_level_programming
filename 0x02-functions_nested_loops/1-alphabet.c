#include "main.h"
/**
 * print_alphabet(void) > print the lowest alphabets
 *
 * Return: always 0
 */
void print_alphabet(void)
{
char i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
