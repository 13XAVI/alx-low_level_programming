#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 
*/
int main(void)
{
char lc;
char up;
for (up = 'A'; up <= 'Z'; up++)
{
putchar(up);
}
for (lc = 'a' ; lc <= 'z'; lc++)
{
putchar(lc);
}
putchar('\n');

return (0);

}

