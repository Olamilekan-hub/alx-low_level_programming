#include "main.h"

/**
 * get_edianness - how bits ar arranged in th LSB and MSB
 *
 * Return: the edianness of the binary input
 */

int get_endianness(void)
{
	unsigned int m = 1;
	char *ans = (char *)&m;

	if (*ans)
	{
		return (1);
	}
	return (0);
}
