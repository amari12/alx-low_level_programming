#include "main.h"

/**
 *_strlen - return string lenght
 *@s: string
 *Return: int of string length
 */

int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
