#include "main.h"
#include <string.h>

/**
 *_strpbrk - search string for set of bytes
 *@s: string
 *@accept: bytes
 *Return: char pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
int is;
int ia;
int lens;
int lena;
int match;

lens = strlen(s);
lena = strlen(accept);
match = 0;
ia = 0;
is = 0;

while (is < lens && match != 1)
{
while (ia < lena && match != 1)
{
if (s[is] == accept[ia])
match = 1;
ia++;
}
is++;
}
return (&s[ia]);
}
