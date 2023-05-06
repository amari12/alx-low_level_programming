#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	/*check if index is valid*/
	/*needs to be smaller than 8 times the size of uli*/
	/*unsigned long int is 1 byte*/
	/* 8 bits in a byte*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = n >> index; /*gets the bit at that index*/
	if (bit & 1) /*if binary ends in 1*/
		return (1);
	else /*binary ends in 0*/
		return (0);
}

