#include "main.h"
/**
 * _strstr - first 0ccurance of the substring needle in the string haystack
 * @haystack: main string to be examined
 * @needle: searching in haystack
 * Return: new string 0
 */
char *_strstr(char *haystack, char *needle)
{
char *str1, *str2;
while (*haystack != '\0')
{
str1 = haystack;
str2 = needle;
while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
{
haystack++;
str2++;
}
if (*str2 == '\0')
{
return (str1);
haystack = str1 + 1;
}
return (0);
}
return (0);
}

