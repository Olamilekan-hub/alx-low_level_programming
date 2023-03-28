#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: the integer value of the string, or 0 if no number is found.
 */
int _atoi(char *s)
{
	int i, sign = 1, res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
		}
		else if (res > 0)
		{
			break;
		}
		}
		return (sign * res);
}
