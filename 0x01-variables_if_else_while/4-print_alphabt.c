#include <stdio.h>

/**
 *main - Entry point
 *description: printing alphabetes
 *Return: Always 0 (success)
 */

int main(void)
{

char alphabet;
for  (alphabet = 'a'; alphabet <= 'z'; alphabet++)

{
if  (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}
putchar('\n');
return (0);

}
