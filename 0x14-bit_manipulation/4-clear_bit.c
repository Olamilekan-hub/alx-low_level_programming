#include "main.h"

/**
 * clear_bit - set the bit position to zero
 * @n: pointer to the integer t be modify
 * @index: the bit position to be cleared
 *
 * Return: the result with the cleared bit position
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
