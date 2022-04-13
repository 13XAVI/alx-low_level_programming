#include <main.h>
/**
 *main -Entry point
 *description: print lower case alphabetes
 *Return: Always 0 (sucess)
 */
void print_alphabet(void)
{
int alph;
for (alph = 97; alph <= 122; alph++)
{
putchar(alph);
}
putchar('\n');
return;
}
