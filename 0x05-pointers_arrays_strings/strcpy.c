#include "main.h"
#include <string.h>

/**
 *_strcpy - copies string pointed to by src to dest
 *@dest: buffer
 *@src: sting
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
int i;
int len;

len = strlen(src);

for (i = 0; i <= len; i++)
{
dest[i] = src[i];
}
_putchar('\n');
return (dest);
}
