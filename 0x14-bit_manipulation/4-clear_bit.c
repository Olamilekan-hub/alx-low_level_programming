#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the integer value
 * @index: the bit position to be cleared
 *
 * Return: the result with the cleared bit position
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = ~(1ul << index);
	*n &= mask;
	return (1);
}
