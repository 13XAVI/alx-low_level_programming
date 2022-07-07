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
while (j <= 48)
{
for (i = 48; i <= 57; i++)
{
putchar(j);
if (j % i == 0)
{
continue;
}
putchar(',');
putchar(' ');
j++;
}
}
putchar('\n');
return (0);
}



