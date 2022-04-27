#include  "main.h"
/**
 *char *_memcpy copy memory  area
 *@dest: destination memory area
 *@scr: source memory area
 *@n: byte from memory area to copy 
 *Return: memory area replaced 
*/
char *_memcpy(char *dest, char *scr, unsigned int n)
unsigned int a;
for (a =0; a < n; a++)
{
dest [a]=scr[a];
}
return (dest);
