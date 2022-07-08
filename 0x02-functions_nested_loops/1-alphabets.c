#include "main.h"
/**
 * void print_alphabet(void)
 *
 * Return: always 0
 */
void print_alphabet(void)
{
char c;
for (c = 97; c <= 122; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
