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

lens = strlen(s);
lena = strlen(accept);

for (is = 0; is <= lens; is++)
{
for (ia = 0; ia <= lena; ia++)
{
if (s[is] == accept[ia])
return (&s[is]);
}
}
return ('\0');
}
