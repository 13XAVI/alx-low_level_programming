#include<stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0
*/
int main(void)
{
int i;
int j;
for (i = 48; i <= 57 ; i++)
{
putchar(i);
}

for (j = 48; j <= 57; j++)
{
putchar(j);
}
if (i == j)
{
continue;
}


putchar('\n');

return (0);
}


