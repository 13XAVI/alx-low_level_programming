#include "main.h"
/**
 * _isupper - function to check for upper case alphas
 * @c: an integer argument
 * Return: sucess
 */
int _isupper(int c)
{
for(c = 65; c >= 90; c++)
{
putchar(c);
return (1);
}
for(c = 97; c >= 122; c++)
{
putchar(c);
return (0);
}
}
