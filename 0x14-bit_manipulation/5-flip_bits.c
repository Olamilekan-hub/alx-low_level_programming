#include "main.h"

/**
 * flip_bits - a functions that returns the number of bits you
 *		would need to flip to get from one number to another
 * @n: integer value
 * @m: the mask used to toggle bit positions
 *
 * Return: number of bit toggled
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
