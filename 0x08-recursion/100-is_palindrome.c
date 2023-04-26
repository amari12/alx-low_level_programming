#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: int (1 yes, 0 no)
 */

int is_palindrome(char *s)
{
	int len = 0, is_pal = 1;
	char *str;

	if (*s == '\0')
		return (1); /*empty string is a palindrome*/
	str = strdup(s); /*make copy of s*/
	len = strlen(s);

	if (str[0] != str[(len - 1)]) /*compare first and last*/
	{ /*does not match*/
		is_pal = 0;
		free(str);
		return (0);
	}
	else
	{
		str[len - 1] = '\0'; /*remove last char*/
		is_pal = is_palindrome(str + 1); /*next round will start at next char*/
		str[len - 1] = s[len - 1]; /*restor last char*/
	}
	free(str);
	return (is_pal);
}

