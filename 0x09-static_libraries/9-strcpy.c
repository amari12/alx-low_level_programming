#include "main.h"
#include <string.h>

/**
 *_strcpy - copies string to dest
 *@dest: destination string
 *@src: source string
 *Return: char pointer
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
return (dest);
}
