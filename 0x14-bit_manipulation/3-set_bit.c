#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: int (1 success, -1 fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/*check if index valid*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*change bit at index to one*/
	*n |= (1UL << index);

	return (1);
}

