#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: a constant character type representing the binary string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int o = 1, a = 0, sp = 0;

	if (b == NULL)
		return (0);
	while (b[sp])
		sp++;
	while (sp)
	{
		if (b[sp - 1] != '0' && b[sp - 1] != '1')
			return (0);
		if (b[sp - 1] == '1')
			a += o;
		o *= 2;
		sp--;
	}
	return (a);
}
