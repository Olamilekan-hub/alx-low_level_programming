#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strspn - this function gets the length osf a prefix substring
 * @s: pointer to char containg strings of the initial segment
 * @accept: pointer to char containg chars to match
 *
 * Return: the number of bytes in the initial segment of s which
 *	consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, length = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				length += 1;
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (length);
}
