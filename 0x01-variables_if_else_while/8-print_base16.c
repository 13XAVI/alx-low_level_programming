#include <stdio.h>
/**
 *main -Entry point
 *description: printing anumber in base 16
 *Return: Always 0 (success)
 */
int main(void)
{
char alph;
for (alph = 48; alph <= 57; alph++)
{
putchar(alph);
}
for (alph = 97; alph <= 102; alph++)
{
putchar(alph);
}
putchar('\n');
return (0);
}


