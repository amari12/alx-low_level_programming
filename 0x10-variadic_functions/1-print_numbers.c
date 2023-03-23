#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - prints numbers
 *@separator: separates numbers
 *@n: nr of ints
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list lst;

va_start(lst, n);

for (i = 0; i < n; i++)
{
if (i == n - 1)
printf("%d\n", va_arg(lst, int));
else if (separator == NULL)
printf("%d", va_arg(lst, int));
else
printf("%d%s", va_arg(lst, int), separator);
}
va_end(lst);

}
