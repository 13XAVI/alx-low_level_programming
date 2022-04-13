#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *description: print 10x alphabet
 *Retur: always 0
 */
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 97; i <= 122; i++)
{
j = i;

for (j = 0; j <= 10; j++)

_putchar(j);
}
_putchar(i);
return (0);
}
