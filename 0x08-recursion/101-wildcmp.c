#include "main.h"
#include <string.h>

/**
 * wildcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: int (1 identical, 0 not)
 */

int wildcmp(char *s1, char *s2)
{
	int is_same = 1, len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len1 == 0 && len2 == 0)
		return (1); /*two empty strings*/
	else if (len1 == 0 || len2 == 0)
		return (0); /*cannot compare*/

	if (*s2 == '*') /*handle wild card*/
	{
		if (*(s2 + 1) == '\0')
			return (1); /* waldcard is last char*/
		else if (*s1 == '\0')
			return (0); /*no more chars to compare in s1*/
		else
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 != '\0')
	{ /*flag to stop recursion*/
		if (*s1 == *s2)
			is_same = wildcmp(s1 + 1, s2 + 1);
		else if (*s2 == '*')
			is_same = wildcmp(s1, s2 + 1);
		else if (*s1 != *s2)
			is_same = 0;
	}

	return (is_same);
}

