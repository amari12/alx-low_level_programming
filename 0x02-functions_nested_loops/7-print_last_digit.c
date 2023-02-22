#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_last_digit - prints last digit of number
 *@i: given number
 *Return: int
 */

int print_last_digit(int i)
{
int last;
char s[10];
char s2[10];

/* if the number is negative */
if (i < 0)
last = (i % 10) * -1;
else
last = i % 10;

sprintf(s2, "%d", last);
sprintf(s, "%d", last);
strcat(s, s2);
 
last = atoi(s);

return (last);
}
