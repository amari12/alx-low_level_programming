#include "main.h"
#include <string.h>

/**
 *_strspn - gets length of prefix substring
 *@s: string
 *@accept: bytes
 *Return: unsigned int length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
int is;
int ia;
int lens;
int lena;

lens = strlen(s);
lena = strlen(accept);

for (is = 0; is < lens; is++)
{
for (ia = 0; is < lena; ia++)
{
if (s[is] == accept[ia])
return (is + 1);
}
}
return (0);
}
