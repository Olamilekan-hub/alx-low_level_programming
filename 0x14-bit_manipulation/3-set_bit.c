#include "main.h"

/**
 * set_bit - set the bit position to 1
 * @n: pointer to integer
 * @index: the bit position of interest
 *
 * Return: the value of bit position set to 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int fur = 0x01;

	fur <<= index;

	if (fur == 0x00)
	{
		return (-1);
	}
	*n |= fur;
	return (1);
}
