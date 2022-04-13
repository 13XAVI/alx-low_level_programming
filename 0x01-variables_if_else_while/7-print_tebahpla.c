#include  <stdio.h>
/**
 *main -Entry point
 *description: print lower case alphabet in reverse
 *Return: Always 0 (success)
 */
int main(void)
{
int lower_case;
for (lower_case = 122; lower_case >= 97; lower_case--)
{
putchar(lower_case);
}
putchar('\n');
return (0);
}
