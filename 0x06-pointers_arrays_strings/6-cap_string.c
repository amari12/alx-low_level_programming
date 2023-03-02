#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 *@c:input string
 *Return: char
 */

char *cap_string(char *c)
{
int i;
int len = strlen(c);

for (i = 0; i <= len; i++)
{
if (c[i] == ',' || c[i] == ';' || c[i] == '.')
c[i + 1] = toupper(c[i + 1]);
else if (c[i] == '!' || c[i] == '?' || c[i] == '"')
c[i + 1] = toupper(c[i + 1]);
else if (c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}')
c[i + 1] = toupper(c[i + 1]);
else if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n')
c[i + 1] = toupper(c[i + 1]);
}
return (c);
}
