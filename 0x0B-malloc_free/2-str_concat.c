#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 strings
 * a Null string is treated as empty string.
 *
 * @s1: pointer to string.
 * @s2: pointer to string.
 * Return: pointer to newlly allocated memory which has a nul byte
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *nstr;
unsigned int len1, len2, size, i, j;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
size = len1 + len2;
nstr = malloc((sizeof(char) * size) +1);
/*check malloc was successful*/
if (nstr == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
nstr[i] = s1[i];
}
j = 0;
while (i <= size)
{
nstr[i] = s2[j];
i++;
j++;
}
return (nstr);

}

