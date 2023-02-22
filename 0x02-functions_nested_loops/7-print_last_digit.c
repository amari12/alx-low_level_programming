#include "main.h"

/**
 * print_last_digit - prints last digit of number
 *@i: given number
 *Return: int
 */

int print_last_digit(int i)
{
int last;

last = i % 10;

/* if the number is negative */
if (i < '0')
last = last * -1;

/* add '0') to make it work as a char? */
_putchar(last + '0');
/*_putchar(last + '0');*/

return (0);
}
