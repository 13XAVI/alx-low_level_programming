#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initialize it with
 * a specific char
 * @size: size of array
 * @c: char to initialize array with.
 *
 * Return: Null if it fails or a pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);
/* chech if malloc success*/
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}

