#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to string of chars (0s and 1s)
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int nr = 0;
	/*char *ptr;*/

	/*checks*/
	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != 1 && b[i] != 0)
			return (0);
		nr = (nr << 1) + (b[i] + '0'); /*convert*/
	}
	/*convert*/
	/*nr = strtoul(b, &ptr, 2);*/

	return (nr);
}

