#include <string.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: the integer value of the string, or 0 if no number is found.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
		}
		else if (res > 0)
		{
			break;
		}
		i++;
		}
		return (sign * res);
}
