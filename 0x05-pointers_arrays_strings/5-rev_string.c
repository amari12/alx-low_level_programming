#include "main.h"
#include <string.h>

/**
 *rev_string - reverses string
 *@s: string
 *Return: void
*/

void rev_string(char *s)
{
char hold;
int i;
int len;
int halfway;
int back;

len = strlen(s);
halfway = len / 2;
back = len - 1;

for (i = 0; i < halfway; i++)
{
hold = s[i];
s[i] = s[back];
s[back] = hold;
back--;
}
}
