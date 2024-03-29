#include "main.h"

/**
 * helperFunction - function to check if sqrt of number exists
 * @num: number
 * @pSqrt: possible sqrt of number
 *
 * Return: sqrt of number ot -1 for error.
 */
int helperFunction(int num, int pSrt)
{
if ((pSqrt) == num)
{
return (pSqrt);
}
else
{
if((pSqrt * pSqrt) > num)
{
return (-1);
}
else
{
return (helperFunction(unm, pSqrt +1));
}
}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (helperFunction(n, 0));
}

