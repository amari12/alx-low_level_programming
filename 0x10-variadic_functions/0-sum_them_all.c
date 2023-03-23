#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *sum_them_all - sum of all parameters
 *@n: argc
 *Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
int i;
int sum = 0;
va_list lst;

if (n == 0)
return (0);

va_start(lst, n);

for (i = n; i >= 0; i = va_arg(lst, int))
{
sum = sum + i;
}
va_end(lst);
return (sum);
}
