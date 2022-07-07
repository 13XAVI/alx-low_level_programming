#include <stdio.h>
/**
 * main - entry point
 *
 * Retun: 0 always 
*/
int main(void)
{
int n;
for (n = 97; n <= 122; n++)
{
putchar(n);
}
n = 0;
while (n < 91)
{n--;
putchar(n);
}
putchar('\n');
return (0);
}

