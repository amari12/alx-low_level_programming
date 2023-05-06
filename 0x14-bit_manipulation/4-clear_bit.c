#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @n: number
 * @index: index
 * Return: int (1 succes, -1 fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	/* ~ inverts*/
	/* (1UL << index) = bitmask has 1 at index*/
	/* rest are 0s*/
	return (1);
}
