#include <stdio.h>
/**
 * main - Entry
 *
 * Return: always 0
 */

int main(void)
{
int j;

for (j = 48; j <= 57; j++)
{
putchar(j);

if (j == 57)
{
break;
}
putchar(',');
putchar(' ');
putchar('\n');
}
return (0);
}

