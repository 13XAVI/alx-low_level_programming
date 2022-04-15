#include <stdio.h>
/**
 *main - causes of infinte loop
 *
 *Return: Always 0
 */
int main(void)
{
int i;
printf("infinite loop incoming :(\n");

i = 0;
/*
*while (i < 10)
*{
*infinite loop - no increase of variable
*putchar(i);
}
*/
printf("infinite loop avoided! \\o/\n");
return (0);
}
