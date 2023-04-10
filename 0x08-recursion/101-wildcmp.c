#include "main.h"
#include <string.h>
/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 *	considered identical otherwise 0
 * @s1: pointer of type char to the 1st string to be compared
 * @s2: pointer of type char to the 2nd string to be compared
 *
 * Return: returns 1 if the str is identical else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1) ||
				wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
