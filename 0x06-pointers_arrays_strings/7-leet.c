#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 *leet - encodes a string into leet
 *@c: char string
 *Return: char
 */

char *leet(char *c)
{
int i;
int len = strlen(c);
int li;
int leet_len;

char leet[20] = {'a', 'e', 'o', 't', 'l'};
char change[20] = {'4', '3', '0', '7', '1'};

leet_len = 5;
for (li = 0; li < leet_len; i++)
{
for (i = 0; i < len; i++)
{
if (c[i] == leet[li] || c[i] == toupper(leet[li]))
{
c[i] = change[li];
}
}
}
return (c);
}
