#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0
*/
int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc == 'e')
{
continue;
}
else if (lc == 'q')
{
continue;
}
putchar(lc);
}
putchar('\n');

return (0);
}

