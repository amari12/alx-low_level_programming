#include "main.h"

/**
 *_memset - fills n bytes of memory area with a constant byte b
 *@s: pointer
 *@b: constant byte
 *@n: bytes of memory to replace
 *Return: char pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
