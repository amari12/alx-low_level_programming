#include "main.h"

/**
 *isupper - retrun 1 if c is uppercase and 0 otherwise
 *Return: int
 */

int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
return (1);
else
return (0);
}
