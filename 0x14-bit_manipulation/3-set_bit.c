#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to the integer value of the bit
 * @index: the value of bit position set to 1
 *
 * Return: the value of bit position set to 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n |= (1ul << index);
	return (1);
}
