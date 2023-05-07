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
	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	*n |= (1ul << index);
	return (1);
}
