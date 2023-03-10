#include "main.h"

/**
 *_memcpy - copies n bytes from memory area src to dest
 *@dest: destination
 *@src: source
 *@n: bytes to copy
 *Return: char dest memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
