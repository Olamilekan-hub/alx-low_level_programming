#include "main.h"
/**
 * get_endianness - a function that checks how bits are arranged in the LSB
 *		and MSB
 * Return: the endianness of the binary input
 */

int get_endianness(void)
{
	unsigned int m = 1;
	char *ans = (char *)&m;

	if (*ans)
		return (1);
	return (0);
}
