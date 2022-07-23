
#include "main.h"

/**
 * _strlen_recursion - function to print a string in reverse
 * @s: pointer to the string
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}

