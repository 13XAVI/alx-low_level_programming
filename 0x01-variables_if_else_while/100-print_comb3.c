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
for (i = 0; i < 100; i++)
{
for (j =0; j < 10; j++)
{
putchar(j);
}
if (i = j)
{
continue;
}
putchar(i);
}
}
putchar('\n');
return (0);
}


