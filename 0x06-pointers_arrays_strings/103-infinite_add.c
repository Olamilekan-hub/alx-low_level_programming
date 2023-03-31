#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * infinite add - takes two string arguments n1 and n2 representing the
 *	two numbers to add, and a character buffer r to store the result.
 * @n1: string 1
 * @n2: string 2
 * @r: string to store result
 * @size_r: specifies size of the buffer r
 *
 *
 * Return: always 0
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum, len1 = strlen(n1), len2 = strlen(n2);
	int i;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
	{
		return (0);
	}
	r[size_r - 1] = '\0';
	for (i = size_r - 2; i >= 0; i--)
	{
		sum = carry;
		if (len1 > 0)
		{
			sum += n1[len1 - 1] - '0';
			len1--;
		}
		if (len2 > 0)
		{
			sum += n2[len2 - 1] - '0';
			len2--;
		}
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}
		r[i] = sum + '0';
	}
	if (carry == 1)
	{
		return (0);
	}
	return (r + strlen(r) - size_r + 1);
}
