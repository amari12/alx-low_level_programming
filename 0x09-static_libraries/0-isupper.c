#include "main.h"

/**
 *_isupper - retrun 1 if c is uppercase and 0 otherwise
 *@c: given character
 *Return: int
 */

int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
return (1);
else
return (0);
}
