#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * would need to flip to get from one number to another
 *
 * @n: number
 * @m: second number
 *
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int check_diff;

	check_diff = n ^ m;
	/*shows 1s where digits differ*/
	/*called exclusive OR*/

	while (check_diff != 0)
	{
		count += check_diff & 1;
		/*get right/last digit and compare to 1*/
		check_diff = check_diff >> 1;
		/*takes away right/last digit*/
	}

	return (count);
}

