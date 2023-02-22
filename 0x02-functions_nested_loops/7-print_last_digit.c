#include "main.h"

/**
 * print_last_digit - prints last digit of number
 *@i: given number
 *Return: int
 */

int print_last_digit(int i)
{
char last;

last = i % 10;
/* if the number is negative */
if (last < '0')
last = last * -1;

/* add '0') to make it work as a char? */
_putchar(last);
_putchar(last);

return (0);
}
