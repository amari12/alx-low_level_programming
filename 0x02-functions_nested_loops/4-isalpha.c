#include "main.h"

/**
 *_isalpha - checks if a char is a letter, lowercase or uppercase
 *@c: entered char
 *Return: int
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);

}

