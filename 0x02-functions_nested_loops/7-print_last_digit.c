#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of number
 *@i: given number
 *Return: int
 */

int print_last_digit(int i)
{
int last;

/* if the number is negative */
if (i < '0')
last = (i % 10) * -1;
else
last = i % 10;

/* add '0') to make it work as a char? */
/*printf("%d", last);*/
_putchar('0' + last);

return (0);
}
