#include "main.h"
/**
 * _strcmp - compare strings
 * @s2: string 2 to be compared
 * @s1: string 1 to be compared
 *
 * Return: difference of acii value if different char else 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] == s2[c]; c++)
	{
		if (s1[c] == '\0')
		{
			return (0);
		}
	}
	return (s1[c] - s2[c]);
}
