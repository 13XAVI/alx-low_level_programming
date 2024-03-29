#include "main.h"
#include <stdlib.h>
/**
 * _strdup- returns a pointer to a newly allocated space in memory
 * @str: pointer to a string being duplicated
 *
 * Return: Null if str is Null
 * pointer to duplicate string on sucess
 * NULL if memory was insuficient.
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;
	/*check if str is null*/
	if (str == 0)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(sizeof(char) * (len + 1));
	/*check malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);

}

