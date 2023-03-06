#include "main.h"
#include <string.h>

/**
 *_strchr - locates char in string
 *@s: string
 *@c: char to find
 *Return: pointer to first occurrence of c in s else NULL
 */

char *_strchr(char *s, char c)
{
int i;
int len;

len = strlen(s);
for (i = 0; i <= len; i++)
{
if (s[i] == c)
return (&s[i]);

}
return (0);

}
