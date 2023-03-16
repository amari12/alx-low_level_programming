#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - cancats n bytes of s2 to s1
 *@s1: string 1
 *@s2: string 2
 *@n: bytes of s2 to add to s1
 *Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *pointer;
int i;
int len1;
int len2;
int newlen;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if ((int)n > len2)
{
n = len2;
}
newlen = len1 + n + 1;
pointer = malloc(sizeof(char) * newlen);

if (pointer == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < len1; i++)
{
pointer[i] = s1[i];
}
for (i = len1; i < (int)n; i++)
{
pointer[i] = s2[i - len1];
}
pointer[i] = '\0';
}
return (pointer);
}
