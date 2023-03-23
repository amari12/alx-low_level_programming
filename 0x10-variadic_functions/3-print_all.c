#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - prints anything
 *@format: list of types of arguments
 *Return: void
 */

void print_all(const char * const format, ...)
{
int i;
char *s, *sep;
va_list lst;

va_start(lst, format);
i = 0;

while (format[i])
{
if (i == 0)
sep = "";

switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(lst, int));
break;
case 'i':
printf("%s%d", sep, va_arg(lst, int));
break;
case 'f':
printf("%s%f", sep, va_arg(lst, double));
break;
case 's':
s = va_arg(lst, char *);
if (s == NULL)
s = "(nil)";
printf("%s%s", sep, s);
break;
default:
i++;
continue;
} /*switch*/
sep = ", ";
i++;
} /*while*/
printf("\n");
va_end(lst);
}
