#include "main.h"
/**
 * swap_int -swaping 3 intiger using a pointer
 * @a:integer
 * @b:integer
 * Return:void
 */

void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
return;

}
