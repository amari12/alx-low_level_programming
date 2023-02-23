#include "main.h"

/**
 *_isdigit - return 1 if c is a digit, else return 0
 *@c: given digit
 *Return: int ( 1 or 0)
 */

int _isdigit(int c)
{
if (c <= '9' && c >= '0')
return (1);
else
return (0);

}
