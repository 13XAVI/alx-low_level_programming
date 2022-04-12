#include <stdio.h>

/**
 *
 *main - Entry point
 *Return: Always 0 (success)
 */
int main (void)
{
char upper_case;
char lower_case;
for (lower_case = 'A'; lower_case <= 'Z'; lower_case++)
{
putchar(lower_case);
}
for (upper_case ='A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}
putchar (0);
}
