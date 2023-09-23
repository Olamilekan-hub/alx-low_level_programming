#include "main.h"

/**
 * flip_bits - a function that returns the number of bits needed to
 *		flip to get from one nmber to another
 * @n: integer value
 * @m: the mask used to toggle bit positions
 *
 * Return: the number of bit toggled
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
