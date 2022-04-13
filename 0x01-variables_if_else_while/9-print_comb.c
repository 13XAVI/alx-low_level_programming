#include <stdio.h>

/**
 *main - Entry point
 *description: print all possible combination of single digit number
 *Return: Always 0 (sucesss)
 */
int main(void)
{
int digit;
for (digit = 48; digit <= 57; digit++)
{
putchar(digit);

if (digit ==57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
