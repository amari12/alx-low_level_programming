#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - sum of all parameters
 *@n: argc
 *Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum = 0;
va_list lst;

if (n == 0)
return (0);

va_start(lst, n);

for (i = 0; i < n; i++)
{
sum = sum + va_arg(lst, int);
}
va_end(lst);

return (sum);
}
