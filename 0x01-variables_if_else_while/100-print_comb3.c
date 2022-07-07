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
for (j = 48; j <= 57; j++)
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



