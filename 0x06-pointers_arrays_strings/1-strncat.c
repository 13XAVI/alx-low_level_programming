#include "main.h"

/**
 * _strncat -concatenates two string but add inputted number of bytes
 * @dest: string that will be appended
 * @src: string to complete
 * Return: new concateneted string
 */
char *_strcat(char *dest, char *src, int n)
{
int index =0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; scr[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
