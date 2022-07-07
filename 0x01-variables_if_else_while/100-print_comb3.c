#include <stdio.h>
/**
 * main - Entry
 *
 * Return: always 0
 */

int main(void)
{
int j;
int i;
for (j = 48; j <= 57; j++)
{
putchar(j);
for (i = 48; i <= 57; i++)
{
putchar(i);
}
if (j % i == 0)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}



