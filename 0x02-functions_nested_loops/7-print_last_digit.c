#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - prints last digit of number
 *@i: given number
 *Return: int
 */

int print_last_digit(int i)
{
int last;

/* if the number is negative */
if (i < 0)
last = (i % 10) * -1;
else
last = i % 10;

last = abs(last);

return (last);
}
