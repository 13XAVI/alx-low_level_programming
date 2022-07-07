#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0
*/
int main (void)
{
char lc;
do
{
for (lc = 'a'; lc <= 'z'; lc++)
{
putchar(lc);
}
}while (lc != 'q' && lc != 'e');
putchar('\n');

return (0);
}

