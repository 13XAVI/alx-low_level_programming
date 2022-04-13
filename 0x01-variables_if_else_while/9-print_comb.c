#include <stdio.h>

/**
 *main - Entry point
 *description: print all possible combination of single digit number
 *Return: Always 0 (sucesss)
 */
int main(void)
{
int digit;
int n = 0;
for (digit = 48; digit <= 57; digit++)
{
putchar(digit);
}
if (digit ==57)
{
n = 36;
putchar(n);
putchar(',');
putchar(' ');
}
return (0);
}
