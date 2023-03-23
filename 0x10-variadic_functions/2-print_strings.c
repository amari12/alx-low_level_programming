#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 *print_strings - prints strings
 *@separator: separates strings
 *@n: nr of strings
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list lst;
char *s;

va_start(lst, n);

for (i = 0; i < n; i++)
{
s = va_arg(lst, char *);
if (s == NULL)
s = "(nil)";

if ((i != n - 1) && (separator))
printf("%s%s", s, separator);
else if ((i != n - 1) && (separator == NULL))
printf("%s", s);
else
printf("%s\n", s);
}

}
