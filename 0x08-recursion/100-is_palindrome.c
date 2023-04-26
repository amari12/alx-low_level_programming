#include "main.h"
#include <stddef.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: int (1 yes, 0 no)
 */

int is_palindrome(char *s)
{
	int i = 0, len = 0, is_pal = 1;

	if (s == NULL)
		return (1); /*empty string is a palindrome*/

	while (s[i] != '\0')
	{ /*get length*/
		len += 1;
		i++;
	}

	for (i = 0; i < len / 2; i++) /*only check until halfway*/
	{
		if (s[i] != s[(len - 1) - i])
		{ /*does not match*/
			is_pal = 0;
			return (0);
		}
	}
	return (is_pal);
}

