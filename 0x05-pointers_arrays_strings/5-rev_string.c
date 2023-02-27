#include "main.h"
#include <string.h>

/**
 *rev_string - reverses string
 *@s: string
 *Return: void
*/

void rev_string(char *s)
{
char r[10];
int i;
int j;

j = 0;
for (i = strlen(s) - 1; i >= 0; i--)
{
r[j] = s[i];
j++;
}
r[strlen(s)] = '\n';

}
