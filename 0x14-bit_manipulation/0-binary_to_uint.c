#include <stdio.h>

/**
 * binary_to_unit - converts a binary number t an unsigned int
 * @b: a constant character type representing the binary string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int hold = 1, ans = 0, sp =0;

	if (b == NULL)
	{
		return(0);
	}
	while (b[sp])
	{
		sp++;
	}
	while(sp)
	{
		if (b[sp - 1] != '0' && b[sp - 1] != '1')
		{
			return (0);
		}
		if (b[sp - 1] == '1')
		{
			ans += hold;
		}
		hold *= 2;
		sp--;
	}
	return (ans);
}
