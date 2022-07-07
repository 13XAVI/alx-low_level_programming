#include <stdio.h>
/**
 * main - entry point
 *
 * Retun: always 0
*/
int main(void)
{
int n;
for (n = 97; n =< 122; n++)
{
putchar(n);
}
while (n < 91)
{n--;
putchar(n);
}
putchar('\n');
return (0);
}

