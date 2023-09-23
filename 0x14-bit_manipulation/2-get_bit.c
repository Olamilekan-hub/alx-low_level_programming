#include "main.h"

/**
 * get_bit - function that return the value of a bit at a given index
 * @n: the integer value
 * @index: the bit position of interest
 *
 * Return: the value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
